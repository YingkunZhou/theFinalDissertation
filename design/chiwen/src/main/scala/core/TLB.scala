package core

import chisel3._

class PTE


class TLB(val vir_width: Int, val phy_width: Int) extends Module {
  val io = IO(new Bundle {
    val virAddr = Input(UInt(vir_width.W))
    val phyAddr = Output(UInt(phy_width.W))
  })

  def ppn(vpn: UInt) = {
    val data = getData(vpn)
    if ()
  }

}
