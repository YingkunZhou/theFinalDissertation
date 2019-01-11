// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VOneHotDecoder__Syms.h"


//======================

void VOneHotDecoder::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VOneHotDecoder* t=(VOneHotDecoder*)userthis;
    VOneHotDecoder__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VOneHotDecoder::traceChgThis(VOneHotDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VOneHotDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VOneHotDecoder::traceChgThis__2(VOneHotDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VOneHotDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->clock));
	vcdp->chgBit  (c+2,(vlTOPp->reset));
	vcdp->chgBus  (c+3,(vlTOPp->io_in),5);
	vcdp->chgBus  (c+4,(vlTOPp->io_out),32);
	vcdp->chgBit  (c+5,((0U == (IData)(vlTOPp->io_in))));
	vcdp->chgBit  (c+6,((1U == (IData)(vlTOPp->io_in))));
	vcdp->chgBit  (c+7,((2U == (IData)(vlTOPp->io_in))));
	vcdp->chgBit  (c+8,((3U == (IData)(vlTOPp->io_in))));
	vcdp->chgBit  (c+9,((4U == (IData)(vlTOPp->io_in))));
	vcdp->chgBit  (c+10,((5U == (IData)(vlTOPp->io_in))));
	vcdp->chgBit  (c+11,((6U == (IData)(vlTOPp->io_in))));
	vcdp->chgBit  (c+12,((7U == (IData)(vlTOPp->io_in))));
	vcdp->chgBit  (c+13,((8U == (IData)(vlTOPp->io_in))));
	vcdp->chgBit  (c+14,((9U == (IData)(vlTOPp->io_in))));
	vcdp->chgBit  (c+15,((0xaU == (IData)(vlTOPp->io_in))));
	vcdp->chgBit  (c+16,((0xbU == (IData)(vlTOPp->io_in))));
	vcdp->chgBit  (c+17,((0xcU == (IData)(vlTOPp->io_in))));
	vcdp->chgBit  (c+18,((0xdU == (IData)(vlTOPp->io_in))));
	vcdp->chgBit  (c+19,((0xeU == (IData)(vlTOPp->io_in))));
	vcdp->chgBit  (c+20,((0xfU == (IData)(vlTOPp->io_in))));
	vcdp->chgBit  (c+21,((0x10U == (IData)(vlTOPp->io_in))));
	vcdp->chgBit  (c+22,((0x11U == (IData)(vlTOPp->io_in))));
	vcdp->chgBit  (c+23,((0x12U == (IData)(vlTOPp->io_in))));
	vcdp->chgBit  (c+24,((0x13U == (IData)(vlTOPp->io_in))));
	vcdp->chgBit  (c+25,((0x14U == (IData)(vlTOPp->io_in))));
	vcdp->chgBit  (c+26,((0x15U == (IData)(vlTOPp->io_in))));
	vcdp->chgBit  (c+27,((0x16U == (IData)(vlTOPp->io_in))));
	vcdp->chgBit  (c+28,((0x17U == (IData)(vlTOPp->io_in))));
	vcdp->chgBit  (c+29,((0x18U == (IData)(vlTOPp->io_in))));
	vcdp->chgBit  (c+30,((0x19U == (IData)(vlTOPp->io_in))));
	vcdp->chgBit  (c+31,((0x1aU == (IData)(vlTOPp->io_in))));
	vcdp->chgBit  (c+32,((0x1bU == (IData)(vlTOPp->io_in))));
	vcdp->chgBit  (c+33,((0x1cU == (IData)(vlTOPp->io_in))));
	vcdp->chgBit  (c+34,((0x1dU == (IData)(vlTOPp->io_in))));
	vcdp->chgBit  (c+35,((0x1eU == (IData)(vlTOPp->io_in))));
	vcdp->chgBit  (c+36,((0x1fU == (IData)(vlTOPp->io_in))));
    }
}
