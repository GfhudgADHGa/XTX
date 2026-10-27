#!/usr/bin/env python3
"""AtomBIOS command-table decompiler (semantics from linux drivers/gpu/drm/amd/amdgpu/atom.c).

usage: atomdec.py <vbios.rom> [--names regnames.json] > out.c

Each populated command table becomes a C-like function over:
    PS[]  parameter space (in/out dwords)      WS[]  workspace dwords (plus special WS slots)
    REG[] MMIO dwords (effective index = REG operand + reg_block)   ID[] data-table dwords
    FB[]  scratch / framebuffer scratch        PLL[] / MC[] indirect spaces
Sub-dword operands print as  X[hi:lo].
The common `REG[0x0c] = addr; ... REG[0x0d]` index/data idiom is folded into smn_read()/smn_write().
"""
import struct, sys, json, collections, re, os
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import ipregs

DEFS = {}
rom = open(sys.argv[1], 'rb').read()
names_path = sys.argv[sys.argv.index('--names') + 1] if '--names' in sys.argv else None
REGNAMES = json.load(open(names_path)) if names_path else {}
u8 = lambda o: rom[o]
u16 = lambda o: struct.unpack_from('<H', rom, o)[0]
u32 = lambda o: struct.unpack_from('<I', rom, o)[0]

ARG = ['REG', 'PS', 'WS', 'FB', 'ID', 'IMM', 'PLL', 'MC']          # ATOM_ARG_* encoding (attr & 7)
ALIGN_SHIFT = [0, 0, 8, 16, 0, 8, 16, 24]
ALIGN_BITS = [(31, 0), (15, 0), (23, 8), (31, 16), (7, 0), (15, 8), (23, 16), (31, 24)]
DST_TO_SRC = [[0, 0, 0, 0], [1, 2, 3, 0], [1, 2, 3, 0], [1, 2, 3, 0], [4, 5, 6, 7], [4, 5, 6, 7], [4, 5, 6, 7], [4, 5, 6, 7]]
DEF_DST = [0, 0, 1, 2, 0, 1, 2, 3]
WS_SPECIAL = {0x40: 'QUOTIENT', 0x41: 'REMAINDER', 0x42: 'DATAPTR', 0x43: 'SHIFT', 0x44: 'OR_MASK', 0x45: 'AND_MASK',
              0x46: 'FB_WINDOW', 0x47: 'IO_ATTR', 0x48: 'REGPTR'}
TYPES6 = [0, 1, 2, 3, 6, 7]       # arg codes for the six per-op variants: REG PS WS FB PLL MC


def build_opcodes():
    ops = {}
    groups = [(1, 'MOVE'), (7, 'AND'), (13, 'OR'), (19, 'SHIFT_LEFT'), (25, 'SHIFT_RIGHT'), (31, 'MUL'), (37, 'DIV'),
              (43, 'ADD'), (49, 'SUB'), (60, 'COMPARE'), (74, 'TEST'), (84, 'CLEAR'), (92, 'MASK'), (103, 'XOR'),
              (109, 'SHL'), (115, 'SHR')]
    for base, name in groups:
        for i, a in enumerate(TYPES6): ops[base + i] = (name, a)
    ops.update({55: ('SETPORT', 0), 56: ('SETPORT_PCI', 0), 57: ('SETPORT_SYSIO', 0), 58: ('SETREGBLOCK', 0),
                59: ('SETFBBASE', 0), 66: ('SWITCH', 0), 80: ('DELAY_MS', 0), 81: ('DELAY_US', 0), 82: ('CALLTABLE', 0),
                83: ('REPEAT', 0), 90: ('NOP', 0), 91: ('EOT', 0), 98: ('POSTCARD', 0), 99: ('BEEP', 0), 100: ('SAVEREG', 0),
                101: ('RESTOREREG', 0), 102: ('SETDATABLOCK', 0), 121: ('DEBUG', 0), 122: ('PROCESSDS', 0),
                123: ('MUL32', 1), 124: ('MUL32', 2), 125: ('DIV32', 1), 126: ('DIV32', 2)})
    for i, c in enumerate(['ALWAYS', 'EQ', 'B', 'A', 'BE', 'AE', 'NE']): ops[67 + i] = ('JUMP', c)
    return ops
OPS = build_opcodes()


