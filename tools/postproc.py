#!/usr/bin/env python3
"""Turn Ghidra's raw decompiler output for an RS64 firmware image into readable C.

usage: postproc.py <core> <raw.c> <out.c>

What it does
  * maps absolute-address variables (Ram.../DAT_...) to symbolic names:
      - core-local register window (tp window, 0x2_0000_0000_xxxx)   -> ghidra/data/names_<core>.tsv
      - MMIO windows (0x1_xxxx_xxxx_xxxx) -> gc_11_0_0 register names (kernel headers) when they resolve
      - data RAM (0x100000..0x121fff) -> g_<addr>
  * rewrites the FIFO ports as calls (pkt_in()/pkt_out()) and decodes PM4 headers pushed downstream
  * replaces Ghidra's bogus code labels for small constants (LAB_0000c3d8 -> 0xc3d8)
  * renames functions from ghidra/data/funcs_<core>.tsv
  * prepends a prelude declaring every symbol that is used
"""
import re, sys, os, json, collections
HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import gcnames, ipregs

core, rawp, outp = sys.argv[1:4]
DATA = os.path.join(HERE, '..', 'ghidra', 'data')

def load_tsv(path):
    d = {}
    if os.path.exists(path):
        for ln in open(path):
            if ln.startswith('#') or not ln.strip(): continue
            f = ln.rstrip('\n').split('\t')
            d[int(f[0], 0)] = (f[1], f[2] if len(f) > 2 else '')
    return d

RENAMES = {}
TP = load_tsv(f'{DATA}/names_{core}.tsv')
FUNCS = load_tsv(f'{DATA}/funcs_{core}.tsv')
PM4 = json.load(open(f'{DATA}/pm4_opcodes.json'))
CFG = load_tsv(f'{DATA}/cfgregs_{core}.tsv')

def load_annot(path):
    """annot_<core>.tsv  lines:  F<TAB>func-or-hexaddr<TAB>new_name<TAB>doc (\\n = newline)
                                  V<TAB>func-or-hexaddr<TAB>old=new,old=new   (rename locals / params)"""
    fn, vs = {}, {}
    if os.path.exists(path):
        for ln in open(path):
            if ln.startswith('#') or not ln.strip(): continue
            f = ln.rstrip('\n').split('\t')
            key = f[1]
            if f[0] == 'F': fn[key] = (f[2], f[3].replace('\\n', '\n') if len(f) > 3 else '')
            elif f[0] == 'V': vs.setdefault(key, []).extend(x.split('=') for x in f[2].split(','))
    return fn, vs
ANN_F, ANN_V = load_annot(f'{DATA}/annot_{core}.tsv')       # core configuration registers in the 0x1_0001_xxxx_xxxx window

# registers that behave like FIFO ports
POP_NAMES = {n for n, (nm, c) in ((k, v) for k, v in TP.items()) if nm in ('PKT_IN',)}
used = collections.OrderedDict()      # symbol -> (address, width hint)

def symname(addr):
    if addr >= 0x10000 and addr in TP:
        used[TP[addr][0]] = (addr, 'special'); return TP[addr][0]
    top = addr >> 48
    if top == 2:                               # RS64 core-local register window
        off = addr & 0xffff
        nm = TP.get(off, (f'TP_R{off:03X}', ''))[0]
        used[nm] = (addr, 'tp'); return nm
    if top == 1:
        space = (addr >> 32) & 0xffff
        lo = addr & 0xffffffff
        if space == 0x0001 and lo in CFG:      # 0x1_0001_xxxx_xxxx : core configuration registers
            nm = CFG[lo][0]
        else:
            hit = ipregs.best(lo >> 2) if lo % 4 == 0 and space in (0x0000, 0x0002, 0x0001, 0x0008) else None
            if hit:
                ip, rn = hit.split('.', 1)
                nm = ('reg' if ip == 'GC' else 'reg' + ip + '_') + rn + {0x0: '', 0x1: '_s1', 0x2: '_ctx', 0x8: '_s8'}.get(space, f'_s{space:x}')
            else:
                nm = f'MMIO{space:x}_{lo:06X}'
        used[nm] = (addr, 'mmio'); return nm
    if top == 3:                               # 0x3_0000_0000_xxxx window (s7 base in PFP)
        nm = TP.get(addr, (f'W3_{addr & 0xffffffff:05X}', ''))[0]; used[nm] = (addr, 'w3'); return nm
    if 0x100000 <= addr < 0x122000:
        nm = f'g_{addr:06x}'; used[nm] = (addr, 'data'); return nm
    if 0xfffffffff0100000 <= addr < 0xfffffffff0140000:    # MES data RAM
        nm = f'g_{addr & 0xfffff:05x}'; used[nm] = (addr, 'data'); return nm
    return None

