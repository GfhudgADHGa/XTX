// @category RDNA3
// Seeds the two entry points found by hand before auto-analysis runs.
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
public class SeedEntries extends GhidraScript {
  @Override public void run() throws Exception {
    long[] addrs = {0x3000L, 0x1000L};
    String[] names = {"reset_entry", "trap_handler"};
    for (int i = 0; i < addrs.length; i++) {
      Address a = toAddr(addrs[i]);
      disassemble(a);
      if (getFunctionAt(a) == null) createFunction(a, names[i]);
      println("seeded " + names[i] + " @ " + a);
    }
  }
}
