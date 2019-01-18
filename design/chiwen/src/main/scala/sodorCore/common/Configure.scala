package sodorCore.common

import chisel3.util.log2Ceil

case class Configure() {
  val datalen   = 32
  val instlen   = 32
  val addrWidth = 32
  val regNum    = 32
  val regWidth  = log2Ceil(regNum)
  val rvc       = false
  val vm        = false
  val usingUser = false
}

