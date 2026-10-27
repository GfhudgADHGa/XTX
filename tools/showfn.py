#!/usr/bin/env python3
"""Print one decompiled function: showfn.py <decomp/core.c> <name-or-hexaddr> [maxlines]"""
import re, sys
txt = open(sys.argv[1]).read()
key = sys.argv[2]
mx = int(sys.argv[3]) if len(sys.argv) > 3 else 120
for m in re.finditer(r'(?m)^/\* ---- (\S+) @ (\S+) size=(\d+) ---- \*/\n(.*?)(?=^/\* ---- |\Z)', txt, re.S):
    name, addr, size, body = m.groups()
    a = addr.split(':')[-1].lstrip('0') or '0'
    if key == name or key.lower().lstrip('0x') == a or key.lower() == addr.lower():
        print(f'/* {name} @ {addr} size={size} */')
        import os
        lines = [l for l in body.split('\n') if l.strip() and 'WARNING' not in l and not re.match(r'^\s+(?:unsigned )?(?:u?int|long|ulong|undefined\d?|byte|char|code|bool|short|ushort|float|double)\b[\w *]*;$', l)]
        print('\n'.join(lines[:mx]))
        break
