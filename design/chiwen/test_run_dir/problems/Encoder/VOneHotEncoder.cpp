// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VOneHotEncoder.h for the primary calling header

#include "VOneHotEncoder.h"    // For This
#include "VOneHotEncoder__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VOneHotEncoder) {
    VOneHotEncoder__Syms* __restrict vlSymsp = __VlSymsp = new VOneHotEncoder__Syms(this, name());
    VOneHotEncoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VOneHotEncoder::__Vconfigure(VOneHotEncoder__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VOneHotEncoder::~VOneHotEncoder() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VOneHotEncoder::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VOneHotEncoder::eval\n"); );
    VOneHotEncoder__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VOneHotEncoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VOneHotEncoder::_eval_initial_loop(VOneHotEncoder__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VOneHotEncoder::_combo__TOP__1(VOneHotEncoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOneHotEncoder::_combo__TOP__1\n"); );
    VOneHotEncoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_out = (0xfU & (((((((((((((((1U & VL_NEGATE_I((IData)((IData)(vlTOPp->io_in_1)))) 
					   | (2U & 
					      VL_NEGATE_I((IData)((IData)(vlTOPp->io_in_2))))) 
					  | (3U & VL_NEGATE_I((IData)((IData)(vlTOPp->io_in_3))))) 
					 | (4U & VL_NEGATE_I((IData)((IData)(vlTOPp->io_in_4))))) 
					| (5U & VL_NEGATE_I((IData)((IData)(vlTOPp->io_in_5))))) 
				       | (6U & VL_NEGATE_I((IData)((IData)(vlTOPp->io_in_6))))) 
				      | (7U & VL_NEGATE_I((IData)((IData)(vlTOPp->io_in_7))))) 
				     | (8U & VL_NEGATE_I((IData)((IData)(vlTOPp->io_in_8))))) 
				    | (9U & VL_NEGATE_I((IData)((IData)(vlTOPp->io_in_9))))) 
				   | (0xaU & VL_NEGATE_I((IData)((IData)(vlTOPp->io_in_10))))) 
				  | (0xbU & VL_NEGATE_I((IData)((IData)(vlTOPp->io_in_11))))) 
				 | (0xcU & VL_NEGATE_I((IData)((IData)(vlTOPp->io_in_12))))) 
				| (0xdU & VL_NEGATE_I((IData)((IData)(vlTOPp->io_in_13))))) 
			       | (0xeU & VL_NEGATE_I((IData)((IData)(vlTOPp->io_in_14))))) 
			      | VL_NEGATE_I((IData)((IData)(vlTOPp->io_in_15)))));
}

void VOneHotEncoder::_eval(VOneHotEncoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOneHotEncoder::_eval\n"); );
    VOneHotEncoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VOneHotEncoder::_eval_initial(VOneHotEncoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOneHotEncoder::_eval_initial\n"); );
    VOneHotEncoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VOneHotEncoder::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOneHotEncoder::final\n"); );
    // Variables
    VOneHotEncoder__Syms* __restrict vlSymsp = this->__VlSymsp;
    VOneHotEncoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VOneHotEncoder::_eval_settle(VOneHotEncoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOneHotEncoder::_eval_settle\n"); );
    VOneHotEncoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VOneHotEncoder::_change_request(VOneHotEncoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOneHotEncoder::_change_request\n"); );
    VOneHotEncoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VOneHotEncoder::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOneHotEncoder::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((io_in_0 & 0xfeU))) {
	Verilated::overWidthError("io_in_0");}
    if (VL_UNLIKELY((io_in_1 & 0xfeU))) {
	Verilated::overWidthError("io_in_1");}
    if (VL_UNLIKELY((io_in_2 & 0xfeU))) {
	Verilated::overWidthError("io_in_2");}
    if (VL_UNLIKELY((io_in_3 & 0xfeU))) {
	Verilated::overWidthError("io_in_3");}
    if (VL_UNLIKELY((io_in_4 & 0xfeU))) {
	Verilated::overWidthError("io_in_4");}
    if (VL_UNLIKELY((io_in_5 & 0xfeU))) {
	Verilated::overWidthError("io_in_5");}
    if (VL_UNLIKELY((io_in_6 & 0xfeU))) {
	Verilated::overWidthError("io_in_6");}
    if (VL_UNLIKELY((io_in_7 & 0xfeU))) {
	Verilated::overWidthError("io_in_7");}
    if (VL_UNLIKELY((io_in_8 & 0xfeU))) {
	Verilated::overWidthError("io_in_8");}
    if (VL_UNLIKELY((io_in_9 & 0xfeU))) {
	Verilated::overWidthError("io_in_9");}
    if (VL_UNLIKELY((io_in_10 & 0xfeU))) {
	Verilated::overWidthError("io_in_10");}
    if (VL_UNLIKELY((io_in_11 & 0xfeU))) {
	Verilated::overWidthError("io_in_11");}
    if (VL_UNLIKELY((io_in_12 & 0xfeU))) {
	Verilated::overWidthError("io_in_12");}
    if (VL_UNLIKELY((io_in_13 & 0xfeU))) {
	Verilated::overWidthError("io_in_13");}
    if (VL_UNLIKELY((io_in_14 & 0xfeU))) {
	Verilated::overWidthError("io_in_14");}
    if (VL_UNLIKELY((io_in_15 & 0xfeU))) {
	Verilated::overWidthError("io_in_15");}
}
#endif // VL_DEBUG

void VOneHotEncoder::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOneHotEncoder::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_in_0 = VL_RAND_RESET_I(1);
    io_in_1 = VL_RAND_RESET_I(1);
    io_in_2 = VL_RAND_RESET_I(1);
    io_in_3 = VL_RAND_RESET_I(1);
    io_in_4 = VL_RAND_RESET_I(1);
    io_in_5 = VL_RAND_RESET_I(1);
    io_in_6 = VL_RAND_RESET_I(1);
    io_in_7 = VL_RAND_RESET_I(1);
    io_in_8 = VL_RAND_RESET_I(1);
    io_in_9 = VL_RAND_RESET_I(1);
    io_in_10 = VL_RAND_RESET_I(1);
    io_in_11 = VL_RAND_RESET_I(1);
    io_in_12 = VL_RAND_RESET_I(1);
    io_in_13 = VL_RAND_RESET_I(1);
    io_in_14 = VL_RAND_RESET_I(1);
    io_in_15 = VL_RAND_RESET_I(1);
    io_out = VL_RAND_RESET_I(4);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
