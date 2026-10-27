#!/usr/bin/env python3
"""Tiny packed-C-struct decoder driven by a kernel header (atomfirmware.h).

Supports: struct/union (nested, named), fixed arrays (numeric or #define / enum constants),
uintN_t / int / char scalar types, bit-fields (LSB-first within the declared type).
Everything is little-endian and byte-packed (#pragma pack(1)).
"""
import re, struct

SCALARS = {'uint8_t': 1, 'int8_t': 1, 'char': 1, 'uint16_t': 2, 'int16_t': 2, 'uint32_t': 4, 'int32_t': 4,
           'uint64_t': 8, 'int64_t': 8, 'unsigned char': 1, 'unsigned short': 2, 'unsigned int': 4}
SIGNED = {'int8_t', 'int16_t', 'int32_t', 'int64_t'}


def strip_comments(s):
    s = re.sub(r'/\*.*?\*/', '', s, flags=re.S)
    return re.sub(r'//[^\n]*', '', s)


class Header:
    def __init__(self, path):
        txt = strip_comments(open(path, errors='replace').read())
        self.consts = {}
        for m in re.finditer(r'#define\s+(\w+)\s+\(?(0x[0-9a-fA-F]+|\d+)\)?\s*\n', txt):
            self.consts[m.group(1)] = int(m.group(2), 0)
        for m in re.finditer(r'enum\s+\w*\s*\{(.*?)\}', txt, flags=re.S):
            v = 0
            for item in m.group(1).split(','):
                item = item.strip()
                if not item: continue
                if '=' in item:
                    n, e = [x.strip() for x in item.split('=', 1)]
                    try: v = int(e, 0)
                    except ValueError: v = self.consts.get(e, v)
                else: n = item
                self.consts[n] = v; v += 1
        self.structs = {}
        for m in re.finditer(r'\b(struct|union)\s+(\w+)\s*\{', txt):
            body, end = self._body(txt, m.end())
            self.structs[m.group(2)] = (m.group(1), self._members(body))

    @staticmethod
    def _body(txt, i):
        depth = 1; j = i
        while depth:
            c = txt[j]
            depth += (c == '{') - (c == '}'); j += 1
        return txt[i:j - 1], j

    def _members(self, body):
        out = []
        i = 0
        # flatten anonymous/inline nested struct/union definitions into synthetic names
        while i < len(body):
            m = re.compile(r'\s*(struct|union)\s*(\w*)\s*\{').match(body, i)
            if m:
                inner, j = self._body(body, m.end())
                tail = re.compile(r'\s*(\w*)\s*(\[[^\]]*\])?\s*;').match(body, j)
                nm = tail.group(1) or f'_anon{len(out)}'
                syn = f'__{nm}_{len(self.structs)}'
                self.structs[syn] = (m.group(1), self._members(inner))
                out.append((m.group(1) + ' ' + syn, nm, self._count(tail.group(2)), None))
                i = tail.end(); continue
            j = body.find(';', i)
            if j < 0: break
            decl = ' '.join(body[i:j].split()); i = j + 1
            if not decl or decl.startswith('#'): continue
            mm = re.match(r'^((?:struct|union)\s+\w+|unsigned \w+|\w+)\s+(\w+)\s*(?:\[([^\]]*)\])?\s*(?::\s*(\w+))?$', decl)
            if not mm: continue
            ty, nm, cnt, bits = mm.groups()
            out.append((ty, nm, self._count(f'[{cnt}]') if cnt is not None else None, int(bits, 0) if bits and bits[0].isdigit() else None))
        return out

    def _count(self, s):
        if s is None: return None
        s = s.strip('[] ')
        if s == '': return 1
        try: return int(s, 0)
        except ValueError: return self.consts.get(s, 1)

    def size(self, ty, count=None):
        n = self._size(ty)
        return n * (count if count else 1)

    def _size(self, ty):
        if ty in SCALARS: return SCALARS[ty]
        kind, name = ty.split()
        k, mem = self.structs[name]
        sizes = []
        bit_acc = 0; bit_ty = None; tot = 0
        for t, n, c, b in mem:
            if b is not None:
                continue
            sizes.append(self.size(t, c))
        # bit-fields: account by declared underlying type groups
        tot = self._layout_size(mem)
        return tot

    def _layout_size(self, mem):
        kind_union = False
        off = 0; mx = 0; bitoff = 0; bitty = None
        for t, n, c, b in mem:
            if b is not None:
                sz = SCALARS[t]
                if bitty != t or bitoff + b > sz * 8:
                    if bitty is not None: off += SCALARS[bitty]
                    bitty = t; bitoff = 0
                bitoff += b
                continue
            if bitty is not None: off += SCALARS[bitty]; bitty = None; bitoff = 0
            off += self.size(t, c)
        if bitty is not None: off += SCALARS[bitty]
        return off

    def struct_size(self, name):
        k, mem = self.structs[name]
        if k == 'union':
            return max(self.size(t, c) for t, n, c, b in mem if b is None)
        return self._layout_size(mem)

    def decode(self, name, data, off=0):
        k, mem = self.structs[name]
        return self._decode_members(k, mem, data, off)[0]

    def _decode_members(self, kind, mem, data, off):
        res = {}; start = off; bitty = None; bitoff = 0; bitbase = 0; bitval = 0
        for t, n, c, b in mem:
            if b is not None:
                sz = SCALARS[t]
                if bitty != t or bitoff + b > sz * 8:
                    if bitty is not None: off += SCALARS[bitty]
                    bitty = t; bitoff = 0; bitbase = off
                    bitval = int.from_bytes(data[off:off + sz].ljust(sz, b'\0'), 'little')
                res[n] = (bitval >> bitoff) & ((1 << b) - 1); bitoff += b
                continue
            if bitty is not None: off += SCALARS[bitty]; bitty = None; bitoff = 0
            cnt = c if c else 1
            vals = []
            for _ in range(cnt):
                if kind == 'union': pos = start
                else: pos = off
                if t in SCALARS:
                    sz = SCALARS[t]
                    raw = data[pos:pos + sz]
                    if len(raw) < sz: v = None
                    elif t == 'char': v = raw
                    else: v = int.from_bytes(raw, 'little', signed=(t in SIGNED))
                    sz_used = sz
                else:
                    _, sn = t.split()
                    k2, m2 = self.structs[sn]
                    v, sz_used = self._decode_members(k2, m2, data, pos)
                    sz_used = sz_used - pos
                vals.append(v)
                if kind != 'union': off += sz_used
            res[n] = vals if c else vals[0]
        if kind == 'union':
            off = start + self.struct_size_of_members(mem)
        if bitty is not None: off += SCALARS[bitty]
        return res, off

    def struct_size_of_members(self, mem):
        return max(self.size(t, c) for t, n, c, b in mem if b is None)


def fmt(v, indent=0, w=100):
    """Pretty-print a decoded struct."""
    pad = '  ' * indent
    if isinstance(v, dict):
        lines = []
        for k, x in v.items():
            if isinstance(x, (dict,)) or (isinstance(x, list) and x and isinstance(x[0], dict)):
                lines.append(f'{pad}{k}:')
                lines.append(fmt(x, indent + 1))
            else:
                lines.append(f'{pad}{k}: {fmt(x, 0)}')
        return '\n'.join(lines)
    if isinstance(v, list):
        if v and isinstance(v[0], dict):
            return '\n'.join(f'{pad}[{i}]\n{fmt(x, indent + 1)}' for i, x in enumerate(v))
        if v and isinstance(v[0], bytes):
            return repr(b''.join(v))
        if all(isinstance(x, int) for x in v):
            if all(x == 0 for x in v): return f'[0]*{len(v)}'
            return '[' + ', '.join(hex(x) if abs(x) > 9 else str(x) for x in v) + ']'
        return str(v)
    if isinstance(v, bytes):
        return repr(v)
    if isinstance(v, int):
        return hex(v) if abs(v) > 9 else str(v)
    return str(v)
