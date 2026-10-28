// @category RS64
// Split functions larger than a threshold at the targets of their computed jumps (switch cases):
// each target becomes its own function so the decompiler can cope. args: [minBytes=16384]
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.util.*;
public class SplitBig extends GhidraScript {
  @Override public void run() throws Exception {
    long min = getScriptArgs().length > 0 ? Long.decode(getScriptArgs()[0]) : 16384;
    FunctionManager fm = currentProgram.getFunctionManager();
    ReferenceManager rm = currentProgram.getReferenceManager();
    List<Function> big = new ArrayList<>();
    for (Function f : fm.getFunctions(true)) if (f.getBody().getNumAddresses() >= min) big.add(f);
    for (Function f : big) {
      Set<Address> targets = new TreeSet<>();
      for (Address a : f.getBody().getAddresses(true)) {
        Instruction ins = currentProgram.getListing().getInstructionAt(a);
        if (ins == null || !ins.getFlowType().isComputed()) continue;
        for (Reference r : ins.getReferencesFrom())
          if (r.getReferenceType().isJump() && f.getBody().contains(r.getToAddress())) targets.add(r.getToAddress());
      }
      // also jump-table targets found by the decompiler are only known after decompilation; use the stub references
      int n = 0;
      for (Address t : targets) {
        if (t.equals(f.getEntryPoint()) || fm.getFunctionAt(t) != null) continue;
        createFunction(t, f.getName() + "_case_" + t.toString().replaceAll("^.*:", "").replaceAll("^f+", ""));
        n++;
      }
      println("SplitBig: " + f.getName() + " size=" + f.getBody().getNumAddresses() + " -> created " + n + " case functions");
    }
  }
}
