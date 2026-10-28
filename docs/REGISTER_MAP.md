# Register naming: how addresses become names

The decompiled firmware touches hardware through absolute addresses. Names come from the register headers in the Linux
kernel (`drivers/gpu/drm/amd/include/asic_reg/**/*_offset.h`, copied to `ghidra/data/ipregs/`), but those headers give
*offsets relative to a per-IP segment base*, and the bases for Navi 31 are not in any static kernel header (the driver
reads them from the GPU's IP-discovery table at run time). So the bases below were **calibrated from the firmware
itself**: a base is accepted only if addresses that the VBIOS or CP firmware actually uses land on registers whose names
fit what the code is doing.

`absolute dword address = segment_base[BASE_IDX] + register offset`; byte address = 4 x that.

| IP | header | segment bases (dwords, by BASE_IDX) | calibration evidence |
|---|---|---|---|
| GC | `gc_11_0_0_offset.h` | `0x1260, 0xA000, 0x1C000, 0x2402C00` | CP firmware addresses: `0x30100` = `SCRATCH_REG0`, `0xc82c` = `CP_HQD_ACTIVE`, `0x8010` = `GRBM_STATUS`, `0xc290` = `CP_PFP_PRGRM_CNTR_START`. 63-89% of the MMIO addresses in PFP/ME/MEC/MES resolve |
| LSDMA | `lsdma_6_0_0_offset.h` | `0x11400` | VBIOS `gfx_info` lists `regaddr_lsdma_queue0_rb_rptr/_hi/wptr/_hi` = `0x11483/4/5/6`, `lsdma_command` = `0x1146f`, `lsdma_status` = `0x11432`; offsets in the header are `0x83/4/5/6`, `0x6f` (`PIO_CONTROL`), `0x32` (`PIO_STATUS`): five anchors, one base |
| MP0 | `mp_13_0_0_offset.h` | `0x16000, ...` | `asic_init` polls SMN byte address `0x58184` = dword `0x16061` = `MP0_SMN_C2PMSG_33` (offset `0x61`) for bit 31 |
| MMHUB | `mmhub_3_0_0_offset.h` | `0x1A000, ...` | command table `0x16` reads `0x6a3b0`/`0x6a3b4` = dwords `0x1a8ec/ed` = `MMMC_VM_FB_LOCATION_BASE/TOP` |
| NBIO | `nbio_4_3_0_offset.h` | `0x0, 0x14, 0xD20, 0x10400, ...` | `asic_init` reads dword `0xde3` = segment 2 (`0xd20`) + `0xc3` = `RCC_CONFIG_MEMSIZE`; `firmwareinfo.bios_scratch_reg_startaddr` = `0x4c` = `BIF_BX0_BIOS_SCRATCH_0`; `0xb0` = `FW_SCRATCH_12`; the PFP/ME `HDP_FLUSH` handler writes NBIO `GPU_HDP_FLUSH_REQ`/`DONE` |

Entries marked `...` have more segments in the real chip that no address in these firmwares exercises.
`tools/ipregs.py` is the single place where the table lives.

## Address format seen in the CP firmware

The CP cores address registers through a 64-bit window: `0x0001_<hi16>_<lo32>`

* `lo32` is the **byte offset** of the register.
* bit 48 selects the MMIO window; `hi16` selects the register bank/view and carries pipe/instance bits.
  Values seen: `0x0000` plain GC registers (PFP/ME), `0x0001` (MEC register file / RS64 configuration block),
  `0x0002` the context-register view (`VGT_DMA_*` etc.), `0x0008` MEC-local (`CP_MEC_LOCAL_*`).
  Per-instance selection is done by adding `(pipe << 36)`-style terms to a base read from `MMIO_BASE` [inferred].

The post-processor names these as `reg<NAME>` (GC), `reg<IP>_<NAME>` (other IPs) with the view as a suffix
(`_s1`, `_ctx`, `_s8`), and falls back to `MMIO<view>_<lo32>` when no public header knows the register.
Many of the unresolved ones are CP-internal control registers that are not in the public headers at all
(e.g. byte `0xc6c8`, used 116 times in PFP, and the neighbouring `0xc60c`/`0xc6ec`/`0xc6f0`).

## AtomBIOS register operands

* `REG[x]` operands are dword indices in the BAR5 aperture (plus the current `reg_block`);
* the `REG[0x0c]`/`REG[0x0d]` pair is an **index/data pair into the SMN bus**: `REG[0xc] = addr; REG[0xd]` reads or writes the
  SMN register at *byte* address `addr`. `tools/atomdec.py` folds this to `SMN[...]`.
