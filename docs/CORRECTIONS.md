# What changed relative to the earlier analysis (`prior/`)

The first pass (kept unmodified in `prior/` for reference) was a good start, but several of its central conclusions turned
out to rest on one wrong assumption. The corrections, in order of impact:

1. **The data section has its own 0x100-byte header.** `prior/` mapped the entire data section, header included, at
   `0x100000`; the real RAM image starts at section offset `0x100`. Every data read, and in particular every jump table,
   was misaligned by 0x100 bytes. With the right mapping, the gcc relative jump tables resolve exactly onto the
   branch-trampoline blocks ("unreachable roots") that looked like orphaned code.
2. **"No tables of code addresses" is not the whole story.** Handler addresses are not stored in memory tables; they are
   built with `auipc/addi` and written one by one to a dispatch-table register (`tp+0xac` PFP, `tp+0x98` ME,
   `tp+0x5f8` MEC) as `(opcode<<20)|handler`. 91/100/57 handlers hang off these tables, and they have PM4 opcodes, so
   they can be named.
3. **Function counts.** `prior/` listed 934/3278/2451 "functions" (blocks cut at every `j`). The real numbers after
   recovering entry points, switches and jump tables are 136 (PFP), 923 (ME), 218 (MEC), with 94% (ME), 97% (PFP) and 98% (MEC) of the
   non-zero code words covered by instructions.
4. **The 11 "inline switches" are `auipc/add/jalr` jumps into runs of `j` or `bXX; j` stubs.** PFP has 11 of them, ME 130, MEC 5, MES 1.
   They are now resolved.
5. **The `tp` window is not an anonymous "device register window".** It carries the packet FIFO ports (pop/push), the
   hardware dispatch port, store barriers, a 64-bit address-translate port, etc. (`docs/RS64_CORE.md`). `custom0` is the
   yield/park primitive used at the head of wait loops.
6. **The `0x1_0000_xxxx_xxxx` windows are GPU register space** (byte addressed; GC, NBIO, LSDMA, MP0, MMHUB), and most of
   the addresses resolve to named registers once the segment bases are known (`docs/REGISTER_MAP.md`).
7. **MES** was previously left unimported. It is ordinary C code (not the PM4 microcode style) and its scheduler API
   dispatcher matches `mes_v11_api_def.h`.
8. **VBIOS.** The earlier report left `smu_info`, `smc_dpm_info`, voltage objects and the 16-bit code undecoded and named
   several slots from memory. Slot names now come from `atomfirmware.h`; 9 of the 22 data tables are decoded field-by-field with the kernel's structs (the other 13 are annotated hex dumps); the command
   tables are named (`asic_init`'s 4 s poll is on **`MP0_SMN_C2PMSG_33`**, table `0x35` is an **LSDMA PIO copy/fill**, table
   `0x16` reads the **MMHUB framebuffer location**), and the `REG[0x0c]/REG[0x0d]` index/data pair is recognised as SMN access.

Things from `prior/` that were confirmed as correct: RS64 = RV64G without compression; reset vector `0x3000` and trap
vector `0x1000`; data RAM at `0x100000` with `gp = 0x101800` and sp `0x121c00`; the `tp` constant; the `custom0` encoding;
the identity facts and checksums of the VBIOS.
