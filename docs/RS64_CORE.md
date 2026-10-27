# The RS64 command-processor cores of Navi 31 (GC 11.0.0)

This document describes the machine model that the decompiled firmware in `decomp/` runs on. Everything here was
derived from the firmware images themselves (`fw/gc_11_0_0_*.bin`, the same files that linux-firmware ships),
cross-checked against public kernel headers where possible. Each claim carries a confidence tag:

* **[verified]**: reproduced by a script in `tools/`, or confirmed by two independent pieces of evidence
* **[strong]**: consistent across all images and with public headers, but not independently proven
* **[inferred]**: a reading of observed behaviour; the name or role may be wrong

## 1. What the firmware files are

Six images of one family. "RS64" is AMD's name for the embedded 64-bit core inside the CP; the instruction set is
**RISC-V RV64IMAFD without the compressed extension** [verified: every non-zero word in the dense code region decodes
as a 4-byte RV64G instruction, `llvm-mc`/capstone/Ghidra agree].

| file | core | role | notes |
|---|---|---|---|
| `gc_11_0_0_pfp.bin` | PFP | prefetch parser: first stage of the gfx PM4 pipeline | 136 functions |
| `gc_11_0_0_me.bin`  | ME  | micro engine: second stage of the gfx pipeline | 923 functions (many unrolled switch cases) |
| `gc_11_0_0_mec.bin` | MEC | compute micro engine (one image runs on every MEC pipe) | 218 functions |
| `gc_11_0_0_mes.bin`, `mes_2.bin`, `mes1.bin` | MES | micro-engine scheduler: user-queue/process scheduling | `mes_2` = scheduler pipe, `mes1` = KIQ pipe, `mes` = legacy fallback for the scheduler pipe (see `docs/MES.md`) |

Container format [verified]: `gfx_firmware_header_v2_0` (PFP/ME/MEC) or `mes_firmware_header_v1_0` (MES) from
`amdgpu_ucode.h`. Two sections:

* **instruction section**: a 0x100-byte signature header (a 16-byte signature blob, then the ASCII tag `$PS1`
  at +0x10, the firmware version at +0x60 (PFP `0xa50`, ME `0x9a6`, MEC `0xa78`, MES_2 `0x88`: equal to `ucode_version`
  in the container header where that is set) and the image size at +0x6c) followed by the code. The code image
  *starts after the header*: image offset 0 is core address 0.
* **data section**: **also has its own 0x100-byte `$PS1` header**. The RAM image is `data_section[0x100:]` and is loaded
  at core address `0x100000`. (The earlier analysis in `prior/` mapped the whole section, header included, at
  `0x100000`, which shifted every data read by 0x100 bytes. That is why its jump tables looked like garbage.)

The images are not encrypted. They are signed (PSP loads them), so this is read-only analysis.

## 2. Address map (PFP/ME/MEC) [verified from the reset code]

```
0x0000_0000 .. 0x0004_1fff   code RAM   (image loaded at 0; reset vector 0x3000, trap vector 0x1000)
0x0010_0000 .. 0x0012_1fff   data RAM   (initial image from the data section; stack top 0x121c00; gp = 0x101800)
0x0002_0000_0000_0000 + off  "TP window": core-local register file. tp = 1<<49 is a *fixed global register*
0x0001_<space>_<hi32> ..      MMIO window: byte-addressed GPU register space (see docs/REGISTER_MAP.md)
0x0003_0000_0000_8xxx         "W3 window" (PFP: s7 base) small SRAM-like state, writes are followed by TP_R1FF = 0
```

The reset code programs two memory-protection regions through registers in the `0x1_0001_0000_1f3c..` block
(attributes `7` = RWX, base/limit pairs `0x100000/0x21fff` and `0/0x41fff`) [verified]. MEC does the same through the
documented registers `CP_MEC_LOCAL_APERTURE`, `CP_MEC_LOCAL_BASE0_LO/HI` and `CP_MEC_LOCAL_MASK0_*`, which identifies
the block as the RS64 local-aperture/MPU configuration [strong].