# ---- tokens produced by the decompiler for absolute addresses -------------------------------
TOK = re.compile(r'(?<![A-Za-z0-9])([A-Za-z_]?)(Ram|DAT_)([0-9a-f]{6,16})((?:\._(\d+)_(\d+)_)?)\b')
def sub_tok(m):
    pre, kind, hx, suf, k, n = m.groups()
    addr = int(hx, 16) + (int(k) if k else 0)
    if kind == 'Ram' and len(hx) != 16: return m.group(0)
    nm = symname(addr)
    if nm is None: return m.group(0)
    return nm + (f'/*+{k},{n}B*/' if k and False else '')

LAB = re.compile(r'&LAB_0000([0-9a-f]{4,5})\b')

def process_function(body, fname):
    # declared types of locals
    types = {}
    for m in re.finditer(r'^\s+((?:unsigned )?[A-Za-z_][\w ]*?)\s+\*?(\w+);', body, re.M):
        types[m.group(2)] = m.group(1)
    body = TOK.sub(sub_tok, body)
    body = LAB.sub(lambda m: '0x' + m.group(1).lstrip('0') if m.group(1).strip('0') else '0', body)
    return body

TAIL = re.compile(r'(?m)^(\s*)(\w+) = pkt_in\(\);\n\s*(\w+) = NEXT_HANDLER;\n(?:\s*/\*.*?\*/\n)*\s*\(\*\(code \*\)\(\3 & 0xfffffffffffffffe\)\)\(\2\);\n\s*return;')
TAIL2 = re.compile(r'(?m)^(\s*)(\w+) = NEXT_HANDLER;\n(?:\s*/\*.*?\*/\n)*\s*\(\*\(code \*\)\(\2 & 0xfffffffffffffffe\)\)\((\w*)\);\n\s*return;')
def fifo_rewrite(text):
    text = TAIL.sub(r'\1pm4_next();   /* pop next header, tail-jump to its handler */\n\1return;', text)
    text = TAIL2.sub(r'\1pm4_dispatch(\3);   /* tail-jump to the handler for the header already popped */\n\1return;', text)
    text = re.sub(r'(?m)^\s*(tp|gp|s7|s8|s9|s10|s11) = 0x[0-9a-f]+;\n', '', text)
    # PKT_OUT = x;  -> pkt_out(x);   (and annotate PM4 headers)
    def out(m):
        ind, expr = m.group(1), m.group(2)
        note = ''
        mm = re.fullmatch(r'0x([0-9a-fA-F]{8})[Uu]?', expr.strip())
        if mm:
            v = int(mm.group(1), 16)
            if v >> 30 == 3:
                op = (v >> 8) & 0xff; cnt = (v >> 16) & 0x3fff
                nm = PM4.get(hex(op), [f'OP_{op:02X}'])[0]
                note = f'   /* PM4 type-3 {nm} (0x{op:02x}), body dwords={cnt + 1} */'
        return f'{ind}pkt_out({expr});{note}'
    text = re.sub(r'^(\s*)PKT_OUT\s*=\s*(.*?);\s*$', out, text, flags=re.M)
    # reads of PKT_IN anywhere become calls; width from the declared lhs type when visible
    text = re.sub(r'\bPKT_IN\b', 'pkt_in()', text)
    return text

