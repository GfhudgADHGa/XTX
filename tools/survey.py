import sys, collections
from capstone import *
from capstone.riscv import *
md=Cs(CS_ARCH_RISCV, CS_MODE_RISCV64); md.detail=True
for f in sys.argv[1:]:
    img=open(f,'rb').read()
    base=collections.Counter(); wr=collections.Counter(); 
    for a in range(0,len(img),4):
        w=img[a:a+4]
        if w==b'\0\0\0\0': continue
        ins=next(md.disasm(w,a),None)
        if not ins: continue
        m=ins.mnemonic
        if m in('lb','lbu','lh','lhu','lw','lwu','ld','sb','sh','sw','sd','flw','fld','fsw','fsd'):
            o=ins.operands[-1]
            if o.type==RISCV_OP_MEM: base[md.reg_name(o.mem.base)]+=1
        # writes to s-regs / tp / gp outside prologue/epilogue
    print(f.split('/')[-1], base.most_common(14))
