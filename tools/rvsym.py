"""Tiny straight-line constant evaluator for RV64 (enough for lui/addi/auipc/and/or/shift chains)."""
from capstone import *
from capstone.riscv import *
md=Cs(CS_ARCH_RISCV, CS_MODE_RISCV64); md.detail=True
M64=(1<<64)-1
def sx(v,b): 
    v&=(1<<b)-1
    return v-(1<<b) if v>>(b-1) else v
def decode_all(img):
    L=[]
    for a in range(0,len(img)-3,4):
        w=img[a:a+4]; L.append(next(md.disasm(w,a),None) if w!=b'\0\0\0\0' else None)
    return L
def run(L, start, end, regs=None, on_store=None):
    """evaluate instructions [start,end) byte addrs, returns regs. on_store(addr_pc, base, disp, val, mnem)"""
    R={}
    if regs: R.update(regs)
    R['zero']=0
    def g(r): return R.get(md.reg_name(r))
    for pc in range(start,end,4):
        x=L[pc//4]
        if not x: continue
        m=x.mnemonic; o=x.operands
        def setr(v):
            n=md.reg_name(o[0].reg)
            if n=='zero': return
            R[n]=None if v is None else v&M64
        if m=='lui': setr(sx(o[1].imm<<12,32))
        elif m=='auipc': setr(pc+sx(o[1].imm<<12,32))
        elif m in('addi','addiw'):
            a=g(o[1].reg); setr(None if a is None else (a+o[2].imm if m=='addi' else sx(a+o[2].imm,32)))
        elif m=='mv': setr(g(o[1].reg))
        elif m=='li': setr(o[1].imm)
        elif m=='sext.w':
            a=g(o[1].reg); setr(None if a is None else sx(a,32))
        elif m=='addw':
            a,b=g(o[1].reg),g(o[2].reg); setr(None if a is None or b is None else sx(a+b,32))
        elif m in('and','or','xor','add','sub'):
            a,b=g(o[1].reg),g(o[2].reg)
            f={'and':lambda a,b:a&b,'or':lambda a,b:a|b,'xor':lambda a,b:a^b,'add':lambda a,b:a+b,'sub':lambda a,b:a-b}[m]
            setr(None if a is None or b is None else f(a,b))
        elif m in('andi','ori','xori'):
            a=g(o[1].reg); f={'andi':lambda a,b:a&b,'ori':lambda a,b:a|b,'xori':lambda a,b:a^b}[m]
            setr(None if a is None else f(a,o[2].imm))
        elif m in('slli','srli','slliw'):
            a=g(o[1].reg)
            if a is None: setr(None)
            elif m=='slli': setr(a<<o[2].imm)
            elif m=='srli': setr(a>>o[2].imm)
            else: setr(sx(a<<o[2].imm,32))
        elif m in('sw','sd','sh','sb'):
            mem=o[-1].mem
            if on_store: on_store(pc, md.reg_name(mem.base), mem.disp, g(o[0].reg), m, R.get(md.reg_name(mem.base)))
        else:
            # clobber destination of anything else
            if o and o[0].type==RISCV_OP_REG and not m.startswith(('s','b','j')) or m in('slt','sltu','sltiu','slti','sext.w'):
                try: R[md.reg_name(o[0].reg)]=None
                except Exception: pass
    return R
