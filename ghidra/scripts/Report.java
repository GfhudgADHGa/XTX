// @category RS64
// Coverage report: instructions, bytes in non-zero words not covered by any instruction, function count.
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
public class Report extends GhidraScript {
  @Override public void run() throws Exception {
    Listing l = currentProgram.getListing();
    MemoryBlock b = currentProgram.getMemory().getBlock(currentProgram.getMemory().getBlocks()[0].getStart());
    long n = b.getSize(), nz = 0, cov = 0;
    byte[] buf = new byte[4];
    for (long a = 0; a + 4 <= n; a += 4) {
      b.getBytes(b.getStart().add(a), buf);
      if (buf[0] == 0 && buf[1] == 0 && buf[2] == 0 && buf[3] == 0) continue;
      nz++;
      if (l.getInstructionAt(b.getStart().add(a)) != null) cov++;
    }
    int fns = currentProgram.getFunctionManager().getFunctionCount();
    println("REPORT nonzero_words=" + nz + " covered=" + cov + " functions=" + fns);
  }
}
