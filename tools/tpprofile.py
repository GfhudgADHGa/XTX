"""Profile tp-window register use in raw decompiled C: tpprofile.py <raw.c> [N]"""
import re, sys, collections
txt = open(sys.argv[1]).read().split('\n')
N = int(sys.argv[2]) if len(sys.argv) > 2 else 40
tok = re.compile(r'(?:[a-z]?Ram|DAT_|_DAT_)(0*2[0-9a-f]{12,13})(?:\._\d+_\d+_)?|TP_R([0-9A-F]{3})')
stat = collections.defaultdict(lambda: dict(r=0, w=0, ex=[]))
for ln in txt:
    for m in re.finditer(r'\b[a-z_]*(?:Ram|DAT_)0*(2[0-9a-f]{12,13})\b|\bTP_R([0-9A-F]{3})\b', ln):
        off = int(m.group(1), 16) & 0xfff if m.group(1) else int(m.group(2), 16)
        s = stat[off]
        is_w = re.match(r'\s*' + re.escape(m.group(0)) + r'\s*=[^=]', ln)
        s['w' if is_w else 'r'] += 1
        if len(s['ex']) < 2 and ln.strip() not in s['ex']: s['ex'].append(ln.strip()[:110])
for off, s in sorted(stat.items(), key=lambda kv: -(kv[1]['r'] + kv[1]['w']))[:N]:
    print(f"R{off:03X} r={s['r']} w={s['w']}")
    for e in s['ex']: print('     ', e)
