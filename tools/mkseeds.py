#!/usr/bin/env python3
"""Compute full seed set for an RS64 image.

usage: mkseeds.py <name> <image.bin> <entries_in.tsv> <entries_out.tsv> <stubtables_out.tsv>

 1. start from the known entries (reset, trap, PM4 dispatch handlers)
 2. resolve `auipc t0,0 ; add t0,t0,idx ; jalr zero,t0,12` stub-table switches (targets: the run of
    unconditional `j` instructions directly after the jalr)
 3. every still-unreached code block that has no incoming edge at all becomes a `root` entry
"""
import sys, collections
sys.path.insert(0, __file__.rsplit('/', 1)[0])
from cfg import *

name, imgp, ein, eout, tout = sys.argv[1:6]
img = open(imgp, 'rb').read(); L = decode_all(img)
succ = build(L)
entries = []
for l in open(ein):
    if l.startswith('#') or not l.strip(): continue
    a, n, k = l.rstrip('\n').split('\t'); entries.append((int(a, 16), n, k))

def stub_tables():
    """find stub-table switches: returns {jalr_pc: [targets...]}"""
    out = {}
    for pc4, x in enumerate(L):
        if not x or x.mnemonic != 'jalr': continue
        o = x.operands
        if md.reg_name(o[0].reg) != 'zero' or o[-1].imm != 12: continue
        pc = pc4 * 4
        a = L[pc4 - 2]
        if not (a and a.mnemonic == 'auipc' and a.operands[1].imm == 0): continue
        tabs = []
        q = pc + 4
        def is_stub(x): return x and (x.mnemonic == 'j' or (x.mnemonic.startswith('b') and x.operands and x.operands[-1].type == RISCV_OP_IMM))
        while q // 4 < len(L) and is_stub(L[q // 4]): tabs.append(q); q += 4
        out[pc] = tabs
    return out

stubs = stub_tables()
# stub run entries are indirect successors of the jalr
for pc, tabs in stubs.items():
    succ[pc] = [('indirect', t) for t in tabs]

roots = [a for a, _, _ in entries]
seen = reach(succ, roots, L)
inc = collections.Counter()
PAD = ('nop', 'unimp')
for p, es in succ.items():
    if L[p // 4].mnemonic in PAD: continue          # padding does not count as a real predecessor
    for k, t in es: inc[t] += 1
def looks_like_data(p):
    """True if >=4 of the next 16 words are not valid instructions (signature blobs, tables)."""
    w = L[p // 4: p // 4 + 16]
    return sum(1 for x in w if x is None) >= 4 and len(w) >= 8
# iterate: unreached nodes with no incoming edge from anywhere, lowest address first
new = []
for p in sorted(succ):
    if p in seen or inc[p] != 0 or L[p // 4].mnemonic in PAD or looks_like_data(p): continue
    seen |= reach(succ, [p], L)
    new.append(p)
# remaining unreached cycles (blocks only reachable from other unreached code that has incoming edges)
rest = [p for p in sorted(succ) if p not in seen]
for p in rest:
    if p in seen or L[p // 4].mnemonic in PAD or looks_like_data(p): continue
    seen |= reach(succ, [p], L); new.append(p)

with open(eout, 'w') as f:
    for a, n, k in entries: f.write(f'{a:#x}\t{n}\t{k}\n')
    for a in new: f.write(f'{a:#x}\tsub_{a:05x}\troot\n')
with open(tout, 'w') as f:
    for pc, tabs in sorted(stubs.items()): f.write(f'{pc:#x}\t' + ','.join(f'{t:#x}' for t in tabs) + '\n')
print(f'{name}: entries={len(entries)} stub_switches={len(stubs)} extra_roots={len(new)} instr={len(succ)} reached={len(seen)}')
