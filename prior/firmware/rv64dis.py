#!/usr/bin/env python3
"""Aligned RV64 disassembler for AMD RDNA3 CP/MES firmware sections (uses llvm-mc for the actual instruction decode).
Every 4-byte word is decoded independently; undecodable words print as '.word'. No compressed (RVC) instructions are assumed.
usage: rv64dis.py <firmware .bin[.zst]> <out_prefix>"""
import re, struct, subprocess, sys
def load(path):
    if path.endswith('.zst'):
        return subprocess.run(['zstd','-dcq',path],capture_output=True,check=True).stdout
    return open(path,'rb').read()
def sections(d):
    size,hsz,vmaj,vmin,ipmaj,ipmin,uver,usz,uoff,crc = struct.unpack_from('<IIHHHHIIII',d,0)
    if (vmaj,vmin)==(2,0):   # gfx_firmware_header_v2_0 (PFP/ME/MEC)
        feat,isz,ioff,dsz,doff,slo,shi = struct.unpack_from('<IIIIIII',d,32)
        return dict(kind='gfx v2.0', code=(ioff,isz), data=(doff,dsz), start=(shi<<32)|slo, feature=feat, ver=uver)
    if (vmaj,vmin)==(1,0) and hsz==72:  # mes_firmware_header_v1_0
        v,isz,ioff,dv,dsz,doff,slo,shi,dslo,dshi = struct.unpack_from('<IIIIIIIIII',d,32)
        return dict(kind='mes v1.0', code=(ioff,isz), data=(doff,dsz), start=(shi<<32)|slo, dstart=(dshi<<32)|dslo, feature=v, ver=v)
    raise SystemExit(f'unsupported header {vmaj}.{vmin} hdr_size={hsz}')
from concurrent.futures import ThreadPoolExecutor
_cache = {}
def _one(w, triple='riscv64', attrs='+m,+a,+f,+d'):
    t = " ".join(f"0x{b:02x}" for b in w)
    cmd = ['llvm-mc','--disassemble',f'--triple={triple}'] + ([f'-mattr={attrs}'] if attrs else [])
    p = subprocess.run(cmd, input=t, capture_output=True, text=True)
    out = [l.strip() for l in p.stdout.splitlines() if l.strip() and not l.strip().startswith('.')]
    return out[0] if len(out) == 1 and 'invalid instruction encoding' not in p.stderr else None
def decode(words, triple='riscv64', attrs='+m,+a,+f,+d'):
    """Each unique 4-byte word is decoded in its own llvm-mc process (batch mode mis-attributes results)."""
    todo = sorted({w for w in words if (w, triple, attrs) not in _cache and w != b'\0\0\0\0'})
    with ThreadPoolExecutor(max_workers=16) as ex:
        for w, r in zip(todo, ex.map(lambda w: _one(w, triple, attrs), todo)): _cache[(w, triple, attrs)] = r
    return [None if w == b'\0\0\0\0' else _cache[(w, triple, attrs)] for w in words]
def main():
    d=load(sys.argv[1]); s=sections(d); ioff,isz=s['code']
    code=d[ioff:ioff+isz]; words=[code[i:i+4] for i in range(0,len(code)-3,4)]
    ins=decode(words)
    lines=[f"; {sys.argv[1]}  header: {s['kind']}  code {isz:#x} bytes @file+{ioff:#x}  data {s['data'][1]:#x} bytes  start_addr={s['start']:#x}",
           "; aligned RV64IMAFD decode; '.word' = not a valid instruction (data, padding or non-standard opcode)"]
    nz=nv=0
    for i,(w,t) in enumerate(zip(words,ins)):
        v=struct.unpack('<I',w)[0]
        if v==0: continue
        nz+=1
        if t is None: lines.append(f"{i*4:06x}: {v:08x}   .word {v:#010x}")
        else: nv+=1; lines.append(f"{i*4:06x}: {v:08x}   {t}")
    open(sys.argv[2]+'.asm','w').write("\n".join(lines)+"\n")
    open(sys.argv[2]+'.code.bin','wb').write(code); open(sys.argv[2]+'.data.bin','wb').write(d[s['data'][0]:s['data'][0]+s['data'][1]])
    rets=sum(1 for t in ins if t and re.match(r'ret\b|jalr\s+zero, 0\(ra\)',t))
    print(f"{sys.argv[1].split('/')[-1]:28} {s['kind']:9} code={isz:7d}B  non-zero words={nz:6d}  valid={nv/nz:6.1%}  ret={rets:4d}  start={s['start']:#x}")
main()
