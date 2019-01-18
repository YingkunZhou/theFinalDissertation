package core

import chisel3._
import chisel3.util.{Cat, log2Ceil}

import scala.collection.mutable.ArrayBuffer

object DECODER {
  val RS1 = 0
  val RS2 = 1
  val RD  = 2

  val OPS = 4
  val ALU = 0
  val BJSPEC = 1
  val LS = 2
  val MD = 3
  val CODES = 4
}

import DECODER._

class microcode(val n: Int, val m: Int) extends Bundle {
  val code = UInt(n.W)
  val op   = UInt(m.W)
}

class RegInfo(val reg_width: Int) extends Bundle {
  val regIdx = UInt(reg_width.W)
  val access  = Bool()
}

class InstDecoder extends Module {
  val io = IO(new Bundle{
    val inst     = Input(UInt(32.W))
    val opIM     = Output(new microcode(CODES, log2Ceil(OPS)))
    val regInfos = Output(Vec(3, new RegInfo(5)))
  })

  io.regInfos(RS1).regIdx := io.inst(19,15)
  io.regInfos(RS2).regIdx := io.inst(24,20)
//  io.regInfos(rs3).regIdx := io.inst(31,27)
  io.regInfos(RD).regIdx  := io.inst(11,7)

  val decoder_5_32 = Module(new OneHotDecoder(5))
  decoder_5_32.io.in := io.inst(31,27)
  val func_31_27: UInt = decoder_5_32.io.out

  val decoder_3_8 = Module(new OneHotDecoder(3))
  decoder_3_8.io.in := io.inst(14,12)
  val func_14_12: UInt = decoder_3_8.io.out

  def match2(inst_type: Bool, i_14_12: Int): Bool =
    inst_type & func_14_12(i_14_12).toBool()

  def match2v2(i_6_2: UInt, i_14_12: Int): Bool =
    (io.inst(6,2) === i_6_2) & func_14_12(i_14_12).toBool()

  def match3(inst_type: Bool, i_14_12: Int, addition: Bool): Bool =
    inst_type & func_14_12(i_14_12).toBool() & addition

  def match3v2(inst_type1: Bool, inst_type2: Bool, i_31_27: Int): Bool =
    inst_type1 & inst_type2 & func_31_27(i_31_27).toBool()

  def match3v3(inst_type: Bool, i_31_27: Int, addition: Bool): Bool =
    inst_type & func_31_27(i_31_27).toBool() & addition

  def match4(inst_type: Bool, i_31_27: Int, i_14_12: Int, addition: Bool): Bool =
    inst_type & func_31_27(i_31_27).toBool() & func_14_12(i_14_12).toBool() & addition

  def match4v2(inst_type: Bool, i_31_27: Int, add1: Bool, add2: Bool): Bool =
    inst_type & func_31_27(i_31_27).toBool() & add1 & add2

  def match5(inst_type: Bool, i_31_27: Int, i_14_12: Int, add1: Bool, add2: Bool): Bool =
    inst_type & func_31_27(i_31_27).toBool() & func_14_12(i_14_12).toBool() & add1 & add2

  val valid_inst = new ArrayBuffer[Bool]()

  val func_31_25_h0: Bool   = io.inst(31,25) === 0.U
  val func_31_25_h1: Bool   = io.inst(31,25) === 1.U
  val func_31_25_h20: Bool  = io.inst(31,25) === 0x20.U
  val func_31_26_h0: Bool   = io.inst(31,26) === 0.U
  val func_31_26_h10: Bool  = io.inst(31,26) === 0x10.U
  val func_31_20_h0: Bool   = io.inst(31,20) === 0.U
  val func_31_20_h1: Bool   = io.inst(31,20) === 1.U
  val func_26_25_h0: Bool   = io.inst(26,25) === 0.U
  val func_26_25_h1: Bool   = io.inst(26,25) === 1.U
  val func_19_7_h0: Bool    = io.inst(19,7)  === 0.U
  val func_19_7_h1: Bool    = io.inst(19,7)  === 1.U

