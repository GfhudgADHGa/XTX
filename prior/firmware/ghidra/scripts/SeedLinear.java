// @category RDNA3
// Linear-sweep the dense code range, then start a new function after every instruction with no fall-through.
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import java.util.*;
public class SeedLinear extends GhidraScript {
  @Override public void run() throws Exception {
    long lo = 0x3000, hi = currentProgram.getMemory().getBlock("ram").getEnd().getOffset() + 1;
    int dis = 0;
    for (long a = lo; a < hi; a += 4) {
      Address ad = toAddr(a);
      if (getInstructionAt(ad) != null) continue;
      if (getDataAt(ad) != null && getDataAt(ad).isDefined()) continue;
      if (currentProgram.getMemory().getInt(ad) == 0) continue;
      if (disassemble(ad)) dis++;
    }
    println("COUNT after sweep: " + currentProgram.getListing().getNumInstructions());
    println("SeedLinear: linearly disassembled " + dis + " additional runs");
    int made = 0;
    Listing l = currentProgram.getListing();
    List<Address> starts = new ArrayList<>();
    Instruction prev = null;
    for (Instruction i : l.getInstructions(toAddr(lo), true)) {
      if (i.getAddress().getOffset() >= hi) break;
      if (prev != null && !prev.hasFallthrough() && prev.getMaxAddress().next() != null && prev.getMaxAddress().next().equals(i.getAddress()))
        starts.add(i.getAddress());
      prev = i;
    }
    for (Address s : starts) {
      if (getFunctionContaining(s) != null && getFunctionContaining(s).getEntryPoint().equals(s)) continue;
      if (getFunctionAt(s) == null && createFunction(s, null) != null) made++;
    }
    println("COUNT after createFunction: " + currentProgram.getListing().getNumInstructions());
    println("SeedLinear: created " + made + " functions at block boundaries");
    analyzeChanges(currentProgram);
    println("COUNT after analyzeChanges: " + currentProgram.getListing().getNumInstructions());
  }
}
