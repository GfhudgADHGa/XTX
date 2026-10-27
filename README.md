# Radeon RX 7900 XTX (Navi 31): firmware reverse engineering

Goal: turn the firmware of an XFX RX 7900 XTX into readable code. This repository contains the tooling, the decompiled
output, and the documentation of what was found. It builds on an earlier first pass, preserved untouched in
[`prior/`](prior/) (see [`docs/CORRECTIONS.md`](docs/CORRECTIONS.md) for what changed).

**What you get is annotated pseudo-C, not the original source.** Function bodies are produced by Ghidra's decompiler;
what this project adds is everything around it: correct memory maps, recovered entry points and switches, hardware
register names, packet-FIFO operations as calls, PM4 opcode names, and the scheduler API names. Names that are guesses
are marked as such in the docs.

## What is covered

| component | where | status |
|---|---|---|
| **CP firmware: PFP, ME, MEC** (RS64 = RV64G cores) | [`decomp/pfp.c`](decomp/pfp.c), [`me.c`](decomp/me.c), [`mec.c`](decomp/mec.c) | whole image decompiled (138 / 924 / 218 functions); PM4 handlers named from the kernel's `PACKET3_*`; ~85% of MMIO addresses resolved to register names; core-local ports named; per-handler annotation is ongoing |
| **MES scheduler** (`mes`, `mes_2`, `mes1`) | [`decomp/mes*.c`](decomp/) | whole image decompiled; scheduler API handlers named from `mes_v11_api_def.h` ([`docs/MES.md`](docs/MES.md)) |
| **VBIOS AtomBIOS data tables** | [`vbios/tables/`](vbios/tables/) | 9 of 22 decoded field-by-field with the kernel's structs, the rest as hex dumps |
| **VBIOS command tables** (5 populated) | [`vbios/atom_command_tables.c`](vbios/atom_command_tables.c) | decompiled with register names; roles identified ([`docs/VBIOS.md`](docs/VBIOS.md)) |
| **VBIOS 16-bit option ROM** | [`vbios/x86_legacy_raw.c`](vbios/x86_legacy_raw.c) | mechanical Ghidra decompile (249 functions), not yet annotated |

**Not covered** (not in the VBIOS dump, and not part of the RS64 CP set): PSP/SOS, SMU/PMFW, SDMA, RLC, VCN, DMCUB
firmware (they are separate blobs in linux-firmware, and some are encrypted/signed differently), and the UEFI GOP image
(absent from the dumped ROM). Nothing here can modify or flash firmware; the images are PSP-signed.

## Key findings

* The CP cores are **plain RISC-V RV64G** with core-local registers reached through a fixed `tp` base. PM4 packet handling is
  driven by a **hardware dispatch table** the firmware fills at start-up: that is why the call graph looks empty. ([`docs/RS64_CORE.md`](docs/RS64_CORE.md))
* The firmware container has **two** `$PS1` headers (code and data); the data RAM image starts 0x100 bytes into the data section.
* GPU register addresses in the firmware resolve to named registers once **calibrated per-IP segment bases** are applied
  (GC, LSDMA, MP0, MMHUB, NBIO). The bases were verified against addresses the VBIOS itself lists. ([`docs/REGISTER_MAP.md`](docs/REGISTER_MAP.md))
* The VBIOS `asic_init` waits up to 4 s for the PSP bootloader (`MP0_SMN_C2PMSG_33` bit 31); another table is an **LSDMA PIO copy/fill**
  routine; the memory config is 24 x GDDR6 channels (Samsung or SK hynix module tables) and 6 SE x 2 SA x 8 WGP of compute.

## Reproducing everything

Requirements: Python 3 (`pip install capstone`), Java 21, [Ghidra 11.3.x](https://github.com/NationalSecurityAgency/ghidra/releases), `llvm-mc` optional.

```sh
export GHIDRA=/path/to/ghidra_11.3.2_PUBLIC
tools/build_all.sh              # firmware -> images -> seeds -> Ghidra -> decomp/*.c  (about 6 minutes)
python3 tools/vbios_tables.py prior/vbios.rom ghidra/data/atomfirmware.h vbios/tables   # needs the kernel header
python3 tools/atomdec.py prior/vbios.rom > vbios/atom_command_tables.c
```

The firmware blobs in `fw/` are the unmodified `gc_11_0_0_*.bin` from linux-firmware. Kernel headers used as references are
cached in `ghidra/data/ipregs/` and `ghidra/data/pm4_opcodes.json`.

## Layout

```
docs/        architecture notes, register map, VBIOS and MES notes, corrections to the earlier pass
decomp/      readable C per firmware image; decomp/raw/ is Ghidra's unprocessed output
fw/          source firmware blobs; fw/out/ = extracted code/data images
ghidra/      language variants (install_langs.py), headless scripts (scripts/), entry-point + name tables (data/)
tools/       extraction, entry-point discovery, post-processing, VBIOS decoders (see the docstring at the top of each)
vbios/       decoded VBIOS tables, command tables, x86 option ROM
prior/       the earlier session's material, unmodified
```

How names are added: edit the TSV files in `ghidra/data/` (`names_<core>.tsv` for core registers, `annot_<core>.tsv` for
function names/docs and per-function variable renames, `cfgregs_<core>.tsv` for configuration registers) and re-run
`tools/postproc.py <core> decomp/raw/<core>.c decomp/<core>.c`.
