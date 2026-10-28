// @category RS64
import ghidra.app.script.GhidraScript;
import ghidra.program.model.symbol.*;
import ghidra.program.model.mem.*;
public class Sym extends GhidraScript {
  @Override public void run() throws Exception {
    for (MemoryBlock b : currentProgram.getMemory().getBlocks()) println("BLOCK " + b.getName() + " " + b.getStart() + "-" + b.getEnd() + " v=" + b.isVolatile());
    for (String a : getScriptArgs()) {
      for (Symbol s : currentProgram.getSymbolTable().getSymbols(toAddr(Long.decode(a)))) println("SYM " + a + " " + s.getName() + " " + s.getSource());
      println("SYMCOUNT " + a + " " + currentProgram.getSymbolTable().getSymbols(toAddr(Long.decode(a))).length);
    }
  }
}
