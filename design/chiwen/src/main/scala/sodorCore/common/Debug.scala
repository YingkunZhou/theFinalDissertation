package sodorCore.common

import chisel3._

class DebugDPath(implicit val conf: Configure) extends Bundle
{
  // REG access
  val addr     = Output(UInt(conf.regWidth.W))
  val wdata    = Output(UInt(conf.datalen.W))
  val validreq = Output(Bool())
  val rdata    = Input(UInt(conf.datalen.W))
  val resetpc  = Output(Bool())
}

class DebugCPath(implicit val conf: Configure) extends Bundle {
  val halt = Output(Bool())
}