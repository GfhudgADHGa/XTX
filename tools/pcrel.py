"""Find code addresses materialised with auipc+addi (la/lla) in an image: returns {target: [pcs]}"""
import sys,collections
sys.path.insert(0,__file__.rsplit('/',1)[0])
from rvsym import *
def find(L, limit):
    out=collections.defaultdict(list)
    for pc,x in enumerate(L):
        if not x or x.mnemonic!='auipc': continue
        rd=md.reg_name(x.operands[0].reg); base=pc*4+sx(x.operands[1].imm<<12,32)
        for k in range(1,6):
            y=L[pc+k] if pc+k<len(L) else None
            if not y: break
            if y.mnemonic=='addi' and md.reg_name(y.operands[1].reg)==rd:
                t=base+y.operands[2].imm
                if 0<=t<limit: out[t].append(pc*4)
                break
            if y.operands and y.operands[0].type==RISCV_OP_REG and md.reg_name(y.operands[0].reg)==rd: break
    return out
if __name__=='__main__':
    img=open(sys.argv[1],'rb').read(); L=decode_all(img)
    r=find(L,len(img))
    print(len(r),'distinct code addrs materialised')
    for t in sorted(r)[:int(sys.argv[2]) if len(sys.argv)>2 else 40]: print(hex(t),[hex(p) for p in r[t][:3]])
