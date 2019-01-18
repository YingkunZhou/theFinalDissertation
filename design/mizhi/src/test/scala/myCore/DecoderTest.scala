package myCore

import chisel3._
import chisel3.iotesters.PeekPokeTester

class DecoderTest(c: OneHotDecoder) extends PeekPokeTester(c) {
  for (s <- 0 until c.pow2-1) {
    poke(c.io.in, s)
    step(1)
    val x = 1 << s
    expect(c.io.out, x.U(32.W))
  }
  poke(c.io.in, 31)
  step(1)
  expect(c.io.out, "h80000000".U(32.W))
}
