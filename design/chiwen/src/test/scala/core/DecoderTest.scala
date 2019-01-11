package core

import chisel3._
import chisel3.iotesters.PeekPokeTester

class DecoderTest(c: OneHotDecoder) extends PeekPokeTester(c) {
  for (s <- 0 until c.pow2) {
    poke(c.io.in, s)
    step(1)
    val x = 1 << s
    expect(c.io.out, x)
//    printf(p"myUInt = 0x${Hexadecimal(c.io.out)}\n")
  }
}
