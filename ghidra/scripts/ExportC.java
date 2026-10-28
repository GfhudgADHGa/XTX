// @category RS64
// Decompile every function and write one C file. args: <out.c> [timeoutSeconds]
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import java.io.*;
public class ExportC extends GhidraScript {
  @Override public void run() throws Exception {
    String[] arg = getScriptArgs();
    int to = arg.length > 1 ? Integer.parseInt(arg[1]) : 60;
    DecompInterface di = new DecompInterface();
    ghidra.app.decompiler.DecompileOptions opts = new ghidra.app.decompiler.DecompileOptions();
    opts.setMaxPayloadMBytes(1000);
    di.setOptions(opts);
    di.openProgram(currentProgram);
    try (PrintWriter w = new PrintWriter(new FileWriter(arg[0]))) {
      w.println("/* Decompiled by Ghidra " + currentProgram.getLanguageID() + " - " + currentProgram.getName() + " */\n");
      int ok = 0, bad = 0;
      for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
        if (monitor.isCancelled()) break;
        DecompileResults r = di.decompileFunction(f, to, monitor);
        String note = "";
        if (!r.decompileCompleted()) {
          // The native decompiler can crash on switch recovery; retry with computed jumps treated as call+return.
          int n = 0;
          for (ghidra.program.model.listing.Instruction ins : currentProgram.getListing().getInstructions(f.getBody(), true))
            if (ins.getFlowType().isComputed() && ins.getFlowType().isJump()) {
              ins.setFlowOverride(ghidra.program.model.listing.FlowOverride.CALL_RETURN); n++;
            }
          if (n > 0) {
            di.closeProgram(); di.openProgram(currentProgram); di.setOptions(opts);
            r = di.decompileFunction(f, to, monitor);
            note = r.decompileCompleted() ? "/* NOTE: switch recovery disabled for this function (decompiler crashed on it); " + n + " indirect jumps shown as calls */\n" : "";
          }
        }
        w.println("/* ---- " + f.getName() + " @ " + f.getEntryPoint() + " size=" + f.getBody().getNumAddresses() + " ---- */");
        if (r.decompileCompleted()) { w.print(note); w.println(r.getDecompiledFunction().getC()); ok++; }
        else { w.println("/* DECOMPILE FAILED: " + r.getErrorMessage() + " */\n"); bad++; }
      }
      println("ExportC: ok=" + ok + " failed=" + bad);
    }
  }
}
