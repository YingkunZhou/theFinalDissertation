// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VInstDecoder_H_
#define _VInstDecoder_H_

#include "verilated.h"

class VInstDecoder__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VInstDecoder) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_aluOPCode,3,0);
    VL_OUT8(io_regInfos_0_regIdx,4,0);
    VL_OUT8(io_regInfos_0_need,0,0);
    VL_OUT8(io_regInfos_1_regIdx,4,0);
    VL_OUT8(io_regInfos_1_need,0,0);
    VL_OUT8(io_regInfos_2_regIdx,4,0);
    VL_OUT8(io_regInfos_2_need,0,0);
    VL_OUT8(io_regInfos_3_regIdx,4,0);
    VL_OUT8(io_regInfos_3_need,0,0);
    VL_IN(io_inst,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(InstDecoder__DOT__decoder_3_8_io_out,7,0);
    VL_SIG8(InstDecoder__DOT___T_147,0,0);
    VL_SIG8(InstDecoder__DOT___T_171,0,0);
    VL_SIG8(InstDecoder__DOT___T_188,0,0);
    VL_SIG8(InstDecoder__DOT___T_194,0,0);
    VL_SIG8(InstDecoder__DOT___T_203,0,0);
    VL_SIG8(InstDecoder__DOT__alu_op_encoder__DOT___T_275,3,0);
    VL_SIG8(InstDecoder__DOT__alu_op_encoder__DOT___T_278,3,0);
    VL_SIG8(InstDecoder__DOT__alu_op_encoder__DOT___T_283,3,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VInstDecoder__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VInstDecoder);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VInstDecoder(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VInstDecoder();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VInstDecoder__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VInstDecoder__Syms* symsp, bool first);
  private:
    static QData _change_request(VInstDecoder__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__2(VInstDecoder__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _eval(VInstDecoder__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VInstDecoder__Syms* __restrict vlSymsp);
    static void _eval_settle(VInstDecoder__Syms* __restrict vlSymsp);
    static void _initial__TOP__1(VInstDecoder__Syms* __restrict vlSymsp);
    static void traceChgThis(VInstDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VInstDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VInstDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VInstDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(VInstDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(VInstDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(VInstDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
