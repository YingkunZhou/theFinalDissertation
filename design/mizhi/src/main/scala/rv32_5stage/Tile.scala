//**************************************************************************
// RISCV Processor Tile
//--------------------------------------------------------------------------
//

package rv32_5stage

import chisel3._
import common.{AsyncScratchPadMemory, CpuConfig, DMIIO, DebugModule}


class Tile(implicit val conf: CpuConfig) extends Module
{
   val io = IO(new Bundle {
      val dmi = Flipped(new DMIIO())
   })

   val core   = Module(new Core())
   core.io := DontCare
   val memory = Module(new AsyncScratchPadMemory(num_core_ports = 2, data_Width = conf))
   val debug = Module(new DebugModule())

   core.io.dmem <> memory.io.core_ports(0)
   core.io.imem <> memory.io.core_ports(1)
   debug.io.debugmem <> memory.io.debug_port

   core.reset := debug.io.resetcore | reset.toBool
   debug.io.ddpath <> core.io.ddpath
   debug.io.dcpath <> core.io.dcpath
   debug.io.dmi <> io.dmi
}