class Op:       # decoded operand
    def __init__(s, kind, idx, align, text, p):
        s.kind, s.idx, s.align, s.text, s.end = kind, idx, align, text, p


def slice_suffix(align):
    return '' if align == 0 else '[%d:%d]' % ALIGN_BITS[align]


class Table:
    def __init__(s, idx, base):
        s.idx, s.base = idx, base
        s.size = u16(base); s.ws = u8(base + 4); s.ps = u8(base + 5) & 0x7f
        s.rev = (u8(base + 2), u8(base + 3))
        s.start = base + 6; s.end = base + s.size
        s.regblock = 0; s.lines = []; s.labels = set(); s.insns = {}   # pc -> (text, targets)

    # ---- operands ---------------------------------------------------------
    def operand(s, p, argcode, align, as_dst=False):
        a = ARG[argcode]
        sfx = slice_suffix(align)
        if a == 'REG':
            v = u16(p); p += 2
            eff = v + s.regblock
            return Op('REG', eff, align, f'REG[{s.regtxt(v)}]{sfx}', p)
        if a == 'PS': v = u8(p); return Op('PS', v, align, f'PS[{v}]{sfx}', p + 1)
        if a == 'WS':
            v = u8(p); nm = WS_SPECIAL.get(v)
            return Op('WS', v, align, (f'WS_{nm}' if nm else f'WS[{v}]') + sfx, p + 1)
        if a == 'ID': v = u16(p); return Op('ID', v, align, f'ID[{v:#06x}]{sfx}', p + 2)
        if a == 'FB': v = u8(p); return Op('FB', v, align, f'FB[{v}]{sfx}', p + 1)
        if a == 'PLL': v = u8(p); return Op('PLL', v, align, f'PLL[{v:#04x}]{sfx}', p + 1)
        if a == 'MC': v = u8(p); return Op('MC', v, align, f'MC[{v:#04x}]{sfx}', p + 1)
        if a == 'IMM':
            if align == 0: v = u32(p); return Op('IMM', v, align, f'{v:#x}', p + 4)
            if align <= 3: v = u16(p); return Op('IMM', v, align, f'{v:#x}', p + 2)
            v = u8(p); return Op('IMM', v, align, f'{v:#x}', p + 1)

    def regtxt(s, v):
        eff = v + s.regblock
        if s.regblock: return f'{eff:#x}' if v == 0 else f'{v:#x}+{s.regblock:#x}'
        return f'{v:#x}'

    # ---- decode all instructions linearly (tables are straight-line + jumps) ----------------
    def decode(s):
        p = s.start; flags = []
        s.lastcmp = None
        while p < s.end:
            pc = p; op = u8(p); p += 1
            if op not in OPS: s.insns[pc] = (f'/* bad opcode {op:#x} */', [], p); continue
            name, a = OPS[op]
            tgt = []; txt = None
            if name in ('MOVE', 'AND', 'OR', 'ADD', 'SUB', 'XOR', 'MASK', 'MUL', 'DIV', 'COMPARE', 'TEST', 'SHL', 'SHR', 'MUL32', 'DIV32'):
                attr = u8(p); p += 1
                sarg = attr & 7; salign = (attr >> 3) & 7; dalign = DST_TO_SRC[salign][(attr >> 6) & 3]
                if name in ('MUL32', 'DIV32'): arg = a; dst_arg = {1: 1, 2: 2}[a]
                else: arg = a
                d = s.operand(p, arg, dalign, True); p = d.end
                if name == 'MASK':
                    m = s.operand(p, 5, salign) if False else None
                    mv = {0: lambda q: (u32(q), q + 4), 1: lambda q: (u16(q), q + 2), 2: lambda q: (u16(q), q + 2), 3: lambda q: (u16(q), q + 2)}.get(salign, lambda q: (u8(q), q + 1))(p)
                    mask, p = mv
                    src = s.operand(p, sarg, salign); p = src.end
                    lhs = d.text
                    txt = f'{lhs} = ({lhs} & {mask:#x}) | {src.text};'
                else:
                    src = s.operand(p, sarg, salign); p = src.end
                    L, R = d.text, src.text
                    if name == 'MOVE': txt = f'{L} = {R};'
                    elif name == 'AND': txt = f'{L} &= {R};'
                    elif name == 'OR': txt = f'{L} |= {R};'
                    elif name == 'XOR': txt = f'{L} ^= {R};'
                    elif name == 'ADD': txt = f'{L} += {R};'
                    elif name == 'SUB': txt = f'{L} -= {R};'
                    elif name == 'MUL': txt = f'WS_QUOTIENT = {L} * {R};'
                    elif name == 'DIV': txt = f'WS_QUOTIENT = {L} / {R}; WS_REMAINDER = {L} % {R};   /* 0 if divisor is 0 */'
                    elif name == 'MUL32': txt = f'{{WS_QUOTIENT, WS_REMAINDER}} = (uint64_t){L} * {R};'
                    elif name == 'DIV32': txt = f'{{WS_QUOTIENT, WS_REMAINDER}} = ((uint64_t)WS_REMAINDER << 32 | {L}) / {R};'
                    elif name == 'SHL': txt = f'{L} = {L}_full << {R};   /* shift full dword, store field */'
                    elif name == 'SHR': txt = f'{L} = {L}_full >> {R};   /* shift full dword, store field */'
                    elif name == 'COMPARE': s.lastcmp = ('cmp', L, R); txt = f'/* cmp {L}, {R} */'
                    elif name == 'TEST': s.lastcmp = ('test', L, R); txt = f'/* test {L}, {R} */'
            elif name in ('SHIFT_LEFT', 'SHIFT_RIGHT'):
                attr = u8(p); p += 1
                salign = (attr >> 3) & 7; dalign = DST_TO_SRC[salign][DEF_DST[salign]]
                d = s.operand(p, a, dalign); p = d.end; n = u8(p); p += 1
                txt = f'{d.text} {"<<=" if name == "SHIFT_LEFT" else ">>="} {n};'
            elif name == 'CLEAR':
                attr = u8(p); p += 1
                salign = (attr >> 3) & 7; dalign = DST_TO_SRC[salign][DEF_DST[salign]]
                d = s.operand(p, a, dalign); p = d.end; txt = f'{d.text} = 0;'
            elif name == 'JUMP':
                t = u16(p); p += 2; T = s.base + t; tgt.append(T); s.labels.add(T)
                c = a
                if c == 'ALWAYS': txt = f'goto L_{T:04x};'
                else:
                    lc = s.lastcmp
                    if lc is None: cond = f'/*{c}*/ flags'
                    elif lc[0] == 'cmp':
                        cond = {'EQ': f'{lc[1]} == {lc[2]}', 'NE': f'{lc[1]} != {lc[2]}', 'B': f'{lc[1]} < {lc[2]}', 'A': f'{lc[1]} > {lc[2]}',
                                'BE': f'{lc[1]} <= {lc[2]}', 'AE': f'{lc[1]} >= {lc[2]}'}[c]
                    else:
                        cond = {'EQ': f'({lc[1]} & {lc[2]}) == 0', 'NE': f'({lc[1]} & {lc[2]}) != 0'}.get(c, f'/*{c} after test*/ flags')
                    txt = f'if ({cond}) goto L_{T:04x};'
            elif name == 'SWITCH':
                attr = u8(p); p += 1
                src = s.operand(p, attr & 7, (attr >> 3) & 7); p = src.end
                cases = []
                while u16(p) != 0x5a5a:
                    if u8(p) != 0x63: break
                    p += 1
                    v = s.operand(p, 5, (attr >> 3) & 7); p = v.end
                    t = u16(p); p += 2; T = s.base + t; tgt.append(T); s.labels.add(T)
                    cases.append((v.text, T))
                p += 2
                txt = f'switch ({src.text}) {{ ' + ' '.join(f'case {v}: goto L_{T:04x};' for v, T in cases) + ' }'
            elif name == 'SETPORT': v = u16(p); p += 2; txt = f'io_mode = {"MM" if v == 0 else "IIO_%#x" % v};'
            elif name in ('SETPORT_PCI', 'SETPORT_SYSIO'): p += 1; txt = f'io_mode = {name.split("_")[1]};'
            elif name == 'SETREGBLOCK':
                v = u16(p); p += 2; s.regblock = v; txt = f'reg_block = {v:#x};'
            elif name == 'SETFBBASE':
                attr = u8(p); p += 1; src = s.operand(p, attr & 7, (attr >> 3) & 7); p = src.end; txt = f'fb_base = {src.text};'
            elif name in ('DELAY_MS', 'DELAY_US'):
                v = u8(p); p += 1; txt = f'{"mdelay" if name == "DELAY_MS" else "udelay"}({v});'
            elif name == 'CALLTABLE':
                v = u8(p); p += 1; txt = f'call_table_{v:#04x}(&PS[ps_shift]);'
            elif name == 'POSTCARD': v = u8(p); p += 1; txt = f'post_code({v:#04x});'
            elif name == 'DEBUG': v = u8(p); p += 1; txt = f'/* debug {v:#04x} */'
            elif name == 'SETDATABLOCK':
                v = u8(p); p += 1
                txt = 'data_block = 0;' if v == 0 else ('data_block = table_start;' if v == 255 else f'data_block = DATA_TABLE[{v}];   /* master data table slot {v} */')
            elif name == 'PROCESSDS': v = u16(p); p += 2 + v; txt = f'/* processds: skip {v} bytes */'
            elif name == 'NOP': txt = ';'
            elif name == 'EOT': txt = 'return;'
            elif name in ('BEEP',): txt = 'beep();'
            elif name in ('SAVEREG', 'RESTOREREG', 'REPEAT'): txt = f'/* {name} (unimplemented in kernel) */'
            else: txt = f'/* {name} */'
            s.insns[pc] = (txt, tgt, p)
        return s

    def emit(s, names):
        out = []
        out.append(f'/* command table {s.idx:#04x} ("{names[s.idx] if s.idx < len(names) else "?"}")  @ {s.base:#06x}  size {s.size:#x}  rev {s.rev[0]}.{s.rev[1]}  ws={s.ws} ps={s.ps} */')
        out.append(f'void cmd_table_{s.idx:02x}(uint32_t PS[]) {{   /* uint32_t WS[{s.ws // 4 if s.ws > 40 else s.ws}] */')
        pcs = sorted(s.insns)
        idx = None
        for pc in pcs:
            if pc in s.labels: out.append(f'L_{pc:04x}:'); 
            txt = s.insns[pc][0]
            m = re.fullmatch(r'REG\[0xc\] = (.*);', txt)
            if m: idx = m.group(1); out.append(f'  /* {pc:04x} */ /* smn_index = {idx} */'); continue
            if idx is not None and 'REG[0xd]' in txt:
                txt = txt.replace('REG[0xd]', f'SMN[{idx}]')
            def ann(m):
                v = int(m.group(2), 16); dw = v // 4 if m.group(1) == 'SMN' else v
                n = ipregs.best(dw)
                if not n: return m.group(0)
                ip, nm = n.split('.', 1)
                DEFS[nm] = (m.group(1), v, ip)
                return f'{m.group(1)}[{nm}]'
            txt = re.sub(r'(SMN|REG)\[(0x[0-9a-f]+)\]', ann, txt)
            txt = re.sub(r'(smn_index = )(0x[0-9a-f]+)', lambda m: m.group(1) + (ipregs.best(int(m.group(2), 16) // 4) or m.group(2)).split('.')[-1], txt)
            out.append(f'  /* {pc:04x} */ {txt}')
        out.append('}')
        return out


def annotate_smn(lines):
    """Add comments for the REG[0xc]=addr / REG[0xd] index-data pair idiom."""
    res = []
    for ln in lines:
        res.append(ln)
    return res


def main():
    atom = u16(0x48); mc = u16(atom + 0x1e)
    names = json.load(open(__file__.rsplit('/', 1)[0] + '/../ghidra/data/atom_cmd_names.json'))
    print(f'/* AtomBIOS command tables decompiled from {sys.argv[1]} (master command table @ {mc:#06x}) */')
    print('#include <stdint.h>\n')
    body = []
    for i in range(81):
        o = u16(mc + 4 + 2 * i)
        if not o: continue
        t = Table(i, o).decode()
        body.append('\n'.join(t.emit(names)) + '\n\n')
    print('/* Register names resolved with the kernel *_offset.h headers; SMN[] addresses are byte addresses on the SMN bus,')
    print('   REG[] values are dword indices in the BAR5 register aperture (after adding reg_block). */')
    for nm, (k, v, ip) in sorted(DEFS.items(), key=lambda kv: (kv[1][0], kv[1][1])):
        print(f'#define {nm:44} {v:#09x}   /* {k} {ip} */')
    print()
    print(''.join(body))


main()
