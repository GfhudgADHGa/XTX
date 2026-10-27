# VBIOS dump: XFX Radeon RX 7900 XTX (Navi 31)

Dumped 2026-10-18 from `0000:2b:00.0` (`1002:744c`, rev c8) via the sysfs `rom` node.
Read-only: nothing was flashed. The ROM BAR was enabled for the read and set back to 0.

| | |
|---|---|
| File | `vbios.rom`, 57,856 bytes (0xE200) |
| SHA-256 | `a51a0a75…c0135151` (see `vbios.rom.sha256`) |
| Cross-check | `/sys/kernel/debug/dri/*/amdgpu_vbios` (the copy the driver holds) has an identical hash |
| Checksum | 8-bit byte sum = 0, so the ROM is intact |

## Identity (from strings and the ROM header)

| Field | Value |
|---|---|
| Board | `XFX D702_XTX_A0_24GB_XFX_APM6294_79XTACBD` |
| AMD part number | `113-31XFSHAS1-H03` |
| Build date | 07/17/23 05:39:25 |
| AtomBIOS version string | `ATOMBIOSBK-AMD VER022.001.002.031.000001` |
| Config file | `NAVI31.bin` |
| Embedded firmware tag | `NAVI31_PRODUCTION_AMD_PRD006B_E_000423.sbin` |
| Builder tag | `ta-yumar` (at 0x362) |
| Subsystem ID | `1eae:7901` (XFX), from the ATOM ROM header |
| Memory part numbers | `K4ZAF325BC` (Samsung GDDR6 prefix) and `H56G42AS8DX014` (SK hynix GDDR6 prefix) |

The BIOS carries entries for both memory vendors. Which one the board actually populates isn't visible in the ROM.

## Layout

| Range | Contents |
|---|---|
| 0x0000–0x03FF | PCI ROM header, `PCIR` structure, ATOM ROM header (0x394), strings |
| 0x0500 | Master Data Table (rev 2.1, 35 slots, 22 populated) |
| 0x0500–0x4200 | Data tables: firmwareinfo, smu_info, gfx_info, vram_info (4.8 KB), voltage objects, display objects, GPIO LUT, SMC DPM info (0x1CC) and others |
| 0x4270 | Master Command Table: only 5 of 79 slots populated (0x00, 0x06, 0x16, 0x35, 0x42) |
| 0x6000–0x9FFF | 16-bit x86 legacy code (`jmp` at 0x3 goes to 0x6000, an INT 10h handler that pushes registers and ends in `lret`) |
| 0x9540 | VBE info block (`AMD ATOMBIOS`, copyright, OEM string `NAVI33`, `VESA` mode list). `NAVI33` is a leftover template string, not the real chip. |
| ~0xA000–0xE1FF | VGA fonts and mode tables |

The PCI image chain contains only one legacy x86 image (code type 0). Its `PCIR` indicator byte says it is not the last image, but nothing follows it in either the sysfs or the debugfs copy. A UEFI GOP image may exist on the SPI flash chip and not be exposed to the OS. Getting it would need a flash-chip read (for example `amdvbflash`).

## Decoded data tables

**firmwareinfo (v3.4):**
- Firmware revision `0x1601021F`.
- Boot memory clock 1125 MHz. Boot GFX clock is 0, because the SMU sets it.
- Boot voltages: VDDC 700 mV, VDDCI 750 mV, MVDDC 1350 mV.
- BIOS scratch registers start at dword offset `0x4C`.

**smu_info (v4.0):** a block of clock and limit values in 10 kHz units, for example 1200 MHz, 1000 MHz, 400 MHz and 100 MHz. I did not decode what each one means, so the hex is in the dump scripts' output only.

**gfx_info (v3.0):** the leading byte pattern `0b | 06 | 08 | 02 | 04 | 02` fits GC 11.x, 6 shader engines and 2 shader arrays per engine. That matches Navi 31 (6 SE × 2 SA × 8 WGP = 96 CUs). This is inferred from the shape. I did not verify the field layout.

**displayobjectinfo (v1.5):** four connector objects, consistent with the usual 3×DisplayPort + 1×HDMI card.

**gpio_pin_lut (v2.1):** 21 eight-byte pin entries (not individually decoded).

## AtomBIOS command tables (`atom_command_tables.asm`)

| Table | Size | What it does |
|---|---|---|
| 0x00 `asic_init` | 0x84 | If a status bit in `PS[0]` is clear, polls reg `0x58184` for `0x80000000`, with a 4 s timeout (200,000 × 20 µs). Then sets bits in a few registers depending on data blocks 9 and 0x16. |
| 0x06 | 0x4B | A 4-way `SWITCH` on `PS[0]` that returns a register value (regs `0x0de3`, `0x0de7`, `0x0de8`, or an indexed read through `0x0c`/`0x0d`). |
| 0x16 | 0x44 | Reads regs at `0x6a3b0`/`0x6a3b4` through the index/data pair and fills `PS[0..2]` with defaults if the values are inconsistent. |
| 0x35 | 0x15B | Programs a window of registers (`0x451a4`–`0x451b8`), then polls `0x450c8` for bit 31. Has an alternate path through `0x58184`/`0x45200`. |
| 0x42 | 0x433 | The largest table. Sets up buffers in the data block, programs about 20 registers (`0x3656`–`0x36c0`), and polls pointer registers `0x3696`/`0x3697` and status `0x36a3` with timeouts of 1–8 s. It looks like it feeds a ring-buffer-style interface. |

How reliable this is:
- The disassembler (`tools/atomdis.py`) is my own, written from the AtomBIOS opcode layout in the Linux kernel's `atom.c`.
- It produced zero unknown opcodes, every branch lands on an instruction boundary, and every table ends in `EOT`.
- Register numbers are raw dword indices and are not mapped to register names.
- I only named `asic_init`. The other command-table roles are descriptions of behaviour, not confirmed names.

## Not covered

- No register-name resolution (needs the matching Navi 31 register headers).
- The `smc_dpm_info` v5.0 table (0x1CC bytes, power and fan limits) is not decoded.
- Voltage object contents (VDDGFX/VDDCI/MVDD controller setup) are not decoded.
- The 16-bit x86 code is only disassembled linearly (`x86_legacy_0x6000-0xa000.asm`), without separating code from data.
- Data-table names come from the `atomfirmware.h` v2.1 slot order as I remember it. The sizes and revisions of the decoded tables match plausible values, but treat the names as likely, not certain.

## Files

- `vbios.rom`: raw dump
- `atom_command_tables.asm`: disassembly of the 5 command tables
- `x86_legacy_0x6000-0xa000.asm`: linear 16-bit x86 disassembly
- `tools/`: `atomdis.py`, `tables.py`, `dtab.py` and `parse.py` (run with `python3 -I <script> vbios.rom`)
