// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VInstDecoder.h for the primary calling header

#include "VInstDecoder.h"      // For This
#include "VInstDecoder__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VInstDecoder) {
    VInstDecoder__Syms* __restrict vlSymsp = __VlSymsp = new VInstDecoder__Syms(this, name());
    VInstDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VInstDecoder::__Vconfigure(VInstDecoder__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VInstDecoder::~VInstDecoder() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VInstDecoder::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VInstDecoder::eval\n"); );
    VInstDecoder__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VInstDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

void VInstDecoder::_eval_initial_loop(VInstDecoder__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void VInstDecoder::_initial__TOP__1(VInstDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstDecoder::_initial__TOP__1\n"); );
    VInstDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at InstDecoder.v:296
    vlTOPp->io_regInfos_0_need = 1U;
    // INITIAL at InstDecoder.v:298
    vlTOPp->io_regInfos_1_need = 1U;
    // INITIAL at InstDecoder.v:300
    vlTOPp->io_regInfos_2_need = 1U;
    // INITIAL at InstDecoder.v:302
    vlTOPp->io_regInfos_3_need = 1U;
}

VL_INLINE_OPT void VInstDecoder::_combo__TOP__2(VInstDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstDecoder::_combo__TOP__2\n"); );
    VInstDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_regInfos_0_regIdx = (0x1fU & (vlTOPp->io_inst 
					     >> 0xfU));
    vlTOPp->io_regInfos_1_regIdx = (0x1fU & (vlTOPp->io_inst 
					     >> 0x14U));
    vlTOPp->io_regInfos_2_regIdx = (0x1fU & (vlTOPp->io_inst 
					     >> 0x1bU));
    vlTOPp->io_regInfos_3_regIdx = (0x1fU & (vlTOPp->io_inst 
					     >> 7U));
    vlTOPp->InstDecoder__DOT__decoder_3_8_io_out = 
	((((7U == (7U & (vlTOPp->io_inst >> 0xcU))) 
	   << 7U) | (((6U == (7U & (vlTOPp->io_inst 
				    >> 0xcU))) << 6U) 
		     | (((5U == (7U & (vlTOPp->io_inst 
				       >> 0xcU))) << 5U) 
			| ((4U == (7U & (vlTOPp->io_inst 
					 >> 0xcU))) 
			   << 4U)))) | (((3U == (7U 
						 & (vlTOPp->io_inst 
						    >> 0xcU))) 
					 << 3U) | (
						   ((2U 
						     == 
						     (7U 
						      & (vlTOPp->io_inst 
							 >> 0xcU))) 
						    << 2U) 
						   | (((1U 
							== 
							(7U 
							 & (vlTOPp->io_inst 
							    >> 0xcU))) 
						       << 1U) 
						      | (0U 
							 == 
							 (7U 
							  & (vlTOPp->io_inst 
							     >> 0xcU)))))));
    vlTOPp->InstDecoder__DOT___T_188 = ((6U == (0x1fU 
						& (vlTOPp->io_inst 
						   >> 2U))) 
					& ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
					   >> 5U));
    vlTOPp->InstDecoder__DOT___T_203 = ((0xeU == (0x1fU 
						  & (vlTOPp->io_inst 
						     >> 2U))) 
					& ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
					   >> 5U));
    vlTOPp->InstDecoder__DOT___T_147 = ((4U == (0x1fU 
						& (vlTOPp->io_inst 
						   >> 2U))) 
					& ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
					   >> 5U));
    vlTOPp->InstDecoder__DOT___T_171 = ((0xcU == (0x1fU 
						  & (vlTOPp->io_inst 
						     >> 2U))) 
					& ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
					   >> 5U));
    vlTOPp->InstDecoder__DOT___T_194 = ((0xeU == (0x1fU 
						  & (vlTOPp->io_inst 
						     >> 2U))) 
					& (IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out));
    vlTOPp->InstDecoder__DOT__alu_op_encoder__DOT___T_275 
	= ((((1U & VL_NEGATE_I((IData)((((0xcU == (0x1fU 
						   & (vlTOPp->io_inst 
						      >> 2U))) 
					 & (IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out)) 
					& (0x20U == 
					   (0x7fU & 
					    (vlTOPp->io_inst 
					     >> 0x19U))))))) 
	     | (2U & VL_NEGATE_I((IData)((((4U == (0x1fU 
						   & (vlTOPp->io_inst 
						      >> 2U))) 
					   & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
					      >> 2U)) 
					  | (((0xcU 
					       == (0x1fU 
						   & (vlTOPp->io_inst 
						      >> 2U))) 
					      & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
						 >> 2U)) 
					     & (0U 
						== 
						(0x7fU 
						 & (vlTOPp->io_inst 
						    >> 0x19U))))))))) 
	    | (3U & VL_NEGATE_I((IData)((((4U == (0x1fU 
						  & (vlTOPp->io_inst 
						     >> 2U))) 
					  & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
					     >> 3U)) 
					 | (((0xcU 
					      == (0x1fU 
						  & (vlTOPp->io_inst 
						     >> 2U))) 
					     & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
						>> 3U)) 
					    & (0U == 
					       (0x7fU 
						& (vlTOPp->io_inst 
						   >> 0x19U))))))))) 
	   | (4U & VL_NEGATE_I((IData)((((4U == (0x1fU 
						 & (vlTOPp->io_inst 
						    >> 2U))) 
					 & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
					    >> 4U)) 
					| (((0xcU == 
					     (0x1fU 
					      & (vlTOPp->io_inst 
						 >> 2U))) 
					    & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
					       >> 4U)) 
					   & (0U == 
					      (0x7fU 
					       & (vlTOPp->io_inst 
						  >> 0x19U)))))))));
    vlTOPp->InstDecoder__DOT__alu_op_encoder__DOT___T_278 
	= ((((IData)(vlTOPp->InstDecoder__DOT__alu_op_encoder__DOT___T_275) 
	     | (5U & VL_NEGATE_I((IData)((((4U == (0x1fU 
						   & (vlTOPp->io_inst 
						      >> 2U))) 
					   & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
					      >> 6U)) 
					  | (((0xcU 
					       == (0x1fU 
						   & (vlTOPp->io_inst 
						      >> 2U))) 
					      & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
						 >> 6U)) 
					     & (0U 
						== 
						(0x7fU 
						 & (vlTOPp->io_inst 
						    >> 0x19U))))))))) 
	    | (6U & VL_NEGATE_I((IData)((((4U == (0x1fU 
						  & (vlTOPp->io_inst 
						     >> 2U))) 
					  & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
					     >> 7U)) 
					 | (((0xcU 
					      == (0x1fU 
						  & (vlTOPp->io_inst 
						     >> 2U))) 
					     & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
						>> 7U)) 
					    & (0U == 
					       (0x7fU 
						& (vlTOPp->io_inst 
						   >> 0x19U))))))))) 
	   | (7U & VL_NEGATE_I((IData)(((((4U == (0x1fU 
						  & (vlTOPp->io_inst 
						     >> 2U))) 
					  & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
					     >> 1U)) 
					 & (0U == (0x3fU 
						   & (vlTOPp->io_inst 
						      >> 0x1aU)))) 
					| (((0xcU == 
					     (0x1fU 
					      & (vlTOPp->io_inst 
						 >> 2U))) 
					    & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
					       >> 1U)) 
					   & (0U == 
					      (0x7fU 
					       & (vlTOPp->io_inst 
						  >> 0x19U)))))))));
    vlTOPp->InstDecoder__DOT__alu_op_encoder__DOT___T_283 
	= ((((((IData)(vlTOPp->InstDecoder__DOT__alu_op_encoder__DOT___T_278) 
	       | (8U & VL_NEGATE_I((IData)((((IData)(vlTOPp->InstDecoder__DOT___T_147) 
					     & (0U 
						== 
						(0x3fU 
						 & (vlTOPp->io_inst 
						    >> 0x1aU)))) 
					    | ((IData)(vlTOPp->InstDecoder__DOT___T_171) 
					       & (0U 
						  == 
						  (0x7fU 
						   & (vlTOPp->io_inst 
						      >> 0x19U))))))))) 
	      | (9U & VL_NEGATE_I((IData)((((IData)(vlTOPp->InstDecoder__DOT___T_147) 
					    & (0x10U 
					       == (0x3fU 
						   & (vlTOPp->io_inst 
						      >> 0x1aU)))) 
					   | ((IData)(vlTOPp->InstDecoder__DOT___T_171) 
					      & (0x20U 
						 == 
						 (0x7fU 
						  & (vlTOPp->io_inst 
						     >> 0x19U))))))))) 
	     | (0xaU & VL_NEGATE_I((IData)((((6U == 
					      (0x1fU 
					       & (vlTOPp->io_inst 
						  >> 2U))) 
					     & (IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out)) 
					    | ((IData)(vlTOPp->InstDecoder__DOT___T_194) 
					       & (0U 
						  == 
						  (0x7fU 
						   & (vlTOPp->io_inst 
						      >> 0x19U))))))))) 
	    | (0xbU & VL_NEGATE_I((IData)(((IData)(vlTOPp->InstDecoder__DOT___T_194) 
					   & (0x20U 
					      == (0x7fU 
						  & (vlTOPp->io_inst 
						     >> 0x19U)))))))) 
	   | (0xcU & VL_NEGATE_I((IData)(((((6U == 
					     (0x1fU 
					      & (vlTOPp->io_inst 
						 >> 2U))) 
					    & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
					       >> 1U)) 
					   & (0U == 
					      (0x7fU 
					       & (vlTOPp->io_inst 
						  >> 0x19U)))) 
					  | (((0xeU 
					       == (0x1fU 
						   & (vlTOPp->io_inst 
						      >> 2U))) 
					      & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
						 >> 1U)) 
					     & (0U 
						== 
						(0x7fU 
						 & (vlTOPp->io_inst 
						    >> 0x19U)))))))));
    vlTOPp->io_aluOPCode = (((IData)(vlTOPp->InstDecoder__DOT__alu_op_encoder__DOT___T_283) 
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
								     >> 0x19U)))))))));
}

