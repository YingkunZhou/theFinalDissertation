// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VOneHotDecoder__Syms.h"


//======================

void VOneHotDecoder::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VOneHotDecoder::traceInit, &VOneHotDecoder::traceFull, &VOneHotDecoder::traceChg, this);
}
void VOneHotDecoder::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VOneHotDecoder* t=(VOneHotDecoder*)userthis;
    VOneHotDecoder__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
	VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VOneHotDecoder::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VOneHotDecoder* t=(VOneHotDecoder*)userthis;
    VOneHotDecoder__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VOneHotDecoder::traceInitThis(VOneHotDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VOneHotDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VOneHotDecoder::traceFullThis(VOneHotDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VOneHotDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VOneHotDecoder::traceInitThis__1(VOneHotDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VOneHotDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBus  (c+3,"io_in",-1,4,0);
	vcdp->declBus  (c+4,"io_out",-1,31,0);
	vcdp->declBit  (c+1,"OneHotDecoder clock",-1);
	vcdp->declBit  (c+2,"OneHotDecoder reset",-1);
	vcdp->declBus  (c+3,"OneHotDecoder io_in",-1,4,0);
	vcdp->declBus  (c+4,"OneHotDecoder io_out",-1,31,0);
	vcdp->declBit  (c+5,"OneHotDecoder bools_0",-1);
	vcdp->declBit  (c+6,"OneHotDecoder bools_1",-1);
	vcdp->declBit  (c+7,"OneHotDecoder bools_2",-1);
	vcdp->declBit  (c+8,"OneHotDecoder bools_3",-1);
	vcdp->declBit  (c+9,"OneHotDecoder bools_4",-1);
	vcdp->declBit  (c+10,"OneHotDecoder bools_5",-1);
	vcdp->declBit  (c+11,"OneHotDecoder bools_6",-1);
	vcdp->declBit  (c+12,"OneHotDecoder bools_7",-1);
	vcdp->declBit  (c+13,"OneHotDecoder bools_8",-1);
	vcdp->declBit  (c+14,"OneHotDecoder bools_9",-1);
	vcdp->declBit  (c+15,"OneHotDecoder bools_10",-1);
	vcdp->declBit  (c+16,"OneHotDecoder bools_11",-1);
	vcdp->declBit  (c+17,"OneHotDecoder bools_12",-1);
	vcdp->declBit  (c+18,"OneHotDecoder bools_13",-1);
	vcdp->declBit  (c+19,"OneHotDecoder bools_14",-1);
	vcdp->declBit  (c+20,"OneHotDecoder bools_15",-1);
	vcdp->declBit  (c+21,"OneHotDecoder bools_16",-1);
	vcdp->declBit  (c+22,"OneHotDecoder bools_17",-1);
	vcdp->declBit  (c+23,"OneHotDecoder bools_18",-1);
	vcdp->declBit  (c+24,"OneHotDecoder bools_19",-1);
	vcdp->declBit  (c+25,"OneHotDecoder bools_20",-1);
	vcdp->declBit  (c+26,"OneHotDecoder bools_21",-1);
	vcdp->declBit  (c+27,"OneHotDecoder bools_22",-1);
	vcdp->declBit  (c+28,"OneHotDecoder bools_23",-1);
	vcdp->declBit  (c+29,"OneHotDecoder bools_24",-1);
	vcdp->declBit  (c+30,"OneHotDecoder bools_25",-1);
	vcdp->declBit  (c+31,"OneHotDecoder bools_26",-1);
	vcdp->declBit  (c+32,"OneHotDecoder bools_27",-1);
	vcdp->declBit  (c+33,"OneHotDecoder bools_28",-1);
	vcdp->declBit  (c+34,"OneHotDecoder bools_29",-1);
	vcdp->declBit  (c+35,"OneHotDecoder bools_30",-1);
	vcdp->declBit  (c+36,"OneHotDecoder bools_31",-1);
	// Tracing: OneHotDecoder _T_116 // Ignored: Inlined leading underscore at OneHotDecoder.v:39
	// Tracing: OneHotDecoder _T_124 // Ignored: Inlined leading underscore at OneHotDecoder.v:40
	// Tracing: OneHotDecoder _T_131 // Ignored: Inlined leading underscore at OneHotDecoder.v:41
	// Tracing: OneHotDecoder _T_139 // Ignored: Inlined leading underscore at OneHotDecoder.v:42
	// Tracing: OneHotDecoder _T_143 // Ignored: Inlined leading underscore at OneHotDecoder.v:43
    }
}

void VOneHotDecoder::traceFullThis__1(VOneHotDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VOneHotDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
	vcdp->fullBus  (c+3,(vlTOPp->io_in),5);
	vcdp->fullBus  (c+4,(vlTOPp->io_out),32);
	vcdp->fullBit  (c+5,((0U == (IData)(vlTOPp->io_in))));
	vcdp->fullBit  (c+6,((1U == (IData)(vlTOPp->io_in))));
	vcdp->fullBit  (c+7,((2U == (IData)(vlTOPp->io_in))));
	vcdp->fullBit  (c+8,((3U == (IData)(vlTOPp->io_in))));
	vcdp->fullBit  (c+9,((4U == (IData)(vlTOPp->io_in))));
	vcdp->fullBit  (c+10,((5U == (IData)(vlTOPp->io_in))));
	vcdp->fullBit  (c+11,((6U == (IData)(vlTOPp->io_in))));
	vcdp->fullBit  (c+12,((7U == (IData)(vlTOPp->io_in))));
	vcdp->fullBit  (c+13,((8U == (IData)(vlTOPp->io_in))));
	vcdp->fullBit  (c+14,((9U == (IData)(vlTOPp->io_in))));
	vcdp->fullBit  (c+15,((0xaU == (IData)(vlTOPp->io_in))));
	vcdp->fullBit  (c+16,((0xbU == (IData)(vlTOPp->io_in))));
	vcdp->fullBit  (c+17,((0xcU == (IData)(vlTOPp->io_in))));
	vcdp->fullBit  (c+18,((0xdU == (IData)(vlTOPp->io_in))));
	vcdp->fullBit  (c+19,((0xeU == (IData)(vlTOPp->io_in))));
	vcdp->fullBit  (c+20,((0xfU == (IData)(vlTOPp->io_in))));
	vcdp->fullBit  (c+21,((0x10U == (IData)(vlTOPp->io_in))));
	vcdp->fullBit  (c+22,((0x11U == (IData)(vlTOPp->io_in))));
	vcdp->fullBit  (c+23,((0x12U == (IData)(vlTOPp->io_in))));
	vcdp->fullBit  (c+24,((0x13U == (IData)(vlTOPp->io_in))));
	vcdp->fullBit  (c+25,((0x14U == (IData)(vlTOPp->io_in))));
	vcdp->fullBit  (c+26,((0x15U == (IData)(vlTOPp->io_in))));
	vcdp->fullBit  (c+27,((0x16U == (IData)(vlTOPp->io_in))));
	vcdp->fullBit  (c+28,((0x17U == (IData)(vlTOPp->io_in))));
	vcdp->fullBit  (c+29,((0x18U == (IData)(vlTOPp->io_in))));
	vcdp->fullBit  (c+30,((0x19U == (IData)(vlTOPp->io_in))));
	vcdp->fullBit  (c+31,((0x1aU == (IData)(vlTOPp->io_in))));
	vcdp->fullBit  (c+32,((0x1bU == (IData)(vlTOPp->io_in))));
	vcdp->fullBit  (c+33,((0x1cU == (IData)(vlTOPp->io_in))));
	vcdp->fullBit  (c+34,((0x1dU == (IData)(vlTOPp->io_in))));
	vcdp->fullBit  (c+35,((0x1eU == (IData)(vlTOPp->io_in))));
	vcdp->fullBit  (c+36,((0x1fU == (IData)(vlTOPp->io_in))));
    }
}
