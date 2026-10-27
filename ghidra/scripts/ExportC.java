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
    di.openProgram(currentProgram);
    try (PrintWriter w = new PrintWriter(new FileWriter(arg[0]))) {
      w.println("/* Decompiled by Ghidra " + currentProgram.getLanguageID() + " - " + currentProgram.getName() + " */\n");
      int ok = 0, bad = 0;
      for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
        if (monitor.isCancelled()) break;
        DecompileResults r = di.decompileFunction(f, to, monitor);
        w.println("/* ---- " + f.getName() + " @ " + f.getEntryPoint() + " size=" + f.getBody().getNumAddresses() + " ---- */");
        if (r.decompileCompleted()) { w.println(r.getDecompiledFunction().getC()); ok++; }
        else { w.println("/* DECOMPILE FAILED: " + r.getErrorMessage() + " */\n"); bad++; }
      }
      println("ExportC: ok=" + ok + " failed=" + bad);
    }
  }
}
