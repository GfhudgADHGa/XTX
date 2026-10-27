// @category RDNA3
import ghidra.app.script.GhidraScript;
import ghidra.program.model.mem.*;
public class Blocks extends GhidraScript {
  @Override public void run() throws Exception {
    for (MemoryBlock b : currentProgram.getMemory().getBlocks())
      println("BLOCK " + b.getName() + " " + b.getStart() + "-" + b.getEnd() + " size=0x" + Long.toHexString(b.getSize()) + " init=" + b.isInitialized() + " perms=" + (b.isRead()?"r":"-") + (b.isWrite()?"w":"-") + (b.isExecute()?"x":"-"));
  }
}
