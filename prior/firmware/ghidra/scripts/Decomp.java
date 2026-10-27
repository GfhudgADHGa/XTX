// @category RDNA3
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
public class Decomp extends GhidraScript {
  @Override public void run() throws Exception {
    DecompInterface di = new DecompInterface();
    di.openProgram(currentProgram);
    for (String arg : getScriptArgs()) {
      Function f = getFunctionAt(toAddr(Long.decode(arg)));
      if (f == null) { println("DECOMP no function at " + arg); continue; }
      DecompileResults r = di.decompileFunction(f, 60, monitor);
      println("DECOMP ===== " + f.getName() + " @ " + f.getEntryPoint() + " =====\n" + (r.decompileCompleted() ? r.getDecompiledFunction().getC() : "FAILED: " + r.getErrorMessage()));
    }
  }
}
