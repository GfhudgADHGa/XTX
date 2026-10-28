#!/usr/bin/env python3
"""Decode the AtomBIOS `smc_dpm_info` v5.0 table (SMU 13.0.x BoardTable_t).

usage: smc_dpm_decode.py <vbios.rom> [table_offset_hex]

The kernel (smu_v13_0_0_ppt.c, smu_v13_0_0_append_powerplay_table) treats this table as
    struct { atom_common_table_header; BoardTable_t BoardTable; }
and memcpy()s it into the PPTable. BoardTable_t is defined in
pm/swsmu/inc/pmfw_if/smu13_driver_if_v13_0_0.h (natural alignment, not packed). Constants:
NUM_I2C_CONTROLLERS=8, SVI_PLANE_COUNT=5, MEM_VENDOR_COUNT=16.
In this VBIOS the table ends at BoardSpare[]; the trailing MmHubPadding[8] of the kernel struct is absent.
"""
import struct, sys

I2C_NAME = ['VR_GFX', 'VR_SOC', 'VR_VMEMP', 'VR_VDDIO', 'LIQUID0', 'LIQUID1', 'PLX', 'FAN_INTAKE']
I2C_THROTTLER = ['NONE', 'VR_GFX', 'VR_SOC', 'VR_VMEMP', 'VR_VDDIO', 'LIQUID0', 'LIQUID1', 'PLX', 'FAN_INTAKE', 'INA3221']
I2C_SPEED = ['FAST_50K', 'FAST_100K', 'FAST_400K', 'FAST_PLUS_1M', 'HIGH_1M', 'HIGH_2M']
SVI_PLANE = ['GFX', 'SOC', 'VMEMP', 'VDDIO_MEM', 'U']
MEM_VENDOR = ['PLACEHOLDER0', 'SAMSUNG', 'INFINEON', 'ELPIDA', 'ETRON', 'NANYA', 'HYNIX', 'MOSEL', 'WINBOND', 'ESMT',
              'PLACEHOLDER1', 'PLACEHOLDER2', 'PLACEHOLDER3', 'PLACEHOLDER4', 'PLACEHOLDER5', 'MICRON']

# (name, type, count); type in u8/i8/u16/u32 ; layout = natural alignment, as the C compiler would
FIELDS = [
    ('Version', 'u32', 1),
    ('I2cControllers', 'i2c', 8),
    ('VddGfxVrMapping', 'u8', 1), ('VddSocVrMapping', 'u8', 1), ('VddMem0VrMapping', 'u8', 1), ('VddMem1VrMapping', 'u8', 1),
    ('GfxUlvPhaseSheddingMask', 'u8', 1), ('SocUlvPhaseSheddingMask', 'u8', 1),
    ('VmempUlvPhaseSheddingMask', 'u8', 1), ('VddioUlvPhaseSheddingMask', 'u8', 1),
    ('SlaveAddrMapping', 'u8', 5), ('VrPsiSupport', 'u8', 5), ('PaddingPsi', 'u8', 5), ('EnablePsi6', 'u8', 5),
    ('SviTelemetryScale', 'svi', 5),
    ('VoltageTelemetryRatio', 'u32', 5),
    ('DownSlewRateVr', 'u8', 5),
    ('LedOffGpio', 'u8', 1), ('FanOffGpio', 'u8', 1), ('GfxVrPowerStageOffGpio', 'u8', 1),
    ('AcDcGpio', 'u8', 1), ('AcDcPolarity', 'u8', 1), ('VR0HotGpio', 'u8', 1), ('VR0HotPolarity', 'u8', 1),
    ('GthrGpio', 'u8', 1), ('GthrPolarity', 'u8', 1),
    ('LedPin0', 'u8', 1), ('LedPin1', 'u8', 1), ('LedPin2', 'u8', 1), ('LedEnableMask', 'u8', 1),
    ('LedPcie', 'u8', 1), ('LedError', 'u8', 1),
    ('UclkTrainingModeSpreadPercent', 'u8', 1), ('UclkSpreadPadding', 'u8', 1), ('UclkSpreadFreq', 'u16', 1),
    ('UclkSpreadPercent', 'u8', 16),
    ('GfxclkSpreadEnable', 'u8', 1),
    ('FclkSpreadPercent', 'u8', 1), ('FclkSpreadFreq', 'u16', 1),
    ('DramWidth', 'u8', 1), ('PaddingMem1', 'u8', 7),
    ('HsrEnabled', 'u8', 1), ('VddqOffEnabled', 'u8', 1), ('PaddingUmcFlags', 'u8', 2),
    ('PostVoltageSetBacoDelay', 'u32', 1), ('BacoEntryDelay', 'u32', 1),
    ('FuseWritePowerMuxPresent', 'u8', 1), ('FuseWritePadding', 'u8', 3),
    ('BoardSpare', 'u32', 63),
]
SIZES = {'u8': (1, 'B'), 'i8': (1, 'b'), 'u16': (2, 'H'), 'u32': (4, 'I')}


