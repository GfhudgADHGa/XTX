// @category RS64
// Decompile the functions at the given addresses (hex) and print C to the log.
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
public class DecompFn extends GhidraScript {
  @Override public void run() throws Exception {
    DecompInterface di = new DecompInterface();
    di.openProgram(currentProgram);
    for (String arg : getScriptArgs()) {
      Function f = getFunctionAt(toAddr(Long.decode(arg)));
      if (f == null) f = getFunctionContaining(toAddr(Long.decode(arg)));
      if (f == null) { println("DECOMP no function at " + arg); continue; }
      DecompileResults r = di.decompileFunction(f, 120, monitor);
      println("DECOMP ===== " + f.getName() + " @ " + f.getEntryPoint() + " =====\n" + (r.decompileCompleted() ? r.getDecompiledFunction().getC() : "FAILED: " + r.getErrorMessage()));
    }
  }
}
