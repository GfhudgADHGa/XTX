// @category RDNA3
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
public class Gaps extends GhidraScript {
  @Override public void run() throws Exception {
    long hi = currentProgram.getMemory().getBlock("ram").getEnd().getOffset() + 1;
    int uncovered = 0, shown = 0; long firstGap = -1;
    java.util.Map<Integer,Integer> lowbits = new java.util.TreeMap<>();
    for (long a = 0x3000; a < hi; a += 4) {
      Address ad = toAddr(a);
      if (getInstructionAt(ad) != null || getInstructionContaining(ad) != null) continue;
      int w = currentProgram.getMemory().getInt(ad);
      if (w == 0) continue;
      uncovered++;
      lowbits.merge(w & 3, 1, Integer::sum);
      if (shown < 12) { println(String.format("GAP %06x: %08x  (data=%s)", a, w, getDataAt(ad))); shown++; }
    }
    println("GAPS uncovered non-zero words in dense range: " + uncovered + "  by low-2-bits: " + lowbits);
  }
}
