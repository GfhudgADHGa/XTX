// @category RDNA3
// Prints what auto-analysis found and dumps the function list.
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;
public class Report extends GhidraScript {
  @Override public void run() throws Exception {
    Listing l = currentProgram.getListing();
    int insns = 0, funcs = 0, data = 0;
    for (Instruction i : l.getInstructions(true)) insns++;
    for (Data d : l.getDefinedData(true)) data++;
    FunctionIterator fi = l.getFunctions(true);
    List<Function> fs = new ArrayList<>();
    while (fi.hasNext()) { fs.add(fi.next()); funcs++; }
    long covered = 0; for (Instruction i : l.getInstructions(true)) covered += i.getLength();
    println("REPORT instructions=" + insns + " functions=" + funcs + " defined_data_items=" + data + " bytes_covered_by_code=" + covered);
    String out = getScriptArgs().length > 0 ? getScriptArgs()[0] : "/tmp/functions.txt";
    try (PrintWriter w = new PrintWriter(out)) {
      for (Function f : fs) {
        int callers = 0; for (Reference r : getReferencesTo(f.getEntryPoint())) if (r.getReferenceType().isCall()) callers++;
        w.println(String.format("%s %s size=%d callers=%d", f.getEntryPoint(), f.getName(), f.getBody().getNumAddresses(), callers));
      }
    }
  }
}