Several harts run the same image (`csrr mhartid`); hart 0 does the one-time setup while the others spin on `TP_R31C`.
PFP addresses per-pipe registers with `(mhartid & 3)`, which suggests 4 harts (one per pipe) [inferred].

### Fixed global registers [verified]
The firmware is compiled with a number of registers reserved as constants, set once in the reset sequence and never
modified again. Ghidra normally cannot see this, so `ghidra/install_langs.py` creates one language variant per core
whose processor spec declares the values as *tracked registers*. That is what lets the decompiler fold `tp+0x302`
into a named constant address instead of printing pointer arithmetic.

| reg | PFP | ME | MEC |
|---|---|---|---|
| `tp` | `0x2_0000_0000_0000` | same | same |
| `gp` | `0x101800` | same | same |
| `s7` | `0x3_0000_0000_8000` (W3 window) | `0xf1_0000_0000_0000` | normal register |
| `s8` | `0x73_0001_0000_0000` (handler-done port) | `0x1_0000_0000_0000` | normal register |
| `s9`,`s10`,`s11` | MMIO window bases | MMIO window bases | MMIO window bases |

## 3. The `tp` window: how packets move [verified: structure; inferred: some names]

`tp` is not memory. Loads and stores relative to `tp` hit a byte-addressed bank of core-local ports, with offsets that
are *not* aligned (`sw x, 0x303(tp)`). The access width (`lw`, `lwu`, `ld`, `sd`) selects the transfer size. The same
*roles* exist in every core, at different offsets (`ghidra/data/names_<core>.tsv`):

| role | PFP | ME | MEC | behaviour |
|---|---|---|---|---|
| `PKT_IN` | `0x302` | `0x302` | `0x6f8` | **pop** the next dword of the current PM4 packet (32-bit `lwu`, 64-bit `ld`) [verified] |
| `PKT_OUT` | `0x000` | (none) | (none) | **push** a dword to the downstream FIFO towards ME. Only PFP forwards packets; 1483 write sites incl. PM4 headers like `0xc0004b00` [verified] |
| `NEXT_HANDLER` | `0x007` | `0x005` | `0x010` | read after popping a header: address of the handler registered for that opcode [verified] |
| `DISPATCH_TABLE_WR` | `0x0ac` | `0x098` | `0x5f8` | write `(opcode<<20) \| handler` to register a handler; 128/128/96 stores at start-up [verified] |
| `ADDR_XLATE` | `0x073` | `0x073` | `0x390` | write a 64-bit GPU virtual address, read back a pointer the core can dereference [strong] |
| store barrier | `0x1ff` | `0x010`, `0x1ff` | ? | written `0` after stores, e.g. `W3_x = 0; TP_R1FF = 0;` [inferred] |
| packet done | `0x38b` | `0x38b` | ? | written `0` at the end of packets [inferred] |

### Hardware packet dispatch [verified]
The firmware is **not** a main loop with a `switch` on the opcode. At start-up (`FUN_00008fb8` in PFP) it installs
one entry per PM4 opcode: `DISPATCH_TABLE_WR = (opcode << 20) | (handler & 0xfffff)`; hardware then resolves the
handler for each header. The cores use it in two styles:

* **PFP: tail dispatch.** A handler ends with `hdr = PKT_IN; goto *NEXT_HANDLER;` (`ld a5,7(tp); jr a5`), written
  `pm4_next()` in the decompiled code. Control never returns.
* **ME and MEC: dispatcher loop.** `while (1) { hdr = PKT_IN; (*NEXT_HANDLER)(hdr); }` (`FUN_00003d48` in ME, `0x24168` in
  MEC; MEC parks the hart first with `custom0()` when `TP_R020` is non-zero). Handlers *return*. Written
  `pm4_call_next()` in the output.

