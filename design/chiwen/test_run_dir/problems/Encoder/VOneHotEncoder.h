// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VOneHotEncoder_H_
#define _VOneHotEncoder_H_

#include "verilated.h"

class VOneHotEncoder__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VOneHotEncoder) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_in_0,0,0);
    VL_IN8(io_in_1,0,0);
    VL_IN8(io_in_2,0,0);
    VL_IN8(io_in_3,0,0);
    VL_IN8(io_in_4,0,0);
    VL_IN8(io_in_5,0,0);
    VL_IN8(io_in_6,0,0);
    VL_IN8(io_in_7,0,0);
    VL_IN8(io_in_8,0,0);
    VL_IN8(io_in_9,0,0);
    VL_IN8(io_in_10,0,0);
    VL_IN8(io_in_11,0,0);
    VL_IN8(io_in_12,0,0);
    VL_IN8(io_in_13,0,0);
    VL_IN8(io_in_14,0,0);
    VL_IN8(io_in_15,0,0);
    VL_OUT8(io_out,3,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VOneHotEncoder__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VOneHotEncoder);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VOneHotEncoder(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VOneHotEncoder();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VOneHotEncoder__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VOneHotEncoder__Syms* symsp, bool first);
  private:
    static QData _change_request(VOneHotEncoder__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(VOneHotEncoder__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _eval(VOneHotEncoder__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VOneHotEncoder__Syms* __restrict vlSymsp);
    static void _eval_settle(VOneHotEncoder__Syms* __restrict vlSymsp);
    static void traceChgThis(VOneHotEncoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VOneHotEncoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VOneHotEncoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(VOneHotEncoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(VOneHotEncoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(VOneHotEncoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard