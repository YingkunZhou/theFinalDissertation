// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VOneHotEncoder__Syms.h"


//======================

void VOneHotEncoder::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VOneHotEncoder::traceInit, &VOneHotEncoder::traceFull, &VOneHotEncoder::traceChg, this);
}
void VOneHotEncoder::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VOneHotEncoder* t=(VOneHotEncoder*)userthis;
    VOneHotEncoder__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
	VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VOneHotEncoder::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VOneHotEncoder* t=(VOneHotEncoder*)userthis;
    VOneHotEncoder__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VOneHotEncoder::traceInitThis(VOneHotEncoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VOneHotEncoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VOneHotEncoder::traceFullThis(VOneHotEncoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VOneHotEncoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VOneHotEncoder::traceInitThis__1(VOneHotEncoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VOneHotEncoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBit  (c+3,"io_in_0",-1);
	vcdp->declBit  (c+4,"io_in_1",-1);
	vcdp->declBit  (c+5,"io_in_2",-1);
	vcdp->declBit  (c+6,"io_in_3",-1);
	vcdp->declBit  (c+7,"io_in_4",-1);
	vcdp->declBit  (c+8,"io_in_5",-1);
	vcdp->declBit  (c+9,"io_in_6",-1);
	vcdp->declBit  (c+10,"io_in_7",-1);
	vcdp->declBit  (c+11,"io_in_8",-1);
	vcdp->declBit  (c+12,"io_in_9",-1);
	vcdp->declBit  (c+13,"io_in_10",-1);
	vcdp->declBit  (c+14,"io_in_11",-1);
	vcdp->declBit  (c+15,"io_in_12",-1);
	vcdp->declBit  (c+16,"io_in_13",-1);
	vcdp->declBit  (c+17,"io_in_14",-1);
	vcdp->declBit  (c+18,"io_in_15",-1);
	vcdp->declBus  (c+19,"io_out",-1,3,0);
	vcdp->declBit  (c+1,"OneHotEncoder clock",-1);
	vcdp->declBit  (c+2,"OneHotEncoder reset",-1);
	vcdp->declBit  (c+3,"OneHotEncoder io_in_0",-1);
	vcdp->declBit  (c+4,"OneHotEncoder io_in_1",-1);
	vcdp->declBit  (c+5,"OneHotEncoder io_in_2",-1);
	vcdp->declBit  (c+6,"OneHotEncoder io_in_3",-1);
	vcdp->declBit  (c+7,"OneHotEncoder io_in_4",-1);
	vcdp->declBit  (c+8,"OneHotEncoder io_in_5",-1);
	vcdp->declBit  (c+9,"OneHotEncoder io_in_6",-1);
	vcdp->declBit  (c+10,"OneHotEncoder io_in_7",-1);
	vcdp->declBit  (c+11,"OneHotEncoder io_in_8",-1);
	vcdp->declBit  (c+12,"OneHotEncoder io_in_9",-1);
	vcdp->declBit  (c+13,"OneHotEncoder io_in_10",-1);
	vcdp->declBit  (c+14,"OneHotEncoder io_in_11",-1);
	vcdp->declBit  (c+15,"OneHotEncoder io_in_12",-1);
	vcdp->declBit  (c+16,"OneHotEncoder io_in_13",-1);
	vcdp->declBit  (c+17,"OneHotEncoder io_in_14",-1);
	vcdp->declBit  (c+18,"OneHotEncoder io_in_15",-1);
	vcdp->declBus  (c+19,"OneHotEncoder io_out",-1,3,0);
	// Tracing: OneHotEncoder _T_76 // Ignored: Inlined leading underscore at OneHotEncoder.v:22
	// Tracing: OneHotEncoder _T_78 // Ignored: Inlined leading underscore at OneHotEncoder.v:23
	// Tracing: OneHotEncoder _T_91 // Ignored: Inlined leading underscore at OneHotEncoder.v:24
	// Tracing: OneHotEncoder _T_93 // Ignored: Inlined leading underscore at OneHotEncoder.v:25
	// Tracing: OneHotEncoder _T_106 // Ignored: Inlined leading underscore at OneHotEncoder.v:26
	// Tracing: OneHotEncoder _T_108 // Ignored: Inlined leading underscore at OneHotEncoder.v:27
	// Tracing: OneHotEncoder _T_121 // Ignored: Inlined leading underscore at OneHotEncoder.v:28
	// Tracing: OneHotEncoder _T_123 // Ignored: Inlined leading underscore at OneHotEncoder.v:29
	// Tracing: OneHotEncoder _T_136 // Ignored: Inlined leading underscore at OneHotEncoder.v:30
	// Tracing: OneHotEncoder _T_138 // Ignored: Inlined leading underscore at OneHotEncoder.v:31
	// Tracing: OneHotEncoder _T_151 // Ignored: Inlined leading underscore at OneHotEncoder.v:32
	// Tracing: OneHotEncoder _T_153 // Ignored: Inlined leading underscore at OneHotEncoder.v:33
	// Tracing: OneHotEncoder _T_166 // Ignored: Inlined leading underscore at OneHotEncoder.v:34
	// Tracing: OneHotEncoder _T_168 // Ignored: Inlined leading underscore at OneHotEncoder.v:35
	// Tracing: OneHotEncoder _T_181 // Ignored: Inlined leading underscore at OneHotEncoder.v:36
	// Tracing: OneHotEncoder _T_183 // Ignored: Inlined leading underscore at OneHotEncoder.v:37
	// Tracing: OneHotEncoder _T_196 // Ignored: Inlined leading underscore at OneHotEncoder.v:38
	// Tracing: OneHotEncoder _T_198 // Ignored: Inlined leading underscore at OneHotEncoder.v:39
	// Tracing: OneHotEncoder _T_211 // Ignored: Inlined leading underscore at OneHotEncoder.v:40
	// Tracing: OneHotEncoder _T_213 // Ignored: Inlined leading underscore at OneHotEncoder.v:41
	// Tracing: OneHotEncoder _T_226 // Ignored: Inlined leading underscore at OneHotEncoder.v:42
	// Tracing: OneHotEncoder _T_228 // Ignored: Inlined leading underscore at OneHotEncoder.v:43
	// Tracing: OneHotEncoder _T_241 // Ignored: Inlined leading underscore at OneHotEncoder.v:44
	// Tracing: OneHotEncoder _T_243 // Ignored: Inlined leading underscore at OneHotEncoder.v:45
	// Tracing: OneHotEncoder _T_256 // Ignored: Inlined leading underscore at OneHotEncoder.v:46
	// Tracing: OneHotEncoder _T_258 // Ignored: Inlined leading underscore at OneHotEncoder.v:47
	// Tracing: OneHotEncoder _T_271 // Ignored: Inlined leading underscore at OneHotEncoder.v:48
	// Tracing: OneHotEncoder _T_273 // Ignored: Inlined leading underscore at OneHotEncoder.v:49
	// Tracing: OneHotEncoder _T_286 // Ignored: Inlined leading underscore at OneHotEncoder.v:50
	// Tracing: OneHotEncoder _T_290 // Ignored: Inlined leading underscore at OneHotEncoder.v:51
	// Tracing: OneHotEncoder _T_291 // Ignored: Inlined leading underscore at OneHotEncoder.v:52
	// Tracing: OneHotEncoder _T_292 // Ignored: Inlined leading underscore at OneHotEncoder.v:53
	// Tracing: OneHotEncoder _T_293 // Ignored: Inlined leading underscore at OneHotEncoder.v:54
	// Tracing: OneHotEncoder _T_294 // Ignored: Inlined leading underscore at OneHotEncoder.v:55
	// Tracing: OneHotEncoder _T_295 // Ignored: Inlined leading underscore at OneHotEncoder.v:56
	// Tracing: OneHotEncoder _T_296 // Ignored: Inlined leading underscore at OneHotEncoder.v:57
	// Tracing: OneHotEncoder _T_297 // Ignored: Inlined leading underscore at OneHotEncoder.v:58
	// Tracing: OneHotEncoder _T_298 // Ignored: Inlined leading underscore at OneHotEncoder.v:59
	// Tracing: OneHotEncoder _T_299 // Ignored: Inlined leading underscore at OneHotEncoder.v:60
	// Tracing: OneHotEncoder _T_300 // Ignored: Inlined leading underscore at OneHotEncoder.v:61
	// Tracing: OneHotEncoder _T_301 // Ignored: Inlined leading underscore at OneHotEncoder.v:62
	// Tracing: OneHotEncoder _T_302 // Ignored: Inlined leading underscore at OneHotEncoder.v:63
    }
}

void VOneHotEncoder::traceFullThis__1(VOneHotEncoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VOneHotEncoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
	vcdp->fullBit  (c+3,(vlTOPp->io_in_0));
	vcdp->fullBit  (c+4,(vlTOPp->io_in_1));
	vcdp->fullBit  (c+5,(vlTOPp->io_in_2));
	vcdp->fullBit  (c+6,(vlTOPp->io_in_3));
	vcdp->fullBit  (c+7,(vlTOPp->io_in_4));
	vcdp->fullBit  (c+8,(vlTOPp->io_in_5));
	vcdp->fullBit  (c+9,(vlTOPp->io_in_6));
	vcdp->fullBit  (c+10,(vlTOPp->io_in_7));
	vcdp->fullBit  (c+11,(vlTOPp->io_in_8));
	vcdp->fullBit  (c+12,(vlTOPp->io_in_9));
	vcdp->fullBit  (c+13,(vlTOPp->io_in_10));
	vcdp->fullBit  (c+14,(vlTOPp->io_in_11));
	vcdp->fullBit  (c+15,(vlTOPp->io_in_12));
	vcdp->fullBit  (c+16,(vlTOPp->io_in_13));
	vcdp->fullBit  (c+17,(vlTOPp->io_in_14));
	vcdp->fullBit  (c+18,(vlTOPp->io_in_15));
	vcdp->fullBus  (c+19,(vlTOPp->io_out),4);
    }
}