That is why a static call graph from the reset vector finds only a few dozen functions: 91 (PFP), 100 (ME) and 57 (MEC)
handler entry points are reachable only through this table. The post processor names them from the kernel's
`PACKET3_*` constants, e.g. `pm4_WRITE_DATA_handler` at `0x9c70` in PFP.

`tools/mkentries.py` finds the table-install code in each image and evaluates it symbolically to extract the
`(opcode, handler)` pairs; `tools/mkseeds.py` then adds the remaining entry points and resolves the computed jumps.

Opcodes that are not public PM4 packets also appear in the table: `0x0d`, `0x0e`, `0xb0`..`0xbd`, `0xd0`/`0xd1`, `0xfc`/`0xfd`,
`0xff`. `0x0e` is a large **command interpreter** (the first body dword selects a sub-command; 20 KB in PFP, 63 KB in
MEC) and looks like the firmware's internal event/queue-management interface rather than a draw or copy packet.

### Handlers receive their own header
At entry `a0` holds the packet header just popped (`hdr`); the handler pops the body dwords itself. In PFP's
`pm4_WRITE_DATA_handler`:

```c
control = pkt_in();
if (((control >> 30) & 1) == 0) { pkt_out(hdr); pkt_out(control); ...forward to ME... }
else switch ((control >> 8) & 0xf) {      // dst_sel
  case 0:        // register  -> *(MMIO + (dst_reg*4)) = pkt_in() for each body dword
  case 2, 5:     // memory    -> ADDR_XLATE = addr; *ptr = pkt_in() ...; wr_confirm (bit 20) polls TP_R324
  default: hang;                  // `j 0` self-loop: assertion for unsupported combinations
}
```

The `j .` self-loops ("Do nothing block with infinite loop" in Ghidra) are deliberate asserts for impossible cases.

## 4. Control-flow idioms the decompiler needed help with

| idiom | where | how it is handled |
|---|---|---|
| `auipc t0,0; add t0,t0,idx; jalr zero,t0,12` into a run of 4- or 8-byte `j`/`bXX; j` stubs | 11 sites in PFP, 130 in ME | `tools/mkseeds.py` locates the stub run; `Build.java` adds computed-jump references so Ghidra recovers a real `switch` |
| gcc relative jump table: `auipc;addi;slli;add;lw;add;jr` with 32-bit offsets in data RAM | everywhere | solved by mapping the data image correctly (+0x100); Ghidra then resolves them natively |
| `ld a5,7(tp); jr a5` | end of every handler | rewritten to `pm4_next()` / `pm4_dispatch(hdr)` |
| `unimp` (`0xc0001073`) | after unreachable paths | treated as a terminator |
| `custom0` (`0x0000000b`) | 5 sites per core | modelled by Ghidra as a p-code op; see below |

### `custom0` and `wfi`
The PFP/ME/MEC cores use RISC-V `custom-0` where a normal core would use `wfi`. The pattern is always
`x = <core register>; custom0();` at the head of a wait/idle loop, followed by a FIFO pop (PFP: `TP_R00B`, ME: `TP_R012`,
MEC: `TP_R020`). The behaviour is consistent with *park this hart until an event arrives / yield the pipeline* [inferred].
MES uses the standard `wfi` [verified].

## 5. Things the decompiler cannot know

* The `TP_Rxxx` registers are undocumented. Names are given only where behaviour is clear; the rest keep the neutral
  `TP_R<offset>` name.
* Arguments of the hardware-level handlers are the header dword (`hdr`) in `a0`; other registers (`a1…`) are often
  live-in state set by the previous handler (Ghidra shows these as `param_2`…).
* Some "functions" are just shared tails of handlers (basic blocks reached by `j`); Ghidra treats them as separate
  functions called by `thunk_`/`FUN_` stubs.

See `docs/REGISTER_MAP.md` for how MMIO addresses were resolved and `docs/MES.md` for the scheduler firmware.
