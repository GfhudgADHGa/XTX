# Ghidra analysis of the RDNA3 command-processor firmware (PFP, ME, MEC)

Project: `proj/RDNA3.gpr` (three programs: `pfp_image.bin`, `me_image.bin`, `mec_image.bin`). Open it with `ghidra` (Ghidra 12.1.2 from the Arch `extra` repo).
Language: `RISCV:LE:64:default`. Rebuild everything with the headless commands at the bottom.

## How the images map (worked out by hand, then confirmed by the decompiler)

| Item | Value | Evidence |
|---|---|---|
| Header block | first `0x100` bytes of the instruction section | contains the ASCII marker `$PS1`, high-entropy words (looks like a signature header) |
| Image base | address 0 = byte `0x100` of the instruction section | dense code starts at section offset `0x3100`, which is image `0x3000` = header `start_addr` low word |
| Reset entry | `0x3000` | `crt0`-style code |
| Trap handler | `0x1000` | saves registers, checks `*(tp+0x304) & 0x1f`, ends with `custom0` |
| Data image | mapped at `0x100000`, `0x22000` bytes | the reset code programs the region `0x100000`..`0x121fff`, and `gp = 0x101800` and the zeroed range `0x101040..0x101370` fall inside it |
| `tp` | `0x0002_0000_0000_0000` (`1<<49`) | set at reset; used as the base for every small-offset load/store in the handlers, so it is a device register window, not memory |
| Harts | several | `csrr mhartid`; non-zero harts spin on a flag until hart 0 has initialised |

## Decompiled `reset_entry` (condensed)

```c
tp = 0x2000000000000;                       // register window
*(tp+0x303) = 0x81; *(tp+0xa1) = 0x880; *(tp+0xb3) = 1; *(tp+0xbb) = 0xa50;
if (mhartid == 0) {                         // hart 0 programs address regions
    R[0x...1f3c] = 7; R[...1f40] = 0x100000; R[...1f44] = 0x21fff;   // data RAM
    R[...1f48] = 7; R[...1f4c] = 0;          R[...1f50] = 0x41fff;   // code RAM
} else { while (flag == 0) ; }              // other harts wait
gp = 0x101800;
for (p = 0x101040; p < 0x101370; p += 8) *p = 0;   // clear .bss
FUN_000098e8(mhartid);  FUN_00009bc8(mhartid, ...);   // init, then main loop
```

## Coverage

| Image | Instructions found | Bytes covered | Functions (heuristic) | with a direct caller |
|---|---|---|---|---|
| PFP | 20,074 | 80,148 | 934 | 101 |
| ME | 40,819 | 163,112 | 3,278 | 186 |
| MEC | 58,601 | 234,114 | 2,451 | 463 |

- Essentially every non-zero word in the dense range starts a valid instruction (99.9%+). A handful of 2-byte decodes come from Ghidra's default language including the compressed extension, which this firmware does not use.
- **The function counts are inflated**: recursive descent from the entry points finds only a few dozen real functions (for PFP: 22). The rest are blocks cut at every `j`/`jr`/`ret` by `SeedLinear.java`, which is a navigation aid, not a real function list.

## Why the call graph is so thin

- 42 indirect jumps in PFP. 23 are `ld a5,7(tp); jr a5` at the end of handlers: the next PC comes from a device register, so something outside the program (probably the packet-decode hardware) picks the next handler. Static analysis cannot follow this.
- 11 are `auipc t0,0; add t0,t0,a4; jr 12(t0)`: an inline switch into a table of 4-byte `j` stubs. These are resolvable but Ghidra does not do it for RISC-V.
- I searched the data image and the code section for tables of code addresses (32- and 64-bit) and found none.

## Custom instruction

The trap handler ends with a bare `0x0000000b`, i.e. the RISC-V `custom-0` opcode with all other fields zero. It also appears in other places: PFP at `0x10a0, 0x3c8c, 0x9c24, 0x10470`, ME at `0x1068, 0x3d60, 0x3dec, 0x25ab8`, MEC at `0x24170, 0x3ad10`. Three other custom-0 words with non-zero operand fields (`6fec910b`, `711d188b`, `8078458b`) are probably data. What `custom0` does is unknown. Its use at the end of the trap handler suggests a "return to hardware" or "yield" operation.

## Not done / next

- Resolve the 11 inline switches and seed their targets.
- Name the register-window accesses (offsets from `tp`) using the Linux GC 11 register headers and the core's own address map, which is not yet known.
- Work out what `*(tp+7)` really supplies (the hardware dispatch target).
- Compare PFP, ME and MEC for shared library code.
- Check `mes`, `mes_2` and `mes1`, which have a different start address (`0xfffffffff0005000`) and were not imported.

## Reproduce

```
export JAVA_HOME=/usr/lib/jvm/java-21-openjdk
/opt/ghidra/support/analyzeHeadless proj RDNA3 -import pfp_image.bin -loader BinaryLoader -loader-baseAddr 0x0 \
  -processor RISCV:LE:64:default -scriptPath scripts \
  -preScript AddData.java ../pfp.data.bin -preScript SeedEntries.java \
  -postScript SeedPrologues.java -postScript SeedLinear.java -postScript Report.java pfp_functions.txt
# decompile: -process pfp_image.bin -noanalysis -postScript Decomp.java 0x3000
```
`*_image.bin` = instruction section minus its first `0x100` bytes.
