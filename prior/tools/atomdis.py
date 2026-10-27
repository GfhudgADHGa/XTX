#!/usr/bin/env python3
"""Minimal AtomBIOS command-table disassembler (opcode layout per Linux drivers/gpu/drm/amd/amdgpu/atom.c)."""
import struct,sys
d=open(sys.argv[1],'rb').read()
u8=lambda o:d[o]; u16=lambda o:struct.unpack_from('<H',d,o)[0]; u32=lambda o:struct.unpack_from('<I',d,o)[0]
atom=u16(0x48); cmd=u16(atom+0x1e); data=u16(atom+0x20)
ARG=['REG','PS','WS','FB','ID','IMM','PLL','MC']
ALIGN=['','[15:0]','[23:8]','[31:16]','[7:0]','[15:8]','[23:16]','[31:24]']
D2S=[[0,0,0,0],[1,2,3,0],[1,2,3,0],[1,2,3,0],[4,5,6,7],[4,5,6,7],[4,5,6,7],[4,5,6,7]]
WS={0x40:'QUOTIENT',0x41:'REMAINDER',0x42:'DATAPTR',0x43:'SHIFT',0x44:'OR_MASK',0x45:'AND_MASK',0x46:'FB_WINDOW',0x47:'ATTRIBUTES',0x48:'REGPTR'}
def grp(op,base,names): 
    for i,n in enumerate(names): OPS[base+i]=n
OPS={}
T=['REG','PS','WS','FB','PLL','MC']
for base,n in [(1,'MOVE'),(7,'AND'),(13,'OR'),(19,'SHL'),(25,'SHR'),(31,'MUL'),(37,'DIV'),(43,'ADD'),(49,'SUB'),(60,'CMP'),(74,'TEST'),(84,'CLEAR'),(92,'MASK'),(103,'XOR'),(109,'SHL2'),(115,'SHR2')]:
    for i,t in enumerate(T): OPS[base+i]=(n,{'REG':0,'PS':1,'WS':2,'FB':3,'PLL':6,'MC':7}[t])
