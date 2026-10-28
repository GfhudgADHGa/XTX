#!/usr/bin/env python3
"""Parse kernel gc_11_0_0_offset.h -> ghidra/data/gc11_regs.json: {name: {off, base_idx}}"""
import re, json, sys
regs = {}
for m in re.finditer(r'#define\s+(reg\w+)\s+(0x[0-9a-fA-F]+)\s*\n#define\s+\1_BASE_IDX\s+(\d+)', open(sys.argv[1]).read()):
    regs[m.group(1)] = dict(off=int(m.group(2), 16), base=int(m.group(3)))
json.dump(regs, open(sys.argv[2], 'w'))
print(len(regs), 'registers')
