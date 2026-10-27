// @category RS64
// Seed the legacy x86 option ROM entry points (offsets within segment C000) and analyse.
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
public class SeedX86 extends GhidraScript {
  @Override public void run() throws Exception {
    long[] offs = {0x0003, 0x6000, 0x6134};
    String[] nms = {"rom_init_entry", "rom_init", "int10h_handler"};
    for (int i = 0; i < offs.length; i++) {
      Address a = toAddr(String.format("c000:%04x", offs[i]));
      disassemble(a);
      if (getFunctionAt(a) == null) createFunction(a, nms[i]);
    }
    analyzeAll(currentProgram);
    println("SeedX86: functions=" + currentProgram.getFunctionManager().getFunctionCount());
  }
}
