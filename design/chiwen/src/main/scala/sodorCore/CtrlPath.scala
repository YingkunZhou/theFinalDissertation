package sodorCore

import chisel3._
import chisel3.util.ListLookup
import common.{CSR, Configure, DebugCPath, MemPortIO}
import common.Instructions._

class CtrlToDataIO extends Bundle {
  val dec_stall  = Output(Bool())    // stall IF/DEC stages (due to hazards)
  val full_stall = Output(Bool())    // stall entire pipeline (due to D$ misses)
  val exe_pc_sel = Output(UInt(2.W))
  val br_type    = Output(UInt(4.W))
  val if_kill    = Output(Bool())
  val dec_kill   = Output(Bool())
  val op1_sel    = Output(UInt(2.W))
  val op2_sel    = Output(UInt(3.W))
  val alu_fun    = Output(UInt(4.W))
  val wb_sel     = Output(UInt(2.W))
  val rf_wen     = Output(Bool())
  val mem_val    = Output(Bool())
  val mem_fcn    = Output(UInt(2.W))
  val mem_typ    = Output(UInt(3.W))
  val csr_cmd    = Output(UInt(CSR.SZ))
  val fencei     = Output(Bool())    // pipeline is executing a fencei

  val pipeline_kill = Output(Bool()) // an exception occurred (detected in mem stage).
  // Kill the entire pipeline disregard stalls
  // and kill if,dec,exe stages.
  val mem_exception = Output(Bool()) // tell the CSR that decode detected an exception
}

class CpathIO(implicit val conf: Configure) extends Bundle {
  val dcpath = Flipped(new DebugCPath())
  val imem   = new MemPortIO(conf.datalen)
  val dmem   = new MemPortIO(conf.datalen)
  val data   = Flipped(new DataToCtrlIO())
  val ctrl   = new CtrlToDataIO() //as output

  override def cloneType: CpathIO.this.type = { new CpathIO().asInstanceOf[this.type] }
}

class CtrlPath(implicit val conf: Configure) extends Module {
  val io = IO(new CpathIO)
  io := DontCare

