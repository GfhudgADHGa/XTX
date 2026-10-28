import sys, collections
from capstone import *
from capstone.riscv import *
md=Cs(CS_ARCH_RISCV, CS_MODE_RISCV64); md.detail=True
f=sys.argv[1]
img=open(f,'rb').read()
ins_list=[]
for a in range(0,len(img),4):
    w=img[a:a+4]
    ins=next(md.disasm(w,a),None) if w!=b'\0\0\0\0' else None
    ins_list.append(ins)
LS={'lb','lbu','lh','lhu','lw','lwu','ld','sb','sh','sw','sd'}
tp=collections.defaultdict(lambda:collections.Counter())
absaddr=collections.defaultdict(lambda:collections.Counter())
lui={}
for i,ins in enumerate(ins_list):
    if not ins: lui.clear(); continue
    m=ins.mnemonic
    if m=='lui': lui[ins.operands[0].reg]=(ins.operands[1].imm<<12, i)
    if m in LS:
        o=ins.operands[-1]; 
        if o.type!=RISCV_OP_MEM: continue
        b=md.reg_name(o.mem.base)
        kind='R' if m[0]=='l' else 'W'
        sz=m[1:]
        if b=='tp': tp[o.mem.disp][kind+sz]+=1
        elif o.mem.base in lui and i-lui[o.mem.base][1]<6:
            absaddr[(lui[o.mem.base][0]+o.mem.disp)&0xffffffff][kind+sz]+=1
print('tp offsets:',len(tp))
for off in sorted(tp, key=lambda x:x&0xffffffff)[:400]:
    print('  tp%+#06x'%off, dict(tp[off]))
print('abs lui-based:',len(absaddr))
for a in sorted(absaddr): print('  %#x'%a, dict(absaddr[a]))
