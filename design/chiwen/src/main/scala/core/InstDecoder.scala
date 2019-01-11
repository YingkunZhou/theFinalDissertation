package core

import chisel3._

class OpCode(alu_width: Int, bj_width: Int, ls_width: Int, md_width: Int) extends Bundle {
  val alu = Vec(alu_width, Bool())
  val bj  = Vec(bj_width, Bool())
  val ls  = Vec(ls_width, Bool())
  val md  = Vec(md_width, Bool())
}

class RegInfo(reg_width: Int) extends Bundle {
  val regIdx = UInt(reg_width.W)
  val valid  = Bool()
}

class InstDecoder(val inst_width: Int) extends Module{
  val io = IO(new Bundle{
    val inst     = Input(UInt(inst_width.W))
    val opcode   = new OpCode(10,10,10,10).asOutput
    val regInfos = Vec(3, new RegInfo(5).asOutput)
  })

  io.regInfos(0).regIdx := io.inst(19,15) //rs1
  io.regInfos(1).regIdx := io.inst(24,20) //rs2
  io.regInfos(2).regIdx := io.inst(11,7)  //rd

  val decoder_5_32_L = Module(new OneHotDecoder(5))
  decoder_5_32_L.io.in := io.inst(4,0)
  val func5_op_L: UInt = decoder_5_32_L.io.out

  val decoder_5_32_H = Module(new OneHotDecoder(5))
  decoder_5_32_H.io.in := io.inst(31,27)
  val func5_op_H: UInt = decoder_5_32_H.io.out

  val decoder_3_8 = Module(new OneHotDecoder(3))
  decoder_3_8.io.in := io.inst(12,10)
  val func3_op: UInt = decoder_3_8.io.out

  val func7_op_0: Bool      = io.inst(31,25) === 0.U
  val func7_op_100000: Bool = io.inst(31,25) === "b0100000".U
  val func6_op_0: Bool      = io.inst(31,26) === 0.U
  val func6_op_10000: Bool  = io.inst(31,26) === "b010000".U
  val func7_op_1: Bool      = io.inst(31,25) === 1.U
  val func13_op_0: Bool     = io.inst(19,7)  === 0.U
  val func13_op_1: Bool     = io.inst(19,7)  === 1.U
  val func12_op_0: Bool     = io.inst(31,20) === 0.U
  val func12_op_1: Bool     = io.inst(31,20) === 1.U

  val inst_LUI: Bool   = func5_op_L("b01101".U).toBool()
  val inst_AUIPC: Bool = func5_op_L("b00101".U).toBool()
  val inst_JAL: Bool   = func5_op_L("b11011".U).toBool()
  val inst_JALR: Bool  = func5_op_L("b11001".U).toBool() & func3_op("b000".U).toBool()

  val inst_B: Bool     = func5_op_L("b11000".U).toBool()
  val inst_BEQ: Bool   = inst_B & func3_op("b000".U).toBool()
  val inst_BNE: Bool   = inst_B & func3_op("b001".U).toBool()
  val inst_BLT: Bool   = inst_B & func3_op("b100".U).toBool()
  val inst_BGE: Bool   = inst_B & func3_op("b101".U).toBool()
  val inst_BLTU: Bool  = inst_B & func3_op("b110".U).toBool()
  val inst_BGEU: Bool  = inst_B & func3_op("b111".U).toBool()

  val inst_L: Bool     = func5_op_L("b00000".U).toBool()
  val inst_LB: Bool    = inst_L & func3_op("b000".U).toBool()
  val inst_LH: Bool    = inst_L & func3_op("b001".U).toBool()
  val inst_LW: Bool    = inst_L & func3_op("b010".U).toBool()
  val inst_LD: Bool    = inst_L & func3_op("b011".U).toBool()
  val inst_LBU: Bool   = inst_L & func3_op("b100".U).toBool()
  val inst_LHU: Bool   = inst_L & func3_op("b101".U).toBool()
  val inst_LWU: Bool   = inst_L & func3_op("b110".U).toBool()

  val inst_S: Bool     = func5_op_L("b01000".U).toBool()
  val inst_SB: Bool    = inst_S & func3_op("b000".U).toBool()
  val inst_SH: Bool    = inst_S & func3_op("b001".U).toBool()
  val inst_SW: Bool    = inst_S & func3_op("b010".U).toBool()
  val inst_SD: Bool    = inst_S & func3_op("b011".U).toBool()