def decode(rom, off):
    size, fr, cr = struct.unpack_from('<HBB', rom, off)
    pos = 4; out = []
    for name, ty, cnt in FIELDS:
        if ty == 'i2c':
            ents = []
            for _ in range(cnt):
                ents.append(dict(zip(['Enabled', 'Speed', 'SlaveAddress', 'ControllerPort', 'ControllerName',
                                      'ThermalThrotter', 'I2cProtocol', 'PaddingConfig'], rom[off + pos:off + pos + 8])))
                pos += 8
            out.append((name, ents, pos - 8 * cnt))
        elif ty == 'svi':
            ents = []
            for _ in range(cnt):
                o, _p, m = struct.unpack_from('<bBH', rom, off + pos); ents.append((o, m)); pos += 4
            out.append((name, ents, pos - 4 * cnt))
        else:
            sz, f = SIZES[ty]
            pos = (pos + sz - 1) // sz * sz
            vals = list(struct.unpack_from('<%d%s' % (cnt, f), rom, off + pos))
            out.append((name, vals if cnt > 1 else vals[0], pos)); pos += sz * cnt
    return size, (fr, cr), pos, out


def main():
    rom = open(sys.argv[1], 'rb').read()
    off = int(sys.argv[2], 16) if len(sys.argv) > 2 else struct.unpack_from('<H', rom, struct.unpack_from('<H', rom, 0x48)[0] + 0x20)[0]
    if len(sys.argv) <= 2:   # master data table slot 2 = smc_dpm_info
        md = struct.unpack_from('<H', rom, struct.unpack_from('<H', rom, 0x48)[0] + 0x20)[0]
        off = struct.unpack_from('<H', rom, md + 4 + 2 * 2)[0]
    size, rev, end, fields = decode(rom, off)
    assert rev == (5, 0), f'unexpected revision {rev}'
    assert end == size, f'layout ends at {end:#x} but table size is {size:#x}: struct layout wrong'
    print(f'# smc_dpm_info @ {off:#06x}  size {size:#x}  rev {rev[0]}.{rev[1]}  = BoardTable_t of SMU 13.0.x (kernel smu13_driver_if_v13_0_0.h)')
    print(f'# layout check: fields end exactly at the table size; kernel struct has a further 32-byte MmHubPadding that this table lacks')
    print()
    for name, v, o in fields:
        if name == 'I2cControllers':
            print(f'[{o:#05x}] I2cControllers[8]:')
            for i, e in enumerate(v):
                nm = I2C_NAME[e['ControllerName']] if e['ControllerName'] < 8 else e['ControllerName']
                th = I2C_THROTTLER[e['ThermalThrotter']] if e['ThermalThrotter'] < 10 else e['ThermalThrotter']
                sp = I2C_SPEED[e['Speed']] if e['Speed'] < 6 else e['Speed']
                print(f'   [{i}] {"ENABLED " if e["Enabled"] else "disabled"} name={nm:10} throttler={th:9} speed={sp:8} '
                      f'slave={e["SlaveAddress"]:#04x} port={e["ControllerPort"]} protocol={e["I2cProtocol"]}')
        elif name == 'SviTelemetryScale':
            print(f'[{o:#05x}] SviTelemetryScale[5]: ' + ', '.join(f'{SVI_PLANE[i]}: offset {x[0]} A, max {x[1]} A' for i, x in enumerate(v)))
        elif name == 'UclkSpreadPercent':
            print(f'[{o:#05x}] UclkSpreadPercent[16] (by memory vendor): ' + ', '.join(f'{MEM_VENDOR[i]}={x}' for i, x in enumerate(v) if x))
            if not any(v): print('      (all zero)')
        elif name == 'VoltageTelemetryRatio':
            print(f'[{o:#05x}] VoltageTelemetryRatio[5] (Q16.16): ' + ', '.join(f'{SVI_PLANE[i]}={x / 65536:g}' for i, x in enumerate(v)))
        elif name == 'BoardSpare':
            nz = [(i, x) for i, x in enumerate(v) if x]
            print(f'[{o:#05x}] BoardSpare[63]: ' + ('all zero' if not nz else ', '.join(f'[{i}]={x:#x}' for i, x in nz)))
        elif isinstance(v, list):
            if name.startswith('Padding') or name.endswith('Padding'):
                print(f'[{o:#05x}] {name}: {"all zero" if not any(v) else v}')
            else:
                print(f'[{o:#05x}] {name}[{len(v)}]: ' + (', '.join(f'{SVI_PLANE[i]}={x:#x}' for i, x in enumerate(v)) if len(v) == 5 else str(v)))
        else:
            print(f'[{o:#05x}] {name}: {v:#x}' if v > 9 else f'[{o:#05x}] {name}: {v}')


main()