  val rs2_0: Bool           = io.regInfos(RS2).regIdx === 0.U
  val rs2_1: Bool           = io.regInfos(RS2).regIdx === 1.U
  val rs2_2: Bool           = io.regInfos(RS2).regIdx === 2.U
  val rs2_3: Bool           = io.regInfos(RS2).regIdx === 3.U

  val inst_LUI: Bool   = io.inst(6,2) === 0x0D.U
  valid_inst += inst_LUI
  val inst_AUIPC: Bool = io.inst(6,2) === 0x05.U
  valid_inst += inst_AUIPC
  val inst_JAL: Bool   = io.inst(6,2) === 0x1B.U
  valid_inst += inst_JAL

  val inst_B: Bool     = io.inst(6,2) === 0x18.U
  val inst_L: Bool     = io.inst(6,2) === 0x00.U
  val inst_S: Bool     = io.inst(6,2) === 0x08.U
  val inst_I: Bool     = io.inst(6,2) === 0x04.U
  val inst_R: Bool     = io.inst(6,2) === 0x0C.U
  val inst_IW: Bool    = io.inst(6,2) === 0x06.U
  val inst_RW: Bool    = io.inst(6,2) === 0x0E.U
  val inst_FEN: Bool   = io.inst(6,2) === 0x03.U
  val inst_P: Bool     = io.inst(6,2) === 0x1C.U
  val inst_A: Bool     = io.inst(6,2) === 0x0B.U
  val inst_F: Bool     = io.inst(6,2) === 0x14.U

  val inst_JALR: Bool  = match2v2(0x19.U, 0)
  valid_inst += inst_JALR
  val inst_BEQ: Bool   = match2(inst_B, 0)
  valid_inst += inst_BEQ
  val inst_BNE: Bool   = match2(inst_B, 1)
  valid_inst += inst_BNE
  val inst_BLT: Bool   = match2(inst_B, 4)
  valid_inst += inst_BLT
  val inst_BGE: Bool   = match2(inst_B, 5)
  valid_inst += inst_BGE
  val inst_BLTU: Bool  = match2(inst_B, 6)
  valid_inst += inst_BLTU
  val inst_BGEU: Bool  = match2(inst_B, 7)
  valid_inst += inst_BGEU

  val inst_LB: Bool    = match2(inst_L, 0)
  valid_inst += inst_LB
  val inst_LH: Bool    = match2(inst_L, 1)
  valid_inst += inst_LH
  val inst_LW: Bool    = match2(inst_L, 2)
  valid_inst += inst_LW
  val inst_LD: Bool    = match2(inst_L, 3)
  valid_inst += inst_LD
  val inst_LBU: Bool   = match2(inst_L, 4)
  valid_inst += inst_LBU
  val inst_LHU: Bool   = match2(inst_L, 5)
  valid_inst += inst_LHU
  val inst_LWU: Bool   = match2(inst_L, 6)
  valid_inst += inst_LWU

  val inst_SB: Bool    = match2(inst_S, 0)
  valid_inst += inst_SB
  val inst_SH: Bool    = match2(inst_S, 1)
  valid_inst += inst_SH
  val inst_SW: Bool    = match2(inst_S, 2)
  valid_inst += inst_SW
  val inst_SD: Bool    = match2(inst_S, 3)
  valid_inst += inst_SD

  val inst_ADDI: Bool  = match2(inst_I, 0)
  valid_inst += inst_ADDI
  val inst_SLTI: Bool  = match2(inst_I, 2)
  valid_inst += inst_SLTI
  val inst_SLTIU: Bool = match2(inst_I, 3)
  valid_inst += inst_SLTIU
  val inst_XORI: Bool  = match2(inst_I, 4)
  valid_inst += inst_XORI
  val inst_ORI: Bool   = match2(inst_I, 6)
  valid_inst += inst_ORI
  val inst_ANDI: Bool  = match2(inst_I, 7)
  valid_inst += inst_ANDI
  val inst_SLLI: Bool  = match3(inst_I, 1, func_31_26_h0)
  valid_inst += inst_SLLI
  val inst_SRLI: Bool  = match3(inst_I, 5, func_31_26_h0)
  valid_inst += inst_SRLI
  val inst_SRAI: Bool  = match3(inst_I, 5, func_31_26_h10)
  valid_inst += inst_SRAI