  val inst_I: Bool     = func5_op_L("b00100".U).toBool()
  val inst_ADDI: Bool  = inst_I & func3_op("b000".U).toBool()
  val inst_SLTI: Bool  = inst_I & func3_op("b010".U).toBool()
  val inst_SLTIU: Bool = inst_I & func3_op("b011".U).toBool()
  val inst_XORI: Bool  = inst_I & func3_op("b100".U).toBool()
  val inst_ANDI: Bool  = inst_I & func3_op("b111".U).toBool()
  val inst_SLLI: Bool  = inst_I & func3_op("b001".U).toBool() & func6_op_0
  val inst_SRLI: Bool  = inst_I & func3_op("b101".U).toBool() & func6_op_0
  val inst_SRAI: Bool  = inst_I & func3_op("b101".U).toBool() & func6_op_10000

  val inst_R: Bool     = func5_op_L("b01100".U).toBool()
  val inst_ADD: Bool   = inst_R & func3_op("b000".U).toBool() & func7_op_0
  val inst_SUB: Bool   = inst_R & func3_op("b000".U).toBool() & func7_op_100000
  val inst_SLL: Bool   = inst_R & func3_op("b001".U).toBool() & func7_op_0
  val inst_SLT: Bool   = inst_R & func3_op("b010".U).toBool() & func7_op_0
  val inst_SLTU: Bool  = inst_R & func3_op("b011".U).toBool() & func7_op_0
  val inst_XOR: Bool   = inst_R & func3_op("b100".U).toBool() & func7_op_0
  val inst_SRL: Bool   = inst_R & func3_op("b101".U).toBool() & func7_op_0
  val inst_SRA: Bool   = inst_R & func3_op("b101".U).toBool() & func7_op_100000
  val inst_OR: Bool    = inst_R & func3_op("b110".U).toBool() & func7_op_0
  val inst_AND: Bool   = inst_R & func3_op("b111".U).toBool() & func7_op_0

  val inst_IW: Bool    = func5_op_L("b00110".U).toBool()
  val inst_ADDIW: Bool = inst_IW & func3_op("b000".U).toBool()
  val inst_SLLIW: Bool = inst_IW & func3_op("b001".U).toBool() & func7_op_0
  val inst_SRLIW: Bool = inst_IW & func3_op("b101".U).toBool() & func7_op_0
  val inst_SRAIW: Bool = inst_IW & func3_op("b101".U).toBool() & func7_op_100000

  val inst_RW: Bool    = func5_op_L("b01110".U).toBool()
  val inst_ADDW: Bool  = inst_RW & func3_op("b000".U).toBool() & func7_op_0
  val inst_SUBW: Bool  = inst_RW & func3_op("b000".U).toBool() & func7_op_100000
  val inst_SLLW: Bool  = inst_RW & func3_op("b001".U).toBool() & func7_op_0
  val inst_SRLW: Bool  = inst_RW & func3_op("b101".U).toBool() & func7_op_0
  val inst_SRAW: Bool  = inst_RW & func3_op("b101".U).toBool() & func7_op_100000

  val inst_MD: Bool    = func5_op_L("b01100".U).toBool()
  val inst_MUL: Bool   = inst_MD & func3_op("b000".U).toBool() & func7_op_1
  val inst_MULH: Bool  = inst_MD & func3_op("b001".U).toBool() & func7_op_1
  val inst_MULHSU:Bool = inst_MD & func3_op("b010".U).toBool() & func7_op_1
  val inst_MULHU: Bool = inst_MD & func3_op("b011".U).toBool() & func7_op_1
  val inst_DIV: Bool   = inst_MD & func3_op("b100".U).toBool() & func7_op_1
  val inst_DIVU: Bool  = inst_MD & func3_op("b101".U).toBool() & func7_op_1
  val inst_REM: Bool   = inst_MD & func3_op("b110".U).toBool() & func7_op_1
  val inst_REMU: Bool  = inst_MD & func3_op("b111".U).toBool() & func7_op_1

  val inst_MDW: Bool   = func5_op_L("b01110".U).toBool()
  val inst_MULW: Bool  = inst_MDW & func3_op("b000".U).toBool() & func7_op_1
  val inst_DIVW: Bool  = inst_MDW & func3_op("b100".U).toBool() & func7_op_1
  val inst_DIVUW: Bool = inst_MDW & func3_op("b101".U).toBool() & func7_op_1
  val inst_REMW: Bool  = inst_MDW & func3_op("b110".U).toBool() & func7_op_1
  val inst_REMUW: Bool = inst_MDW & func3_op("b111".U).toBool() & func7_op_1

