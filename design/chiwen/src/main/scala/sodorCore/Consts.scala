package sodorCore

import chisel3._
import chisel3.util.BitPat

trait ScalarOpConstants {
  // Control Signals
  val Y = true.B
  val N = false.B
  val X = BitPat("b?")
  // PC Select Signal
  val PC_4     = 0.U(2.W)  // PC + 4
  val PC_BRJMP = 1.U(2.W)  // brjmp_target
  val PC_JALR  = 2.U(2.W)  // jump_reg_target
  val PC_EXC   = 3.U(2.W)  // exception

  // Branch Type
  val BR_N     = 0.U(4.W)  // Next
  val BR_NE    = 1.U(4.W)  // Branch on NotEqual
  val BR_EQ    = 2.U(4.W)  // Branch on Equal
  val BR_GE    = 3.U(4.W)  // Branch on Greater/Equal
  val BR_GEU   = 4.U(4.W)  // Branch on Greater/Equal Unsigned
  val BR_LT    = 5.U(4.W)  // Branch on Less Than
  val BR_LTU   = 6.U(4.W)  // Branch on Less Than Unsigned
  val BR_J     = 7.U(4.W)  // Jump
  val BR_JR    = 8.U(4.W)  // Jump Register

  // RS1 Operand Select Signal
//  val OP1_X     = BitPat("b??")
  val OP1_X     = 0.U(2.W)
  val OP1_RS1   = 0.U(2.W) // Register Source #1
  val OP1_PC    = 1.U(2.W) // PC
  val OP1_IMZ   = 2.U(2.W) // Zero-extended Immediate from RS1 field, for use by CSRI instructions

  // RS2 Operand Select Signal
//  val OP2_X      = BitPat("b???")
  val OP2_X      = 0.U(3.W)
  val OP2_RS2    = 0.U(3.W) // Register Source #2
  val OP2_ITYPE  = 1.U(3.W) // immediate, I-type
  val OP2_STYPE  = 2.U(3.W) // immediate, S-type
  val OP2_BTYPE  = 3.U(3.W) // immediate, B
  val OP2_UTYPE  = 4.U(3.W) // immediate, U-type
  val OP2_JTYPE  = 5.U(3.W) // immediate, J-type

  // Register Operand Output Enable Signal
  val OEN_N   = false.B
  val OEN_Y   = true.B

  // Register File Write Enable Signal
  val REN_N   = false.B
  val REN_Y   = true.B

  // ALU Operation Signal
  val ALU_ADD    = 0.U(4.W)
  val ALU_SUB    = 1.U(4.W)
  val ALU_SLL    = 2.U(4.W)
  val ALU_SRL    = 3.U(4.W)
  val ALU_SRA    = 4.U(4.W)
  val ALU_AND    = 5.U(4.W)
  val ALU_OR     = 6.U(4.W)
  val ALU_XOR    = 7.U(4.W)
  val ALU_SLT    = 8.U(4.W)
  val ALU_SLTU   = 9.U(4.W)
  val ALU_CP_1   = 10.U(4.W)
  val ALU_CP_2   = 11.U(4.W)
//  val ALU_X      = BitPat("b????")
  val ALU_X      = 0.U(4.W)

  // Writeback Select Signal
  val WB_ALU  = 0.U(2.W)
  val WB_MEM  = 1.U(2.W)
  val WB_PC4  = 2.U(2.W)
  val WB_CSR  = 3.U(2.W)
//  val WB_X    = BitPat("b??")
  val WB_X    = 0.U(2.W)

  // Memory Enable Signal
  val MEN_N   = false.B
  val MEN_Y   = true.B
//  val MEN_X   = BitPat("b?")
  val MEN_X   = 0.U(1.W)

  // Memory Mask Type Signal
  val MSK_B   = 0.U(3.W)
  val MSK_BU  = 1.U(3.W)
  val MSK_H   = 2.U(3.W)
  val MSK_HU  = 3.U(3.W)
  val MSK_W   = 4.U(3.W)
//  val MSK_X   = BitPat("b???")
  val MSK_X   = 0.U(23.W)
}