  val inst_ADD: Bool   = match3(inst_R, 0, func_31_25_h0)
  valid_inst += inst_ADD
  val inst_SUB: Bool   = match3(inst_R, 0, func_31_25_h20)
  valid_inst += inst_SUB
  val inst_SLL: Bool   = match3(inst_R, 1, func_31_25_h0)
  valid_inst += inst_SLL
  val inst_SLT: Bool   = match3(inst_R, 2, func_31_25_h0)
  valid_inst += inst_SLT
  val inst_SLTU: Bool  = match3(inst_R, 3, func_31_25_h0)
  valid_inst += inst_SLTIU
  val inst_XOR: Bool   = match3(inst_R, 4, func_31_25_h0)
  valid_inst += inst_XOR
  val inst_SRL: Bool   = match3(inst_R, 5, func_31_25_h0)
  valid_inst += inst_SRL
  val inst_SRA: Bool   = match3(inst_R, 5, func_31_25_h20)
  valid_inst += inst_SRA
  val inst_OR: Bool    = match3(inst_R, 6, func_31_25_h0)
  valid_inst += inst_OR
  val inst_AND: Bool   = match3(inst_R, 7, func_31_25_h0)
  valid_inst += inst_AND

  val inst_ADDIW: Bool = match2(inst_IW, 0)
  valid_inst += inst_ADDIW
  val inst_SLLIW: Bool = match3(inst_IW, 1, func_31_25_h0)
  valid_inst += inst_SLLIW
  val inst_SRLIW: Bool = match3(inst_IW, 5, func_31_25_h0)
  valid_inst += inst_SRLIW
  val inst_SRAIW: Bool = match3(inst_IW, 5, func_31_25_h20)
  valid_inst += inst_SRAIW

  val inst_ADDW: Bool  = match3(inst_RW, 0, func_31_25_h0)
  valid_inst += inst_ADDW
  val inst_SUBW: Bool  = match3(inst_RW, 0, func_31_25_h20)
  valid_inst += inst_SUBW
  val inst_SLLW: Bool  = match3(inst_RW, 1, func_31_25_h0)
  valid_inst += inst_SLLW
  val inst_SRLW: Bool  = match3(inst_RW, 5, func_31_25_h0)
  valid_inst += inst_SRLW
  val inst_SRAW: Bool  = match3(inst_RW, 5, func_31_25_h20)
  valid_inst += inst_SRAW

  val inst_MUL: Bool   = match3(inst_R, 0, func_31_25_h1)
  valid_inst += inst_MUL
  val inst_MULH: Bool  = match3(inst_R, 1, func_31_25_h1)
  valid_inst += inst_MULH
  val inst_MULHSU:Bool = match3(inst_R, 2, func_31_25_h1)
  valid_inst += inst_MULHSU
  val inst_MULHU: Bool = match3(inst_R, 3, func_31_25_h1)
  valid_inst += inst_MULHU
  val inst_DIV: Bool   = match3(inst_R, 4, func_31_25_h1)
  valid_inst += inst_DIV
  val inst_DIVU: Bool  = match3(inst_R, 5, func_31_25_h1)
  valid_inst += inst_DIVU
  val inst_REM: Bool   = match3(inst_R, 6, func_31_25_h1)
  valid_inst += inst_REM
  val inst_REMU: Bool  = match3(inst_R, 7, func_31_25_h1)
  valid_inst += inst_REMU

  val inst_MULW: Bool  = match3(inst_RW, 0, func_31_25_h1)
  valid_inst += inst_MULW
  val inst_DIVW: Bool  = match3(inst_RW, 4, func_31_25_h1)
  valid_inst += inst_DIVW
  val inst_DIVUW: Bool = match3(inst_RW, 5, func_31_25_h1)
  valid_inst += inst_DIVUW
  val inst_REMW: Bool  = match3(inst_RW, 6, func_31_25_h1)
  valid_inst += inst_REMW
  val inst_REMUW: Bool = match3(inst_RW, 7, func_31_25_h1)
  valid_inst += inst_REMUW

