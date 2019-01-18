package sodorCore

import chisel3._
import chisel3.util.log2Ceil
import sodorCore.common.{CSR, Configure, DebugDPath, MemPortIO}

class DataToCtrlIO(implicit val conf: Configure) extends Bundle
{
  val dec_inst    = Output(UInt(conf.instlen.W))
  val exe_br_eq   = Output(Bool())
  val exe_br_lt   = Output(Bool())
  val exe_br_ltu  = Output(Bool())
  val exe_br_type = Output(UInt(4.W))

  val mem_ctrl_dmem_val = Output(Bool())

  val csr_eret = Output(Bool())
  override def cloneType = { new DataToCtrlIO().asInstanceOf[this.type] }
}

class DpathIO(implicit val conf: Configure) extends Bundle
{
  val ddpath = Flipped(new DebugDPath())
  val imem = new MemPortIO(conf.datalen)
  val dmem = new MemPortIO(conf.datalen)
  val ctrl  = Flipped(new CtrlToDataIO())
  val data  = new DataToCtrlIO()
}

class DataPath(implicit val conf: Configure) extends Module {
  val io = IO(new DpathIO())
  io := DontCare

  // Pipeline State Registers

  // Instruction Fetch State
  val if_reg_pc             = RegInit(START_ADDR)

  // Instruction Decode State
  val dec_reg_inst          = RegInit(BUBBLE)
  val dec_reg_pc            = RegInit(0.U(conf.addrWidth.W))

  // Execute State
  val exe_reg_inst          = RegInit(BUBBLE)
  val exe_reg_pc            = RegInit(0.U(conf.addrWidth.W))
  val exe_reg_wbaddr        = Reg(UInt(conf.regWidth.W))
  val exe_reg_rs1_addr      = Reg(UInt(conf.regWidth.W))
  val exe_reg_rs2_addr      = Reg(UInt(conf.regWidth.W))
  val exe_reg_op1_data      = Reg(UInt(conf.addrWidth.W))
  val exe_reg_op2_data      = Reg(UInt(conf.addrWidth.W))
  val exe_reg_rs2_data      = Reg(UInt(conf.addrWidth.W))
  val exe_reg_ctrl_br_type  = RegInit(BR_N)
  val exe_reg_ctrl_op2_sel  = Reg(UInt())
  val exe_reg_ctrl_alu_fun  = Reg(UInt())
  val exe_reg_ctrl_wb_sel   = Reg(UInt())
  val exe_reg_ctrl_rf_wen   = RegInit(false.B)
  val exe_reg_ctrl_mem_val  = RegInit(false.B)
  val exe_reg_ctrl_mem_fcn  = RegInit(M_X)
  val exe_reg_ctrl_mem_typ  = RegInit(MT_X)
  val exe_reg_ctrl_csr_cmd  = RegInit(CSR.N)

  // Memory State
  val mem_reg_pc            = Reg(UInt(conf.addrWidth.W))
  val mem_reg_inst          = Reg(UInt(conf.addrWidth.W))
  val mem_reg_alu_out       = Reg(Bits())
  val mem_reg_wbaddr        = Reg(UInt())
  val mem_reg_rs1_addr      = Reg(UInt())
  val mem_reg_rs2_addr      = Reg(UInt())
  val mem_reg_op1_data      = Reg(UInt(conf.datalen.W))
  val mem_reg_op2_data      = Reg(UInt(conf.datalen.W))
  val mem_reg_rs2_data      = Reg(UInt(conf.datalen.W))
  val mem_reg_ctrl_rf_wen   = RegInit(false.B)
  val mem_reg_ctrl_mem_val  = RegInit(false.B)
  val mem_reg_ctrl_mem_fcn  = RegInit(M_X)
  val mem_reg_ctrl_mem_typ  = RegInit(MT_X)
  val mem_reg_ctrl_wb_sel   = Reg(UInt())
  val mem_reg_ctrl_csr_cmd  = RegInit(CSR.N)

  // Writeback State
  val wb_reg_wbaddr         = Reg(UInt())
  val wb_reg_wbdata         = Reg(UInt(conf.datalen.W))
  val wb_reg_ctrl_rf_wen    = RegInit(false.B)

  //**********************************
  // Instruction Fetch Stage
  val if_pc_next          = Wire(UInt(conf.addrWidth.W))
  val exe_brjmp_target    = Wire(UInt(conf.addrWidth.W))
  val exe_jump_reg_target = Wire(UInt(conf.addrWidth.W))
  val exception_target    = Wire(UInt(conf.addrWidth.W))

}