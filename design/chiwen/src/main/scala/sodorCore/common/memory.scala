package sodorCore.common

import chisel3._
import chisel3.util.{BitPat, DecoupledIO, ValidIO}

trait MemoryOpConstants {
//  val MT_X  = BitPat("b???")
  val MT_X  = 0.U(3.W)
  val MT_B  = 1.U(3.W)
  val MT_H  = 2.U(3.W)
  val MT_W  = 3.U(3.W)
  val MT_D  = 4.U(3.W)
  val MT_BU = 5.U(3.W)
  val MT_HU = 6.U(3.W)
  val MT_WU = 7.U(3.W)

//  val M_X   = BitPat("b?")
  val M_X   = 0.U(1.W)
  val M_XRD = "b0".U(1.W) // int load
  val M_XWR = "b1".U(1.W) // int store

  val DPORT = 0
  val IPORT = 1
}

class MemReq(data_width: Int)(implicit val conf: Configure) extends Bundle with MemoryOpConstants {
  val addr = Output(UInt(conf.addrWidth.W))
  val data = Output(UInt(data_width.W))
  val fcn  = Output(UInt(M_X.getWidth.W))  // memory function code
  val typ  = Output(UInt(MT_X.getWidth.W)) // memory type
  override def cloneType = { new MemReq(data_width).asInstanceOf[this.type] }
}

class MemResp(data_width: Int) extends Bundle {
  val data = Output(UInt(data_width.W))
  override def cloneType = { new MemResp(data_width).asInstanceOf[this.type] }
}

class MemPortIO(data_width: Int)(implicit val conf: Configure) extends Bundle {
  val req = new DecoupledIO(new MemReq(data_width))
  val resp = Flipped(new ValidIO(new MemResp(data_width)))

  override def cloneType: MemPortIO.this.type = { new MemPortIO(data_width).asInstanceOf[this.type] }
}
