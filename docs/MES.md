# MES: the micro-engine scheduler (`gc_11_0_0_mes*.bin`)

MES runs on the same kind of RS64 core but, unlike PFP/ME/MEC, is **ordinary C compiled for a plain RV64 ABI** (835
`jal` calls in `mes.bin`, standard prologues, `wfi` for idling). It is linked at `0xfffffffff0000000` (code, entry at
`0x...5000`, trap vector at `0x...2000`) with data RAM at `0xfffffffff0100000`.

* `mes_2.bin`: scheduler pipe (`AMDGPU_MES_SCHED_PIPE`), 390 functions
* `mes.bin`: the legacy firmware the driver falls back to for the scheduler pipe, 308 functions
* `mes1.bin`: KIQ pipe; it has no scheduler API dispatcher, 119 functions

(Selection logic: `amdgpu_mes.c`, `amdgpu_mes_init_microcode()` loads `%s_mes_2.bin` for the scheduler pipe and `%s_mes1.bin` otherwise on GC 11, falling back to `%s_mes.bin`.)

## The scheduler API [verified against `mes_v11_api_def.h`]

Drivers submit 0x100-byte API frames to a ring of 32 slots (slot `n` at `ctx + 8 + n*0x100`; read pointer at
`ctx+0x31a8`, write pointer at `ctx+0x31a4`). `mes_process_api_packet` reads the frame header:

```c
if ((hdr & 0xf) != 1) return 0;          // MES_API_TYPE_SCHEDULER
switch ((hdr >> 4) & 0xff) {             // enum MES_SCH_API_OPCODE
case 0:  mes_api_set_hw_rsrc();          case 1:  mes_api_set_scheduling_config();
case 2:  mes_api_add_queue();            case 3:  mes_api_remove_queue();
case 4:  /* perform_yield */             case 5:  /* set_gang_priority_level */
...
case 14: switch (frame->subopcode) {     // MESAPI_MISC__*: write_reg, inv_gart, query_status, read_reg, wait_reg_mem, ...
```

Each case brackets its handler with `mes_trace_api(opcode, 0, 0)` / `mes_trace_api(opcode, 1, status)` and finally signals
`api_status.api_completion_fence_{addr,value}` (frame offsets +8 / +0x10) through `mes_signal_api_fence`.
`tools/mesnames.py` finds the dispatcher in each image and names the 20-odd handlers from the kernel's enum; the
mapping is in `ghidra/data/annot_mes*.tsv`. Opcodes 17 and 18 exist in the firmware but not in the public header.

The global context pointer lives in `g_mes_ctx` (`0xfffffffff013ab40` in `mes_2`, `0xfffffffff0100168` in `mes`).
