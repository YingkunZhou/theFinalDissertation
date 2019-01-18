package rv32_3stage

import chisel3._
import common.{CpuConfig, SimDTM}

class Top extends Module
{
   val io = IO(new Bundle{
      val success = Output(Bool())
   })

   implicit val my_conf = CpuConfig()
   val tile = Module(new Tile)
   val dtm = Module(new SimDTM).connect(clock, reset.toBool, tile.io.dmi, io.success)
}

object Top {
  def main(args: Array[String]): Unit = {
    chisel3.Driver.execute(args, () => new Top)
  }
}
