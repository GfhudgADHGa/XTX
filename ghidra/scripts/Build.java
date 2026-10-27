// @category RS64
// Build a loaded RS64 image: maps data RAM and the register windows, seeds entry points, runs analysis.
// args: <entries.tsv> <data.bin> <window-bases comma separated hex> [labels.tsv]
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.nio.file.*;
import java.util.*;

public class Build extends GhidraScript {
  private void window(String name, long base) throws Exception {
    Address a = toAddr(base - 0x800);
    try {
      MemoryBlock b = currentProgram.getMemory().createUninitializedBlock(name, a, 0x1000, false);
      b.setRead(true); b.setWrite(true); b.setExecute(false); b.setVolatile(true);
    } catch (Exception e) { println("window " + name + ": " + e.getMessage()); }
  }
  // Give every byte offset of every register window a clean label; drop analyzer-made DAT_ symbols/data there.
  private void labelWindows(String[] arg) throws Exception {
    Listing l = currentProgram.getListing();
    SymbolTable st = currentProgram.getSymbolTable();
    java.util.Map<Long,String> names = new java.util.HashMap<>();
    if (arg.length > 5 && !arg[5].isEmpty())
      for (String ln : Files.readAllLines(Paths.get(arg[5]))) {
        if (ln.startsWith("#") || ln.isBlank()) continue;
        String[] f = ln.split("\t"); names.put(Long.decode(f[0]), f[1]);
      }
    for (String s : arg[2].split(",")) {
      if (s.isEmpty()) continue;
      String[] kv = s.split("=");
      long base = Long.decode(kv[1]);
      for (long o = -0x800; o < 0x800; o++) {
        Address a = toAddr(base + o);
        l.clearCodeUnits(a, a, false);
        for (Symbol sy : st.getSymbols(a)) if (sy.getSource() != SourceType.USER_DEFINED || sy.getName().startsWith("DAT_")) sy.delete();
        String nm = names.get(o);
        if (kv[0].equals("tp") && nm == null && o < 0) continue;
        if (!kv[0].equals("tp") && nm == null) continue;
        if (nm == null) nm = String.format("TP_R%03X", o);
        st.createLabel(a, nm, SourceType.USER_DEFINED);
      }
    }
  }
  @Override public void run() throws Exception {
    String[] arg = getScriptArgs();
    Memory mem = currentProgram.getMemory();
    byte[] d0 = Files.readAllBytes(Paths.get(arg[1]));
    byte[] d = java.util.Arrays.copyOf(d0, 0x22000);   // data RAM is 0x22000 bytes; image is zero-extended
    MemoryBlock db = mem.createInitializedBlock("data", toAddr(0x100000L), new ByteArrayInputStream(d), d.length, monitor, false);
    db.setRead(true); db.setWrite(true); db.setExecute(false);
    for (String s : arg[2].split(",")) {
      if (s.isEmpty()) continue;
      String[] kv = s.split("=");
      window("win_" + kv[0], Long.decode(kv[1]));
    }
    // seeds, pass 1: reset / trap / PM4 dispatch handlers (roots are added after analysis)
    List<String> lines = Files.readAllLines(Paths.get(arg[0]));
    for (String l : lines) {
      if (l.startsWith("#") || l.isBlank()) continue;
      String[] f = l.split("\t");
      if (f[2].equals("root")) continue;
      Address a = toAddr(Long.decode(f[0]));
      disassemble(a);
      Function fn = getFunctionAt(a);
      if (fn == null) fn = createFunction(a, f[1]);
      else fn.setName(f[1], SourceType.USER_DEFINED);
    }
    if (arg.length > 3 && !arg[3].isEmpty()) {
      for (String l : Files.readAllLines(Paths.get(arg[3]))) {
        if (l.startsWith("#") || l.isBlank()) continue;
        String[] f = l.split("\t");
        currentProgram.getSymbolTable().createLabel(toAddr(Long.decode(f[0])), f[1], SourceType.USER_DEFINED);
      }
    }
    // stub-table switches: register computed-jump references so flow follows every stub
    if (arg.length > 4) {
      ReferenceManager rm = currentProgram.getReferenceManager();
      for (String l : Files.readAllLines(Paths.get(arg[4]))) {
        if (l.isBlank()) continue;
        String[] f = l.split("\t");
        Address from = toAddr(Long.decode(f[0]));
        for (String t : f[1].split(","))
          rm.addMemoryReference(from, toAddr(Long.decode(t)), RefType.COMPUTED_JUMP, SourceType.USER_DEFINED, 0);
      }
    }
    analyzeAll(currentProgram);
    // pass 2: code blocks nothing else reaches (found by tools/mkseeds.py) that analysis left undisassembled
    int added = 0;
    for (String l : lines) {
      if (l.startsWith("#") || l.isBlank()) continue;
      String[] f = l.split("\t");
      if (!f[2].equals("root")) continue;
      Address a = toAddr(Long.decode(f[0]));
      if (currentProgram.getListing().getInstructionAt(a) != null) continue;
      disassemble(a);
      if (getFunctionAt(a) == null) { createFunction(a, f[1]); added++; }
    }
    analyzeAll(currentProgram);
    println("Build: root functions added=" + added);
    labelWindows(arg);
    println("Build: functions=" + currentProgram.getFunctionManager().getFunctionCount());
  }
}
