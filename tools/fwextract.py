#!/usr/bin/env python3
"""Split AMD gc_11_0_0_*.bin firmware containers into raw images.

usage: fwextract.py <fw.bin> <out_dir>

Writes, for <name> = basename without extension:
  <name>.image.bin  instruction section with the 0x100-byte signature header removed
                    (address 0 of this file is core address 0 for PFP/ME/MEC)
  <name>.header.bin the 0x100-byte signature header of the instruction section
  <name>.dhdr.bin   the 0x100-byte header of the data section
  <name>.data.bin   data RAM image (data section minus its 0x100-byte header; address 0x100000 for PFP/ME/MEC)
  <name>.json       header fields
Header layouts follow linux drivers/gpu/drm/amd/amdgpu/amdgpu_ucode.h:
  gfx_firmware_header_v2_0 (PFP/ME/MEC) and mes_firmware_header_v1_0 (MES).
"""
import json, os, struct, sys


def parse(d):
    size, hsz, vmaj, vmin, ipmaj, ipmin, uver, usz, uoff, crc = struct.unpack_from('<IIHHHHIIII', d, 0)
    meta = dict(file_size=size, header_size=hsz, header_version=f'{vmaj}.{vmin}',
                ip_version=f'{ipmaj}.{ipmin}', ucode_version=uver, crc32=crc)
    if (vmaj, vmin) == (2, 0):
        feat, isz, ioff, dsz, doff, slo, shi = struct.unpack_from('<IIIIIII', d, 32)
        meta.update(kind='gfx_v2_0', feature=feat, instr=(ioff, isz), data=(doff, dsz),
                    start_addr=(shi << 32) | slo)
    elif (vmaj, vmin) == (1, 0) and hsz == 72:
        v, isz, ioff, dv, dsz, doff, slo, shi, dslo, dshi = struct.unpack_from('<IIIIIIIIII', d, 32)
        meta.update(kind='mes_v1_0', feature=v, instr=(ioff, isz), data=(doff, dsz),
                    start_addr=(shi << 32) | slo, data_start_addr=(dshi << 32) | dslo)
    else:
        raise SystemExit(f'unsupported header {vmaj}.{vmin} size {hsz}')
    return meta


def main(path, out):
    d = open(path, 'rb').read()
    meta = parse(d)
    name = os.path.basename(path).rsplit('.', 1)[0]
    ioff, isz = meta['instr']
    doff, dsz = meta['data']
    sec = d[ioff:ioff + isz]
    os.makedirs(out, exist_ok=True)
    open(f'{out}/{name}.header.bin', 'wb').write(sec[:0x100])
    open(f'{out}/{name}.image.bin', 'wb').write(sec[0x100:])
    dat = d[doff:doff + dsz]
    open(f'{out}/{name}.dhdr.bin', 'wb').write(dat[:0x100])
    open(f'{out}/{name}.data.bin', 'wb').write(dat[0x100:])
    meta['instr_section_len'] = len(sec)
    meta['start_addr'] = hex(meta['start_addr'])
    if 'data_start_addr' in meta:
        meta['data_start_addr'] = hex(meta['data_start_addr'])
    json.dump(meta, open(f'{out}/{name}.json', 'w'), indent=1)
    print(name, meta)


if __name__ == '__main__':
    main(*sys.argv[1:3])
