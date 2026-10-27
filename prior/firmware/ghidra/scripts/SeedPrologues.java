// @category RDNA3
// Seeds functions at compiled-C RV64 prologues: addi sp,sp,-N  ... sd ra,off(sp) within 8 instructions.
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.mem.*;
public class SeedPrologues extends GhidraScript {
  @Override public void run() throws Exception {
    Memory m = currentProgram.getMemory();
    AddressSetView init = m.getLoadedAndInitializedAddressSet();
    long end = currentProgram.getMemory().getBlock("ram").getEnd().getOffset() + 1;
    int seeded = 0, existing = 0;
    for (long a = 0; a + 36 < end; a += 4) {
      int w = m.getInt(toAddr(a));
      boolean addiSp = (w & 0x7f) == 0x13 && ((w >> 12) & 7) == 0 && ((w >> 7) & 0x1f) == 2 && ((w >> 15) & 0x1f) == 2 && (w >> 20) < 0;
      if (!addiSp) continue;
      boolean saveRa = false;
      for (int k = 1; k <= 8 && !saveRa; k++) {
        int x = m.getInt(toAddr(a + 4L * k));
        saveRa = (x & 0x7f) == 0x23 && ((x >> 12) & 7) == 3 && ((x >> 15) & 0x1f) == 2 && ((x >> 20) & 0x1f) == 1;
      }
      if (!saveRa) continue;
      Address f = toAddr(a);
      if (getFunctionAt(f) != null) { existing++; continue; }
      if (getFunctionContaining(f) != null) continue;      // inside something already recovered
      disassemble(f);
      if (createFunction(f, null) != null) seeded++;
    }
    println("SeedPrologues: seeded " + seeded + " new functions (" + existing + " already present)");
    analyzeChanges(currentProgram);
  }
}
