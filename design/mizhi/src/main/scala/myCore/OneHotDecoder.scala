package myCore

import chisel3._

class OneHotDecoder(val w: Int) extends Module {
  val io = IO(new Bundle {
    val in = Input(UInt(w.W))
    val out = Output(UInt(math.pow(2,w).toInt.W))
  })
  val pow2 = math.pow(2,w).toInt

  val bools = Wire(Vec(pow2, Bool()))

  for (i <- 0 until pow2) bools(i) := (io.in === i.U)

  io.out := bools.asUInt()
//  printf(p"myUInt = 0x${Hexadecimal(io.out)}\n")

}