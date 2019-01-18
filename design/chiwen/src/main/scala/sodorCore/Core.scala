package sodorCore

import chisel3._
import sodorCore.common.{Configure, DebugCPath, DebugDPath, MemPortIO}

class CoreIO(implicit val conf: Configure) extends Bundle {
  val ddpath = Flipped(new DebugDPath())
  val dcpath = Flipped(new DebugCPath())
  val imem   = new MemPortIO(conf.datalen)
  val dmem   = new MemPortIO(conf.datalen)
}

class Core(implicit val conf: Configure) extends Module {
  val io = IO(new CoreIO())
  val c = Module(new CtrlPath())
  val d = Module(new DataPath())

}
