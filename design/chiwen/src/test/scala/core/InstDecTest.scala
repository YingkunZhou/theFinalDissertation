package core

import chisel3._
import chisel3.iotesters.PeekPokeTester

class InstDecTest(c: InstDecoder) extends PeekPokeTester(c) {
  val inst1: UInt = "h00000013".U(32.W)
  poke(c.io.inst, inst1)
  step(1)
  expect(c.io.opIM.code, 3)
  expect(c.io.opIM.op, 0)
  expect(c.io.regInfos(0).access, 1)
  expect(c.io.regInfos(1).access, 0)
  expect(c.io.regInfos(2).access, 1)

  val inst2: UInt = "h00000033".U(32.W)
  poke(c.io.inst, inst2)
  step(1)
  expect(c.io.opIM.code, 3)
  expect(c.io.opIM.op, 0)
  expect(c.io.regInfos(0).access, 1)
  expect(c.io.regInfos(1).access, 1)
  expect(c.io.regInfos(2).access, 1)
}
