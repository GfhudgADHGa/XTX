// @category RS64
// Print uncovered non-zero ranges (start,end,words) and whether the first insn looks like a function prologue.
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
public class Gaps extends GhidraScript {
  @Override public void run() throws Exception {
    Listing l = currentProgram.getListing();
    MemoryBlock b = currentProgram.getMemory().getBlock(toAddr(0));
    long n = b.getSize(); byte[] buf = new byte[4];
    long start = -1, words = 0;
    StringBuilder sb = new StringBuilder();
    for (long a = 0; a <= n; a += 4) {
      boolean unc = false;
      if (a + 4 <= n) {
        b.getBytes(toAddr(a), buf);
        boolean z = buf[0]==0&&buf[1]==0&&buf[2]==0&&buf[3]==0;
        unc = !z && l.getInstructionAt(toAddr(a)) == null && !(l.getDataAt(toAddr(a)) != null && l.getDataAt(toAddr(a)).isDefined());
        if (z && start >= 0) unc = true; // zero words inside a gap
      }
      if (unc) { if (start < 0) { start = a; words = 0; } words++; }
      else if (start >= 0) { println(String.format("GAP %06x-%06x words=%d", start, a, words)); start = -1; }
    }
  }
}