  val inst_FENCE: Bool = inst_FEN & func_19_7_h0
  valid_inst += inst_FENCE
  val inst_FENCE_I:Bool= inst_FEN & func_19_7_h1 & func_31_20_h0
  valid_inst += inst_FENCE_I

  val inst_ECALL: Bool = inst_P & func_19_7_h0 & func_31_20_h0
  valid_inst += inst_ECALL
  val inst_EBREAK:Bool = inst_P & func_19_7_h0 & func_31_20_h1
  valid_inst += inst_EBREAK
  val inst_CSRRW: Bool = match2(inst_P, 1)
  valid_inst += inst_CSRRW
  val inst_CSRRS: Bool = match2(inst_P, 2)
  valid_inst += inst_CSRRS
  val inst_CSRRC: Bool = match2(inst_P, 3)
  valid_inst += inst_CSRRC
  val inst_CSRRWI:Bool = match2(inst_P, 5)
  valid_inst += inst_CSRRWI
  val inst_CSRRSI:Bool = match2(inst_P, 6)
  valid_inst += inst_CSRRSI
  val inst_CSRRCI:Bool = match2(inst_P, 7)
  valid_inst += inst_CSRRCI

  val inst_AW: Bool       = func_14_12(2).toBool()
  val inst_AD: Bool       = func_14_12(3).toBool()
  val inst_LRW: Bool      = match3v2(inst_A, inst_AW, 0x02) & rs2_0
  valid_inst += inst_LRW
  val inst_SCW: Bool      = match3v2(inst_A, inst_AW, 0x03)
  valid_inst += inst_SCW
  val inst_AMOSWAPW: Bool = match3v2(inst_A, inst_AW, 0x01)
  valid_inst += inst_AMOSWAPW
  val inst_AMOADDW: Bool  = match3v2(inst_A, inst_AW, 0x00)
  valid_inst += inst_AMOADDW
  val inst_AMOXORW: Bool  = match3v2(inst_A, inst_AW, 0x04)
  valid_inst += inst_AMOXORW
  val inst_AMOANDW: Bool  = match3v2(inst_A, inst_AW, 0x0C)
  valid_inst += inst_AMOANDW
  val inst_AMOORW: Bool   = match3v2(inst_A, inst_AW, 0x08)
  valid_inst += inst_AMOORW
  val inst_AMOMINW: Bool  = match3v2(inst_A, inst_AW, 0x10)
  valid_inst += inst_AMOMINW
  val inst_AMOMAXW: Bool  = match3v2(inst_A, inst_AW, 0x14)
  valid_inst += inst_AMOMAXW
  val inst_AMOMINUW: Bool = match3v2(inst_A, inst_AW, 0x18)
  valid_inst += inst_AMOMINUW
  val inst_AMOMAXUW: Bool = match3v2(inst_A, inst_AW, 0x1C)
  valid_inst += inst_AMOMAXUW
  val inst_LRD: Bool      = match3v2(inst_A, inst_AD, 0x02) & rs2_0
  valid_inst += inst_LRD
  val inst_SCD: Bool      = match3v2(inst_A, inst_AD, 0x03)
  valid_inst += inst_SCD
  val inst_AMOSWAPD: Bool = match3v2(inst_A, inst_AD, 0x01)
  valid_inst += inst_AMOSWAPD
  val inst_AMOADDD: Bool  = match3v2(inst_A, inst_AD, 0x00)
  valid_inst += inst_AMOADDD
  val inst_AMOXORD: Bool  = match3v2(inst_A, inst_AD, 0x04)
  valid_inst += inst_AMOXORD
  val inst_AMOANDD: Bool  = match3v2(inst_A, inst_AD, 0x0C)
  valid_inst += inst_AMOANDD
  val inst_AMOORD: Bool   = match3v2(inst_A, inst_AD, 0x08)
  valid_inst += inst_AMOORD
  val inst_AMOMIND: Bool  = match3v2(inst_A, inst_AD, 0x10)
  valid_inst += inst_AMOMIND
  val inst_AMOMAXD: Bool  = match3v2(inst_A, inst_AD, 0x14)
  valid_inst += inst_AMOMAXD
  val inst_AMOMINUD: Bool = match3v2(inst_A, inst_AD, 0x18)
  valid_inst += inst_AMOMINUD
  val inst_AMOMAXUD: Bool = match3v2(inst_A, inst_AD, 0x1C)
  valid_inst += inst_AMOMAXUD

