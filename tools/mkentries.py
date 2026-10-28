#!/usr/bin/env python3
"""Emit entry points (reset, trap, PM4 dispatch handlers) of an RS64 image as TSV: addr<TAB>name<TAB>kind

usage: mkentries.py <image.bin> <tp_off_hex> <any_store_in_table_hex> [pm4_json]
The firmware registers PM4 handlers by storing ((opcode<<20) | (handler & 0xFFFFF)) to a core-local
register at tp+<tp_off>. We evaluate that straight-line code symbolically.
"""
import sys, json, collections
sys.path.insert(0, __file__.rsplit('/', 1)[0])
from rvsym import *
img = open(sys.argv[1], 'rb').read(); L = decode_all(img)
off = int(sys.argv[2], 16); first = int(sys.argv[3], 16)
pm4 = json.load(open(sys.argv[4])) if len(sys.argv) > 4 else {}
ent = []
def st(pc, base, disp, val, m, bv):
    if base == 'tp' and disp == off and m == 'sw': ent.append((pc, val))
# find the straight-line stretch: from first-0x40 to the end of the dense cluster
pcs = [pc for pc, x in enumerate(L) if x and x.mnemonic == 'sw' and x.op_str.endswith('(tp)') and x.operands[-1].mem.disp == off]
pcs = [p * 4 for p in pcs]
# the table is a chain of stores each within 0x80 bytes of the previous one
chain = [p for p in pcs if abs(p - first) < 0x4000]
i = chain.index(min(chain, key=lambda p: abs(p - first)))
lo = hi = i
while lo > 0 and chain[lo] - chain[lo - 1] <= 0x80: lo -= 1
while hi + 1 < len(chain) and chain[hi + 1] - chain[hi] <= 0x80: hi += 1
first, last = chain[lo], chain[hi]
run(L, first - 0x100, last + 4, {'a5': 0xfffff}, st)
out = [(0x3000, 'reset_entry', 'reset'), (0x1000, 'trap_handler', 'trap')]
seen = collections.defaultdict(list)
for pc, v in ent:
    if v is None: continue
    seen[v & 0xfffff].append(v >> 20)
for h, ops in sorted(seen.items()):
    ops = sorted(set(ops))
    names = []
    for o in ops:
        nm = pm4.get(hex(o), [None])[0]
        names.append(nm or f'OP_{o:02X}')
    if len(ops) > 8:   # the default/unused handler
        out.append((h, 'pm4_default_handler', 'dispatch')); continue
    out.append((h, 'pm4_' + '_'.join(names) + '_handler' if len(names) < 4 else 'pm4_' + names[0] + f'_plus{len(names)-1}_handler', 'dispatch'))
for a, n, k in out: print(f'{a:#x}\t{n}\t{k}')
print(f'# {len(ent)} stores, {sum(1 for _,v in ent if v is None)} unresolved', file=sys.stderr)
