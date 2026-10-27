import struct,sys
d=open(sys.argv[1],'rb').read()
print("size",len(d))
# PCI image chain
off=0;i=0
while off<len(d):
    if d[off:off+2]!=b'\x55\xaa': print("no sig at",hex(off));break
    pcir=struct.unpack_from('<H',d,off+0x18)[0]
    p=off+pcir
    sig,ven,dev,_,plen,rev,cls0,cls1,cls2,ilen,crev,ctype,ind,mrt=struct.unpack_from('<4sHHHHBBBBHHBBH',d,p)
    print(f"image{i} @ {off:#x}: {sig} vendor={ven:#06x} dev={dev:#06x} codetype={ctype} ({'x86 BIOS' if ctype==0 else 'EFI' if ctype==3 else '?'}) len={ilen*512:#x} last={ind>>7}")
    off+=ilen*512;i+=1
    if ind&0x80:break
# ATOM header
atom=struct.unpack_from('<H',d,0x48)[0]
print("ATOM ROM hdr ptr",hex(atom))
sz,fmt,cont=struct.unpack_from('<HBB',d,atom)
sig=d[atom+4:atom+8]
print("hdr size",sz,"rev",fmt,cont,sig)
fields=struct.unpack_from('<HHHHHHHH',d,atom+8)
for n,v in zip("BIOSbootupmsg ptr,MasterCmdTbl,MasterDataTbl,ExtBIOS,PCIinfo,IOBase".split(','),fields): pass
(biosboot,pciinfo,mcmd_ptr,mdata_ptr)=struct.unpack_from('<HHHH',d,atom+8)[0:4]
print("raw hdr:",d[atom:atom+sz].hex())