  val csignals = ListLookup(io.data.dec_inst,
                List(N, BR_N  , OP1_X  , OP2_X     , OEN_N, OEN_N, ALU_X   , WB_X  , REN_N, MEN_N, M_X  , MT_X , CSR.N, N),
    Array(     /* val |  BR   |  op1   |   op2     |  R1  |  R2  |  ALU    |  wb   | rf   | mem  | mem  | mask | csr  | fence.i */
               /* inst| type  |  sel   |   sel     |  oen |  oen |  fcn    |  sel  | wen  |  en  |  wr  | type | cmd  |         */
      LW     -> List(Y, BR_N  , OP1_RS1, OP2_ITYPE , OEN_Y, OEN_N, ALU_ADD , WB_MEM, REN_Y, MEN_Y, M_XRD, MT_W , CSR.N, N),
      LB     -> List(Y, BR_N  , OP1_RS1, OP2_ITYPE , OEN_Y, OEN_N, ALU_ADD , WB_MEM, REN_Y, MEN_Y, M_XRD, MT_B , CSR.N, N),
      LBU    -> List(Y, BR_N  , OP1_RS1, OP2_ITYPE , OEN_Y, OEN_N, ALU_ADD , WB_MEM, REN_Y, MEN_Y, M_XRD, MT_BU, CSR.N, N),
      LH     -> List(Y, BR_N  , OP1_RS1, OP2_ITYPE , OEN_Y, OEN_N, ALU_ADD , WB_MEM, REN_Y, MEN_Y, M_XRD, MT_H,  CSR.N, N),
      LHU    -> List(Y, BR_N  , OP1_RS1, OP2_ITYPE , OEN_Y, OEN_N, ALU_ADD , WB_MEM, REN_Y, MEN_Y, M_XRD, MT_HU, CSR.N, N),
      SW     -> List(Y, BR_N  , OP1_RS1, OP2_STYPE , OEN_Y, OEN_Y, ALU_ADD , WB_X  , REN_N, MEN_Y, M_XWR, MT_W , CSR.N, N),
      SB     -> List(Y, BR_N  , OP1_RS1, OP2_STYPE , OEN_Y, OEN_Y, ALU_ADD , WB_X  , REN_N, MEN_Y, M_XWR, MT_B , CSR.N, N),
      SH     -> List(Y, BR_N  , OP1_RS1, OP2_STYPE , OEN_Y, OEN_Y, ALU_ADD , WB_X  , REN_N, MEN_Y, M_XWR, MT_H , CSR.N, N),

      AUIPC  -> List(Y, BR_N  , OP1_PC , OP2_UTYPE , OEN_N, OEN_N, ALU_ADD , WB_ALU, REN_Y, MEN_N, M_X  , MT_X , CSR.N, N),
      LUI    -> List(Y, BR_N  , OP1_X  , OP2_UTYPE , OEN_N, OEN_N, ALU_CP_2, WB_ALU, REN_Y, MEN_N, M_X  , MT_X , CSR.N, N),

      ADDI   -> List(Y, BR_N  , OP1_RS1, OP2_ITYPE , OEN_Y, OEN_N, ALU_ADD , WB_ALU, REN_Y, MEN_N, M_X  , MT_X , CSR.N, N),
      ANDI   -> List(Y, BR_N  , OP1_RS1, OP2_ITYPE , OEN_Y, OEN_N, ALU_AND , WB_ALU, REN_Y, MEN_N, M_X  , MT_X , CSR.N, N),
      ORI    -> List(Y, BR_N  , OP1_RS1, OP2_ITYPE , OEN_Y, OEN_N, ALU_OR  , WB_ALU, REN_Y, MEN_N, M_X  , MT_X , CSR.N, N),
      XORI   -> List(Y, BR_N  , OP1_RS1, OP2_ITYPE , OEN_Y, OEN_N, ALU_XOR , WB_ALU, REN_Y, MEN_N, M_X  , MT_X , CSR.N, N),
      SLTI   -> List(Y, BR_N  , OP1_RS1, OP2_ITYPE , OEN_Y, OEN_N, ALU_SLT , WB_ALU, REN_Y, MEN_N, M_X  , MT_X , CSR.N, N),
      SLTIU  -> List(Y, BR_N  , OP1_RS1, OP2_ITYPE , OEN_Y, OEN_N, ALU_SLTU, WB_ALU, REN_Y, MEN_N, M_X  , MT_X , CSR.N, N),
      SLLI   -> List(Y, BR_N  , OP1_RS1, OP2_ITYPE , OEN_Y, OEN_N, ALU_SLL , WB_ALU, REN_Y, MEN_N, M_X  , MT_X , CSR.N, N),
      SRAI   -> List(Y, BR_N  , OP1_RS1, OP2_ITYPE , OEN_Y, OEN_N, ALU_SRA , WB_ALU, REN_Y, MEN_N, M_X  , MT_X , CSR.N, N),
      SRLI   -> List(Y, BR_N  , OP1_RS1, OP2_ITYPE , OEN_Y, OEN_N, ALU_SRL , WB_ALU, REN_Y, MEN_N, M_X  , MT_X , CSR.N, N),

      SLL    -> List(Y, BR_N  , OP1_RS1, OP2_RS2   , OEN_Y, OEN_Y, ALU_SLL , WB_ALU, REN_Y, MEN_N, M_X  , MT_X , CSR.N, N),
      ADD    -> List(Y, BR_N  , OP1_RS1, OP2_RS2   , OEN_Y, OEN_Y, ALU_ADD , WB_ALU, REN_Y, MEN_N, M_X  , MT_X , CSR.N, N),
      SUB    -> List(Y, BR_N  , OP1_RS1, OP2_RS2   , OEN_Y, OEN_Y, ALU_SUB , WB_ALU, REN_Y, MEN_N, M_X  , MT_X , CSR.N, N),
      SLT    -> List(Y, BR_N  , OP1_RS1, OP2_RS2   , OEN_Y, OEN_Y, ALU_SLT , WB_ALU, REN_Y, MEN_N, M_X  , MT_X , CSR.N, N),
      SLTU   -> List(Y, BR_N  , OP1_RS1, OP2_RS2   , OEN_Y, OEN_Y, ALU_SLTU, WB_ALU, REN_Y, MEN_N, M_X  , MT_X , CSR.N, N),
      AND    -> List(Y, BR_N  , OP1_RS1, OP2_RS2   , OEN_Y, OEN_Y, ALU_AND , WB_ALU, REN_Y, MEN_N, M_X  , MT_X , CSR.N, N),
      OR     -> List(Y, BR_N  , OP1_RS1, OP2_RS2   , OEN_Y, OEN_Y, ALU_OR  , WB_ALU, REN_Y, MEN_N, M_X  , MT_X , CSR.N, N),
      XOR    -> List(Y, BR_N  , OP1_RS1, OP2_RS2   , OEN_Y, OEN_Y, ALU_XOR , WB_ALU, REN_Y, MEN_N, M_X  , MT_X , CSR.N, N),
      SRA    -> List(Y, BR_N  , OP1_RS1, OP2_RS2   , OEN_Y, OEN_Y, ALU_SRA , WB_ALU, REN_Y, MEN_N, M_X  , MT_X , CSR.N, N),
      SRL    -> List(Y, BR_N  , OP1_RS1, OP2_RS2   , OEN_Y, OEN_Y, ALU_SRL , WB_ALU, REN_Y, MEN_N, M_X  , MT_X , CSR.N, N),

      JAL    -> List(Y, BR_J  , OP1_RS1, OP2_JTYPE , OEN_N, OEN_N, ALU_X   , WB_PC4, REN_Y, MEN_N, M_X  , MT_X , CSR.N, N),
      JALR   -> List(Y, BR_JR , OP1_RS1, OP2_ITYPE , OEN_Y, OEN_N, ALU_X   , WB_PC4, REN_Y, MEN_N, M_X  , MT_X , CSR.N, N),
      BEQ    -> List(Y, BR_EQ , OP1_RS1, OP2_BTYPE , OEN_Y, OEN_Y, ALU_X   , WB_X  , REN_N, MEN_N, M_X  , MT_X , CSR.N, N),
      BNE    -> List(Y, BR_NE , OP1_RS1, OP2_BTYPE , OEN_Y, OEN_Y, ALU_X   , WB_X  , REN_N, MEN_N, M_X  , MT_X , CSR.N, N),
      BGE    -> List(Y, BR_GE , OP1_RS1, OP2_BTYPE , OEN_Y, OEN_Y, ALU_X   , WB_X  , REN_N, MEN_N, M_X  , MT_X , CSR.N, N),
      BGEU   -> List(Y, BR_GEU, OP1_RS1, OP2_BTYPE , OEN_Y, OEN_Y, ALU_X   , WB_X  , REN_N, MEN_N, M_X  , MT_X , CSR.N, N),
      BLT    -> List(Y, BR_LT , OP1_RS1, OP2_BTYPE , OEN_Y, OEN_Y, ALU_X   , WB_X  , REN_N, MEN_N, M_X  , MT_X , CSR.N, N),
      BLTU   -> List(Y, BR_LTU, OP1_RS1, OP2_BTYPE , OEN_Y, OEN_Y, ALU_X   , WB_X  , REN_N, MEN_N, M_X  , MT_X , CSR.N, N),

      CSRRWI -> List(Y, BR_N  , OP1_IMZ, OP2_X     , OEN_Y, OEN_Y, ALU_CP_1, WB_CSR, REN_Y, MEN_N, M_X  , MT_X , CSR.W, N),
      CSRRSI -> List(Y, BR_N  , OP1_IMZ, OP2_X     , OEN_Y, OEN_Y, ALU_CP_1, WB_CSR, REN_Y, MEN_N, M_X  , MT_X , CSR.S, N),
      CSRRW  -> List(Y, BR_N  , OP1_RS1, OP2_X     , OEN_Y, OEN_Y, ALU_CP_1, WB_CSR, REN_Y, MEN_N, M_X  , MT_X , CSR.W, N),
      CSRRS  -> List(Y, BR_N  , OP1_RS1, OP2_X     , OEN_Y, OEN_Y, ALU_CP_1, WB_CSR, REN_Y, MEN_N, M_X  , MT_X , CSR.S, N),
      CSRRC  -> List(Y, BR_N  , OP1_RS1, OP2_X     , OEN_Y, OEN_Y, ALU_CP_1, WB_CSR, REN_Y, MEN_N, M_X  , MT_X , CSR.C, N),
      CSRRCI -> List(Y, BR_N  , OP1_IMZ, OP2_X     , OEN_Y, OEN_Y, ALU_CP_1, WB_CSR, REN_Y, MEN_N, M_X  , MT_X , CSR.C, N),

      ECALL  -> List(Y, BR_N  , OP1_X  , OP2_X     , OEN_N, OEN_N, ALU_X   , WB_X  , REN_N, MEN_N, M_X  , MT_X , CSR.I, N),
      MRET   -> List(Y, BR_N  , OP1_X  , OP2_X     , OEN_N, OEN_N, ALU_X   , WB_X  , REN_N, MEN_N, M_X  , MT_X , CSR.I, N),
      DRET   -> List(Y, BR_N  , OP1_X  , OP2_X     , OEN_N, OEN_N, ALU_X   , WB_X  , REN_N, MEN_N, M_X  , MT_X , CSR.I, N),
      EBREAK -> List(Y, BR_N  , OP1_X  , OP2_X     , OEN_N, OEN_N, ALU_X   , WB_X  , REN_N, MEN_N, M_X  , MT_X , CSR.I, N),
      WFI    -> List(Y, BR_N  , OP1_X  , OP2_X     , OEN_N, OEN_N, ALU_X   , WB_X  , REN_N, MEN_N, M_X  , MT_X , CSR.N, N), // implemented as a NOP

      FENCE_I-> List(Y, BR_N  , OP1_X  , OP2_X     , OEN_N, OEN_N, ALU_X   , WB_X  , REN_N, MEN_N, M_X  , MT_X , CSR.N, Y),
      // kill pipeline and refetch instructions since the pipeline will be holding stall instructions.
      FENCE  -> List(Y, BR_N  , OP1_X  , OP2_X     , OEN_N, OEN_N, ALU_X   , WB_X  , REN_N, MEN_N, M_X  , MT_X , CSR.N, N)
      // we are already sequentially consistent, so no need to honor the fence instruction
    ))
  // Put these control signals in variables
  val (cs_val_inst: Bool) :: cs_br_type :: cs_op1_sel :: cs_op2_sel :: (cs_rs1_oen: Bool) :: (cs_rs2_oen: Bool) :: cs0 = csignals
  val cs_alu_fun :: cs_wb_sel :: (cs_rf_wen: Bool) :: (cs_mem_en: Bool) :: cs_mem_fcn :: cs_msk_sel :: cs_csr_cmd :: (cs_fencei: Bool) :: Nil = cs0