SIMPLE={55:'SETPORT',56:'SETPORT_PCI',57:'SETPORT_SYSIO',58:'SETREGBLOCK',59:'SETFBBASE',66:'SWITCH',80:'DELAY_MS',81:'DELAY_US',82:'CALLTABLE',83:'REPEAT',90:'NOP',91:'EOT',98:'POSTCARD',99:'BEEP',100:'SAVEREG',101:'RESTOREREG',102:'SETDATABLOCK',121:'DEBUG',122:'PROCESSDS'}
JMP={67:'JMP',68:'JE',69:'JB',70:'JA',71:'JBE',72:'JAE',73:'JNE'}
class Dis:
    def __init__(s,start,size): s.start=start; s.size=size; s.end=start+size
    def operand(s,p,arg,align,asdst=False):
        a=ARG[arg]; sfx=ALIGN[align]
        if a=='REG': v=u16(p); return f"REG[{v:#06x}]{sfx}",p+2
        if a=='PS': v=u8(p); return f"PS[{v:#04x}]{sfx}",p+1
        if a=='WS': v=u8(p); return f"WS[{WS.get(v,hex(v))}]{sfx}",p+1
        if a=='ID': v=u16(p); return f"ID[{v:#06x}]{sfx}",p+2
        if a=='FB': v=u8(p); return f"FB[{v:#04x}]{sfx}",p+1
        if a=='PLL': v=u8(p); return f"PLL[{v:#04x}]{sfx}",p+1
        if a=='MC': v=u8(p); return f"MC[{v:#04x}]{sfx}",p+1
        if a=='IMM':
            if align==0: return f"{u32(p):#x}",p+4
            if align<=3: return f"{u16(p):#x}",p+2
            return f"{u8(p):#x}",p+1
    def run(s,out):
        p=s.start+6; targets=set(); lines=[]
        # pass 1 collects lines with raw absolute targets
        while p<s.end:
            op=u8(p); st=p; p+=1; txt=None
            if op in OPS:
                name,dst=OPS[op]; attr=u8(p); p+=1
                sa=(attr>>3)&7; da=(attr>>6)&3; sarg=attr&7
                dal=D2S[sa][da]
                base=name.rstrip('2')
                if name in('CLEAR','SHL2','SHR2'):
                    attr2=attr&0x38; dd,p=s.operand(p,dst,{0:0,1:1,2:1,3:1,4:4,5:4,6:4,7:4}.get(sa,0) if False else D2S[sa][0]) 
                    if name=='CLEAR': txt=f"CLEAR {T[[0,1,2,3,6,7].index(dst)]} {dd}"
                    else: 
                        sh=u8(p);p+=1; txt=f"{name[:3]} {dd}, {sh}"
                elif name in('SHL','SHR'):
                    dd,p=s.operand(p,dst,dal); sh=u8(p);p+=1; txt=f"{name} {dd}, {sh}"
                elif name=='MASK':
                    dd,p=s.operand(p,dst,dal); m,p=s.operand(p,5,sa); sv,p=s.operand(p,sarg,sa)
                    txt=f"MASK {dd}, &{m}, |{sv}"
                else:
                    dd,p=s.operand(p,dst,dal); sv,p=s.operand(p,sarg,sa)
                    txt=f"{name:5} {dd}, {sv}"
            elif op in JMP:
                t=u16(p);p+=2; targets.add(s.start+t); txt=f"{JMP[op]:5} L_{s.start+t:04x}"
            elif op in SIMPLE:
                n=SIMPLE[op]
                if n=='SETPORT': v=u16(p);p+=2; txt=f"SETPORT {'MM' if v==0 else 'IIO_'+hex(v)}"
                elif n in('SETPORT_PCI','SETPORT_SYSIO'): p+=1; txt=n
                elif n=='SETREGBLOCK': v=u16(p);p+=2; txt=f"SETREGBLOCK {v:#06x}"
                elif n=='SETFBBASE':
                    attr=u8(p);p+=1; sv,p=s.operand(p,attr&7,(attr>>3)&7); txt=f"SETFBBASE {sv}"
                elif n=='SWITCH':
                    attr=u8(p);p+=1; sv,p=s.operand(p,attr&7,(attr>>3)&7); txt=f"SWITCH {sv}"
                    cases=[]
                    while u16(p)!=0x5a5a:
                        if u8(p)==0x63:
                            p+=1; v,p=s.operand(p,5,(attr>>3)&7); t=u16(p);p+=2; targets.add(s.start+t); cases.append(f"{v}->L_{s.start+t:04x}")
                        else: break
                    p+=2; txt+="  { "+", ".join(cases)+" }"
                elif n in('DELAY_MS','DELAY_US'): v=u8(p);p+=1; txt=f"{n} {v}"
                elif n=='CALLTABLE': v=u8(p);p+=1; txt=f"CALLTABLE {v:#04x}"
                elif n=='POSTCARD': v=u8(p);p+=1; txt=f"POSTCARD {v:#04x}"
                elif n=='SETDATABLOCK': v=u8(p);p+=1; txt=f"SETDATABLOCK {'0' if v==0 else 'CMD_BASE' if v==255 else hex(v)}"
                elif n=='DEBUG': v=u8(p);p+=1; txt=f"DEBUG {v:#04x}"
                elif n=='PROCESSDS': v=u16(p);p+=2+v; txt=f"PROCESSDS skip {v}"
                elif n in('MUL32','DIV32'):
                    attr=u8(p);p+=1; dd,p=s.operand(p,2,D2S[(attr>>3)&7][(attr>>6)&3]); sv,p=s.operand(p,attr&7,(attr>>3)&7); txt=f"{n} {dd}, {sv}"
                else: txt=n
            else: txt=f".byte {op:#04x} ; unknown opcode"
            lines.append((st,txt))
            if txt=='EOT' and p>=s.end-0: pass
        for st,txt in lines:
            if st in targets: out.append(f"L_{st:04x}:")
            out.append(f"  {st:04x}: {txt}")
cmdn={0:'asic_init'}
def disas_cmd(i):
    o=u16(cmd+4+2*i); 
    out=[f"; ===== command table {i:#04x} @ {o:#06x} size={u16(o):#x} rev={d[o+2]}.{d[o+3]} ws={d[o+4]*4}B ps={(d[o+5]&0x7f)*4}B ====="]
    Dis(o,u16(o)).run(out); return "\n".join(out)
if __name__=='__main__':
    sz=u16(cmd); 
    for i in range((sz-4)//2):
        if u16(cmd+4+2*i): print(disas_cmd(i)); print()