  val inst_FLW: Bool      = match2v2(0x01.U, 2)
  valid_inst += inst_FLW
  val inst_FSW: Bool      = match2v2(0x09.U, 2)
  valid_inst += inst_FSW
  val inst_FMADDS: Bool   = (io.inst(6,2) === 0x10.U) & func_26_25_h0
  valid_inst += inst_FMADDS
  val inst_FMSUBS: Bool   = (io.inst(6,2) === 0x11.U) & func_26_25_h0
  valid_inst += inst_FMSUBS
  val inst_FNMSUBS: Bool  = (io.inst(6,2) === 0x12.U) & func_26_25_h0
  valid_inst += inst_FNMSUBS
  val inst_FNMADDS: Bool  = (io.inst(6,2) === 0x13.U) & func_26_25_h0
  valid_inst += inst_FNMADDS
  val inst_FLD: Bool      = match2v2(0x01.U, 3)
  valid_inst += inst_FLD
  val inst_FSD: Bool      = match2v2(0x09.U, 3)
  valid_inst += inst_FSD
  val inst_FMADDD: Bool   = (io.inst(6,2) === 0x10.U) & func_26_25_h1
  valid_inst += inst_FMADDD
  val inst_FMSUBD: Bool   = (io.inst(6,2) === 0x11.U) & func_26_25_h1
  valid_inst += inst_FMSUBD
  val inst_FNMSUBD: Bool  = (io.inst(6,2) === 0x12.U) & func_26_25_h1
  valid_inst += inst_FNMSUBD
  val inst_FNMADDD: Bool  = (io.inst(6,2) === 0x13.U) & func_26_25_h1
  valid_inst += inst_FNMADDD

  val inst_FADDS: Bool   = match3v3(inst_F, 0x00, func_26_25_h0)
  valid_inst += inst_FADDS
  val inst_FSUBS: Bool   = match3v3(inst_F, 0x01, func_26_25_h0)
  valid_inst += inst_FSUBS
  val inst_FMULS: Bool   = match3v3(inst_F, 0x02, func_26_25_h0)
  valid_inst += inst_FMULS
  val inst_FDIVS: Bool   = match3v3(inst_F, 0x03, func_26_25_h0)
  valid_inst += inst_FDIVS
  val inst_FSQRTS: Bool  = match4v2(inst_F, 0x0B, func_26_25_h0, rs2_0)
  valid_inst += inst_FSQRTS
  val inst_FSGNJS: Bool  = match4(inst_F, 0x04, 0, func_26_25_h0)
  valid_inst += inst_FSGNJS
  val inst_FSGNJNS: Bool = match4(inst_F, 0x04, 1, func_26_25_h0)
  valid_inst += inst_FSGNJNS
  val inst_FSGNJXS: Bool = match4(inst_F, 0x04, 2, func_26_25_h0)
  valid_inst += inst_FSGNJXS
  val inst_FMINS: Bool   = match4(inst_F, 0x05, 0, func_26_25_h0)
  valid_inst += inst_FMINS
  val inst_FMAXS: Bool   = match4(inst_F, 0x05, 1, func_26_25_h0)
  valid_inst += inst_FMAXS
  val inst_FCVTWS: Bool  = match3v3(inst_F, 0x18, func_26_25_h0) & rs2_0
  valid_inst += inst_FCVTWS
  val inst_FCVTWUS: Bool = match3v3(inst_F, 0x18, func_26_25_h0) & rs2_1
  valid_inst += inst_FCVTWUS
  val inst_FMVXW: Bool   = match5(inst_F, 0x1C, 0, func_26_25_h0, rs2_0)
  valid_inst += inst_FMVXW
  val inst_FEQS: Bool    = match4(inst_F, 0x14, 2, func_26_25_h0)
  valid_inst += inst_FEQS
  val inst_FLTS: Bool    = match4(inst_F, 0x14, 1, func_26_25_h0)
  valid_inst += inst_FLTS
  val inst_FLES: Bool    = match4(inst_F, 0x14, 0, func_26_25_h0)
  valid_inst += inst_FLES
  val inst_FCLASSS: Bool = match5(inst_F, 0x1C, 1, func_26_25_h0, rs2_0)
  valid_inst += inst_FCLASSS
  val inst_FCVTSW: Bool  = match4v2(inst_F, 0x1A, func_26_25_h0, rs2_0)
  valid_inst += inst_FCVTSW
  val inst_FCVTSWU: Bool = match4v2(inst_F, 0x1A, func_26_25_h0, rs2_1)
  valid_inst += inst_FCVTSWU
  val inst_FMVWX: Bool   = match4v2(inst_F, 0x1E, func_26_25_h0, rs2_0)
  valid_inst += inst_FMVWX
  val inst_FCVTLS: Bool  = match4v2(inst_F, 0x1C, func_26_25_h0, rs2_2)
  valid_inst += inst_FCVTLS
  val inst_FCVTLUS: Bool = match4v2(inst_F, 0x1C, func_26_25_h0, rs2_3)
  valid_inst += inst_FCVTLUS
  val inst_FCVTSL: Bool  = match4v2(inst_F, 0x1A, func_26_25_h0, rs2_2)
  valid_inst += inst_FCVTSL
  val inst_FCVTSLU: Bool = match4v2(inst_F, 0x1A, func_26_25_h0, rs2_3)
  valid_inst += inst_FCVTSLU