  // Branch Logic
  val ctrl_exe_pc_sel = Mux(io.ctrl.pipeline_kill         , PC_EXC,
    Mux(io.data.exe_br_type === BR_N  , PC_4,
      Mux(io.data.exe_br_type === BR_NE , Mux(!io.data.exe_br_eq,  PC_BRJMP, PC_4),
        Mux(io.data.exe_br_type === BR_EQ , Mux( io.data.exe_br_eq,  PC_BRJMP, PC_4),
          Mux(io.data.exe_br_type === BR_GE , Mux(!io.data.exe_br_lt,  PC_BRJMP, PC_4),
            Mux(io.data.exe_br_type === BR_GEU, Mux(!io.data.exe_br_ltu, PC_BRJMP, PC_4),
              Mux(io.data.exe_br_type === BR_LT , Mux( io.data.exe_br_lt,  PC_BRJMP, PC_4),
                Mux(io.data.exe_br_type === BR_LTU, Mux( io.data.exe_br_ltu, PC_BRJMP, PC_4),
                  Mux(io.data.exe_br_type === BR_J  , PC_BRJMP,
                    Mux(io.data.exe_br_type === BR_JR , PC_JALR,
                      PC_4
                    ))))))))))

  val ifkill = (ctrl_exe_pc_sel =/= PC_4) || !io.imem.resp.valid || cs_fencei || RegNext(cs_fencei)
  val deckill = ctrl_exe_pc_sel =/= PC_4

  // Exception Handling
  io.ctrl.pipeline_kill := (io.data.csr_eret || io.ctrl.mem_exception)
  val dec_exception = (!cs_val_inst && io.imem.resp.valid)

  // Stall Signal Logic


}
