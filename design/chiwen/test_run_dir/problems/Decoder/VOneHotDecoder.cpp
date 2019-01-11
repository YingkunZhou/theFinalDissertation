// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VOneHotDecoder.h for the primary calling header

#include "VOneHotDecoder.h"    // For This
#include "VOneHotDecoder__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VOneHotDecoder) {
    VOneHotDecoder__Syms* __restrict vlSymsp = __VlSymsp = new VOneHotDecoder__Syms(this, name());
    VOneHotDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VOneHotDecoder::__Vconfigure(VOneHotDecoder__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VOneHotDecoder::~VOneHotDecoder() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VOneHotDecoder::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VOneHotDecoder::eval\n"); );
    VOneHotDecoder__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VOneHotDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VOneHotDecoder::_eval_initial_loop(VOneHotDecoder__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VOneHotDecoder::_sequent__TOP__1(VOneHotDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOneHotDecoder::_sequent__TOP__1\n"); );
    VOneHotDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at OneHotDecoder.v:82
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"myUInt = 0x%x\n",
		       32,vlTOPp->io_out);
	}
    }
}

VL_INLINE_OPT void VOneHotDecoder::_settle__TOP__2(VOneHotDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOneHotDecoder::_settle__TOP__2\n"); );
    VOneHotDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_out = ((((0x1fU == (IData)(vlTOPp->io_in)) 
			<< 0x1fU) | (((0x1eU == (IData)(vlTOPp->io_in)) 
				      << 0x1eU) | (
						   ((0x1dU 
						     == (IData)(vlTOPp->io_in)) 
						    << 0x1dU) 
						   | (((0x1cU 
							== (IData)(vlTOPp->io_in)) 
						       << 0x1cU) 
						      | (((0x1bU 
							   == (IData)(vlTOPp->io_in)) 
							  << 0x1bU) 
							 | (((0x1aU 
							      == (IData)(vlTOPp->io_in)) 
							     << 0x1aU) 
							    | (((0x19U 
								 == (IData)(vlTOPp->io_in)) 
								<< 0x19U) 
							       | (((0x18U 
								    == (IData)(vlTOPp->io_in)) 
								   << 0x18U) 
								  | (((0x17U 
								       == (IData)(vlTOPp->io_in)) 
								      << 0x17U) 
								     | (((0x16U 
									  == (IData)(vlTOPp->io_in)) 
									 << 0x16U) 
									| (((0x15U 
									     == (IData)(vlTOPp->io_in)) 
									    << 0x15U) 
									   | (((0x14U 
										== (IData)(vlTOPp->io_in)) 
									       << 0x14U) 
									      | (((0x13U 
										== (IData)(vlTOPp->io_in)) 
										<< 0x13U) 
										| (((0x12U 
										== (IData)(vlTOPp->io_in)) 
										<< 0x12U) 
										| (((0x11U 
										== (IData)(vlTOPp->io_in)) 
										<< 0x11U) 
										| ((0x10U 
										== (IData)(vlTOPp->io_in)) 
										<< 0x10U)))))))))))))))) 
		      | (((0xfU == (IData)(vlTOPp->io_in)) 
			  << 0xfU) | (((0xeU == (IData)(vlTOPp->io_in)) 
				       << 0xeU) | (
						   ((0xdU 
						     == (IData)(vlTOPp->io_in)) 
						    << 0xdU) 
						   | (((0xcU 
							== (IData)(vlTOPp->io_in)) 
						       << 0xcU) 
						      | (((0xbU 
							   == (IData)(vlTOPp->io_in)) 
							  << 0xbU) 
							 | (((0xaU 
							      == (IData)(vlTOPp->io_in)) 
							     << 0xaU) 
							    | (((9U 
								 == (IData)(vlTOPp->io_in)) 
								<< 9U) 
							       | (((8U 
								    == (IData)(vlTOPp->io_in)) 
								   << 8U) 
								  | (((7U 
								       == (IData)(vlTOPp->io_in)) 
								      << 7U) 
								     | (((6U 
									  == (IData)(vlTOPp->io_in)) 
									 << 6U) 
									| (((5U 
									     == (IData)(vlTOPp->io_in)) 
									    << 5U) 
									   | (((4U 
										== (IData)(vlTOPp->io_in)) 
									       << 4U) 
									      | (((3U 
										== (IData)(vlTOPp->io_in)) 
										<< 3U) 
										| (((2U 
										== (IData)(vlTOPp->io_in)) 
										<< 2U) 
										| (((1U 
										== (IData)(vlTOPp->io_in)) 
										<< 1U) 
										| (0U 
										== (IData)(vlTOPp->io_in))))))))))))))))));
}

void VOneHotDecoder::_eval(VOneHotDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOneHotDecoder::_eval\n"); );
    VOneHotDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    vlTOPp->_settle__TOP__2(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VOneHotDecoder::_eval_initial(VOneHotDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOneHotDecoder::_eval_initial\n"); );
    VOneHotDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VOneHotDecoder::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOneHotDecoder::final\n"); );
    // Variables
    VOneHotDecoder__Syms* __restrict vlSymsp = this->__VlSymsp;
    VOneHotDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VOneHotDecoder::_eval_settle(VOneHotDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOneHotDecoder::_eval_settle\n"); );
    VOneHotDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData VOneHotDecoder::_change_request(VOneHotDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOneHotDecoder::_change_request\n"); );
    VOneHotDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VOneHotDecoder::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOneHotDecoder::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((io_in & 0xe0U))) {
	Verilated::overWidthError("io_in");}
}
#endif // VL_DEBUG

void VOneHotDecoder::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOneHotDecoder::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_in = VL_RAND_RESET_I(5);
    io_out = VL_RAND_RESET_I(32);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