  val inst_FADDD: Bool   = match3v3(inst_F, 0x00, func_26_25_h1)
  valid_inst += inst_FADDD
  val inst_FSUBD: Bool   = match3v3(inst_F, 0x01, func_26_25_h1)
  valid_inst += inst_FSUBD
  val inst_FMULD: Bool   = match3v3(inst_F, 0x02, func_26_25_h1)
  valid_inst += inst_FMULD
  val inst_FDIVD: Bool   = match3v3(inst_F, 0x03, func_26_25_h1)
  valid_inst += inst_FDIVD
  val inst_FSQRTD: Bool  = match4v2(inst_F, 0x0B, func_26_25_h1, rs2_0)
  valid_inst += inst_FSQRTD
  val inst_FSGNJD: Bool  = match4(inst_F, 0x04, 0, func_26_25_h1)
  valid_inst += inst_FSGNJD
  val inst_FSGNJND: Bool = match4(inst_F, 0x04, 1, func_26_25_h1)
  valid_inst += inst_FSGNJND
  val inst_FSGNJXD: Bool = match4(inst_F, 0x04, 2, func_26_25_h1)
  valid_inst += inst_FSGNJXD
  val inst_FMIND: Bool   = match4(inst_F, 0x05, 0, func_26_25_h1)
  valid_inst += inst_FMIND
  val inst_FMAXD: Bool   = match4(inst_F, 0x05, 1, func_26_25_h1)
  valid_inst += inst_FMAXD
  val inst_FCVTSD: Bool  = match4v2(inst_F, 0x08, func_26_25_h0, rs2_1)
  valid_inst += inst_FCVTSD
  val inst_FCVTDS: Bool  = match4v2(inst_F, 0x08, func_26_25_h1, rs2_0)
  valid_inst += inst_FCVTDS
  val inst_FEQD: Bool    = match4(inst_F, 0x14, 2, func_26_25_h1)
  valid_inst += inst_FEQD
  val inst_FLTD: Bool    = match4(inst_F, 0x14, 1, func_26_25_h1)
  valid_inst += inst_FLTD
  val inst_FLED: Bool    = match4(inst_F, 0x14, 0, func_26_25_h1)
  valid_inst += inst_FLED
  val inst_FCLASSD: Bool = match5(inst_F, 0x1C, 1, func_26_25_h0, rs2_0)
  valid_inst += inst_FCLASSD
  val inst_FCVTWD: Bool  = match4v2(inst_F, 0x18, func_26_25_h1, rs2_0)
  valid_inst += inst_FCVTWD
  val inst_FCVTSWUD:Bool = match4v2(inst_F, 0x18, func_26_25_h1, rs2_1)
  valid_inst += inst_FCVTSWUD
  val inst_FCVTDW: Bool  = match4v2(inst_F, 0x1A, func_26_25_h1, rs2_2)
  valid_inst += inst_FCVTDW
  val inst_FCVTDWU: Bool = match4v2(inst_F, 0x1A, func_26_25_h1, rs2_3)
  valid_inst += inst_FCVTDWU
  val inst_FCVTLD: Bool  = match4v2(inst_F, 0x18, func_26_25_h1, rs2_2)
  valid_inst += inst_FCVTLD
  val inst_FCVTLUD: Bool = match4v2(inst_F, 0x18, func_26_25_h1, rs2_3)
  valid_inst += inst_FCVTLUD
  val inst_FMVXD: Bool   = match4(inst_F, 0x1C, 0, func_26_25_h1) & rs2_0
  valid_inst += inst_FMVXD
  val inst_FCVTDL: Bool  = match4v2(inst_F, 0x1A, func_26_25_h1, rs2_2)
  valid_inst += inst_FCVTDL
  val inst_FCVTDLU: Bool = match4v2(inst_F, 0x1A, func_26_25_h1, rs2_3)
  valid_inst += inst_FCVTDLU
  val inst_FMVDX: Bool   = match4(inst_F, 0x1E, 0, func_26_25_h1) & rs2_0
  valid_inst += inst_FMVDX

