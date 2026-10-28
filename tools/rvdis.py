#!/usr/bin/env python3
"""Quick RV64 disassembly of a raw image slice: dis.py <image> <start_hex> <len_hex> [base_hex]"""
import sys
from capstone import *
img=open(sys.argv[1],'rb').read(); s=int(sys.argv[2],16); n=int(sys.argv[3],16)
base=int(sys.argv[4],16) if len(sys.argv)>4 else 0
md=Cs(CS_ARCH_RISCV, CS_MODE_RISCV64); 
for a in range(s,s+n,4):
    w=img[a:a+4]
    if len(w)<4: break
    ins=next(md.disasm(w,base+a),None)
    v=int.from_bytes(w,'little')
    print('%06x: %08x  %s'%(base+a,v,(ins.mnemonic+' '+ins.op_str) if ins else '.word'))
