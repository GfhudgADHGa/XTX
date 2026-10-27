# RDNA3 (GC 11.0.0) microcontroller firmware: first pass

Source: `/lib/firmware/amdgpu/gc_11_0_0_{pfp,me,mec,mes,mes_2,mes1}.bin.zst` (linux-firmware 20261019).
Tool: `rv64dis.py` (this folder). Run: `python3 -I rv64dis.py <fw.bin.zst> <out_prefix>`; it writes `<prefix>.asm`, `.code.bin`, `.data.bin`.

## Not encrypted, and the instruction set is RISC-V 64

- The blobs have a standard `amdgpu` firmware header: PFP/ME/MEC use `gfx_firmware_header_v2_0` and MES uses `mes_firmware_header_v1_0`. They split into an instruction section and a data image (about 128-136 KiB each).
- Byte entropy is 3.3-6.1 bits per byte with a lot of zero padding, so the images are plain, not encrypted. They are presumably PSP-signed for loading, but readable.
- ISA identification, 2,500 random non-zero words from the PFP instruction section, each decoded in its own `llvm-mc` process:

| ISA | firmware decodes | random data decodes |
|---|---|---|
| **RISC-V 64 (IMAFD)** | **99.5%** | 6.8% |
| **RISC-V 64 (base I only)** | **99.1%** | 5.4% |
| RISC-V 32 | 67.4% | 5.7% |
| AArch64 | 18.1% | 28.4% |
| ARM A32 | 86.2% | 71.0% |
| MIPS64el | 51.9% | 64.3% |
| LoongArch64 | 61.9% | 36.6% |

  Only RV64 stands apart from random. The fraction of the non-zero words that decode is 99.5-99.8% for all six images.
- The decoded code is ordinary compiled C with the standard RV64 ABI: `addi sp,sp,-N`, `sd ra`, `sd s0..s2`, function bodies, `ld ra`, `ret`. Example (mes_2 at 0x5e30): a prologue, an MMIO read (`lui a4,4; add; lw a5,-728(a5)`), `andi a5,a5,256`, a branch and an epilogue.
- AMD calls this core "RS64". The evidence here is that its instruction stream is standard RV64, which fits the name. I did not check the extensions (the F/D results are not distinguishable from base I here) or any privileged or CSR usage.

## What is still unresolved

- **Stripped:** no symbols, no ELF, no debug strings. Names have to be recovered by hand or by analysis.
- **Address map:** the headers give start addresses (gfx: `0x70000_00003000`, MES: `0xfffffffff0005000`), but my listings use file offsets from 0. Jump targets, data references and MMIO addresses will only line up once the core's real load address is established.
- **Embedded data:** about 74-147 undecodable words per image (0.2-0.5%) are scattered across many opcode values, so they are mostly data inside the code section. 14 of them across all images are in the RISC-V `custom-0` opcode space, which could be a small set of custom instructions. Not verified.
- **Linear sweep:** the listing decodes every word, so data tables inside the code section appear as garbage instructions. A proper tool would start from the entry point and follow control flow.
- **Register naming:** the firmware reads and writes device registers by address. Mapping those to names needs the GC 11 register headers (public in the Linux kernel tree) and the core's own address map.
- **No use for modification:** loading changed firmware is blocked by signing. This is read-only analysis.