def collapse_pushes(text):
    """Collapse runs of identical pkt_out(CONST); statements into pkt_out_repeat(CONST, N);"""
    def rep(m):
        ind, val, tail = m.group(1), m.group(2), m.group(3) or ''
        n = len(re.findall(r'pkt_out\(', m.group(0)))
        return f'{ind}pkt_out_repeat({val}, {n});{tail}'
    text = re.sub(r'(?m)^(\s*)pkt_out\((0x[0-9a-f]+|\d+)\);(\s*/\*.*?\*/)?\n(?:\s*pkt_out\(\2\);\n){2,}',
                  lambda m: rep(m) + '\n', text)
    return text

def main():
    raw = open(rawp).read()
    # split into function chunks
    parts = re.split(r'(?m)^(?=/\* ---- )', raw)
    outparts = []
    for p in parts:
        m = re.match(r'/\* ---- (\S+) @ (\S+)', p)
        if m:
            fname, faddr = m.group(1), m.group(2).split(':')[-1].lstrip('0').lower() or '0'
            keys = (fname, '0x' + faddr)
            for k in keys:
                for old, new in ANN_V.get(k, []):
                    p = re.sub(r'(?<![\w.])' + re.escape(old) + r'(?![\w])', new, p)
            doc = ''
            for k in keys:
                if k in ANN_F:
                    nn, doc = ANN_F[k]
                    if nn and nn != '-': p = p.replace(fname, nn, 1)
                    RENAMES[fname] = nn if nn and nn != '-' else fname
                    break
            p = process_function(p, m.group(1))
            p = fifo_rewrite(p)
            p = collapse_pushes(p)
            if re.match(r'/\* ---- pm4_\w+_handler', p):
                p = re.sub(r'\bparam_1\b', 'hdr', p, count=0)
            if doc:
                head, rest = p.split('\n', 1)
                p = head + '\n' + '\n'.join('// ' + l for l in doc.split('\n')) + '\n' + rest
        outparts.append(p)
    body = ''.join(outparts)
    for old, new in RENAMES.items():
        if old != new: body = re.sub(r'(?<![\w])' + re.escape(old) + r'(?![\w])', new, body)
    # function renames
    for addr, (nm, c) in FUNCS.items():
        for pat in (f'FUN_{addr:08x}', f'FUN_{addr:016x}', f'sub_{addr:05x}'):
            body = body.replace(pat, nm)
    prelude = [f'/* {core.upper()} firmware - decompiled with Ghidra, post-processed by tools/postproc.py */',
               '#include <stdint.h>', '', '/* FIFO ports of the RS64 core (see docs/RS64_CORE.md) */',
               'uint32_t pkt_in(void);          /* pop next dword of the current PM4 packet (TP_R302) */',
               'void     pkt_out(uint32_t v);   /* push a dword to the downstream FIFO (TP_R000)      */',
               'void     pkt_out_repeat(uint32_t v, int n);   /* pkt_out(v) n times */',
               'void     pm4_next(void);        /* pkt_in() -> a0, then jump to the handler registered for that header */',
               'void     pm4_dispatch(uint32_t hdr); /* jump to the handler for a header already popped */', '']
    decl = []
    for nm, (addr, kind) in sorted(used.items(), key=lambda kv: kv[1][0]):
        if nm in ('PKT_IN', 'PKT_OUT'): continue
        if re.search(r'\b' + re.escape(nm) + r'\b', body):
            decl.append(f'extern volatile uint32_t {nm};  /* {addr:#x} */')
    open(outp, 'w').write('\n'.join(prelude + decl) + '\n\n' + body)
    print(f'{core}: {len(decl)} symbols declared, {len(body.splitlines())} lines')

main()
