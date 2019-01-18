// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VOneHotEncoder__Syms.h"


//======================

void VOneHotEncoder::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VOneHotEncoder* t=(VOneHotEncoder*)userthis;
    VOneHotEncoder__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VOneHotEncoder::traceChgThis(VOneHotEncoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VOneHotEncoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VOneHotEncoder::traceChgThis__2(VOneHotEncoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VOneHotEncoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->clock));
	vcdp->chgBit  (c+2,(vlTOPp->reset));
	vcdp->chgBit  (c+3,(vlTOPp->io_in_0));
	vcdp->chgBit  (c+4,(vlTOPp->io_in_1));
	vcdp->chgBit  (c+5,(vlTOPp->io_in_2));
	vcdp->chgBit  (c+6,(vlTOPp->io_in_3));
	vcdp->chgBit  (c+7,(vlTOPp->io_in_4));
	vcdp->chgBit  (c+8,(vlTOPp->io_in_5));
	vcdp->chgBit  (c+9,(vlTOPp->io_in_6));
	vcdp->chgBit  (c+10,(vlTOPp->io_in_7));
	vcdp->chgBit  (c+11,(vlTOPp->io_in_8));
	vcdp->chgBit  (c+12,(vlTOPp->io_in_9));
	vcdp->chgBit  (c+13,(vlTOPp->io_in_10));
	vcdp->chgBit  (c+14,(vlTOPp->io_in_11));
	vcdp->chgBit  (c+15,(vlTOPp->io_in_12));
	vcdp->chgBit  (c+16,(vlTOPp->io_in_13));
	vcdp->chgBit  (c+17,(vlTOPp->io_in_14));
	vcdp->chgBit  (c+18,(vlTOPp->io_in_15));
	vcdp->chgBus  (c+19,(vlTOPp->io_out),4);
    }
}
