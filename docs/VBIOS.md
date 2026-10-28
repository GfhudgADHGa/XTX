# VBIOS (AtomBIOS) of the XFX RX 7900 XTX

Source: `prior/vbios.rom` (57 856 bytes, `113-31XFSHAS1-H03`, build 07/17/23). Identity facts (board, part number, subsystem
`1eae:7901`) are in `prior/REPORT.md` and were re-checked. This document covers the parts decoded here.

| file | what |
|---|---|
| `vbios/tables/*.txt`, `INDEX.md` | all 22 populated data tables: 9 decoded field-by-field with the kernel structs, 13 as annotated hex dumps |
| `vbios/atom_command_tables.c` | the 5 command tables as C-like code, with register names |
| `vbios/x86_legacy_raw.c` | Ghidra decompile of the 16-bit option ROM (249 functions), unannotated |
| `tools/vbios_tables.py`, `tools/cstruct.py` | decoder driven by the kernel's `atomfirmware.h` structs |
| `tools/atomdec.py` | command-table decompiler written from the semantics in `atom.c` |

## Data tables (`vbios/tables/`)

The decoder parses `atomfirmware.h` (181 structs) and applies the right struct per `(slot, format.content revision)`.
Highlights [all decoded from the ROM; field names are the kernel's]:

* **firmwareinfo 3.4**: firmware revision `0x1601021f`, boot MCLK 1125 MHz, boot VDDC 700 mV / VDDCI 750 mV / MVDDC 1350 mV,
  BIOS scratch registers at `0x4c`, PP table id `0xf3a`.
* **smu_info 4.0**: boot clocks (GFXCLK bypass 1200 MHz, USR 1000, CSR 400, core ref 100 MHz, SOC 600, FCLK 1000, DCEF 662,
  etc.), SYSPLL VCOs, SMU init register values (thermal/fan/pump/SMBus timing).
* **gfx_info 3.0**: GC IP 11.x, **6 shader engines x 2 shader arrays x 8 WGPs**, 4 RBs per SE, LSDMA register addresses
  (these were what let `tools/ipregs.py` calibrate the LSDMA base).
* **umc_info 3.3 / vram_info 3.0**: GDDR6 (`vram_type 0x70`), **24 channels** (`channel_num 0x18`, 384-bit), `dram_size_per_ch`
  `0x400` (MB: 24 x 1 GiB = the card's 24 GB), four memory p-states (UCLK 1125 / 773 / 457 / 97 MHz), two vendor modules: Samsung `K4ZAF325BC`
  (vendor id 1) and SK hynix `H56G42AS8DX014` (id 6), each with its own timing tables. Which one is populated cannot be
  told from the ROM.
* **dce_info 4.5**: `hw_chip_id 0x744c`, DCN 2.x/3.x, 4 display pipes, 5 PHYs, 5 AUX pairs, boot DISPCLK 625 MHz.
* **displayobjectinfo 1.5**: four paths: three DisplayPort connectors (object ids `0x3113`, `0x3213`, `0x3313`) and
  one HDMI-A (`0x340c`).
* **gpio_pin_lut 2.1**, **vram_usagebyfirmware 2.1** (`start_address_in_kb`, used by command table `0x42`).

Tables without a matching public struct (slots 3, 5, 7, 9, 13, 17, 18, 25, 33; `smc_dpm_info` 5.0 (0x1cc); `lcd_info` 3.1;
`voltageobject_info` 5.0; `indirectioaccess` 1.1) are emitted as annotated hex dumps. The kernel only defines `smc_dpm_info` up to 4.10.

## Command tables (`vbios/atom_command_tables.c`)

The master command table has 79 slots and only five are populated:

| slot | size | what it does (from the decompiled code) |
|---|---|---|
| `0x00` `asic_init` | 0x84 | (1) unless `PS[0]` bit 26 is set (and only if data-table slot 9 is present), **poll `MP0_SMN_C2PMSG_33` for bit 31** (PSP bootloader ready), 200 000 x 20 us = 4 s; (2) if `displayobjectinfo.supporteddevices & 2`, set bit 1 of `BIOS_SCRATCH_0` (reg `0x4c`); (3) read `RCC_CONFIG_MEMSIZE` and, if non-zero, write `(size-1) >> 11` to `BIF_BX_PF0_MM_INDEX_HI` (reg 6, the upper address bits for indirect register access) and set bit 9 of `BIOS_SCRATCH_7` (reg `0x53`) |
| `0x06` | 0x4b | `switch (PS[0] & 0xff)`: 0 = SMN read at `(0x4050000 + PS[0]>>16)*4`; 1/3/2 = read `RCC_CONFIG_MEMSIZE` / `RCC_CONFIG_APER_SIZE` / `RCC_CONFIG_REG_APER_SIZE` |
| `0x16` | 0x44 | read `MMMC_VM_FB_LOCATION_BASE/TOP` through SMN; if BASE > TOP return the default `0x8000/0x90/0x800f` |
| `0x35` | 0x15b | **LSDMA copy/fill**: optionally adds the FB base (calling `0x16`), programs `LSDMA_PIO_SRC/DST_ADDR_LO/HI`, `PIO_COMMAND` (and `PIO_CONSTFILL_DATA` for constant fill when `cmd & 0xfc000000 == 0x80000000`), then polls `LSDMA_PIO_STATUS`; alternate path sets up `LSDMA_QUEUE0_RB_BASE/CNTL` after waiting for `MP0_SMN_C2PMSG_33` |
| `0x42` | 0x433 | firmware-reserved-VRAM setup: reads `vram_usagebyfirmware`, uses table `0x35` to clear/copy regions, programs four 64 KiB regions at `+0x20000/+0x40000/+0x50000/+0x60000` into registers `0x3656..0x36c0` and a ring (`0x3696/0x3697` pointers, `0xdeaddead` sentinel). Those registers (an engine outside GC) are not in the public headers [inferred role] |

`asic_init` is the only one the driver calls by name; the others are helper tables it calls (`CALLTABLE`).

## 16-bit x86 option ROM

Entry at ROM offset 3 (`jmp 0x6000`, init), INT 10h handler at `0x6134`, a `PMID` structure at `0x60fe`. The INT 10h
dispatcher reads `AH`: `0xA0` -> AMD vendor services (`0x617c`), `0x4F` -> VBE (`0x9442`), everything else -> standard VGA
(`0x99dc`). Ghidra recovers 249 functions across the 16 KiB code region; the output is a mechanical decompile with no
annotation yet. The ROM contains **no UEFI GOP image** (the previous analysis noted the PCI image chain says "not the
last image" but nothing follows; a GOP image would have to come from a flash read).
