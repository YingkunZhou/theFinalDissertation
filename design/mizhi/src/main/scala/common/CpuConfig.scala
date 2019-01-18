package common

import chisel3._
import chisel3.util._

case class CpuConfig()
{
   val xprlen = 64
   val dataWidth = 64
   val instWidth = 32
   val addrWidth = 64
   val rvc = false
   val vm = false
   val usingUser = false
}