  val inst_valid: Bool = valid_inst.reduce(_ | _)

  val aluOp = new ArrayBuffer[Bool]()
  aluOp += inst_XORI  | inst_XOR
  aluOp += inst_ORI   | inst_OR
  aluOp += inst_ANDI  | inst_AND
  aluOp += inst_ADDI  | inst_ADD
  aluOp += inst_SUB
  aluOp += inst_SLTI  | inst_SLT
  aluOp += inst_SLTIU | inst_SLTU
  aluOp += inst_SLLI  | inst_SLL
  aluOp += inst_SRLI  | inst_SRL
  aluOp += inst_SRAI  | inst_SRA
  aluOp += inst_ADDIW | inst_ADDW
  aluOp += inst_SUBW
  aluOp += inst_SLLIW | inst_SLLW
  aluOp += inst_SRLIW | inst_SRLW
  aluOp += inst_SRAIW | inst_SRAW

  val opIM = Wire(Vec(OPS, UInt(CODES.W)))
  val opValid = Wire(Vec(OPS, Bool()))

  val aluCode = Module(new OneHotEncoder(aluOp.length))
  aluCode.io.in := aluOp

  opIM(ALU) := aluCode.io.out
  opValid(ALU) := inst_I | inst_IW | (inst_R | inst_RW) & func_26_25_h0

  val spec_inst = VecInit(Seq(inst_LUI, inst_AUIPC, inst_JAL, inst_JALR))
  val inst_spec:Bool = spec_inst.reduce(_|_)
  val specEncoder =  Module(new OneHotEncoder(spec_inst.length))
  specEncoder.io.in := spec_inst

  opIM(BJSPEC) := Cat(inst_spec, Mux(inst_spec, specEncoder.io.out, io.inst(14,12)))
  opValid(BJSPEC) := inst_B | inst_spec

  opIM(LS) := Cat(inst_S, io.inst(14,12))
  opValid(LS) := inst_L | inst_S

  opIM(MD) := Cat(inst_RW, io.inst(14,12))
  opValid(MD) := (inst_R | inst_RW) & func_26_25_h1

  val opIMencoder =  Module(new OneHotEncoder(opIM.length))
  opIMencoder.io.in := opValid
  io.opIM.op := opIMencoder.io.out
  io.opIM.code := opIM.indices.map(i => VecInit(Seq.fill(CODES){opValid(i)}).asUInt() & opIM(i)).reduce(_|_)

  io.regInfos(RS1).access :=
    inst_JALR | inst_B | inst_L | inst_S | inst_I | inst_IW | inst_R | inst_RW
  io.regInfos(RS2).access :=
    inst_B | inst_S  | inst_R | inst_RW
  io.regInfos(RD).access  :=
    inst_LUI | inst_AUIPC | inst_JAL | inst_JALR | inst_L | inst_I | inst_IW | inst_R | inst_RW

//  printf(p"result = ${io.aluOPCode}\n")
}
