// @category RDNA3
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
public class Diag extends GhidraScript {
  @Override public void run() throws Exception {
    Listing l = currentProgram.getListing();
    long hi = currentProgram.getMemory().getBlock("ram").getEnd().getOffset() + 1;
    int nonzero = 0, atInsn = 0, inInsn = 0, none = 0, len2 = 0, len4 = 0;
    for (Instruction i : l.getInstructions(true)) { if (i.getLength() == 2) len2++; else len4++; }
    for (long a = 0x3000; a < hi; a += 4) {
      Address ad = toAddr(a);
      if (currentProgram.getMemory().getInt(ad) == 0) continue;
      nonzero++;
      if (getInstructionAt(ad) != null) atInsn++;
      else if (getInstructionContaining(ad) != null) inInsn++;
      else none++;
    }
    println("DIAG memory max=" + toAddr(hi - 1) + " nonzero words in [0x3000,end)=" + nonzero + "  start-of-insn=" + atInsn + "  inside-insn=" + inInsn + "  NOT-covered=" + none + "   insn lengths: 4B=" + len4 + " 2B=" + len2);
  }
}
