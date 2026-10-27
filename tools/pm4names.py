#!/usr/bin/env python3
"""Build PACKET3 opcode -> name table from kernel nvd.h/soc15d.h -> ghidra/data/pm4_opcodes.json"""
import re, json, sys
names = {}
for f in sys.argv[2:]:
    for m in re.finditer(r'#define\s+PACKET3_([A-Z0-9_]+)\s+(0x[0-9A-Fa-f]+)\b(?!.*START|.*END)', open(f).read()):
        n, v = m.group(1), int(m.group(2), 16)
        if n.endswith(('_START', '_END')) or v > 0xff: continue
        names.setdefault(v, [])
        if n not in names[v]: names[v].append(n)
json.dump({hex(k): v for k, v in sorted(names.items())}, open(sys.argv[1], 'w'), indent=1)
print(len(names), 'opcodes')
