// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VInstDecoder__Syms.h"


//======================

void VInstDecoder::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VInstDecoder* t=(VInstDecoder*)userthis;
    VInstDecoder__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VInstDecoder::traceChgThis(VInstDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInstDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VInstDecoder::traceChgThis__2(VInstDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInstDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out),8);
    }
}

void VInstDecoder::traceChgThis__3(VInstDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInstDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+2,(vlTOPp->clock));
	vcdp->chgBit  (c+3,(vlTOPp->reset));
	vcdp->chgBus  (c+4,(vlTOPp->io_inst),32);
	vcdp->chgBus  (c+5,(vlTOPp->io_aluOPCode),4);
	vcdp->chgBus  (c+6,(vlTOPp->io_regInfos_0_regIdx),5);
	vcdp->chgBit  (c+7,(vlTOPp->io_regInfos_0_need));
	vcdp->chgBus  (c+8,(vlTOPp->io_regInfos_1_regIdx),5);
	vcdp->chgBit  (c+9,(vlTOPp->io_regInfos_1_need));
	vcdp->chgBus  (c+10,(vlTOPp->io_regInfos_2_regIdx),5);
	vcdp->chgBit  (c+11,(vlTOPp->io_regInfos_2_need));
	vcdp->chgBus  (c+12,(vlTOPp->io_regInfos_3_regIdx),5);
	vcdp->chgBit  (c+13,(vlTOPp->io_regInfos_3_need));
	vcdp->chgBus  (c+14,((7U & (vlTOPp->io_inst 
				    >> 0xcU))),3);
	vcdp->chgBit  (c+15,((((0xcU == (0x1fU & (vlTOPp->io_inst 
						  >> 2U))) 
			       & (IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out)) 
			      & (0x20U == (0x7fU & 
					   (vlTOPp->io_inst 
					    >> 0x19U))))));
	vcdp->chgBit  (c+16,((((4U == (0x1fU & (vlTOPp->io_inst 
						>> 2U))) 
			       & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				  >> 2U)) | (((0xcU 
					       == (0x1fU 
						   & (vlTOPp->io_inst 
						      >> 2U))) 
					      & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
						 >> 2U)) 
					     & (0U 
						== 
						(0x7fU 
						 & (vlTOPp->io_inst 
						    >> 0x19U)))))));
	vcdp->chgBit  (c+17,((((4U == (0x1fU & (vlTOPp->io_inst 
						>> 2U))) 
			       & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				  >> 3U)) | (((0xcU 
					       == (0x1fU 
						   & (vlTOPp->io_inst 
						      >> 2U))) 
					      & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
						 >> 3U)) 
					     & (0U 
						== 
						(0x7fU 
						 & (vlTOPp->io_inst 
						    >> 0x19U)))))));
	vcdp->chgBit  (c+18,((((4U == (0x1fU & (vlTOPp->io_inst 
						>> 2U))) 
			       & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				  >> 4U)) | (((0xcU 
					       == (0x1fU 
						   & (vlTOPp->io_inst 
						      >> 2U))) 
					      & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
						 >> 4U)) 
					     & (0U 
						== 
						(0x7fU 
						 & (vlTOPp->io_inst 
						    >> 0x19U)))))));
	vcdp->chgBit  (c+19,((((4U == (0x1fU & (vlTOPp->io_inst 
						>> 2U))) 
			       & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				  >> 6U)) | (((0xcU 
					       == (0x1fU 
						   & (vlTOPp->io_inst 
						      >> 2U))) 
					      & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
						 >> 6U)) 
					     & (0U 
						== 
						(0x7fU 
						 & (vlTOPp->io_inst 
						    >> 0x19U)))))));
	vcdp->chgBit  (c+20,((((4U == (0x1fU & (vlTOPp->io_inst 
						>> 2U))) 
			       & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				  >> 7U)) | (((0xcU 
					       == (0x1fU 
						   & (vlTOPp->io_inst 
						      >> 2U))) 
					      & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
						 >> 7U)) 
					     & (0U 
						== 
						(0x7fU 
						 & (vlTOPp->io_inst 
						    >> 0x19U)))))));
	vcdp->chgBit  (c+21,(((((4U == (0x1fU & (vlTOPp->io_inst 
						 >> 2U))) 
				& ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				   >> 1U)) & (0U == 
					      (0x3fU 
					       & (vlTOPp->io_inst 
						  >> 0x1aU)))) 
			      | (((0xcU == (0x1fU & 
					    (vlTOPp->io_inst 
					     >> 2U))) 
				  & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				     >> 1U)) & (0U 
						== 
						(0x7fU 
						 & (vlTOPp->io_inst 
						    >> 0x19U)))))));
	vcdp->chgBit  (c+22,((((IData)(vlTOPp->InstDecoder__DOT___T_147) 
			       & (0U == (0x3fU & (vlTOPp->io_inst 
						  >> 0x1aU)))) 
			      | ((IData)(vlTOPp->InstDecoder__DOT___T_171) 
				 & (0U == (0x7fU & 
					   (vlTOPp->io_inst 
					    >> 0x19U)))))));
	vcdp->chgBit  (c+23,((((IData)(vlTOPp->InstDecoder__DOT___T_147) 
			       & (0x10U == (0x3fU & 
					    (vlTOPp->io_inst 
					     >> 0x1aU)))) 
			      | ((IData)(vlTOPp->InstDecoder__DOT___T_171) 
				 & (0x20U == (0x7fU 
					      & (vlTOPp->io_inst 
						 >> 0x19U)))))));
	vcdp->chgBit  (c+24,((((6U == (0x1fU & (vlTOPp->io_inst 
						>> 2U))) 
			       & (IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out)) 
			      | ((IData)(vlTOPp->InstDecoder__DOT___T_194) 
				 & (0U == (0x7fU & 
					   (vlTOPp->io_inst 
					    >> 0x19U)))))));
	vcdp->chgBit  (c+25,(((IData)(vlTOPp->InstDecoder__DOT___T_194) 
			      & (0x20U == (0x7fU & 
					   (vlTOPp->io_inst 
					    >> 0x19U))))));
	vcdp->chgBit  (c+26,(((((6U == (0x1fU & (vlTOPp->io_inst 
						 >> 2U))) 
				& ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				   >> 1U)) & (0U == 
					      (0x7fU 
					       & (vlTOPp->io_inst 
						  >> 0x19U)))) 
			      | (((0xeU == (0x1fU & 
					    (vlTOPp->io_inst 
					     >> 2U))) 
				  & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				     >> 1U)) & (0U 
						== 
						(0x7fU 
						 & (vlTOPp->io_inst 
						    >> 0x19U)))))));
	vcdp->chgBit  (c+27,((((IData)(vlTOPp->InstDecoder__DOT___T_188) 
			       & (0U == (0x7fU & (vlTOPp->io_inst 
						  >> 0x19U)))) 
			      | ((IData)(vlTOPp->InstDecoder__DOT___T_203) 
				 & (0U == (0x7fU & 
					   (vlTOPp->io_inst 
					    >> 0x19U)))))));
	vcdp->chgBit  (c+28,((((IData)(vlTOPp->InstDecoder__DOT___T_188) 
			       & (0x20U == (0x7fU & 
					    (vlTOPp->io_inst 
					     >> 0x19U)))) 
			      | ((IData)(vlTOPp->InstDecoder__DOT___T_203) 
				 & (0x20U == (0x7fU 
					      & (vlTOPp->io_inst 
						 >> 0x19U)))))));
	vcdp->chgBus  (c+29,((((IData)(vlTOPp->InstDecoder__DOT__alu_op_encoder__DOT___T_283) 
			       | (0xdU & VL_NEGATE_I((IData)(
							     (((IData)(vlTOPp->InstDecoder__DOT___T_188) 
							       & (0U 
								  == 
								  (0x7fU 
								   & (vlTOPp->io_inst 
								      >> 0x19U)))) 
							      | ((IData)(vlTOPp->InstDecoder__DOT___T_203) 
								 & (0U 
								    == 
								    (0x7fU 
								     & (vlTOPp->io_inst 
									>> 0x19U))))))))) 
			      | (0xeU & VL_NEGATE_I((IData)(
							    (((IData)(vlTOPp->InstDecoder__DOT___T_188) 
							      & (0x20U 
								 == 
								 (0x7fU 
								  & (vlTOPp->io_inst 
								     >> 0x19U)))) 
							     | ((IData)(vlTOPp->InstDecoder__DOT___T_203) 
								& (0x20U 
								   == 
								   (0x7fU 
								    & (vlTOPp->io_inst 
								       >> 0x19U)))))))))),4);
	vcdp->chgBit  (c+30,((0U == (0x7fU & (vlTOPp->io_inst 
					      >> 0x19U)))));
	vcdp->chgBit  (c+31,((0x20U == (0x7fU & (vlTOPp->io_inst 
						 >> 0x19U)))));
	vcdp->chgBit  (c+32,((0U == (0x3fU & (vlTOPp->io_inst 
					      >> 0x1aU)))));
	vcdp->chgBit  (c+33,((0x10U == (0x3fU & (vlTOPp->io_inst 
						 >> 0x1aU)))));
	vcdp->chgBit  (c+34,((4U == (0x1fU & (vlTOPp->io_inst 
					      >> 2U)))));
	vcdp->chgBit  (c+35,((0xcU == (0x1fU & (vlTOPp->io_inst 
						>> 2U)))));
	vcdp->chgBit  (c+36,((6U == (0x1fU & (vlTOPp->io_inst 
					      >> 2U)))));
	vcdp->chgBit  (c+37,((0xeU == (0x1fU & (vlTOPp->io_inst 
						>> 2U)))));
	vcdp->chgBit  (c+38,(((4U == (0x1fU & (vlTOPp->io_inst 
					       >> 2U))) 
			      & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				 >> 2U))));
	vcdp->chgBit  (c+39,(((4U == (0x1fU & (vlTOPp->io_inst 
					       >> 2U))) 
			      & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				 >> 3U))));
	vcdp->chgBit  (c+40,(((4U == (0x1fU & (vlTOPp->io_inst 
					       >> 2U))) 
			      & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				 >> 4U))));
	vcdp->chgBit  (c+41,(((4U == (0x1fU & (vlTOPp->io_inst 
					       >> 2U))) 
			      & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				 >> 6U))));
	vcdp->chgBit  (c+42,(((4U == (0x1fU & (vlTOPp->io_inst 
					       >> 2U))) 
			      & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				 >> 7U))));
	vcdp->chgBit  (c+43,((((4U == (0x1fU & (vlTOPp->io_inst 
						>> 2U))) 
			       & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				  >> 1U)) & (0U == 
					     (0x3fU 
					      & (vlTOPp->io_inst 
						 >> 0x1aU))))));
	vcdp->chgBit  (c+44,(((IData)(vlTOPp->InstDecoder__DOT___T_147) 
			      & (0U == (0x3fU & (vlTOPp->io_inst 
						 >> 0x1aU))))));
	vcdp->chgBit  (c+45,(((IData)(vlTOPp->InstDecoder__DOT___T_147) 
			      & (0x10U == (0x3fU & 
					   (vlTOPp->io_inst 
					    >> 0x1aU))))));
	vcdp->chgBit  (c+46,((((0xcU == (0x1fU & (vlTOPp->io_inst 
						  >> 2U))) 
			       & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				  >> 1U)) & (0U == 
					     (0x7fU 
					      & (vlTOPp->io_inst 
						 >> 0x19U))))));
	vcdp->chgBit  (c+47,((((0xcU == (0x1fU & (vlTOPp->io_inst 
						  >> 2U))) 
			       & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				  >> 2U)) & (0U == 
					     (0x7fU 
					      & (vlTOPp->io_inst 
						 >> 0x19U))))));
	vcdp->chgBit  (c+48,((((0xcU == (0x1fU & (vlTOPp->io_inst 
						  >> 2U))) 
			       & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				  >> 3U)) & (0U == 
					     (0x7fU 
					      & (vlTOPp->io_inst 
						 >> 0x19U))))));
	vcdp->chgBit  (c+49,((((0xcU == (0x1fU & (vlTOPp->io_inst 
						  >> 2U))) 
			       & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				  >> 4U)) & (0U == 
					     (0x7fU 
					      & (vlTOPp->io_inst 
						 >> 0x19U))))));
	vcdp->chgBit  (c+50,(((IData)(vlTOPp->InstDecoder__DOT___T_171) 
			      & (0U == (0x7fU & (vlTOPp->io_inst 
						 >> 0x19U))))));
	vcdp->chgBit  (c+51,(((IData)(vlTOPp->InstDecoder__DOT___T_171) 
			      & (0x20U == (0x7fU & 
					   (vlTOPp->io_inst 
					    >> 0x19U))))));
	vcdp->chgBit  (c+52,((((0xcU == (0x1fU & (vlTOPp->io_inst 
						  >> 2U))) 
			       & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				  >> 6U)) & (0U == 
					     (0x7fU 
					      & (vlTOPp->io_inst 
						 >> 0x19U))))));
	vcdp->chgBit  (c+53,((((0xcU == (0x1fU & (vlTOPp->io_inst 
						  >> 2U))) 
			       & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				  >> 7U)) & (0U == 
					     (0x7fU 
					      & (vlTOPp->io_inst 
						 >> 0x19U))))));
	vcdp->chgBit  (c+54,(((6U == (0x1fU & (vlTOPp->io_inst 
					       >> 2U))) 
			      & (IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out))));
	vcdp->chgBit  (c+55,((((6U == (0x1fU & (vlTOPp->io_inst 
						>> 2U))) 
			       & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				  >> 1U)) & (0U == 
					     (0x7fU 
					      & (vlTOPp->io_inst 
						 >> 0x19U))))));
	vcdp->chgBit  (c+56,(((IData)(vlTOPp->InstDecoder__DOT___T_188) 
			      & (0U == (0x7fU & (vlTOPp->io_inst 
						 >> 0x19U))))));
	vcdp->chgBit  (c+57,(((IData)(vlTOPp->InstDecoder__DOT___T_188) 
			      & (0x20U == (0x7fU & 
					   (vlTOPp->io_inst 
					    >> 0x19U))))));
	vcdp->chgBit  (c+58,(((IData)(vlTOPp->InstDecoder__DOT___T_194) 
			      & (0U == (0x7fU & (vlTOPp->io_inst 
						 >> 0x19U))))));
	vcdp->chgBit  (c+59,((((0xeU == (0x1fU & (vlTOPp->io_inst 
						  >> 2U))) 
			       & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				  >> 1U)) & (0U == 
					     (0x7fU 
					      & (vlTOPp->io_inst 
						 >> 0x19U))))));
	vcdp->chgBit  (c+60,(((IData)(vlTOPp->InstDecoder__DOT___T_203) 
			      & (0U == (0x7fU & (vlTOPp->io_inst 
						 >> 0x19U))))));
	vcdp->chgBit  (c+61,(((IData)(vlTOPp->InstDecoder__DOT___T_203) 
			      & (0x20U == (0x7fU & 
					   (vlTOPp->io_inst 
					    >> 0x19U))))));
	vcdp->chgBit  (c+62,((0U == (7U & (vlTOPp->io_inst 
					   >> 0xcU)))));
	vcdp->chgBit  (c+63,((1U == (7U & (vlTOPp->io_inst 
					   >> 0xcU)))));
	vcdp->chgBit  (c+64,((2U == (7U & (vlTOPp->io_inst 
					   >> 0xcU)))));
	vcdp->chgBit  (c+65,((3U == (7U & (vlTOPp->io_inst 
					   >> 0xcU)))));
	vcdp->chgBit  (c+66,((4U == (7U & (vlTOPp->io_inst 
					   >> 0xcU)))));
	vcdp->chgBit  (c+67,((5U == (7U & (vlTOPp->io_inst 
					   >> 0xcU)))));
	vcdp->chgBit  (c+68,((6U == (7U & (vlTOPp->io_inst 
					   >> 0xcU)))));
	vcdp->chgBit  (c+69,((7U == (7U & (vlTOPp->io_inst 
					   >> 0xcU)))));
    }
}