  val inst_FEN: Bool   = func5_op_L("b00011".U).toBool()
  val inst_FENCE: Bool = inst_FEN & func13_op_0
  val inst_FENCE_I:Bool= inst_FEN & func13_op_1 & func12_op_0

  val inst_P: Bool     = func5_op_L("b11100".U).toBool()
  val inst_ECALL: Bool = inst_P & func3_op("b000".U).toBool() & func13_op_0 & func12_op_0
  val inst_EBREAK:Bool = inst_P & func3_op("b000".U).toBool() & func13_op_0 & func12_op_1
  val inst_CSRRW: Bool = inst_P & func3_op("b001".U).toBool()
  val inst_CSRRS: Bool = inst_P & func3_op("b010".U).toBool()
  val inst_CSRRC: Bool = inst_P & func3_op("b011".U).toBool()
  val inst_CSRRWI:Bool = inst_P & func3_op("b101".U).toBool()
  val inst_CSRRSI:Bool = inst_P & func3_op("b110".U).toBool()
  val inst_CSRRCI:Bool = inst_P & func3_op("b111".U).toBool()

  val inst_A: Bool        = func5_op_L("b01011".U).toBool()
  val inst_AW: Bool       = func3_op("b010".U).toBool()
  val inst_AD: Bool       = func3_op("b011".U).toBool()
  val inst_LRW: Bool      = inst_A & inst_AW.toBool() & func5_op_H("b00010".U).toBool() & (io.regInfos(1).regIdx === 0.U)
  val inst_SCW: Bool      = inst_A & inst_AW.toBool() & func5_op_H("b00011".U).toBool()
  val inst_AMOSWAPW: Bool = inst_A & inst_AW.toBool() & func5_op_H("b00001".U).toBool()
  val inst_AMOADDW: Bool  = inst_A & inst_AW.toBool() & func5_op_H("b00000".U).toBool()
  val inst_AMOXORW: Bool  = inst_A & inst_AW.toBool() & func5_op_H("b00100".U).toBool()
  val inst_AMOANDW: Bool  = inst_A & inst_AW.toBool() & func5_op_H("b01100".U).toBool()
  val inst_AMOORW: Bool   = inst_A & inst_AW.toBool() & func5_op_H("b01000".U).toBool()
  val inst_AMOMINW: Bool  = inst_A & inst_AW.toBool() & func5_op_H("b10000".U).toBool()
  val inst_AMOMAXW: Bool  = inst_A & inst_AW.toBool() & func5_op_H("b10100".U).toBool()
  val inst_AMOMINUW: Bool = inst_A & inst_AW.toBool() & func5_op_H("b11000".U).toBool()
  val inst_AMOMAXUW: Bool = inst_A & inst_AW.toBool() & func5_op_H("b11100".U).toBool()
  val inst_LRD: Bool      = inst_A & inst_AD.toBool() & func5_op_H("b00010".U).toBool()
  val inst_SCD: Bool      = inst_A & inst_AD.toBool() & func5_op_H("b00011".U).toBool()
  val inst_AMOSWAPD: Bool = inst_A & inst_AD.toBool() & func5_op_H("b00001".U).toBool()
  val inst_AMOADDD: Bool  = inst_A & inst_AD.toBool() & func5_op_H("b00000".U).toBool()
  val inst_AMOXORD: Bool  = inst_A & inst_AD.toBool() & func5_op_H("b00100".U).toBool()
  val inst_AMOANDD: Bool  = inst_A & inst_AD.toBool() & func5_op_H("b01100".U).toBool()
  val inst_AMOORD: Bool   = inst_A & inst_AD.toBool() & func5_op_H("b01000".U).toBool()
  val inst_AMOMIND: Bool  = inst_A & inst_AD.toBool() & func5_op_H("b10000".U).toBool()
  val inst_AMOMAXD: Bool  = inst_A & inst_AD.toBool() & func5_op_H("b10100".U).toBool()
  val inst_AMOMINUD: Bool = inst_A & inst_AD.toBool() & func5_op_H("b11000".U).toBool()
  val inst_AMOMAXUD: Bool = inst_A & inst_AD.toBool() & func5_op_H("b11100".U).toBool()

  val inst_FLW: Bool      = func5_op_L("b00001".U).toBool()

}
