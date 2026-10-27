// @category RDNA3
// Maps the firmware's data image at 0x100000 (region programmed by the reset code: 0x100000..0x121fff).
import ghidra.app.script.GhidraScript;
import ghidra.program.model.mem.*;
import java.io.*;
import java.nio.file.*;
public class AddData extends GhidraScript {
  @Override public void run() throws Exception {
    byte[] d = Files.readAllBytes(Paths.get(getScriptArgs()[0]));
    MemoryBlock b = currentProgram.getMemory().createInitializedBlock("data", toAddr(0x100000L), new ByteArrayInputStream(d), d.length, monitor, false);
    b.setRead(true); b.setWrite(true); b.setExecute(false);
    println("AddData: mapped " + d.length + " bytes at " + b.getStart());
  }
}