void VInstDecoder::_eval(VInstDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstDecoder::_eval\n"); );
    VInstDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
}

void VInstDecoder::_eval_initial(VInstDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstDecoder::_eval_initial\n"); );
    VInstDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
}

void VInstDecoder::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstDecoder::final\n"); );
    // Variables
    VInstDecoder__Syms* __restrict vlSymsp = this->__VlSymsp;
    VInstDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VInstDecoder::_eval_settle(VInstDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstDecoder::_eval_settle\n"); );
    VInstDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData VInstDecoder::_change_request(VInstDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstDecoder::_change_request\n"); );
    VInstDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VInstDecoder::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstDecoder::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VInstDecoder::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstDecoder::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_inst = VL_RAND_RESET_I(32);
    io_aluOPCode = VL_RAND_RESET_I(4);
    io_regInfos_0_regIdx = VL_RAND_RESET_I(5);
    io_regInfos_0_need = VL_RAND_RESET_I(1);
    io_regInfos_1_regIdx = VL_RAND_RESET_I(5);
    io_regInfos_1_need = VL_RAND_RESET_I(1);
    io_regInfos_2_regIdx = VL_RAND_RESET_I(5);
    io_regInfos_2_need = VL_RAND_RESET_I(1);
    io_regInfos_3_regIdx = VL_RAND_RESET_I(5);
    io_regInfos_3_need = VL_RAND_RESET_I(1);
    InstDecoder__DOT__decoder_3_8_io_out = VL_RAND_RESET_I(8);
    InstDecoder__DOT___T_147 = VL_RAND_RESET_I(1);
    InstDecoder__DOT___T_171 = VL_RAND_RESET_I(1);
    InstDecoder__DOT___T_188 = VL_RAND_RESET_I(1);
    InstDecoder__DOT___T_194 = VL_RAND_RESET_I(1);
    InstDecoder__DOT___T_203 = VL_RAND_RESET_I(1);
    InstDecoder__DOT__alu_op_encoder__DOT___T_275 = VL_RAND_RESET_I(4);
    InstDecoder__DOT__alu_op_encoder__DOT___T_278 = VL_RAND_RESET_I(4);
    InstDecoder__DOT__alu_op_encoder__DOT___T_283 = VL_RAND_RESET_I(4);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
