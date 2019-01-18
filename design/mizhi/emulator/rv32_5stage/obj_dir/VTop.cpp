// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop.h"              // For This
#include "VTop__Syms.h"

#include "verilated_dpi.h"


//--------------------


void VTop::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTop::eval\n"); );
    VTop__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VTop::_eval_initial_loop(VTop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
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

VL_INLINE_OPT void VTop::_sequent__TOP__1(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_sequent__TOP__1\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vfunc_debug_tick__0__debug_req_valid,0,0);
    VL_SIG8(__Vfunc_debug_tick__0__debug_resp_ready,0,0);
    VL_SIG8(__Vdlyvdim0__Top__DOT__tile__DOT__core__DOT__d__DOT__regfile__DOT__regfile__v0,4,0);
    VL_SIG8(__Vdlyvset__Top__DOT__tile__DOT__core__DOT__d__DOT__regfile__DOT__regfile__v0,0,0);
    VL_SIG8(__Vdlyvdim0__Top__DOT__tile__DOT__core__DOT__d__DOT__regfile__DOT__regfile__v1,4,0);
    VL_SIG8(__Vdlyvset__Top__DOT__tile__DOT__core__DOT__d__DOT__regfile__DOT__regfile__v1,0,0);
    VL_SIG8(__Vdlyvval__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v0,7,0);
    VL_SIG8(__Vdlyvset__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v0,0,0);
    VL_SIG8(__Vdlyvval__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v1,7,0);
    VL_SIG8(__Vdlyvset__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v1,0,0);
    VL_SIG8(__Vdlyvval__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v2,7,0);
    VL_SIG8(__Vdlyvset__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v2,0,0);
    VL_SIG8(__Vdlyvval__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v3,7,0);
    VL_SIG8(__Vdlyvset__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v3,0,0);
    VL_SIG8(__Vdlyvval__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v4,7,0);
    VL_SIG8(__Vdlyvset__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v4,0,0);
    VL_SIG8(__Vdlyvval__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v5,7,0);
    VL_SIG8(__Vdlyvset__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v5,0,0);
    VL_SIG8(__Vdlyvval__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v6,7,0);
    VL_SIG8(__Vdlyvset__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v6,0,0);
    VL_SIG8(__Vdlyvval__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v7,7,0);
    VL_SIG8(__Vdlyvset__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v7,0,0);
    VL_SIG(__Vfunc_debug_tick__0__Vfuncout,31,0);
    VL_SIG(__Vfunc_debug_tick__0__debug_req_bits_addr,31,0);
    VL_SIG(__Vfunc_debug_tick__0__debug_req_bits_op,31,0);
    VL_SIG(__Vfunc_debug_tick__0__debug_req_bits_data,31,0);
    VL_SIG(__Vdly__Top__DOT__tile__DOT__core__DOT__d__DOT__exe_alu_op1,31,0);
    VL_SIG(__Vdly__Top__DOT__tile__DOT__core__DOT__d__DOT__brjmp_offset,31,0);
    VL_SIG(__Vdly__Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_alu_out,31,0);
    VL_SIG(__Vdly__Top__DOT__tile__DOT__core__DOT__d__DOT__wb_reg_wbdata,31,0);
    VL_SIG(__Vdlyvval__Top__DOT__tile__DOT__core__DOT__d__DOT__regfile__DOT__regfile__v0,31,0);
    VL_SIG(__Vdlyvval__Top__DOT__tile__DOT__core__DOT__d__DOT__regfile__DOT__regfile__v1,31,0);
    VL_SIG(__Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v0,20,0);
    VL_SIG(__Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v1,20,0);
    VL_SIG(__Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v2,20,0);
    VL_SIG(__Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v3,20,0);
    VL_SIG(__Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v4,20,0);
    VL_SIG(__Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v5,20,0);
    VL_SIG(__Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v6,20,0);
    VL_SIG(__Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v7,20,0);
    // Body
    // ALWAYS at generated-src/Top.v:6700
    if (VL_UNLIKELY(((2U <= vlTOPp->Top__DOT__SimDTM__DOT_____05Fexit) 
		     & (~ (IData)(vlTOPp->reset))))) {
	VL_FWRITEF(0x80000002U,"*** FAILED *** (exit code = %10#)\n",
		   32,(vlTOPp->Top__DOT__SimDTM__DOT_____05Fexit 
		       >> 1U));
    }
    // ALWAYS at /home/albert/CPU/theFinalDissertation/design/mizhi/vsrc/SimDTM.v:58
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->Top__DOT__SimDTM__DOT__r_reset))) {
	vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_valid = 0U;
	vlTOPp->Top__DOT__SimDTM__DOT_____05Fexit = 0U;
    } else {
	// Function: debug_tick at /home/albert/CPU/theFinalDissertation/design/mizhi/vsrc/SimDTM.v:67
	vlSymsp->TOP____024unit.__Vdpiimwrap_debug_tick_TOP____024unit(__Vfunc_debug_tick__0__debug_req_valid, (IData)(vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_ready), __Vfunc_debug_tick__0__debug_req_bits_addr, __Vfunc_debug_tick__0__debug_req_bits_op, __Vfunc_debug_tick__0__debug_req_bits_data, (IData)(vlTOPp->Top__DOT__tile__DOT__debug_io_dmi_resp_valid), __Vfunc_debug_tick__0__debug_resp_ready, 0U, 
								       (vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_324 
									| vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_307), __Vfunc_debug_tick__0__Vfuncout);
	vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_valid 
	    = __Vfunc_debug_tick__0__debug_req_valid;
	vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr 
	    = __Vfunc_debug_tick__0__debug_req_bits_addr;
	vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_op 
	    = __Vfunc_debug_tick__0__debug_req_bits_op;
	vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data 
	    = __Vfunc_debug_tick__0__debug_req_bits_data;
	vlTOPp->Top__DOT__SimDTM__DOT_____05Fexit = __Vfunc_debug_tick__0__Vfuncout;
    }
    __Vdlyvset__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v0 = 0U;
    __Vdlyvset__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v1 = 0U;
    __Vdlyvset__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v2 = 0U;
    __Vdlyvset__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v3 = 0U;
    __Vdlyvset__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v4 = 0U;
    __Vdlyvset__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v5 = 0U;
    __Vdlyvset__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v6 = 0U;
    __Vdlyvset__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v7 = 0U;
    __Vdlyvset__Top__DOT__tile__DOT__core__DOT__d__DOT__regfile__DOT__regfile__v0 = 0U;
    __Vdlyvset__Top__DOT__tile__DOT__core__DOT__d__DOT__regfile__DOT__regfile__v1 = 0U;
    __Vdly__Top__DOT__tile__DOT__core__DOT__d__DOT__wb_reg_wbdata 
	= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__wb_reg_wbdata;
    __Vdly__Top__DOT__tile__DOT__core__DOT__d__DOT__brjmp_offset 
	= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__brjmp_offset;
    __Vdly__Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_alu_out 
	= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_alu_out;
    __Vdly__Top__DOT__tile__DOT__core__DOT__d__DOT__exe_alu_op1 
	= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_alu_op1;
    // ALWAYS at generated-src/Top.v:3752
    if (VL_UNLIKELY((1U & (~ ((1U >= (3U & ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__insn_ret) 
					    + (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1225)))) 
			      | (IData)(vlTOPp->Top__DOT__tile__DOT__core_reset)))))) {
	VL_FWRITEF(0x80000002U,"Assertion failed: these conditions must be mutually exclusive\n    at CSR.scala:287 assert(PopCount(insn_ret :: io.exception :: Nil) <= 1, \"these conditions must be mutually exclusive\")\n");
    }
    if (VL_UNLIKELY((1U & (~ ((1U >= (3U & ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__insn_ret) 
					    + (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1225)))) 
			      | (IData)(vlTOPp->Top__DOT__tile__DOT__core_reset)))))) {
	VL_WRITEF("[%0t] %%Error: Top.v:4002: Assertion failed in %NTop.tile.core.d.csr\n",
		  64,VL_TIME_Q(),vlSymsp->name());
	VL_STOP_MT("generated-src/Top.v",4002,"");
    }
    // ALWAYS at generated-src/Top.v:6247
    vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_414 
	= vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_valid;
    // ALWAYS at generated-src/Top.v:6247
    if (vlTOPp->reset) {
	vlTOPp->Top__DOT__tile__DOT__debug__DOT__coreresetval = 1U;
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_433) {
	    vlTOPp->Top__DOT__tile__DOT__debug__DOT__coreresetval = 0U;
	}
    }
    // ALWAYS at generated-src/Top.v:6247
    if (vlTOPp->reset) {
	vlTOPp->Top__DOT__tile__DOT__debug__DOT__memreadfire = 0U;
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_423) {
	    vlTOPp->Top__DOT__tile__DOT__debug__DOT__memreadfire = 0U;
	} else {
	    if (vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_420) {
		vlTOPp->Top__DOT__tile__DOT__debug__DOT__memreadfire = 1U;
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:6247
    if (vlTOPp->reset) {
	vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbcs_sbsingleread = 0U;
    } else {
	if ((2U == (3U & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))) {
	    if ((0x38U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))) {
		vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbcs_sbsingleread 
		    = (1U & (vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data 
			     >> 0x14U));
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:6247
    if (vlTOPp->reset) {
	vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbcs_sbaccess = 2U;
    } else {
	if ((2U == (3U & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))) {
	    if ((0x38U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))) {
		vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbcs_sbaccess 
		    = (7U & (vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data 
			     >> 0x11U));
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:6247
    if (vlTOPp->reset) {
	vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbcs_sberror = 0U;
    } else {
	if ((2U == (3U & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))) {
	    if ((0x38U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))) {
		vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbcs_sberror 
		    = (7U & (vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data 
			     >> 0xcU));
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:6247
    if ((0x3cU != (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))) {
	vlTOPp->Top__DOT__tile__DOT__debug__DOT__firstreaddone = 0U;
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_420) {
	    vlTOPp->Top__DOT__tile__DOT__debug__DOT__firstreaddone = 1U;
	}
    }
    // ALWAYS at generated-src/Top.v:6247
    if (vlTOPp->reset) {
	vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbcs_sbautoread = 0U;
    } else {
	if ((2U == (3U & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))) {
	    if ((0x38U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))) {
		vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbcs_sbautoread 
		    = (1U & (vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data 
			     >> 0xfU));
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:6247
    if ((2U == (3U & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))) {
	if ((0x17U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))) {
	    if ((2U == (7U & (vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data 
			      >> 0x14U)))) {
		vlTOPp->Top__DOT__tile__DOT__debug__DOT__command_postexec 
		    = (1U & (vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data 
			     >> 0x12U));
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:6247
    if ((2U == (3U & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))) {
	if ((0x10U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))) {
	    vlTOPp->Top__DOT__tile__DOT__debug__DOT__dmcontrol_hartreset 
		= (1U & (vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data 
			 >> 0x1dU));
	}
    }
    // ALWAYS at generated-src/Top.v:6247
    if ((2U == (3U & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))) {
	if ((0x10U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))) {
	    vlTOPp->Top__DOT__tile__DOT__debug__DOT__dmcontrol_ndmreset 
		= (1U & (vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data 
			 >> 1U));
	}
    }
    // ALWAYS at generated-src/Top.v:6247
    if ((2U == (3U & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))) {
	if ((0x10U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))) {
	    vlTOPp->Top__DOT__tile__DOT__debug__DOT__dmcontrol_dmactive 
		= (1U & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data);
	}
    }
    // ALWAYS at generated-src/Top.v:6247
    if ((2U == (3U & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))) {
	if ((5U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))) {
	    vlTOPp->Top__DOT__tile__DOT__debug__DOT__data1 
		= vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data;
	}
    }
    // ALWAYS at generated-src/Top.v:6247
    if ((2U == (3U & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))) {
	if ((6U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))) {
	    vlTOPp->Top__DOT__tile__DOT__debug__DOT__data2 
		= vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data;
	}
    }
    // ALWAYS at generated-src/Top.v:6247
    if ((2U == (3U & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))) {
	if ((0x17U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))) {
	    if ((2U == (7U & (vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data 
			      >> 0x14U)))) {
		vlTOPp->Top__DOT__tile__DOT__debug__DOT__command_transfer 
		    = (1U & (vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data 
			     >> 0x11U));
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:6247
    if (vlTOPp->reset) {
	vlTOPp->Top__DOT__tile__DOT__debug__DOT__abstractcs_cmderr = 0U;
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_403) {
	    vlTOPp->Top__DOT__tile__DOT__debug__DOT__abstractcs_cmderr = 0U;
	} else {
	    if ((2U == (3U & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))) {
		if ((0x17U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))) {
		    vlTOPp->Top__DOT__tile__DOT__debug__DOT__abstractcs_cmderr 
			= ((2U == (7U & (vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data 
					 >> 0x14U)))
			    ? 1U : 2U);
		} else {
		    if (vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_333) {
			vlTOPp->Top__DOT__tile__DOT__debug__DOT__abstractcs_cmderr 
			    = (7U & (vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data 
				     >> 8U));
		    }
		}
	    }
	}
    }
    vlTOPp->io_success = (1U == vlTOPp->Top__DOT__SimDTM__DOT_____05Fexit);
    vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_ready 
	= vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_valid;
    // ALWAYS at generated-src/Top.v:6247
    vlTOPp->Top__DOT__tile__DOT__debug__DOT__dmstatus_allrunning 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__dmcontrol_resumereq));
    // ALWAYS at generated-src/Top.v:6247
    vlTOPp->Top__DOT__tile__DOT__debug__DOT__dmstatus_allhalted 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__dmcontrol_haltreq));
    // ALWAYS at generated-src/Top.v:1403
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__exe_inst_is_load = 0U;
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1217) {
	    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__exe_inst_is_load 
		= vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1197;
	}
    }
    // ALWAYS at generated-src/Top.v:1403
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__exe_reg_is_csr = 0U;
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1177) {
	    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__exe_reg_is_csr 
		= ((0U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__ctrl_exe_pc_sel)) 
		   & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1184));
	} else {
	    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1187) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__exe_reg_is_csr = 0U;
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:4855
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_typ = 0U;
    } else {
	if ((1U & (~ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_pipeline_kill)))) {
	    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1217) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_typ 
		    = vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ;
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:4855
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_val = 0U;
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_pipeline_kill) {
	    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_val = 0U;
	} else {
	    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1217) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_val 
		    = vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_val;
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:3752
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_375 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_141);
    // ALWAYS at generated-src/Top.v:4935
    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_pipeline_kill) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_pc = 0x4033U;
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1217) {
	    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_pc 
		= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_pc;
	}
    }
    // ALWAYS at generated-src/Top.v:4855
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_br_type = 0U;
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_399) {
	    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_br_type = 0U;
	} else {
	    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_240) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_br_type 
		    = ((0U != (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__ctrl_exe_pc_sel))
		        ? 0U : (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_br_type));
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:3752
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_360 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_136);
    // ALWAYS at generated-src/Top.v:3752
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_363 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_137);
    // ALWAYS at generated-src/Top.v:3752
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_366 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_138);
    // ALWAYS at generated-src/Top.v:3752
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_369 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_139);
    // ALWAYS at generated-src/Top.v:3752
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_372 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_140);
    // ALWAYS at generated-src/Top.v:3752
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_345 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_131);
    // ALWAYS at generated-src/Top.v:3752
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_348 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_132);
    // ALWAYS at generated-src/Top.v:3752
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_351 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_133);
    // ALWAYS at generated-src/Top.v:3752
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_354 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_134);
    // ALWAYS at generated-src/Top.v:3752
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_357 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_135);
    // ALWAYS at generated-src/Top.v:3752
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_330 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_126);
    // ALWAYS at generated-src/Top.v:3752
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_333 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_127);
    // ALWAYS at generated-src/Top.v:3752
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_336 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_128);
    // ALWAYS at generated-src/Top.v:3752
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_339 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_129);
    // ALWAYS at generated-src/Top.v:4855
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_csr_cmd = 0U;
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_pipeline_kill) {
	    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_csr_cmd = 0U;
	} else {
	    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1217) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_csr_cmd 
		    = vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_csr_cmd;
	    }
	}
    }
    // ALWAYS at /home/albert/CPU/theFinalDissertation/design/mizhi/vsrc/AsyncReadMem.sv:33
    if (vlTOPp->Top__DOT__tile__DOT__debug_io_debugmem_req_bits_fcn) {
	__Vdlyvval__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v0 
	    = (0xffU & vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbdata);
	__Vdlyvset__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v0 = 1U;
	__Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v0 
	    = (0x1fffffU & vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbaddr);
    }
    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_fcn) {
	if ((1U & (IData)(vlTOPp->Top__DOT__tile__DOT__memory__DOT___T_325))) {
	    __Vdlyvval__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v1 
		= (0xffU & (IData)(vlTOPp->Top__DOT__tile__DOT__memory__DOT___T_311));
	    __Vdlyvset__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v1 = 1U;
	    __Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v1 
		= (0x1ffffcU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_alu_out);
	}
    }
    // ALWAYS at /home/albert/CPU/theFinalDissertation/design/mizhi/vsrc/AsyncReadMem.sv:33
    if (vlTOPp->Top__DOT__tile__DOT__debug_io_debugmem_req_bits_fcn) {
	__Vdlyvval__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v2 
	    = (0xffU & (vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbdata 
			>> 8U));
	__Vdlyvset__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v2 = 1U;
	__Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v2 
	    = (0x1fffffU & ((IData)(1U) + vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbaddr));
    }
    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_fcn) {
	if ((2U & (IData)(vlTOPp->Top__DOT__tile__DOT__memory__DOT___T_325))) {
	    __Vdlyvval__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v3 
		= (0xffU & (IData)((vlTOPp->Top__DOT__tile__DOT__memory__DOT___T_311 
				    >> 8U)));
	    __Vdlyvset__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v3 = 1U;
	    __Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v3 
		= (0x1fffffU & ((IData)(1U) + (0x1ffffcU 
					       & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_alu_out)));
	}
    }
    // ALWAYS at /home/albert/CPU/theFinalDissertation/design/mizhi/vsrc/AsyncReadMem.sv:33
    if (vlTOPp->Top__DOT__tile__DOT__debug_io_debugmem_req_bits_fcn) {
	__Vdlyvval__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v4 
	    = (0xffU & (vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbdata 
			>> 0x10U));
	__Vdlyvset__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v4 = 1U;
	__Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v4 
	    = (0x1fffffU & ((IData)(2U) + vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbaddr));
    }
    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_fcn) {
	if ((4U & (IData)(vlTOPp->Top__DOT__tile__DOT__memory__DOT___T_325))) {
	    __Vdlyvval__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v5 
		= (0xffU & (IData)((vlTOPp->Top__DOT__tile__DOT__memory__DOT___T_311 
				    >> 0x10U)));
	    __Vdlyvset__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v5 = 1U;
	    __Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v5 
		= (0x1fffffU & ((IData)(2U) + (0x1ffffcU 
					       & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_alu_out)));
	}
    }
    // ALWAYS at /home/albert/CPU/theFinalDissertation/design/mizhi/vsrc/AsyncReadMem.sv:33
    if (vlTOPp->Top__DOT__tile__DOT__debug_io_debugmem_req_bits_fcn) {
	__Vdlyvval__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v6 
	    = (0xffU & (vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbdata 
			>> 0x18U));
	__Vdlyvset__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v6 = 1U;
	__Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v6 
	    = (0x1fffffU & ((IData)(3U) + vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbaddr));
    }
    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_fcn) {
	if ((8U & (IData)(vlTOPp->Top__DOT__tile__DOT__memory__DOT___T_325))) {
	    __Vdlyvval__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v7 
		= (0xffU & (IData)((vlTOPp->Top__DOT__tile__DOT__memory__DOT___T_311 
				    >> 0x18U)));
	    __Vdlyvset__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v7 = 1U;
	    __Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v7 
		= (0x1fffffU & ((IData)(3U) + (0x1ffffcU 
					       & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_alu_out)));
	}
    }
    // ALWAYS at generated-src/Top.v:1403
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1152 
	= ((0x2003U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
	   & ((3U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
	      & ((0x4003U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		 & ((0x1003U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		    & ((0x5003U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		       & ((0x2023U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
			  & ((0x23U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
			     & ((0x1023U != (0x707fU 
					     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				& ((0x17U != (0x7fU 
					      & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				   & ((0x37U != (0x7fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				      & ((0x13U != 
					  (0x707fU 
					   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					 & ((0x7013U 
					     != (0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					    & ((0x6013U 
						!= 
						(0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					       & ((0x4013U 
						   != 
						   (0x707fU 
						    & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
						  & ((0x2013U 
						      != 
						      (0x707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
						     & ((0x3013U 
							 != 
							 (0x707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
							& ((0x1013U 
							    != 
							    (0xfc00707fU 
							     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
							   & ((0x40005013U 
							       != 
							       (0xfc00707fU 
								& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
							      & ((0x5013U 
								  != 
								  (0xfc00707fU 
								   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
								 & ((0x1033U 
								     != 
								     (0xfe00707fU 
								      & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
								    & ((0x33U 
									!= 
									(0xfe00707fU 
									 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
								       & ((0x40000033U 
									   != 
									   (0xfe00707fU 
									    & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
									  & ((0x2033U 
									      != 
									      (0xfe00707fU 
									       & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
									     & ((0x3033U 
										!= 
										(0xfe00707fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
										& ((0x7033U 
										!= 
										(0xfe00707fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
										& ((0x6033U 
										!= 
										(0xfe00707fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
										& ((0x4033U 
										!= 
										(0xfe00707fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
										& ((0x40005033U 
										!= 
										(0xfe00707fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
										& ((0x5033U 
										!= 
										(0xfe00707fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
										& ((0x6fU 
										!= 
										(0x7fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
										& ((0x67U 
										!= 
										(0x707fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
										& ((0x63U 
										!= 
										(0x707fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
										& ((0x1063U 
										!= 
										(0x707fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
										& ((0x5063U 
										!= 
										(0x707fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
										& ((0x7063U 
										!= 
										(0x707fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
										& ((0x4063U 
										!= 
										(0x707fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
										& ((0x6063U 
										!= 
										(0x707fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
										& ((0x5073U 
										!= 
										(0x707fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
										& ((0x6073U 
										!= 
										(0x707fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
										& ((0x1073U 
										!= 
										(0x707fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
										& ((0x2073U 
										!= 
										(0x707fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
										& ((0x3073U 
										!= 
										(0x707fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
										& ((0x7073U 
										!= 
										(0x707fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
										& ((0x73U 
										!= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst) 
										& ((0x30200073U 
										!= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst) 
										& ((0x7b200073U 
										!= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst) 
										& ((0x100073U 
										!= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst) 
										& ((0x10500073U 
										!= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst) 
										& (0x100fU 
										== 
										(0x707fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))))))))))))))))))))))))))))))))))))))))))))))))));
    // ALWAYS at generated-src/Top.v:1403
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1222 
	= ((0x2003U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
	   & ((3U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
	      & ((0x4003U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		 & ((0x1003U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		    & ((0x5003U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		       & ((0x2023U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
			  & ((0x23U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
			     & ((0x1023U != (0x707fU 
					     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				& ((0x17U != (0x7fU 
					      & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				   & ((0x37U != (0x7fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				      & ((0x13U != 
					  (0x707fU 
					   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					 & ((0x7013U 
					     != (0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					    & ((0x6013U 
						!= 
						(0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					       & ((0x4013U 
						   != 
						   (0x707fU 
						    & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
						  & ((0x2013U 
						      != 
						      (0x707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
						     & ((0x3013U 
							 != 
							 (0x707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
							& ((0x1013U 
							    != 
							    (0xfc00707fU 
							     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
							   & ((0x40005013U 
							       != 
							       (0xfc00707fU 
								& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
							      & ((0x5013U 
								  != 
								  (0xfc00707fU 
								   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
								 & ((0x1033U 
								     != 
								     (0xfe00707fU 
								      & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
								    & ((0x33U 
									!= 
									(0xfe00707fU 
									 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
								       & ((0x40000033U 
									   != 
									   (0xfe00707fU 
									    & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
									  & ((0x2033U 
									      != 
									      (0xfe00707fU 
									       & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
									     & ((0x3033U 
										!= 
										(0xfe00707fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
										& ((0x7033U 
										!= 
										(0xfe00707fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
										& ((0x6033U 
										!= 
										(0xfe00707fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
										& ((0x4033U 
										!= 
										(0xfe00707fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
										& ((0x40005033U 
										!= 
										(0xfe00707fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
										& ((0x5033U 
										!= 
										(0xfe00707fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
										& ((0x6fU 
										!= 
										(0x7fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
										& ((0x67U 
										!= 
										(0x707fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
										& ((0x63U 
										!= 
										(0x707fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
										& ((0x1063U 
										!= 
										(0x707fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
										& ((0x5063U 
										!= 
										(0x707fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
										& ((0x7063U 
										!= 
										(0x707fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
										& ((0x4063U 
										!= 
										(0x707fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
										& ((0x6063U 
										!= 
										(0x707fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
										& ((0x5073U 
										!= 
										(0x707fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
										& ((0x6073U 
										!= 
										(0x707fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
										& ((0x1073U 
										!= 
										(0x707fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
										& ((0x2073U 
										!= 
										(0x707fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
										& ((0x3073U 
										!= 
										(0x707fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
										& ((0x7073U 
										!= 
										(0x707fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
										& ((0x73U 
										!= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst) 
										& ((0x30200073U 
										!= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst) 
										& ((0x7b200073U 
										!= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst) 
										& ((0x100073U 
										!= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst) 
										& ((0x10500073U 
										!= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst) 
										& (0x100fU 
										== 
										(0x707fU 
										& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))))))))))))))))))))))))))))))))))))))))))))))))));
    // ALWAYS at generated-src/Top.v:1403
    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1177) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__exe_reg_wbaddr 
	    = (0x1fU & ((0U != (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__ctrl_exe_pc_sel))
			 ? 0U : (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst 
				 >> 7U)));
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1187) {
	    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__exe_reg_wbaddr = 0U;
	}
    }
    // ALWAYS at generated-src/Top.v:3752
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_342 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_130);
    // ALWAYS at generated-src/Top.v:3752
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_315 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_121);
    // ALWAYS at generated-src/Top.v:3752
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_318 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_122);
    // ALWAYS at generated-src/Top.v:3752
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_321 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_123);
    // ALWAYS at generated-src/Top.v:3752
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_324 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_124);
    // ALWAYS at generated-src/Top.v:3752
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_327 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_125);
    // ALWAYS at generated-src/Top.v:1924
    if (((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__wb_reg_ctrl_rf_wen) 
	 & (0U != (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__wb_reg_wbaddr)))) {
	__Vdlyvval__Top__DOT__tile__DOT__core__DOT__d__DOT__regfile__DOT__regfile__v0 
	    = vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__wb_reg_wbdata;
	__Vdlyvset__Top__DOT__tile__DOT__core__DOT__d__DOT__regfile__DOT__regfile__v0 = 1U;
	__Vdlyvdim0__Top__DOT__tile__DOT__core__DOT__d__DOT__regfile__DOT__regfile__v0 
	    = vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__wb_reg_wbaddr;
    }
    if ((0U != (0x1fU & (IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__command_regno)))) {
	__Vdlyvval__Top__DOT__tile__DOT__core__DOT__d__DOT__regfile__DOT__regfile__v1 
	    = vlTOPp->Top__DOT__tile__DOT__debug__DOT__data0;
	__Vdlyvset__Top__DOT__tile__DOT__core__DOT__d__DOT__regfile__DOT__regfile__v1 = 1U;
	__Vdlyvdim0__Top__DOT__tile__DOT__core__DOT__d__DOT__regfile__DOT__regfile__v1 
	    = (0x1fU & (IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__command_regno));
    }
    // ALWAYS at generated-src/Top.v:3752
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_300 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_116);
    // ALWAYS at generated-src/Top.v:3752
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_303 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_117);
    // ALWAYS at generated-src/Top.v:3752
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_306 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_118);
    // ALWAYS at generated-src/Top.v:3752
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_309 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_119);
    // ALWAYS at generated-src/Top.v:3752
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_312 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_120);
    // ALWAYS at generated-src/Top.v:3752
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_285 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_111);
    // ALWAYS at generated-src/Top.v:3752
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_288 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_112);
    // ALWAYS at generated-src/Top.v:3752
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_291 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_113);
    // ALWAYS at generated-src/Top.v:3752
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_294 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_114);
    // ALWAYS at generated-src/Top.v:3752
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_297 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_115);
    // ALWAYS at generated-src/Top.v:3752
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_282 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_110);
    // ALWAYS at generated-src/Top.v:4855
    if ((1U & (~ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_pipeline_kill)))) {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1217) {
	    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_rs2_data 
		= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_rs2_data;
	}
    }
    // ALWAYS at generated-src/Top.v:3752
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mip_mtip 
	= (1U & (~ (IData)(vlTOPp->Top__DOT__tile__DOT__core_reset)));
    // ALWAYS at generated-src/Top.v:3752
    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen) {
	if ((0x343U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				  >> 0x14U)))) {
	    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mtval 
		= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata;
	}
    }
    // ALWAYS at generated-src/Top.v:3752
    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen) {
	if ((0x340U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				  >> 0x14U)))) {
	    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mscratch 
		= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata;
	}
    }
    // ALWAYS at generated-src/Top.v:3752
    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen) {
	if ((0x302U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				  >> 0x14U)))) {
	    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_medeleg 
		= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata;
	}
    }
    // ALWAYS at generated-src/Top.v:3752
    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen) {
	if ((0x7b2U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				  >> 0x14U)))) {
	    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_dscratch 
		= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata;
	}
    }
    // ALWAYS at generated-src/Top.v:3752
    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen) {
	if ((0x7b1U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				  >> 0x14U)))) {
	    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_dpc 
		= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata;
	}
    }
    // ALWAYS at generated-src/Top.v:3752
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_dcsr_ebreakm = 0U;
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen) {
	    if ((0x7b0U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				      >> 0x14U)))) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_dcsr_ebreakm 
		    = (1U & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata 
			     >> 0xfU));
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:3752
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_dcsr_step = 0U;
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen) {
	    if ((0x7b0U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				      >> 0x14U)))) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_dcsr_step 
		    = (1U & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata 
			     >> 2U));
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:3752
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mepc 
	= (IData)((VL_ULL(0x7ffffffff) & ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen)
					   ? ((0x341U 
					       == (0xfffU 
						   & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
						      >> 0x14U)))
					       ? ((QData)((IData)(
								  (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata 
								   >> 2U))) 
						  << 2U)
					       : (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_4)))
					   : (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_4)))));
    // ALWAYS at generated-src/Top.v:3752
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mip_msip = 0U;
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen) {
	    if ((0x344U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				      >> 0x14U)))) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mip_msip 
		    = (1U & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata 
			     >> 3U));
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:3752
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mie_mtip = 0U;
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen) {
	    if ((0x304U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				      >> 0x14U)))) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mie_mtip 
		    = (1U & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata 
			     >> 7U));
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:3752
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mie_msip = 0U;
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen) {
	    if ((0x304U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				      >> 0x14U)))) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mie_msip 
		    = (1U & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata 
			     >> 3U));
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:3752
    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen) {
	if ((0x342U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				  >> 0x14U)))) {
	    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mcause 
		= (0x8000001fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata);
	} else {
	    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__insn_break) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mcause = 3U;
	    } else {
		if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__insn_call) {
		    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mcause 
			= (0xfU & ((IData)(8U) + (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mstatus_prv)));
		} else {
		    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1225) {
			vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mcause = 2U;
		    }
		}
	    }
	}
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__insn_break) {
	    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mcause = 3U;
	} else {
	    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__insn_call) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mcause 
		    = (0xfU & ((IData)(8U) + (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mstatus_prv)));
	    } else {
		if (vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1225) {
		    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mcause = 2U;
		}
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:3752
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_274 = VL_ULL(0);
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen) {
	    if ((0xb02U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				      >> 0x14U)))) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_274 
		    = (VL_ULL(0x3ffffffffffffff) & 
		       (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1590 
			>> 6U));
	    } else {
		if ((0xb82U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					  >> 0x14U)))) {
		    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_274 
			= (VL_ULL(0x3ffffffffffffff) 
			   & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1587 
			      >> 6U));
		} else {
		    if ((0x40U & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_271))) {
			vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_274 
			    = vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_278;
		    }
		}
	    }
	} else {
	    if ((0x40U & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_271))) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_274 
		    = vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_278;
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:3752
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_270 
	= (0x3fU & ((IData)(vlTOPp->Top__DOT__tile__DOT__core_reset)
		     ? 0U : (IData)(((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen)
				      ? ((0xb02U == 
					  (0xfffU & 
					   (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					    >> 0x14U)))
					  ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1590
					  : ((0xb82U 
					      == (0xfffU 
						  & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
						     >> 0x14U)))
					      ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1587
					      : (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_271))))
				      : (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_271))))));
    // ALWAYS at generated-src/Top.v:3752
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_262 = VL_ULL(0);
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen) {
	    if ((0xb00U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				      >> 0x14U)))) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_262 
		    = (VL_ULL(0x3ffffffffffffff) & 
		       (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1583 
			>> 6U));
	    } else {
		if ((0xb80U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					  >> 0x14U)))) {
		    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_262 
			= (VL_ULL(0x3ffffffffffffff) 
			   & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1580 
			      >> 6U));
		} else {
		    if ((0x40U & ((IData)(1U) + (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_258)))) {
			vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_262 
			    = vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_266;
		    }
		}
	    }
	} else {
	    if ((0x40U & ((IData)(1U) + (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_258)))) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_262 
		    = vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_266;
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:3752
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mstatus_mie = 0U;
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen) {
	    if ((0x300U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				      >> 0x14U)))) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mstatus_mie 
		    = (1U & (IData)(((QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata)) 
				     >> 3U)));
	    } else {
		if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1063) {
		    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mstatus_mie 
			= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mstatus_mpie;
		}
	    }
	} else {
	    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1063) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mstatus_mie 
		    = vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mstatus_mpie;
	    }
	}
    }
    vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_433 
	= ((0x44U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr)) 
	   & (IData)(vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_valid));
    vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_333 
	= ((0x16U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr)) 
	   & (IData)(vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_valid));
    // ALWAYS at /home/albert/CPU/theFinalDissertation/design/mizhi/vsrc/SimDTM.v:58
    vlTOPp->Top__DOT__SimDTM__DOT__r_reset = vlTOPp->reset;
    // ALWAYSPOST at /home/albert/CPU/theFinalDissertation/design/mizhi/vsrc/AsyncReadMem.sv:36
    if (__Vdlyvset__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v0) {
	vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem[__Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v0] 
	    = __Vdlyvval__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v0;
    }
    if (__Vdlyvset__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v1) {
	vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem[__Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v1] 
	    = __Vdlyvval__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v1;
    }
    if (__Vdlyvset__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v2) {
	vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem[__Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v2] 
	    = __Vdlyvval__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v2;
    }
    if (__Vdlyvset__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v3) {
	vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem[__Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v3] 
	    = __Vdlyvval__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v3;
    }
    if (__Vdlyvset__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v4) {
	vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem[__Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v4] 
	    = __Vdlyvval__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v4;
    }
    if (__Vdlyvset__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v5) {
	vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem[__Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v5] 
	    = __Vdlyvval__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v5;
    }
    if (__Vdlyvset__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v6) {
	vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem[__Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v6] 
	    = __Vdlyvval__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v6;
    }
    if (__Vdlyvset__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v7) {
	vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem[__Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v7] 
	    = __Vdlyvval__Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem__v7;
    }
    // ALWAYSPOST at generated-src/Top.v:1926
    if (__Vdlyvset__Top__DOT__tile__DOT__core__DOT__d__DOT__regfile__DOT__regfile__v0) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__regfile__DOT__regfile[__Vdlyvdim0__Top__DOT__tile__DOT__core__DOT__d__DOT__regfile__DOT__regfile__v0] 
	    = __Vdlyvval__Top__DOT__tile__DOT__core__DOT__d__DOT__regfile__DOT__regfile__v0;
    }
    if (__Vdlyvset__Top__DOT__tile__DOT__core__DOT__d__DOT__regfile__DOT__regfile__v1) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__regfile__DOT__regfile[__Vdlyvdim0__Top__DOT__tile__DOT__core__DOT__d__DOT__regfile__DOT__regfile__v1] 
	    = __Vdlyvval__Top__DOT__tile__DOT__core__DOT__d__DOT__regfile__DOT__regfile__v1;
    }
    vlTOPp->Top__DOT__tile__DOT__debug_io_dmi_resp_valid 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__firstreaddone)
	    ? (IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_414)
	    : (IData)(vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_valid));
    // ALWAYS at generated-src/Top.v:6247
    if ((2U == (3U & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))) {
	if ((0x10U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))) {
	    vlTOPp->Top__DOT__tile__DOT__debug__DOT__dmcontrol_resumereq 
		= (1U & (vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data 
			 >> 0x1eU));
	}
    }
    // ALWAYS at generated-src/Top.v:6247
    if ((2U == (3U & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))) {
	if ((0x10U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))) {
	    vlTOPp->Top__DOT__tile__DOT__debug__DOT__dmcontrol_haltreq 
		= (1U & (vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data 
			 >> 0x1fU));
	}
    }
    // ALWAYS at generated-src/Top.v:4855
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ = 0U;
    } else {
	if ((1U & (~ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_399)))) {
	    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_240) {
		if ((0U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__ctrl_exe_pc_sel))) {
		    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ 
			= vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_mem_typ;
		}
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:4855
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_val = 0U;
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_399) {
	    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_val = 0U;
	} else {
	    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_240) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_val 
		    = ((0U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__ctrl_exe_pc_sel)) 
		       & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_mem_val));
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:4855
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_csr_cmd = 0U;
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_399) {
	    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_csr_cmd = 0U;
	} else {
	    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_240) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_csr_cmd 
		    = ((0U != (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__ctrl_exe_pc_sel))
		        ? 0U : (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_csr_cmd));
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:6247
    if (vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_423) {
	vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbdata 
	    = vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data_hr_data;
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_420) {
	    if (vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_valid) {
		vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbdata 
		    = vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data_hr_data;
	    } else {
		if ((2U == (3U & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))) {
		    if ((0x3cU == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))) {
			vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbdata 
			    = vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data;
		    }
		}
	    }
	} else {
	    if ((2U == (3U & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))) {
		if ((0x3cU == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))) {
		    vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbdata 
			= vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data;
		}
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:6247
    if (vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_423) {
	if (vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbcs_sbautoincrement) {
	    vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbaddr 
		= vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_398;
	} else {
	    if ((2U == (3U & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))) {
		if ((0x3cU == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))) {
		    if (vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_395) {
			vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbaddr 
			    = vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_398;
		    } else {
			if ((0x39U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))) {
			    vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbaddr 
				= vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data;
			}
		    }
		} else {
		    if ((0x39U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))) {
			vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbaddr 
			    = vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data;
		    }
		}
	    }
	}
    } else {
	if ((2U == (3U & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))) {
	    if ((0x3cU == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))) {
		if (vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_395) {
		    vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbaddr 
			= vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_398;
		} else {
		    if ((0x39U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))) {
			vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbaddr 
			    = vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data;
		    }
		}
	    } else {
		if ((0x39U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))) {
		    vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbaddr 
			= vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data;
		}
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:4855
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_fcn = 0U;
    } else {
	if ((1U & (~ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_pipeline_kill)))) {
	    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1217) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_fcn 
		    = vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_fcn;
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:6247
    if ((2U == (3U & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))) {
	if ((0x17U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))) {
	    if ((2U == (7U & (vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data 
			      >> 0x14U)))) {
		vlTOPp->Top__DOT__tile__DOT__debug__DOT__command_regno 
		    = (0xffffU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data);
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:6247
    if (vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_403) {
	if (vlTOPp->Top__DOT__tile__DOT__debug__DOT__command_write) {
	    if ((2U == (3U & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))) {
		if ((4U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))) {
		    vlTOPp->Top__DOT__tile__DOT__debug__DOT__data0 
			= vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data;
		}
	    }
	} else {
	    vlTOPp->Top__DOT__tile__DOT__debug__DOT__data0 
		= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__regfile_io_dm_rdata;
	}
    } else {
	if ((2U == (3U & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))) {
	    if ((4U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))) {
		vlTOPp->Top__DOT__tile__DOT__debug__DOT__data0 
		    = vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data;
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:4935
    if ((1U & (~ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_399)))) {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_240) {
	    if ((2U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_op1_sel))) {
		__Vdly__Top__DOT__tile__DOT__core__DOT__d__DOT__exe_alu_op1 
		    = (0x1fU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst 
				>> 0xfU));
	    } else {
		if ((1U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_op1_sel))) {
		    __Vdly__Top__DOT__tile__DOT__core__DOT__d__DOT__exe_alu_op1 
			= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_pc;
		} else {
		    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_338) {
			if ((0U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))) {
			    __Vdly__Top__DOT__tile__DOT__core__DOT__d__DOT__exe_alu_op1 
				= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_adder_out;
			} else {
			    if ((1U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))) {
				__Vdly__Top__DOT__tile__DOT__core__DOT__d__DOT__exe_alu_op1 
				    = (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_415);
			    } else {
				if ((5U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))) {
				    __Vdly__Top__DOT__tile__DOT__core__DOT__d__DOT__exe_alu_op1 
					= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_419;
				} else {
				    if ((6U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))) {
					__Vdly__Top__DOT__tile__DOT__core__DOT__d__DOT__exe_alu_op1 
					    = vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_421;
				    } else {
					if ((7U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))) {
					    __Vdly__Top__DOT__tile__DOT__core__DOT__d__DOT__exe_alu_op1 
						= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_423;
					} else {
					    if ((8U 
						 == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))) {
						__Vdly__Top__DOT__tile__DOT__core__DOT__d__DOT__exe_alu_op1 
						    = vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_427;
					    } else {
						if (
						    (9U 
						     == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))) {
						    __Vdly__Top__DOT__tile__DOT__core__DOT__d__DOT__exe_alu_op1 
							= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_429;
						} else {
						    if (
							(2U 
							 == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))) {
							__Vdly__Top__DOT__tile__DOT__core__DOT__d__DOT__exe_alu_op1 
							    = (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_431);
						    } else {
							if (
							    (4U 
							     == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))) {
							    __Vdly__Top__DOT__tile__DOT__core__DOT__d__DOT__exe_alu_op1 
								= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_435;
							} else {
							    if (
								(3U 
								 == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))) {
								__Vdly__Top__DOT__tile__DOT__core__DOT__d__DOT__exe_alu_op1 
								    = vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_438;
							    } else {
								if (
								    (0xaU 
								     != (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))) {
								    __Vdly__Top__DOT__tile__DOT__core__DOT__d__DOT__exe_alu_op1 
									= 
									((0xbU 
									  == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))
									  ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__brjmp_offset
									  : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_inst);
								}
							    }
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    } else {
			__Vdly__Top__DOT__tile__DOT__core__DOT__d__DOT__exe_alu_op1 
			    = ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_343)
			        ? ((0U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_wb_sel))
				    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_alu_out
				    : ((2U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_wb_sel))
				        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_alu_out
				        : ((1U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_wb_sel))
					    ? vlTOPp->Top__DOT__tile__DOT__memory_io_core_ports_0_resp_bits_data
					    : ((3U 
						== (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_wb_sel))
					        ? (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1323)
					        : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_alu_out))))
			        : ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_348)
				    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__wb_reg_wbdata
				    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__regfile_io_rs1_data));
		    }
		}
	    }
	}
    }
    if ((1U & (~ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_399)))) {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_240) {
	    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_360) {
		if ((0U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))) {
		    __Vdly__Top__DOT__tile__DOT__core__DOT__d__DOT__brjmp_offset 
			= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_adder_out;
		} else {
		    if ((1U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))) {
			__Vdly__Top__DOT__tile__DOT__core__DOT__d__DOT__brjmp_offset 
			    = (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_415);
		    } else {
			if ((5U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))) {
			    __Vdly__Top__DOT__tile__DOT__core__DOT__d__DOT__brjmp_offset 
				= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_419;
			} else {
			    if ((6U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))) {
				__Vdly__Top__DOT__tile__DOT__core__DOT__d__DOT__brjmp_offset 
				    = vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_421;
			    } else {
				if ((7U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))) {
				    __Vdly__Top__DOT__tile__DOT__core__DOT__d__DOT__brjmp_offset 
					= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_423;
				} else {
				    if ((8U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))) {
					__Vdly__Top__DOT__tile__DOT__core__DOT__d__DOT__brjmp_offset 
					    = vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_427;
				    } else {
					if ((9U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))) {
					    __Vdly__Top__DOT__tile__DOT__core__DOT__d__DOT__brjmp_offset 
						= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_429;
					} else {
					    if ((2U 
						 == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))) {
						__Vdly__Top__DOT__tile__DOT__core__DOT__d__DOT__brjmp_offset 
						    = (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_431);
					    } else {
						if (
						    (4U 
						     == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))) {
						    __Vdly__Top__DOT__tile__DOT__core__DOT__d__DOT__brjmp_offset 
							= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_435;
						} else {
						    if (
							(3U 
							 == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))) {
							__Vdly__Top__DOT__tile__DOT__core__DOT__d__DOT__brjmp_offset 
							    = vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_438;
						    } else {
							if (
							    (0xaU 
							     == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))) {
							    __Vdly__Top__DOT__tile__DOT__core__DOT__d__DOT__brjmp_offset 
								= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_alu_op1;
							} else {
							    if (
								(0xbU 
								 != (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))) {
								__Vdly__Top__DOT__tile__DOT__core__DOT__d__DOT__brjmp_offset 
								    = vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_inst;
							    }
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    } else {
		__Vdly__Top__DOT__tile__DOT__core__DOT__d__DOT__brjmp_offset 
		    = ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_367)
		        ? ((0U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_wb_sel))
			    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_alu_out
			    : ((2U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_wb_sel))
			        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_alu_out
			        : ((1U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_wb_sel))
				    ? vlTOPp->Top__DOT__tile__DOT__memory_io_core_ports_0_resp_bits_data
				    : ((3U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_wb_sel))
				        ? (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1323)
				        : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_alu_out))))
		        : ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_374)
			    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__wb_reg_wbdata
			    : ((0U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_op2_sel))
			        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__regfile_io_rs2_data
			        : ((1U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_op2_sel))
				    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__imm_itype_sext
				    : ((2U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_op2_sel))
				        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__imm_stype_sext
				        : ((3U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_op2_sel))
					    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__imm_sbtype_sext
					    : ((4U 
						== (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_op2_sel))
					        ? (0xfffff000U 
						   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)
					        : (
						   (5U 
						    == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_op2_sel))
						    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__imm_ujtype_sext
						    : 0U))))))));
	    }
	}
    }
    if ((1U & (~ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_399)))) {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_240) {
	    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_rs2_data 
		= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_358)
		    ? ((0U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))
		        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_adder_out
		        : ((1U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))
			    ? (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_415)
			    : ((5U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))
			        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_419
			        : ((6U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))
				    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_421
				    : ((7U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))
				        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_423
				        : ((8U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))
					    ? (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_427)
					    : ((9U 
						== (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))
					        ? (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_429)
					        : (
						   (2U 
						    == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))
						    ? (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_431)
						    : 
						   ((4U 
						     == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))
						     ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_435
						     : 
						    ((3U 
						      == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))
						      ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_438
						      : 
						     ((0xaU 
						       == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))
						       ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_alu_op1
						       : 
						      ((0xbU 
							== (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))
						        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__brjmp_offset
						        : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_inst))))))))))))
		    : ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_365)
		        ? ((0U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_wb_sel))
			    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_alu_out
			    : ((2U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_wb_sel))
			        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_alu_out
			        : ((1U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_wb_sel))
				    ? vlTOPp->Top__DOT__tile__DOT__memory_io_core_ports_0_resp_bits_data
				    : ((3U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_wb_sel))
				        ? (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1323)
				        : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_alu_out))))
		        : ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_372)
			    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__wb_reg_wbdata
			    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__regfile_io_rs2_data)));
	}
    }
    if ((1U & (~ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_pipeline_kill)))) {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1217) {
	    __Vdly__Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_alu_out 
		= ((2U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_wb_sel))
		    ? ((IData)(4U) + vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_pc)
		    : ((0U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))
		        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_adder_out
		        : ((1U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))
			    ? (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_415)
			    : ((5U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))
			        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_419
			        : ((6U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))
				    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_421
				    : ((7U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))
				        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_423
				        : ((8U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))
					    ? (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_427)
					    : ((9U 
						== (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))
					        ? (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_429)
					        : (
						   (2U 
						    == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))
						    ? (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_431)
						    : 
						   ((4U 
						     == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))
						     ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_435
						     : 
						    ((3U 
						      == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))
						      ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_438
						      : 
						     ((0xaU 
						       == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))
						       ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_alu_op1
						       : 
						      ((0xbU 
							== (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))
						        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__brjmp_offset
						        : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_inst)))))))))))));
	}
    }
    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1217) {
	__Vdly__Top__DOT__tile__DOT__core__DOT__d__DOT__wb_reg_wbdata 
	    = ((0U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_wb_sel))
	        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_alu_out
	        : ((2U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_wb_sel))
		    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_alu_out
		    : ((1U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_wb_sel))
		        ? vlTOPp->Top__DOT__tile__DOT__memory_io_core_ports_0_resp_bits_data
		        : ((3U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_wb_sel))
			    ? (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1323)
			    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_alu_out))));
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->Top__DOT__tile__DOT__core_reset))))) {
	VL_FWRITEF(0x80000002U,"Cyc= %10# (0x%x, 0x%x, 0x%x, 0x%x, 0x%x) WB[%c%c %x: 0x%x] %c %c %c ExeInst: DASM(%x)\n",
		   32,(IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_267),
		   32,vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__if_reg_pc,
		   32,vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_pc,
		   32,vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_pc,
		   32,vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_551,
		   32,vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_555,
		   8,((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__wb_reg_ctrl_rf_wen)
		       ? 0x4dU : 0x20U),8,((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_rf_wen)
					    ? 0x5aU
					    : 0x20U),
		   5,(IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__wb_reg_wbaddr),
		   32,vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__wb_reg_wbdata,
		   8,((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1217)
		       ? ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_dec_stall)
			   ? 0x53U : 0x20U) : 0x46U),
		   8,((1U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_exe_pc_sel))
		       ? 0x42U : ((2U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_exe_pc_sel))
				   ? 0x4aU : ((3U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_exe_pc_sel))
					       ? 0x45U
					       : ((0U 
						   == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_exe_pc_sel))
						   ? 0x20U
						   : 0x3fU)))),
		   8,((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1225)
		       ? 0x58U : 0x20U),32,((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_pipeline_kill)
					     ? 0x4033U
					     : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_inst));
    }
    // ALWAYS at generated-src/Top.v:3752
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mstatus_prv = 3U;
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1063) {
	    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mstatus_prv = 3U;
	} else {
	    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1058) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mstatus_prv = 3U;
	    }
	}
    }
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_278 
	= (VL_ULL(0x3ffffffffffffff) & (VL_ULL(1) + vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_274));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_279 
	= ((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_274 
	    << 6U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_270)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_266 
	= (VL_ULL(0x3ffffffffffffff) & (VL_ULL(1) + vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_262));
    // ALWAYS at generated-src/Top.v:3752
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_258 
	= (0x3fU & ((IData)(vlTOPp->Top__DOT__tile__DOT__core_reset)
		     ? 0U : (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_142)));
    // ALWAYS at generated-src/Top.v:3752
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mstatus_mpie = 0U;
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen) {
	    if ((0x300U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				      >> 0x14U)))) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mstatus_mpie 
		    = (1U & (IData)(((QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata)) 
				     >> 7U)));
	    } else {
		if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1063) {
		    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mstatus_mpie = 1U;
		}
	    }
	} else {
	    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1063) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mstatus_mpie = 1U;
	    }
	}
    }
    vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_420 
	= (((0x3cU == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr)) 
	    & (1U == (3U & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))) 
	   | ((IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbcs_sbautoread) 
	      & (IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__firstreaddone)));
    vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_423 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__memreadfire) 
	   & (IData)(vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_valid));
    vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_403 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__command_transfer) 
	   & (0U != (IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__abstractcs_cmderr)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__wb_reg_wbdata 
	= __Vdly__Top__DOT__tile__DOT__core__DOT__d__DOT__wb_reg_wbdata;
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__brjmp_offset 
	= __Vdly__Top__DOT__tile__DOT__core__DOT__d__DOT__brjmp_offset;
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_alu_out 
	= __Vdly__Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_alu_out;
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_alu_op1 
	= __Vdly__Top__DOT__tile__DOT__core__DOT__d__DOT__exe_alu_op1;
    vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_307 
	= ((0x3cU == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))
	    ? vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbdata
	    : 0U);
    vlTOPp->Top__DOT__tile__DOT__debug_io_debugmem_req_bits_fcn 
	= ((~ (IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_420)) 
	   & ((0x3cU == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr)) 
	      & (2U == (3U & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))));
    vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_398 
	= ((IData)(4U) + vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbaddr);
    // ALWAYS at /home/albert/CPU/theFinalDissertation/design/mizhi/vsrc/AsyncReadMem.sv:46
    vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data_hr_data 
	= ((0xffffff00U & vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data_hr_data) 
	   | vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem
	   [(0x1fffffU & vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbaddr)]);
    // ALWAYS at /home/albert/CPU/theFinalDissertation/design/mizhi/vsrc/AsyncReadMem.sv:46
    vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data_hr_data 
	= ((0xffff00ffU & vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data_hr_data) 
	   | (vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem
	      [(0x1fffffU & ((IData)(1U) + vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbaddr))] 
	      << 8U));
    // ALWAYS at /home/albert/CPU/theFinalDissertation/design/mizhi/vsrc/AsyncReadMem.sv:46
    vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data_hr_data 
	= ((0xff00ffffU & vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data_hr_data) 
	   | (vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem
	      [(0x1fffffU & ((IData)(2U) + vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbaddr))] 
	      << 0x10U));
    // ALWAYS at /home/albert/CPU/theFinalDissertation/design/mizhi/vsrc/AsyncReadMem.sv:46
    vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data_hr_data 
	= ((0xffffffU & vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data_hr_data) 
	   | (vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem
	      [(0x1fffffU & ((IData)(3U) + vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbaddr))] 
	      << 0x18U));
    // ALWAYS at generated-src/Top.v:6247
    if (vlTOPp->reset) {
	vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbcs_sbautoincrement = 0U;
    } else {
	if ((2U == (3U & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))) {
	    if ((0x38U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))) {
		vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbcs_sbautoincrement 
		    = (1U & (vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data 
			     >> 0x10U));
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:4855
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_fcn 
	= (1U & ((~ (IData)(vlTOPp->Top__DOT__tile__DOT__core_reset)) 
		 & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___GEN_36)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__regfile_io_dm_rdata 
	= ((0U != (0x1fU & (IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__command_regno)))
	    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__regfile__DOT__regfile
	   [(0x1fU & (IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__command_regno))]
	    : 0U);
    // ALWAYS at generated-src/Top.v:6247
    if ((2U == (3U & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))) {
	if ((0x17U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))) {
	    if ((2U == (7U & (vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data 
			      >> 0x14U)))) {
		vlTOPp->Top__DOT__tile__DOT__debug__DOT__command_write 
		    = (1U & (vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data 
			     >> 0x10U));
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:4855
    if ((1U & (~ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_399)))) {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_240) {
	    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun 
		= vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_alu_fun;
	}
    }
    vlTOPp->Top__DOT__tile__DOT__memory__DOT___T_311 
	= (VL_ULL(0x7fffffffffffffff) & ((QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_rs2_data)) 
					 << (0x18U 
					     & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_alu_out 
						<< 3U))));
    vlTOPp->Top__DOT__tile__DOT__memory__DOT___T_325 
	= (0x1fU & ((1U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_typ))
		     ? (0xfU & ((IData)(1U) << (3U 
						& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_alu_out)))
		     : ((2U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_typ))
			 ? ((IData)(3U) << (3U & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_alu_out))
			 : 0xfU)));
    // ALWAYS at /home/albert/CPU/theFinalDissertation/design/mizhi/vsrc/AsyncReadMem.sv:46
    vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data_dataInstr_0_data 
	= ((0xffffff00U & vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data_dataInstr_0_data) 
	   | vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem
	   [(0x1fffffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_alu_out)]);
    // ALWAYS at /home/albert/CPU/theFinalDissertation/design/mizhi/vsrc/AsyncReadMem.sv:46
    vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data_dataInstr_0_data 
	= ((0xffff00ffU & vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data_dataInstr_0_data) 
	   | (vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem
	      [(0x1fffffU & ((IData)(1U) + vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_alu_out))] 
	      << 8U));
    // ALWAYS at /home/albert/CPU/theFinalDissertation/design/mizhi/vsrc/AsyncReadMem.sv:46
    vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data_dataInstr_0_data 
	= ((0xff00ffffU & vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data_dataInstr_0_data) 
	   | (vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem
	      [(0x1fffffU & ((IData)(2U) + vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_alu_out))] 
	      << 0x10U));
    // ALWAYS at /home/albert/CPU/theFinalDissertation/design/mizhi/vsrc/AsyncReadMem.sv:46
    vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data_dataInstr_0_data 
	= ((0xffffffU & vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data_dataInstr_0_data) 
	   | (vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem
	      [(0x1fffffU & ((IData)(3U) + vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_alu_out))] 
	      << 0x18U));
    // ALWAYS at generated-src/Top.v:4855
    if ((1U & (~ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_pipeline_kill)))) {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1217) {
	    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_wb_sel 
		= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_wb_sel;
	}
    }
    // ALWAYS at generated-src/Top.v:4935
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_551 
	= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_pc;
    // ALWAYS at generated-src/Top.v:4855
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_555 
	= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_553;
    // ALWAYS at generated-src/Top.v:4855
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__wb_reg_ctrl_rf_wen 
	= ((~ (IData)(vlTOPp->Top__DOT__tile__DOT__core_reset)) 
	   & ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1217) 
	      & ((~ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1225)) 
		 & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_rf_wen))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_415 
	= (VL_ULL(0x1ffffffff) & ((QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_alu_op1)) 
				  - (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__brjmp_offset))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_419 
	= (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_alu_op1 
	   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__brjmp_offset);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_421 
	= (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_alu_op1 
	   | vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__brjmp_offset);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_423 
	= (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_alu_op1 
	   ^ vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__brjmp_offset);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_427 
	= VL_LTS_III(1,32,32, vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_alu_op1, vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__brjmp_offset);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_429 
	= (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_alu_op1 
	   < vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__brjmp_offset);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_431 
	= (VL_ULL(0x7fffffffffffffff) & ((QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_alu_op1)) 
					 << (0x1fU 
					     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__brjmp_offset)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_435 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_alu_op1, 
			 (0x1fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__brjmp_offset));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_438 
	= (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_alu_op1 
	   >> (0x1fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__brjmp_offset));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d_io_dat_exe_br_eq 
	= (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_alu_op1 
	   == vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_rs2_data);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d_io_dat_exe_br_lt 
	= VL_LTS_III(1,32,32, vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_alu_op1, vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_rs2_data);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d_io_dat_exe_br_ltu 
	= (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_alu_op1 
	   < vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_rs2_data);
    // ALWAYS at generated-src/Top.v:4855
    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1217) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__wb_reg_wbaddr 
	    = vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_wbaddr;
    }
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_267 
	= ((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_262 
	    << 6U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_258)));
    // ALWAYS at generated-src/Top.v:4891
    if ((1U & (~ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_pipeline_kill)))) {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1217) {
	    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
		= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_inst;
	}
    }
    vlTOPp->Top__DOT__tile__DOT__memory_io_core_ports_0_resp_bits_data 
	= ((1U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_typ))
	    ? ((((0x80U & vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data_dataInstr_0_data)
		  ? 0xffffffU : 0U) << 8U) | (0xffU 
					      & vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data_dataInstr_0_data))
	    : ((2U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_typ))
	        ? ((((0x8000U & vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data_dataInstr_0_data)
		      ? 0xffffU : 0U) << 0x10U) | (0xffffU 
						   & vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data_dataInstr_0_data))
	        : ((5U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_typ))
		    ? (0xffU & vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data_dataInstr_0_data)
		    : ((6U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_typ))
		        ? (0xffffU & vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data_dataInstr_0_data)
		        : vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data_dataInstr_0_data))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1145 
	= ((0U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_br_type))
	    ? 0U : ((1U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_br_type))
		     ? ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d_io_dat_exe_br_eq)
			 ? 0U : 1U) : ((2U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_br_type))
				        ? ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d_io_dat_exe_br_eq)
					    ? 1U : 0U)
				        : ((3U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_br_type))
					    ? ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d_io_dat_exe_br_lt)
					        ? 0U
					        : 1U)
					    : ((4U 
						== (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_br_type))
					        ? ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d_io_dat_exe_br_ltu)
						    ? 0U
						    : 1U)
					        : (
						   (5U 
						    == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_br_type))
						    ? 
						   ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d_io_dat_exe_br_lt)
						     ? 1U
						     : 0U)
						    : 
						   ((6U 
						     == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_br_type))
						     ? 
						    ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d_io_dat_exe_br_ltu)
						      ? 1U
						      : 0U)
						     : 
						    ((7U 
						      == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_br_type))
						      ? 1U
						      : 
						     ((8U 
						       == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_br_type))
						       ? 2U
						       : 0U)))))))));
    vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_395 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbcs_sbautoincrement) 
	   & (IData)(vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_valid));
    vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_316 
	= (((((((((0x16U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))
		   ? (0x4000001U | ((IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__abstractcs_cmderr) 
				    << 8U)) : 0U) | 
		 ((0x10U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))
		   ? (((IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__dmcontrol_haltreq) 
		       << 0x1fU) | (((IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__dmcontrol_resumereq) 
				     << 0x1eU) | (((IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__dmcontrol_hartreset) 
						   << 0x1dU) 
						  | (((IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__dmcontrol_ndmreset) 
						      << 1U) 
						     | (IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__dmcontrol_dmactive)))))
		   : 0U)) | ((0x11U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))
			      ? (0x82U | (((IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__dmstatus_allrunning) 
					   << 0xbU) 
					  | ((IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__dmstatus_allhalted) 
					     << 9U)))
			      : 0U)) | ((0x17U == (0x7fU 
						   & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))
					 ? (((IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__command_postexec) 
					     << 0x12U) 
					    | (((IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__command_transfer) 
						<< 0x11U) 
					       | (((IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__command_write) 
						   << 0x10U) 
						  | (IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__command_regno))))
					 : 0U)) | (
						   (0x12U 
						    == 
						    (0x7fU 
						     & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))
						    ? 0x111bc0U
						    : 0U)) 
	     | ((4U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))
		 ? vlTOPp->Top__DOT__tile__DOT__debug__DOT__data0
		 : 0U)) | ((5U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))
			    ? vlTOPp->Top__DOT__tile__DOT__debug__DOT__data1
			    : 0U)) | ((6U == (0x7fU 
					      & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))
				       ? vlTOPp->Top__DOT__tile__DOT__debug__DOT__data2
				       : 0U));
    // ALWAYS at generated-src/Top.v:4855
    if ((1U & (~ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_399)))) {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_240) {
	    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_wb_sel 
		= vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_wb_sel;
	}
    }
    // ALWAYS at generated-src/Top.v:4935
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_553 
	= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_pc;
    // ALWAYS at generated-src/Top.v:4855
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_rf_wen = 0U;
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_pipeline_kill) {
	    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_rf_wen = 0U;
	} else {
	    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1217) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_rf_wen 
		    = vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_rf_wen;
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:1403
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1225 
	= vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__exe_reg_exception;
    // ALWAYS at generated-src/Top.v:4855
    if ((1U & (~ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_pipeline_kill)))) {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1217) {
	    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_wbaddr 
		= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_wbaddr;
	}
    }
    // ALWAYS at generated-src/Top.v:4855
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_inst = 0x4033U;
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_399) {
	    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_inst = 0x4033U;
	} else {
	    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_240) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_inst 
		    = ((0U != (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__ctrl_exe_pc_sel))
		        ? 0x4033U : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst);
	    }
	}
    }
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__insn_call 
	= (0xffU & ((4U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_csr_cmd)) 
		    & ((IData)(1U) << (7U & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					     >> 0x14U)))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__insn_break 
	= (0x7fU & ((4U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_csr_cmd)) 
		    & (((IData)(1U) << (7U & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					      >> 0x14U))) 
		       >> 1U)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__priv_sufficient 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mstatus_prv) 
	   >= (3U & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
		     >> 0x1cU)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1250 
	= (((((((((0xb00U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					>> 0x14U)))
		   ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_267
		   : VL_ULL(0)) | ((0xb02U == (0xfffU 
					       & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
						  >> 0x14U)))
				    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_279
				    : VL_ULL(0))) | (QData)((IData)(
								    ((0xf13U 
								      == 
								      (0xfffU 
								       & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
									  >> 0x14U)))
								      ? 0x8000U
								      : 0U)))) 
	       | (QData)((IData)(((0x301U == (0xfffU 
					      & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
						 >> 0x14U)))
				   ? 0x100U : 0U)))) 
	      | ((0x300U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				       >> 0x14U))) ? 
		 (((QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mstatus_prv)) 
		   << 0x20U) | (QData)((IData)((0x1800U 
						| (((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mstatus_mpie) 
						    << 7U) 
						   | ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mstatus_mie) 
						      << 3U))))))
		  : VL_ULL(0))) | (QData)((IData)((
						   (0x305U 
						    == 
						    (0xfffU 
						     & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
							>> 0x14U)))
						    ? 0x100U
						    : 0U)))) 
	    | (QData)((IData)(((0x344U == (0xfffU & 
					   (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					    >> 0x14U)))
			        ? (((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mip_mtip) 
				    << 7U) | ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mip_msip) 
					      << 3U))
			        : 0U)))) | (QData)((IData)(
							   ((0x304U 
							     == 
							     (0xfffU 
							      & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
								 >> 0x14U)))
							     ? 
							    (((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mie_mtip) 
							      << 7U) 
							     | ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mie_msip) 
								<< 3U))
							     : 0U))));
    vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_324 
	= ((vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_316 
	    | ((0x38U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))
	        ? (0x404U | (((IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbcs_sbsingleread) 
			      << 0x14U) | (((IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbcs_sbaccess) 
					    << 0x11U) 
					   | (((IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbcs_sbautoincrement) 
					       << 0x10U) 
					      | (((IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbcs_sbautoread) 
						  << 0xfU) 
						 | ((IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbcs_sberror) 
						    << 0xcU))))))
	        : 0U)) | ((0x39U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))
			   ? vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbaddr
			   : 0U));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1217 
	= (1U & ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_val) 
		 | (~ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_val))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen 
	= (((((0U != (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_csr_cmd)) 
	      & (4U != (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_csr_cmd))) 
	     & (5U != (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_csr_cmd))) 
	    & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__priv_sufficient)) 
	   & (0U != (3U & (~ (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
			      >> 0x1eU)))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__insn_ret 
	= (0x3fU & (((4U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_csr_cmd)) 
		     & (((IData)(1U) << (7U & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					       >> 0x14U))) 
			>> 2U)) & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__priv_sufficient)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1260 
	= (((((((((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1250 
		   | (QData)((IData)(((0x340U == (0xfffU 
						  & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
						     >> 0x14U)))
				       ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mscratch
				       : 0U)))) | (QData)((IData)(
								  ((0x341U 
								    == 
								    (0xfffU 
								     & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
									>> 0x14U)))
								    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mepc
								    : 0U)))) 
		 | (QData)((IData)(((0x343U == (0xfffU 
						& (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
						   >> 0x14U)))
				     ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mtval
				     : 0U)))) | (QData)((IData)(
								((0x342U 
								  == 
								  (0xfffU 
								   & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
								      >> 0x14U)))
								  ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mcause
								  : 0U)))) 
	       | (QData)((IData)(((0x7b0U == (0xfffU 
					      & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
						 >> 0x14U)))
				   ? (0x40000003U | 
				      (((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_dcsr_ebreakm) 
					<< 0xfU) | 
				       ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_dcsr_step) 
					<< 2U))) : 0U)))) 
	      | (QData)((IData)(((0x7b1U == (0xfffU 
					     & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
						>> 0x14U)))
				  ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_dpc
				  : 0U)))) | (QData)((IData)(
							     ((0x7b2U 
							       == 
							       (0xfffU 
								& (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
								   >> 0x14U)))
							       ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_dscratch
							       : 0U)))) 
	    | (QData)((IData)(((0x302U == (0xfffU & 
					   (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					    >> 0x14U)))
			        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_medeleg
			        : 0U)))) | ((0xb03U 
					     == (0xfffU 
						 & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
						    >> 0x14U)))
					     ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_282
					     : VL_ULL(0)));
    // ALWAYS at generated-src/Top.v:4915
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_pc = 0U;
    } else {
	if ((1U & (~ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_399)))) {
	    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_240) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_pc 
		    = vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_pc;
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:4855
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_rf_wen = 0U;
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_399) {
	    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_rf_wen = 0U;
	} else {
	    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_240) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_rf_wen 
		    = ((0U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__ctrl_exe_pc_sel)) 
		       & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_rf_wen));
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:1403
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__exe_reg_exception = 0U;
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1177) {
	    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__exe_reg_exception 
		= ((0U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__ctrl_exe_pc_sel)) 
		   & (~ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__cs_val_inst)));
	} else {
	    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1187) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__exe_reg_exception = 0U;
	    }
	}
    }
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_4 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1225)
	    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_pc
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mepc);
    // ALWAYS at generated-src/Top.v:4855
    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_399) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_wbaddr = 0U;
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_240) {
	    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_wbaddr 
		= (0x1fU & ((0U != (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__ctrl_exe_pc_sel))
			     ? 0U : (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst 
				     >> 7U)));
	}
    }
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1058 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__insn_ret) 
	   & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
	      >> 0x1eU));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1063 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__insn_ret) 
	   & (~ (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
		 >> 0x1eU)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1270 
	= ((((((((((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1260 
		    | ((0xb83U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					     >> 0x14U)))
		        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_282
		        : VL_ULL(0))) | ((0xb04U == 
					  (0xfffU & 
					   (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					    >> 0x14U)))
					  ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_285
					  : VL_ULL(0))) 
		  | ((0xb84U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					   >> 0x14U)))
		      ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_285
		      : VL_ULL(0))) | ((0xb05U == (0xfffU 
						   & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
						      >> 0x14U)))
				        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_288
				        : VL_ULL(0))) 
		| ((0xb85U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					 >> 0x14U)))
		    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_288
		    : VL_ULL(0))) | ((0xb06U == (0xfffU 
						 & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
						    >> 0x14U)))
				      ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_291
				      : VL_ULL(0))) 
	      | ((0xb86U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				       >> 0x14U))) ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_291
		  : VL_ULL(0))) | ((0xb07U == (0xfffU 
					       & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
						  >> 0x14U)))
				    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_294
				    : VL_ULL(0))) | 
	    ((0xb87U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				   >> 0x14U))) ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_294
	      : VL_ULL(0))) | ((0xb08U == (0xfffU & 
					   (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					    >> 0x14U)))
			        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_297
			        : VL_ULL(0)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1280 
	= ((((((((((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1270 
		    | ((0xb88U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					     >> 0x14U)))
		        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_297
		        : VL_ULL(0))) | ((0xb09U == 
					  (0xfffU & 
					   (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					    >> 0x14U)))
					  ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_300
					  : VL_ULL(0))) 
		  | ((0xb89U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					   >> 0x14U)))
		      ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_300
		      : VL_ULL(0))) | ((0xb0aU == (0xfffU 
						   & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
						      >> 0x14U)))
				        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_303
				        : VL_ULL(0))) 
		| ((0xb8aU == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					 >> 0x14U)))
		    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_303
		    : VL_ULL(0))) | ((0xb0bU == (0xfffU 
						 & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
						    >> 0x14U)))
				      ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_306
				      : VL_ULL(0))) 
	      | ((0xb8bU == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				       >> 0x14U))) ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_306
		  : VL_ULL(0))) | ((0xb0cU == (0xfffU 
					       & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
						  >> 0x14U)))
				    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_309
				    : VL_ULL(0))) | 
	    ((0xb8cU == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				   >> 0x14U))) ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_309
	      : VL_ULL(0))) | ((0xb0dU == (0xfffU & 
					   (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					    >> 0x14U)))
			        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_312
			        : VL_ULL(0)));
    // ALWAYS at generated-src/Top.v:4891
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_pc = 0U;
    } else {
	if ((1U & (~ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_pipeline_kill)))) {
	    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_240) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_pc 
		    = vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__if_reg_pc;
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:4855
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst = 0x4033U;
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_pipeline_kill) {
	    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst = 0x4033U;
	} else {
	    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_240) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst 
		    = ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_if_kill)
		        ? 0x4033U : vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data_dataInstr_1_data);
	    }
	}
    }
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1290 
	= ((((((((((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1280 
		    | ((0xb8dU == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					     >> 0x14U)))
		        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_312
		        : VL_ULL(0))) | ((0xb0eU == 
					  (0xfffU & 
					   (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					    >> 0x14U)))
					  ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_315
					  : VL_ULL(0))) 
		  | ((0xb8eU == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					   >> 0x14U)))
		      ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_315
		      : VL_ULL(0))) | ((0xb0fU == (0xfffU 
						   & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
						      >> 0x14U)))
				        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_318
				        : VL_ULL(0))) 
		| ((0xb8fU == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					 >> 0x14U)))
		    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_318
		    : VL_ULL(0))) | ((0xb10U == (0xfffU 
						 & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
						    >> 0x14U)))
				      ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_321
				      : VL_ULL(0))) 
	      | ((0xb90U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				       >> 0x14U))) ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_321
		  : VL_ULL(0))) | ((0xb11U == (0xfffU 
					       & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
						  >> 0x14U)))
				    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_324
				    : VL_ULL(0))) | 
	    ((0xb91U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				   >> 0x14U))) ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_324
	      : VL_ULL(0))) | ((0xb12U == (0xfffU & 
					   (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					    >> 0x14U)))
			        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_327
			        : VL_ULL(0)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_pipeline_kill 
	= ((((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__insn_call) 
	     | (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__insn_break)) 
	    | (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__insn_ret)) 
	   | (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1225));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1300 
	= ((((((((((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1290 
		    | ((0xb92U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					     >> 0x14U)))
		        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_327
		        : VL_ULL(0))) | ((0xb13U == 
					  (0xfffU & 
					   (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					    >> 0x14U)))
					  ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_330
					  : VL_ULL(0))) 
		  | ((0xb93U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					   >> 0x14U)))
		      ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_330
		      : VL_ULL(0))) | ((0xb14U == (0xfffU 
						   & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
						      >> 0x14U)))
				        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_333
				        : VL_ULL(0))) 
		| ((0xb94U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					 >> 0x14U)))
		    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_333
		    : VL_ULL(0))) | ((0xb15U == (0xfffU 
						 & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
						    >> 0x14U)))
				      ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_336
				      : VL_ULL(0))) 
	      | ((0xb95U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				       >> 0x14U))) ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_336
		  : VL_ULL(0))) | ((0xb16U == (0xfffU 
					       & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
						  >> 0x14U)))
				    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_339
				    : VL_ULL(0))) | 
	    ((0xb96U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				   >> 0x14U))) ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_339
	      : VL_ULL(0))) | ((0xb17U == (0xfffU & 
					   (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					    >> 0x14U)))
			        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_342
			        : VL_ULL(0)));
    // ALWAYS at generated-src/Top.v:4855
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__if_reg_pc = 0x80000000U;
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_241) {
	    if ((1U & (~ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_260)))) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__if_reg_pc 
		    = ((0U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_exe_pc_sel))
		        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__if_pc_plus4
		        : ((1U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_exe_pc_sel))
			    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_brjmp_target
			    : ((2U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_exe_pc_sel))
			        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_adder_out
			        : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr_io_evec)));
	    }
	}
    }
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__ctrl_exe_pc_sel 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_pipeline_kill)
	    ? 3U : (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1145));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_mem_typ 
	= ((0x2003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
	    ? 3U : ((3U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
		     ? 1U : ((0x4003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
			      ? 5U : ((0x1003U == (0x707fU 
						   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
				       ? 2U : ((0x5003U 
						== 
						(0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
					        ? 6U
					        : (
						   (0x2023U 
						    == 
						    (0x707fU 
						     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						    ? 3U
						    : 
						   ((0x23U 
						     == 
						     (0x707fU 
						      & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						     ? 1U
						     : 
						    ((0x1023U 
						      == 
						      (0x707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						      ? 2U
						      : 0U))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__imm_itype_sext 
	= ((((0x80000000U & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)
	      ? 0xfffffU : 0U) << 0xcU) | (0xfffU & 
					   (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst 
					    >> 0x14U)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__imm_stype_sext 
	= ((((0x80000000U & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)
	      ? 0xfffffU : 0U) << 0xcU) | ((0xfe0U 
					    & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst 
					       >> 0x14U)) 
					   | (0x1fU 
					      & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst 
						 >> 7U))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__imm_sbtype_sext 
	= ((((0x80000000U & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)
	      ? 0x7ffffU : 0U) << 0xdU) | ((0x1000U 
					    & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst 
					       >> 0x13U)) 
					   | ((0x800U 
					       & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst 
						  << 4U)) 
					      | ((0x7e0U 
						  & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst 
						     >> 0x14U)) 
						 | (0x1eU 
						    & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst 
						       >> 7U))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__imm_ujtype_sext 
	= ((((0x80000000U & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)
	      ? 0x7ffU : 0U) << 0x15U) | ((0x100000U 
					   & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst 
					      >> 0xbU)) 
					  | ((0xff000U 
					      & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst) 
					     | ((0x800U 
						 & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst 
						    >> 9U)) 
						| (0x7feU 
						   & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst 
						      >> 0x14U))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__regfile_io_rs1_data 
	= ((0U != (0x1fU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst 
			    >> 0xfU))) ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__regfile__DOT__regfile
	   [(0x1fU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst 
		      >> 0xfU))] : 0U);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__regfile_io_rs2_data 
	= ((0U != (0x1fU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst 
			    >> 0x14U))) ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__regfile__DOT__regfile
	   [(0x1fU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst 
		      >> 0x14U))] : 0U);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_338 
	= ((((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_wbaddr) 
	     == (0x1fU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst 
			  >> 0xfU))) & (0U != (0x1fU 
					       & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst 
						  >> 0xfU)))) 
	   & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_rf_wen));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_343 
	= ((((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_wbaddr) 
	     == (0x1fU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst 
			  >> 0xfU))) & (0U != (0x1fU 
					       & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst 
						  >> 0xfU)))) 
	   & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_rf_wen));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_348 
	= ((((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__wb_reg_wbaddr) 
	     == (0x1fU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst 
			  >> 0xfU))) & (0U != (0x1fU 
					       & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst 
						  >> 0xfU)))) 
	   & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__wb_reg_ctrl_rf_wen));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_358 
	= ((((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_wbaddr) 
	     == (0x1fU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst 
			  >> 0x14U))) & (0U != (0x1fU 
						& (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst 
						   >> 0x14U)))) 
	   & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_rf_wen));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_365 
	= ((((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_wbaddr) 
	     == (0x1fU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst 
			  >> 0x14U))) & (0U != (0x1fU 
						& (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst 
						   >> 0x14U)))) 
	   & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_rf_wen));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_372 
	= ((((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__wb_reg_wbaddr) 
	     == (0x1fU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst 
			  >> 0x14U))) & (0U != (0x1fU 
						& (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst 
						   >> 0x14U)))) 
	   & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__wb_reg_ctrl_rf_wen));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__cs0_4 
	= ((0x2003U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
	   & ((3U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
	      & ((0x4003U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		 & ((0x1003U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		    & ((0x5003U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		       & ((0x2023U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
			  | ((0x23U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
			     | (0x1023U == (0x707fU 
					    & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_448 
	= ((0x63U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
	   | ((0x1063U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
	      | ((0x5063U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		 | ((0x7063U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		    | ((0x4063U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		       | ((0x6063U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
			  | ((0x5073U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
			     | ((0x6073U == (0x707fU 
					     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				| ((0x1073U == (0x707fU 
						& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				   | ((0x2073U == (0x707fU 
						   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				      | ((0x3073U == 
					  (0x707fU 
					   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					 | ((0x7073U 
					     == (0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					    | ((0x73U 
						== vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst) 
					       | ((0x30200073U 
						   == vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst) 
						  | ((0x7b200073U 
						      == vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst) 
						     | ((0x100073U 
							 == vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst) 
							| ((0x10500073U 
							    == vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst) 
							   | ((0x100fU 
							       == 
							       (0x707fU 
								& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
							      | (0xfU 
								 == 
								 (0x707fU 
								  & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))))))))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_506 
	= ((0x2033U == (0xfe00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
	    ? 0U : ((0x3033U == (0xfe00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
		     ? 0U : ((0x7033U == (0xfe00707fU 
					  & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
			      ? 0U : ((0x6033U == (0xfe00707fU 
						   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
				       ? 0U : ((0x4033U 
						== 
						(0xfe00707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
					        ? 0U
					        : (
						   (0x40005033U 
						    == 
						    (0xfe00707fU 
						     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						    ? 0U
						    : 
						   ((0x5033U 
						     == 
						     (0xfe00707fU 
						      & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						     ? 0U
						     : 
						    ((0x6fU 
						      == 
						      (0x7fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						      ? 7U
						      : 
						     ((0x67U 
						       == 
						       (0x707fU 
							& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						       ? 8U
						       : 
						      ((0x63U 
							== 
							(0x707fU 
							 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						        ? 2U
						        : 
						       ((0x1063U 
							 == 
							 (0x707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							 ? 1U
							 : 
							((0x5063U 
							  == 
							  (0x707fU 
							   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							  ? 3U
							  : 
							 ((0x7063U 
							   == 
							   (0x707fU 
							    & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							   ? 4U
							   : 
							  ((0x4063U 
							    == 
							    (0x707fU 
							     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							    ? 5U
							    : 
							   ((0x6063U 
							     == 
							     (0x707fU 
							      & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							     ? 6U
							     : 0U)))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_549 
	= ((0x5033U == (0xfe00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
	    ? 0U : ((0x6fU == (0x7fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
		     ? 0U : ((0x67U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
			      ? 0U : ((0x63U == (0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
				       ? 0U : ((0x1063U 
						== 
						(0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
					        ? 0U
					        : (
						   (0x5063U 
						    == 
						    (0x707fU 
						     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						    ? 0U
						    : 
						   ((0x7063U 
						     == 
						     (0x707fU 
						      & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						     ? 0U
						     : 
						    ((0x4063U 
						      == 
						      (0x707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						      ? 0U
						      : 
						     ((0x6063U 
						       == 
						       (0x707fU 
							& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						       ? 0U
						       : 
						      ((0x5073U 
							== 
							(0x707fU 
							 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						        ? 2U
						        : 
						       ((0x6073U 
							 == 
							 (0x707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							 ? 2U
							 : 
							((0x1073U 
							  == 
							  (0x707fU 
							   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							  ? 0U
							  : 
							 ((0x2073U 
							   == 
							   (0x707fU 
							    & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							   ? 0U
							   : 
							  ((0x3073U 
							    == 
							    (0x707fU 
							     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							    ? 0U
							    : 
							   ((0x7073U 
							     == 
							     (0x707fU 
							      & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							     ? 2U
							     : 0U)))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_745 
	= ((0x5033U == (0xfe00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
	    ? 3U : ((0x6fU == (0x7fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
		     ? 0U : ((0x67U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
			      ? 0U : ((0x63U == (0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
				       ? 0U : ((0x1063U 
						== 
						(0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
					        ? 0U
					        : (
						   (0x5063U 
						    == 
						    (0x707fU 
						     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						    ? 0U
						    : 
						   ((0x7063U 
						     == 
						     (0x707fU 
						      & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						     ? 0U
						     : 
						    ((0x4063U 
						      == 
						      (0x707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						      ? 0U
						      : 
						     ((0x6063U 
						       == 
						       (0x707fU 
							& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						       ? 0U
						       : 
						      ((0x5073U 
							== 
							(0x707fU 
							 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						        ? 0xaU
						        : 
						       ((0x6073U 
							 == 
							 (0x707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							 ? 0xaU
							 : 
							((0x1073U 
							  == 
							  (0x707fU 
							   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							  ? 0xaU
							  : 
							 ((0x2073U 
							   == 
							   (0x707fU 
							    & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							   ? 0xaU
							   : 
							  ((0x3073U 
							    == 
							    (0x707fU 
							     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							    ? 0xaU
							    : 
							   ((0x7073U 
							     == 
							     (0x707fU 
							      & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							     ? 0xaU
							     : 0U)))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_794 
	= ((0x5033U == (0xfe00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
	    ? 0U : ((0x6fU == (0x7fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
		     ? 2U : ((0x67U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
			      ? 2U : ((0x63U == (0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
				       ? 0U : ((0x1063U 
						== 
						(0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
					        ? 0U
					        : (
						   (0x5063U 
						    == 
						    (0x707fU 
						     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						    ? 0U
						    : 
						   ((0x7063U 
						     == 
						     (0x707fU 
						      & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						     ? 0U
						     : 
						    ((0x4063U 
						      == 
						      (0x707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						      ? 0U
						      : 
						     ((0x6063U 
						       == 
						       (0x707fU 
							& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						       ? 0U
						       : 
						      ((0x5073U 
							== 
							(0x707fU 
							 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						        ? 3U
						        : 
						       ((0x6073U 
							 == 
							 (0x707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							 ? 3U
							 : 
							((0x1073U 
							  == 
							  (0x707fU 
							   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							  ? 3U
							  : 
							 ((0x2073U 
							   == 
							   (0x707fU 
							    & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							   ? 3U
							   : 
							  ((0x3073U 
							    == 
							    (0x707fU 
							     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							    ? 3U
							    : 
							   ((0x7073U 
							     == 
							     (0x707fU 
							      & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							     ? 3U
							     : 0U)))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_889 
	= ((0x63U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
	   & ((0x1063U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
	      & ((0x5063U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		 & ((0x7063U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		    & ((0x4063U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		       & ((0x6063U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
			  & ((0x5073U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
			     & ((0x6073U != (0x707fU 
					     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				& ((0x1073U != (0x707fU 
						& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				   & ((0x2073U != (0x707fU 
						   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				      & ((0x3073U != 
					  (0x707fU 
					   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					 & ((0x7073U 
					     != (0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					    & ((0x73U 
						!= vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst) 
					       & ((0x30200073U 
						   != vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst) 
						  & ((0x7b200073U 
						      != vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst) 
						     & ((0x100073U 
							 != vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst) 
							& ((0x10500073U 
							    != vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst) 
							   & ((0x100fU 
							       != 
							       (0x707fU 
								& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
							      & (0xfU 
								 == 
								 (0x707fU 
								  & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))))))))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_604 
	= ((0x2033U == (0xfe00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
	    ? 0U : ((0x3033U == (0xfe00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
		     ? 0U : ((0x7033U == (0xfe00707fU 
					  & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
			      ? 0U : ((0x6033U == (0xfe00707fU 
						   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
				       ? 0U : ((0x4033U 
						== 
						(0xfe00707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
					        ? 0U
					        : (
						   (0x40005033U 
						    == 
						    (0xfe00707fU 
						     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						    ? 0U
						    : 
						   ((0x5033U 
						     == 
						     (0xfe00707fU 
						      & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						     ? 0U
						     : 
						    ((0x6fU 
						      == 
						      (0x7fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						      ? 5U
						      : 
						     ((0x67U 
						       == 
						       (0x707fU 
							& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						       ? 1U
						       : 
						      ((0x63U 
							== 
							(0x707fU 
							 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						        ? 3U
						        : 
						       ((0x1063U 
							 == 
							 (0x707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							 ? 3U
							 : 
							((0x5063U 
							  == 
							  (0x707fU 
							   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							  ? 3U
							  : 
							 ((0x7063U 
							   == 
							   (0x707fU 
							    & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							   ? 3U
							   : 
							  ((0x4063U 
							    == 
							    (0x707fU 
							     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							    ? 3U
							    : 
							   ((0x6063U 
							     == 
							     (0x707fU 
							      & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							     ? 3U
							     : 0U)))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1086 
	= ((0x67U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
	   & ((0x63U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
	      & ((0x1063U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		 & ((0x5063U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		    & ((0x7063U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		       & ((0x4063U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
			  & ((0x6063U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
			     & ((0x5073U != (0x707fU 
					     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				& ((0x6073U != (0x707fU 
						& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				   & ((0x1073U != (0x707fU 
						   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				      & ((0x2073U != 
					  (0x707fU 
					   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					 & ((0x3073U 
					     != (0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					    & ((0x7073U 
						!= 
						(0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					       & ((0x73U 
						   != vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst) 
						  & ((0x30200073U 
						      != vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst) 
						     & ((0x7b200073U 
							 != vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst) 
							& ((0x100073U 
							    != vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst) 
							   & ((0x10500073U 
							       != vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst) 
							      & (0x100fU 
								 == 
								 (0x707fU 
								  & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))))))))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1036 
	= ((0x63U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
	    ? 0U : ((0x1063U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
		     ? 0U : ((0x5063U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
			      ? 0U : ((0x7063U == (0x707fU 
						   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
				       ? 0U : ((0x4063U 
						== 
						(0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
					        ? 0U
					        : (
						   (0x6063U 
						    == 
						    (0x707fU 
						     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						    ? 0U
						    : 
						   ((0x5073U 
						     == 
						     (0x707fU 
						      & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						     ? 1U
						     : 
						    ((0x6073U 
						      == 
						      (0x707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						      ? 2U
						      : 
						     ((0x1073U 
						       == 
						       (0x707fU 
							& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						       ? 1U
						       : 
						      ((0x2073U 
							== 
							(0x707fU 
							 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						        ? 2U
						        : 
						       ((0x3073U 
							 == 
							 (0x707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							 ? 3U
							 : 
							((0x7073U 
							  == 
							  (0x707fU 
							   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							  ? 3U
							  : 
							 ((0x73U 
							   == vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)
							   ? 4U
							   : 
							  ((0x30200073U 
							    == vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)
							    ? 4U
							    : 
							   ((0x7b200073U 
							     == vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)
							     ? 4U
							     : 
							    ((0x100073U 
							      == vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)
							      ? 4U
							      : 0U))))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_638 
	= ((0x5073U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
	   | ((0x6073U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
	      | ((0x1073U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		 | ((0x2073U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		    | ((0x3073U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		       | (0x7073U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1310 
	= ((((((((((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1300 
		    | ((0xb97U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					     >> 0x14U)))
		        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_342
		        : VL_ULL(0))) | ((0xb18U == 
					  (0xfffU & 
					   (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					    >> 0x14U)))
					  ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_345
					  : VL_ULL(0))) 
		  | ((0xb98U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					   >> 0x14U)))
		      ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_345
		      : VL_ULL(0))) | ((0xb19U == (0xfffU 
						   & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
						      >> 0x14U)))
				        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_348
				        : VL_ULL(0))) 
		| ((0xb99U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					 >> 0x14U)))
		    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_348
		    : VL_ULL(0))) | ((0xb1aU == (0xfffU 
						 & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
						    >> 0x14U)))
				      ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_351
				      : VL_ULL(0))) 
	      | ((0xb9aU == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				       >> 0x14U))) ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_351
		  : VL_ULL(0))) | ((0xb1bU == (0xfffU 
					       & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
						  >> 0x14U)))
				    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_354
				    : VL_ULL(0))) | 
	    ((0xb9bU == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				   >> 0x14U))) ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_354
	      : VL_ULL(0))) | ((0xb1cU == (0xfffU & 
					   (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					    >> 0x14U)))
			        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_357
			        : VL_ULL(0)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_brjmp_target 
	= (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_pc 
	   + vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__brjmp_offset);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_adder_out 
	= (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_alu_op1 
	   + vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__brjmp_offset);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr_io_evec 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__insn_break)
	    ? 0x80000004U : ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__insn_call)
			      ? 0x80000004U : ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1063)
					        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_mepc
					        : ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1058)
						    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__reg_dpc
						    : 0x80000004U))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_exe_pc_sel 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_pipeline_kill)
	    ? 3U : (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1145));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_465 
	= ((0x2013U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
	   | ((0x3013U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
	      | ((0x1013U == (0xfc00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		 | ((0x40005013U == (0xfc00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		    | ((0x5013U == (0xfc00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		       | ((0x1033U == (0xfe00707fU 
				       & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
			  | ((0x33U == (0xfe00707fU 
					& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
			     | ((0x40000033U == (0xfe00707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				| ((0x2033U == (0xfe00707fU 
						& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				   | ((0x3033U == (0xfe00707fU 
						   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				      | ((0x7033U == 
					  (0xfe00707fU 
					   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					 | ((0x6033U 
					     == (0xfe00707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					    | ((0x4033U 
						== 
						(0xfe00707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					       | ((0x40005033U 
						   == 
						   (0xfe00707fU 
						    & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
						  | ((0x5033U 
						      == 
						      (0xfe00707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
						     | ((0x6fU 
							 == 
							 (0x7fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
							| ((0x67U 
							    == 
							    (0x707fU 
							     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
							   | (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_448))))))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_521 
	= ((0x1023U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
	    ? 0U : ((0x17U == (0x7fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
		     ? 0U : ((0x37U == (0x7fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
			      ? 0U : ((0x13U == (0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
				       ? 0U : ((0x7013U 
						== 
						(0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
					        ? 0U
					        : (
						   (0x6013U 
						    == 
						    (0x707fU 
						     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						    ? 0U
						    : 
						   ((0x4013U 
						     == 
						     (0x707fU 
						      & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						     ? 0U
						     : 
						    ((0x2013U 
						      == 
						      (0x707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						      ? 0U
						      : 
						     ((0x3013U 
						       == 
						       (0x707fU 
							& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						       ? 0U
						       : 
						      ((0x1013U 
							== 
							(0xfc00707fU 
							 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						        ? 0U
						        : 
						       ((0x40005013U 
							 == 
							 (0xfc00707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							 ? 0U
							 : 
							((0x5013U 
							  == 
							  (0xfc00707fU 
							   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							  ? 0U
							  : 
							 ((0x1033U 
							   == 
							   (0xfe00707fU 
							    & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							   ? 0U
							   : 
							  ((0x33U 
							    == 
							    (0xfe00707fU 
							     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							    ? 0U
							    : 
							   ((0x40000033U 
							     == 
							     (0xfe00707fU 
							      & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							     ? 0U
							     : (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_506))))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_564 
	= ((0x4013U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
	    ? 0U : ((0x2013U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
		     ? 0U : ((0x3013U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
			      ? 0U : ((0x1013U == (0xfc00707fU 
						   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
				       ? 0U : ((0x40005013U 
						== 
						(0xfc00707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
					        ? 0U
					        : (
						   (0x5013U 
						    == 
						    (0xfc00707fU 
						     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						    ? 0U
						    : 
						   ((0x1033U 
						     == 
						     (0xfe00707fU 
						      & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						     ? 0U
						     : 
						    ((0x33U 
						      == 
						      (0xfe00707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						      ? 0U
						      : 
						     ((0x40000033U 
						       == 
						       (0xfe00707fU 
							& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						       ? 0U
						       : 
						      ((0x2033U 
							== 
							(0xfe00707fU 
							 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						        ? 0U
						        : 
						       ((0x3033U 
							 == 
							 (0xfe00707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							 ? 0U
							 : 
							((0x7033U 
							  == 
							  (0xfe00707fU 
							   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							  ? 0U
							  : 
							 ((0x6033U 
							   == 
							   (0xfe00707fU 
							    & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							   ? 0U
							   : 
							  ((0x4033U 
							    == 
							    (0xfe00707fU 
							     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							    ? 0U
							    : 
							   ((0x40005033U 
							     == 
							     (0xfe00707fU 
							      & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							     ? 0U
							     : (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_549))))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_760 
	= ((0x4013U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
	    ? 7U : ((0x2013U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
		     ? 8U : ((0x3013U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
			      ? 9U : ((0x1013U == (0xfc00707fU 
						   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
				       ? 2U : ((0x40005013U 
						== 
						(0xfc00707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
					        ? 4U
					        : (
						   (0x5013U 
						    == 
						    (0xfc00707fU 
						     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						    ? 3U
						    : 
						   ((0x1033U 
						     == 
						     (0xfe00707fU 
						      & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						     ? 2U
						     : 
						    ((0x33U 
						      == 
						      (0xfe00707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						      ? 0U
						      : 
						     ((0x40000033U 
						       == 
						       (0xfe00707fU 
							& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						       ? 1U
						       : 
						      ((0x2033U 
							== 
							(0xfe00707fU 
							 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						        ? 8U
						        : 
						       ((0x3033U 
							 == 
							 (0xfe00707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							 ? 9U
							 : 
							((0x7033U 
							  == 
							  (0xfe00707fU 
							   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							  ? 5U
							  : 
							 ((0x6033U 
							   == 
							   (0xfe00707fU 
							    & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							   ? 6U
							   : 
							  ((0x4033U 
							    == 
							    (0xfe00707fU 
							     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							    ? 7U
							    : 
							   ((0x40005033U 
							     == 
							     (0xfe00707fU 
							      & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							     ? 4U
							     : (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_745))))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_809 
	= ((0x4013U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
	    ? 0U : ((0x2013U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
		     ? 0U : ((0x3013U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
			      ? 0U : ((0x1013U == (0xfc00707fU 
						   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
				       ? 0U : ((0x40005013U 
						== 
						(0xfc00707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
					        ? 0U
					        : (
						   (0x5013U 
						    == 
						    (0xfc00707fU 
						     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						    ? 0U
						    : 
						   ((0x1033U 
						     == 
						     (0xfe00707fU 
						      & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						     ? 0U
						     : 
						    ((0x33U 
						      == 
						      (0xfe00707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						      ? 0U
						      : 
						     ((0x40000033U 
						       == 
						       (0xfe00707fU 
							& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						       ? 0U
						       : 
						      ((0x2033U 
							== 
							(0xfe00707fU 
							 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						        ? 0U
						        : 
						       ((0x3033U 
							 == 
							 (0xfe00707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							 ? 0U
							 : 
							((0x7033U 
							  == 
							  (0xfe00707fU 
							   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							  ? 0U
							  : 
							 ((0x6033U 
							   == 
							   (0xfe00707fU 
							    & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							   ? 0U
							   : 
							  ((0x4033U 
							    == 
							    (0xfe00707fU 
							     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							    ? 0U
							    : 
							   ((0x40005033U 
							     == 
							     (0xfe00707fU 
							      & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							     ? 0U
							     : (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_794))))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_906 
	= ((0x2013U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
	   & ((0x3013U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
	      & ((0x1013U != (0xfc00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		 & ((0x40005013U != (0xfc00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		    & ((0x5013U != (0xfc00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		       & ((0x1033U != (0xfe00707fU 
				       & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
			  & ((0x33U != (0xfe00707fU 
					& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
			     & ((0x40000033U != (0xfe00707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				& ((0x2033U != (0xfe00707fU 
						& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				   & ((0x3033U != (0xfe00707fU 
						   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				      & ((0x7033U != 
					  (0xfe00707fU 
					   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					 & ((0x6033U 
					     != (0xfe00707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					    & ((0x4033U 
						!= 
						(0xfe00707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					       & ((0x40005033U 
						   != 
						   (0xfe00707fU 
						    & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
						  & ((0x5033U 
						      != 
						      (0xfe00707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
						     & ((0x6fU 
							 != 
							 (0x7fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
							& ((0x67U 
							    != 
							    (0x707fU 
							     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
							   & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_889))))))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_619 
	= ((0x1023U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
	    ? 2U : ((0x17U == (0x7fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
		     ? 4U : ((0x37U == (0x7fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
			      ? 4U : ((0x13U == (0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
				       ? 1U : ((0x7013U 
						== 
						(0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
					        ? 1U
					        : (
						   (0x6013U 
						    == 
						    (0x707fU 
						     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						    ? 1U
						    : 
						   ((0x4013U 
						     == 
						     (0x707fU 
						      & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						     ? 1U
						     : 
						    ((0x2013U 
						      == 
						      (0x707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						      ? 1U
						      : 
						     ((0x3013U 
						       == 
						       (0x707fU 
							& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						       ? 1U
						       : 
						      ((0x1013U 
							== 
							(0xfc00707fU 
							 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						        ? 1U
						        : 
						       ((0x40005013U 
							 == 
							 (0xfc00707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							 ? 1U
							 : 
							((0x5013U 
							  == 
							  (0xfc00707fU 
							   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							  ? 1U
							  : 
							 ((0x1033U 
							   == 
							   (0xfe00707fU 
							    & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							   ? 0U
							   : 
							  ((0x33U 
							    == 
							    (0xfe00707fU 
							     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							    ? 0U
							    : 
							   ((0x40000033U 
							     == 
							     (0xfe00707fU 
							      & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							     ? 0U
							     : (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_604))))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1103 
	= ((0x4013U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
	   & ((0x2013U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
	      & ((0x3013U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		 & ((0x1013U != (0xfc00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		    & ((0x40005013U != (0xfc00707fU 
					& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		       & ((0x5013U != (0xfc00707fU 
				       & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
			  & ((0x1033U != (0xfe00707fU 
					  & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
			     & ((0x33U != (0xfe00707fU 
					   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				& ((0x40000033U != 
				    (0xfe00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				   & ((0x2033U != (0xfe00707fU 
						   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				      & ((0x3033U != 
					  (0xfe00707fU 
					   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					 & ((0x7033U 
					     != (0xfe00707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					    & ((0x6033U 
						!= 
						(0xfe00707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					       & ((0x4033U 
						   != 
						   (0xfe00707fU 
						    & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
						  & ((0x40005033U 
						      != 
						      (0xfe00707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
						     & ((0x5033U 
							 != 
							 (0xfe00707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
							& ((0x6fU 
							    != 
							    (0x7fU 
							     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
							   & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1086))))))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1051 
	= ((0x1013U == (0xfc00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
	    ? 0U : ((0x40005013U == (0xfc00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
		     ? 0U : ((0x5013U == (0xfc00707fU 
					  & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
			      ? 0U : ((0x1033U == (0xfe00707fU 
						   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
				       ? 0U : ((0x33U 
						== 
						(0xfe00707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
					        ? 0U
					        : (
						   (0x40000033U 
						    == 
						    (0xfe00707fU 
						     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						    ? 0U
						    : 
						   ((0x2033U 
						     == 
						     (0xfe00707fU 
						      & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						     ? 0U
						     : 
						    ((0x3033U 
						      == 
						      (0xfe00707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						      ? 0U
						      : 
						     ((0x7033U 
						       == 
						       (0xfe00707fU 
							& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						       ? 0U
						       : 
						      ((0x6033U 
							== 
							(0xfe00707fU 
							 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						        ? 0U
						        : 
						       ((0x4033U 
							 == 
							 (0xfe00707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							 ? 0U
							 : 
							((0x40005033U 
							  == 
							  (0xfe00707fU 
							   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							  ? 0U
							  : 
							 ((0x5033U 
							   == 
							   (0xfe00707fU 
							    & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							   ? 0U
							   : 
							  ((0x6fU 
							    == 
							    (0x7fU 
							     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							    ? 0U
							    : 
							   ((0x67U 
							     == 
							     (0x707fU 
							      & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							     ? 0U
							     : (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1036))))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_851 
	= ((0x33U == (0xfe00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
	   | ((0x40000033U == (0xfe00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
	      | ((0x2033U == (0xfe00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		 | ((0x3033U == (0xfe00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		    | ((0x7033U == (0xfe00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		       | ((0x6033U == (0xfe00707fU 
				       & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
			  | ((0x4033U == (0xfe00707fU 
					  & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
			     | ((0x40005033U == (0xfe00707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				| ((0x5033U == (0xfe00707fU 
						& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				   | ((0x6fU == (0x7fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				      | ((0x67U == 
					  (0x707fU 
					   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					 | ((0x63U 
					     != (0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					    & ((0x1063U 
						!= 
						(0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					       & ((0x5063U 
						   != 
						   (0x707fU 
						    & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
						  & ((0x7063U 
						      != 
						      (0x707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
						     & ((0x4063U 
							 != 
							 (0x707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
							& ((0x6063U 
							    != 
							    (0x707fU 
							     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
							   & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_638))))))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_644 
	= ((0x63U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
	   | ((0x1063U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
	      | ((0x5063U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		 | ((0x7063U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		    | ((0x4063U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		       | ((0x6063U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
			  | (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_638)))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1320 
	= ((((((((((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1310 
		    | ((0xb9cU == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					     >> 0x14U)))
		        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_357
		        : VL_ULL(0))) | ((0xb1dU == 
					  (0xfffU & 
					   (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					    >> 0x14U)))
					  ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_360
					  : VL_ULL(0))) 
		  | ((0xb9dU == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					   >> 0x14U)))
		      ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_360
		      : VL_ULL(0))) | ((0xb1eU == (0xfffU 
						   & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
						      >> 0x14U)))
				        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_363
				        : VL_ULL(0))) 
		| ((0xb9eU == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					 >> 0x14U)))
		    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_363
		    : VL_ULL(0))) | ((0xb1fU == (0xfffU 
						 & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
						    >> 0x14U)))
				      ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_366
				      : VL_ULL(0))) 
	      | ((0xb9fU == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				       >> 0x14U))) ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_366
		  : VL_ULL(0))) | ((0xb20U == (0xfffU 
					       & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
						  >> 0x14U)))
				    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_369
				    : VL_ULL(0))) | 
	    ((0xba0U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				   >> 0x14U))) ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_369
	      : VL_ULL(0))) | ((0xb21U == (0xfffU & 
					   (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					    >> 0x14U)))
			        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_372
			        : VL_ULL(0)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__if_pc_plus4 
	= ((IData)(4U) + vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__if_reg_pc);
    // ALWAYS at /home/albert/CPU/theFinalDissertation/design/mizhi/vsrc/AsyncReadMem.sv:46
    vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data_dataInstr_1_data 
	= ((0xffffff00U & vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data_dataInstr_1_data) 
	   | vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem
	   [(0x1fffffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__if_reg_pc)]);
    // ALWAYS at /home/albert/CPU/theFinalDissertation/design/mizhi/vsrc/AsyncReadMem.sv:46
    vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data_dataInstr_1_data 
	= ((0xffff00ffU & vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data_dataInstr_1_data) 
	   | (vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem
	      [(0x1fffffU & ((IData)(1U) + vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__if_reg_pc))] 
	      << 8U));
    // ALWAYS at /home/albert/CPU/theFinalDissertation/design/mizhi/vsrc/AsyncReadMem.sv:46
    vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data_dataInstr_1_data 
	= ((0xff00ffffU & vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data_dataInstr_1_data) 
	   | (vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem
	      [(0x1fffffU & ((IData)(2U) + vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__if_reg_pc))] 
	      << 0x10U));
    // ALWAYS at /home/albert/CPU/theFinalDissertation/design/mizhi/vsrc/AsyncReadMem.sv:46
    vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data_dataInstr_1_data 
	= ((0xffffffU & vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data_dataInstr_1_data) 
	   | (vlTOPp->Top__DOT__tile__DOT__memory__DOT__async_data__DOT__mem
	      [(0x1fffffU & ((IData)(3U) + vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__if_reg_pc))] 
	      << 0x18U));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__cs_val_inst 
	= ((0x2003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
	   | ((3U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
	      | ((0x4003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		 | ((0x1003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		    | ((0x5003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		       | ((0x2023U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
			  | ((0x23U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
			     | ((0x1023U == (0x707fU 
					     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				| ((0x17U == (0x7fU 
					      & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				   | ((0x37U == (0x7fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				      | ((0x13U == 
					  (0x707fU 
					   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					 | ((0x7013U 
					     == (0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					    | ((0x6013U 
						== 
						(0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					       | ((0x4013U 
						   == 
						   (0x707fU 
						    & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
						  | (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_465)))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_br_type 
	= ((0x2003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
	    ? 0U : ((3U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
		     ? 0U : ((0x4003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
			      ? 0U : ((0x1003U == (0x707fU 
						   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
				       ? 0U : ((0x5003U 
						== 
						(0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
					        ? 0U
					        : (
						   (0x2023U 
						    == 
						    (0x707fU 
						     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						    ? 0U
						    : 
						   ((0x23U 
						     == 
						     (0x707fU 
						      & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						     ? 0U
						     : (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_521))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_op1_sel 
	= ((0x2003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
	    ? 0U : ((3U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
		     ? 0U : ((0x4003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
			      ? 0U : ((0x1003U == (0x707fU 
						   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
				       ? 0U : ((0x5003U 
						== 
						(0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
					        ? 0U
					        : (
						   (0x2023U 
						    == 
						    (0x707fU 
						     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						    ? 0U
						    : 
						   ((0x23U 
						     == 
						     (0x707fU 
						      & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						     ? 0U
						     : 
						    ((0x1023U 
						      == 
						      (0x707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						      ? 0U
						      : 
						     ((0x17U 
						       == 
						       (0x7fU 
							& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						       ? 1U
						       : 
						      ((0x37U 
							== 
							(0x7fU 
							 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						        ? 0U
						        : 
						       ((0x13U 
							 == 
							 (0x707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							 ? 0U
							 : 
							((0x7013U 
							  == 
							  (0x707fU 
							   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							  ? 0U
							  : 
							 ((0x6013U 
							   == 
							   (0x707fU 
							    & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							   ? 0U
							   : (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_564))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_alu_fun 
	= ((0x2003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
	    ? 0U : ((3U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
		     ? 0U : ((0x4003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
			      ? 0U : ((0x1003U == (0x707fU 
						   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
				       ? 0U : ((0x5003U 
						== 
						(0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
					        ? 0U
					        : (
						   (0x2023U 
						    == 
						    (0x707fU 
						     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						    ? 0U
						    : 
						   ((0x23U 
						     == 
						     (0x707fU 
						      & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						     ? 0U
						     : 
						    ((0x1023U 
						      == 
						      (0x707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						      ? 0U
						      : 
						     ((0x17U 
						       == 
						       (0x7fU 
							& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						       ? 0U
						       : 
						      ((0x37U 
							== 
							(0x7fU 
							 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						        ? 0xbU
						        : 
						       ((0x13U 
							 == 
							 (0x707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							 ? 0U
							 : 
							((0x7013U 
							  == 
							  (0x707fU 
							   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							  ? 5U
							  : 
							 ((0x6013U 
							   == 
							   (0x707fU 
							    & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							   ? 6U
							   : (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_760))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_wb_sel 
	= ((0x2003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
	    ? 1U : ((3U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
		     ? 1U : ((0x4003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
			      ? 1U : ((0x1003U == (0x707fU 
						   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
				       ? 1U : ((0x5003U 
						== 
						(0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
					        ? 1U
					        : (
						   (0x2023U 
						    == 
						    (0x707fU 
						     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						    ? 0U
						    : 
						   ((0x23U 
						     == 
						     (0x707fU 
						      & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						     ? 0U
						     : 
						    ((0x1023U 
						      == 
						      (0x707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						      ? 0U
						      : 
						     ((0x17U 
						       == 
						       (0x7fU 
							& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						       ? 0U
						       : 
						      ((0x37U 
							== 
							(0x7fU 
							 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						        ? 0U
						        : 
						       ((0x13U 
							 == 
							 (0x707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							 ? 0U
							 : 
							((0x7013U 
							  == 
							  (0x707fU 
							   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							  ? 0U
							  : 
							 ((0x6013U 
							   == 
							   (0x707fU 
							    & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							   ? 0U
							   : (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_809))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_919 
	= ((3U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
	   | ((0x4003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
	      | ((0x1003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		 | ((0x5003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		    | ((0x2023U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		       | ((0x23U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
			  | ((0x1023U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
			     | ((0x17U != (0x7fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				& ((0x37U != (0x7fU 
					      & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				   & ((0x13U != (0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				      & ((0x7013U != 
					  (0x707fU 
					   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					 & ((0x6013U 
					     != (0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					    & ((0x4013U 
						!= 
						(0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					       & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_906))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_op2_sel 
	= ((0x2003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
	    ? 1U : ((3U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
		     ? 1U : ((0x4003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
			      ? 1U : ((0x1003U == (0x707fU 
						   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
				       ? 1U : ((0x5003U 
						== 
						(0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
					        ? 1U
					        : (
						   (0x2023U 
						    == 
						    (0x707fU 
						     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						    ? 2U
						    : 
						   ((0x23U 
						     == 
						     (0x707fU 
						      & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						     ? 2U
						     : (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_619))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__cs0_7 
	= ((0x2003U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
	   & ((3U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
	      & ((0x4003U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		 & ((0x1003U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		    & ((0x5003U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		       & ((0x2023U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
			  & ((0x23U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
			     & ((0x1023U != (0x707fU 
					     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				& ((0x17U != (0x7fU 
					      & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				   & ((0x37U != (0x7fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				      & ((0x13U != 
					  (0x707fU 
					   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					 & ((0x7013U 
					     != (0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					    & ((0x6013U 
						!= 
						(0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					       & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1103))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1066 
	= ((3U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
	    ? 0U : ((0x4003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
		     ? 0U : ((0x1003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
			      ? 0U : ((0x5003U == (0x707fU 
						   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
				       ? 0U : ((0x2023U 
						== 
						(0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
					        ? 0U
					        : (
						   (0x23U 
						    == 
						    (0x707fU 
						     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						    ? 0U
						    : 
						   ((0x1023U 
						     == 
						     (0x707fU 
						      & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						     ? 0U
						     : 
						    ((0x17U 
						      == 
						      (0x7fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						      ? 0U
						      : 
						     ((0x37U 
						       == 
						       (0x7fU 
							& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						       ? 0U
						       : 
						      ((0x13U 
							== 
							(0x707fU 
							 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
						        ? 0U
						        : 
						       ((0x7013U 
							 == 
							 (0x707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							 ? 0U
							 : 
							((0x6013U 
							  == 
							  (0x707fU 
							   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							  ? 0U
							  : 
							 ((0x4013U 
							   == 
							   (0x707fU 
							    & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							   ? 0U
							   : 
							  ((0x2013U 
							    == 
							    (0x707fU 
							     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							    ? 0U
							    : 
							   ((0x3013U 
							     == 
							     (0x707fU 
							      & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
							     ? 0U
							     : (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1051))))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_868 
	= ((0x1003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
	   | ((0x5003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
	      | ((0x2023U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		 & ((0x23U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		    & ((0x1023U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		       & ((0x17U == (0x7fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
			  | ((0x37U == (0x7fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
			     | ((0x13U == (0x707fU 
					   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				| ((0x7013U == (0x707fU 
						& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				   | ((0x6013U == (0x707fU 
						   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				      | ((0x4013U == 
					  (0x707fU 
					   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					 | ((0x2013U 
					     == (0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					    | ((0x3013U 
						== 
						(0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					       | ((0x1013U 
						   == 
						   (0xfc00707fU 
						    & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
						  | ((0x40005013U 
						      == 
						      (0xfc00707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
						     | ((0x5013U 
							 == 
							 (0xfc00707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
							| ((0x1033U 
							    == 
							    (0xfe00707fU 
							     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
							   | (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_851))))))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_661 
	= ((0x2013U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
	   | ((0x3013U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
	      | ((0x1013U == (0xfc00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		 | ((0x40005013U == (0xfc00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		    | ((0x5013U == (0xfc00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		       | ((0x1033U == (0xfe00707fU 
				       & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
			  | ((0x33U == (0xfe00707fU 
					& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
			     | ((0x40000033U == (0xfe00707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				| ((0x2033U == (0xfe00707fU 
						& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				   | ((0x3033U == (0xfe00707fU 
						   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				      | ((0x7033U == 
					  (0xfe00707fU 
					   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					 | ((0x6033U 
					     == (0xfe00707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					    | ((0x4033U 
						== 
						(0xfe00707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					       | ((0x40005033U 
						   == 
						   (0xfe00707fU 
						    & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
						  | ((0x5033U 
						      == 
						      (0xfe00707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
						     | ((0x6fU 
							 != 
							 (0x7fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
							& ((0x67U 
							    == 
							    (0x707fU 
							     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
							   | (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_644))))))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_710 
	= ((0x2013U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
	   & ((0x3013U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
	      & ((0x1013U != (0xfc00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		 & ((0x40005013U != (0xfc00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		    & ((0x5013U != (0xfc00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		       & ((0x1033U == (0xfe00707fU 
				       & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
			  | ((0x33U == (0xfe00707fU 
					& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
			     | ((0x40000033U == (0xfe00707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				| ((0x2033U == (0xfe00707fU 
						& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				   | ((0x3033U == (0xfe00707fU 
						   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				      | ((0x7033U == 
					  (0xfe00707fU 
					   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					 | ((0x6033U 
					     == (0xfe00707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					    | ((0x4033U 
						== 
						(0xfe00707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					       | ((0x40005033U 
						   == 
						   (0xfe00707fU 
						    & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
						  | ((0x5033U 
						      == 
						      (0xfe00707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
						     | ((0x6fU 
							 != 
							 (0x7fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
							& ((0x67U 
							    != 
							    (0x707fU 
							     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
							   & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_644))))))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1323 
	= (((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1320 
	     | ((0xba1U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				      >> 0x14U))) ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_372
		 : VL_ULL(0))) | ((0xb22U == (0xfffU 
					      & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
						 >> 0x14U)))
				   ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_375
				   : VL_ULL(0))) | 
	   ((0xba2U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				  >> 0x14U))) ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_375
	     : VL_ULL(0)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_mem_val 
	= ((0x2003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
	   | (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_919));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1197 
	= (((0x2003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
	    | (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_919)) 
	   & (~ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__cs0_4)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_360 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_358) 
	   & (0U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_op2_sel)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_367 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_365) 
	   & (0U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_op2_sel)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_374 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_372) 
	   & (0U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_op2_sel)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_if_kill 
	= (((0U != (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__ctrl_exe_pc_sel)) 
	    | (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__cs0_7)) 
	   | (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1152));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__cs0_6 
	= ((0x2003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst))
	    ? 0U : (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1066));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_rf_wen 
	= ((0x2003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
	   | ((3U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
	      | ((0x4003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		 | (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_868))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1210 
	= (((((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__exe_inst_is_load) 
	      & ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__exe_reg_wbaddr) 
		 == (0x1fU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst 
			      >> 0xfU)))) & (0U != (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__exe_reg_wbaddr))) 
	    & ((0U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__ctrl_exe_pc_sel)) 
	       & ((0x2003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		  | ((3U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		     | ((0x4003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
			| ((0x1003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
			   | ((0x5003U == (0x707fU 
					   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
			      | ((0x2023U == (0x707fU 
					      & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				 | ((0x23U == (0x707fU 
					       & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				    | ((0x1023U == 
					(0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				       | ((0x17U != 
					   (0x7fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					  & ((0x37U 
					      != (0x7fU 
						  & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					     & ((0x13U 
						 == 
						 (0x707fU 
						  & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
						| ((0x7013U 
						    == 
						    (0x707fU 
						     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
						   | ((0x6013U 
						       == 
						       (0x707fU 
							& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
						      | ((0x4013U 
							  == 
							  (0x707fU 
							   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
							 | (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_661))))))))))))))))) 
	   | ((((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__exe_inst_is_load) 
		& ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__exe_reg_wbaddr) 
		   == (0x1fU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst 
				>> 0x14U)))) & (0U 
						!= (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__exe_reg_wbaddr))) 
	      & ((0U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__ctrl_exe_pc_sel)) 
		 & ((0x2003U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		    & ((3U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
		       & ((0x4003U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
			  & ((0x1003U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
			     & ((0x5003U != (0x707fU 
					     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				& ((0x2023U == (0x707fU 
						& vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				   | ((0x23U == (0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
				      | ((0x1023U == 
					  (0x707fU 
					   & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					 | ((0x17U 
					     != (0x7fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					    & ((0x37U 
						!= 
						(0x7fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
					       & ((0x13U 
						   != 
						   (0x707fU 
						    & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
						  & ((0x7013U 
						      != 
						      (0x707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
						     & ((0x6013U 
							 != 
							 (0x707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
							& ((0x4013U 
							    != 
							    (0x707fU 
							     & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst)) 
							   & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_710))))))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata 
	= (((((2U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_csr_cmd)) 
	      | (3U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_csr_cmd)))
	      ? (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1323)
	      : 0U) | vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_alu_out) 
	   & (~ ((3U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_ctrl_csr_cmd))
		  ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_alu_out
		  : 0U)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1184 
	= ((0U != (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__cs0_6)) 
	   & (4U != (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__cs0_6)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_csr_cmd 
	= ((((2U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__cs0_6)) 
	     | (3U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__cs0_6))) 
	    & (0U == (0x1fU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__dec_reg_inst 
			       >> 0xfU)))) ? 5U : (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__cs0_6));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__stall 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1210) 
	   | (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__exe_reg_is_csr));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_dec_stall 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1210) 
	   | (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__exe_reg_is_csr));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1587 
	= (((QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata)) 
	    << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_279)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1590 
	= (((QData)((IData)((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_279 
			     >> 0x20U))) << 0x20U) 
	   | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_110 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen)
	    ? ((0xb03U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				     >> 0x14U))) ? 
	       (((QData)((IData)((0xffU & (IData)((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_282 
						   >> 0x20U))))) 
		 << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata)))
	        : ((0xb83U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					 >> 0x14U)))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_282)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_282))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_282);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_111 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen)
	    ? ((0xb04U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				     >> 0x14U))) ? 
	       (((QData)((IData)((0xffU & (IData)((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_285 
						   >> 0x20U))))) 
		 << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata)))
	        : ((0xb84U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					 >> 0x14U)))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_285)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_285))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_285);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_112 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen)
	    ? ((0xb05U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				     >> 0x14U))) ? 
	       (((QData)((IData)((0xffU & (IData)((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_288 
						   >> 0x20U))))) 
		 << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata)))
	        : ((0xb85U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					 >> 0x14U)))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_288)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_288))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_288);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_113 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen)
	    ? ((0xb06U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				     >> 0x14U))) ? 
	       (((QData)((IData)((0xffU & (IData)((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_291 
						   >> 0x20U))))) 
		 << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata)))
	        : ((0xb86U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					 >> 0x14U)))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_291)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_291))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_291);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_114 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen)
	    ? ((0xb07U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				     >> 0x14U))) ? 
	       (((QData)((IData)((0xffU & (IData)((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_294 
						   >> 0x20U))))) 
		 << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata)))
	        : ((0xb87U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					 >> 0x14U)))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_294)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_294))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_294);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_115 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen)
	    ? ((0xb08U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				     >> 0x14U))) ? 
	       (((QData)((IData)((0xffU & (IData)((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_297 
						   >> 0x20U))))) 
		 << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata)))
	        : ((0xb88U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					 >> 0x14U)))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_297)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_297))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_297);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_116 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen)
	    ? ((0xb09U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				     >> 0x14U))) ? 
	       (((QData)((IData)((0xffU & (IData)((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_300 
						   >> 0x20U))))) 
		 << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata)))
	        : ((0xb89U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					 >> 0x14U)))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_300)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_300))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_300);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_117 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen)
	    ? ((0xb0aU == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				     >> 0x14U))) ? 
	       (((QData)((IData)((0xffU & (IData)((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_303 
						   >> 0x20U))))) 
		 << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata)))
	        : ((0xb8aU == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					 >> 0x14U)))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_303)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_303))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_303);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_118 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen)
	    ? ((0xb0bU == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				     >> 0x14U))) ? 
	       (((QData)((IData)((0xffU & (IData)((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_306 
						   >> 0x20U))))) 
		 << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata)))
	        : ((0xb8bU == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					 >> 0x14U)))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_306)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_306))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_306);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_119 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen)
	    ? ((0xb0cU == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				     >> 0x14U))) ? 
	       (((QData)((IData)((0xffU & (IData)((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_309 
						   >> 0x20U))))) 
		 << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata)))
	        : ((0xb8cU == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					 >> 0x14U)))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_309)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_309))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_309);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_120 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen)
	    ? ((0xb0dU == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				     >> 0x14U))) ? 
	       (((QData)((IData)((0xffU & (IData)((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_312 
						   >> 0x20U))))) 
		 << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata)))
	        : ((0xb8dU == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					 >> 0x14U)))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_312)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_312))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_312);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_121 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen)
	    ? ((0xb0eU == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				     >> 0x14U))) ? 
	       (((QData)((IData)((0xffU & (IData)((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_315 
						   >> 0x20U))))) 
		 << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata)))
	        : ((0xb8eU == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					 >> 0x14U)))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_315)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_315))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_315);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_122 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen)
	    ? ((0xb0fU == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				     >> 0x14U))) ? 
	       (((QData)((IData)((0xffU & (IData)((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_318 
						   >> 0x20U))))) 
		 << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata)))
	        : ((0xb8fU == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					 >> 0x14U)))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_318)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_318))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_318);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_123 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen)
	    ? ((0xb10U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				     >> 0x14U))) ? 
	       (((QData)((IData)((0xffU & (IData)((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_321 
						   >> 0x20U))))) 
		 << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata)))
	        : ((0xb90U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					 >> 0x14U)))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_321)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_321))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_321);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_124 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen)
	    ? ((0xb11U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				     >> 0x14U))) ? 
	       (((QData)((IData)((0xffU & (IData)((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_324 
						   >> 0x20U))))) 
		 << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata)))
	        : ((0xb91U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					 >> 0x14U)))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_324)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_324))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_324);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_125 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen)
	    ? ((0xb12U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				     >> 0x14U))) ? 
	       (((QData)((IData)((0xffU & (IData)((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_327 
						   >> 0x20U))))) 
		 << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata)))
	        : ((0xb92U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					 >> 0x14U)))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_327)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_327))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_327);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_126 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen)
	    ? ((0xb13U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				     >> 0x14U))) ? 
	       (((QData)((IData)((0xffU & (IData)((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_330 
						   >> 0x20U))))) 
		 << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata)))
	        : ((0xb93U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					 >> 0x14U)))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_330)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_330))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_330);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_127 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen)
	    ? ((0xb14U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				     >> 0x14U))) ? 
	       (((QData)((IData)((0xffU & (IData)((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_333 
						   >> 0x20U))))) 
		 << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata)))
	        : ((0xb94U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					 >> 0x14U)))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_333)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_333))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_333);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_128 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen)
	    ? ((0xb15U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				     >> 0x14U))) ? 
	       (((QData)((IData)((0xffU & (IData)((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_336 
						   >> 0x20U))))) 
		 << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata)))
	        : ((0xb95U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					 >> 0x14U)))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_336)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_336))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_336);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_129 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen)
	    ? ((0xb16U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				     >> 0x14U))) ? 
	       (((QData)((IData)((0xffU & (IData)((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_339 
						   >> 0x20U))))) 
		 << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata)))
	        : ((0xb96U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					 >> 0x14U)))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_339)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_339))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_339);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_130 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen)
	    ? ((0xb17U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				     >> 0x14U))) ? 
	       (((QData)((IData)((0xffU & (IData)((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_342 
						   >> 0x20U))))) 
		 << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata)))
	        : ((0xb97U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					 >> 0x14U)))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_342)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_342))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_342);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_131 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen)
	    ? ((0xb18U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				     >> 0x14U))) ? 
	       (((QData)((IData)((0xffU & (IData)((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_345 
						   >> 0x20U))))) 
		 << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata)))
	        : ((0xb98U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					 >> 0x14U)))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_345)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_345))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_345);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_132 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen)
	    ? ((0xb19U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				     >> 0x14U))) ? 
	       (((QData)((IData)((0xffU & (IData)((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_348 
						   >> 0x20U))))) 
		 << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata)))
	        : ((0xb99U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					 >> 0x14U)))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_348)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_348))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_348);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_133 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen)
	    ? ((0xb1aU == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				     >> 0x14U))) ? 
	       (((QData)((IData)((0xffU & (IData)((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_351 
						   >> 0x20U))))) 
		 << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata)))
	        : ((0xb9aU == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					 >> 0x14U)))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_351)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_351))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_351);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_134 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen)
	    ? ((0xb1bU == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				     >> 0x14U))) ? 
	       (((QData)((IData)((0xffU & (IData)((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_354 
						   >> 0x20U))))) 
		 << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata)))
	        : ((0xb9bU == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					 >> 0x14U)))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_354)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_354))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_354);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_135 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen)
	    ? ((0xb1cU == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				     >> 0x14U))) ? 
	       (((QData)((IData)((0xffU & (IData)((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_357 
						   >> 0x20U))))) 
		 << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata)))
	        : ((0xb9cU == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					 >> 0x14U)))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_357)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_357))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_357);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_136 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen)
	    ? ((0xb1dU == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				     >> 0x14U))) ? 
	       (((QData)((IData)((0xffU & (IData)((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_360 
						   >> 0x20U))))) 
		 << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata)))
	        : ((0xb9dU == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					 >> 0x14U)))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_360)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_360))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_360);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_137 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen)
	    ? ((0xb1eU == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				     >> 0x14U))) ? 
	       (((QData)((IData)((0xffU & (IData)((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_363 
						   >> 0x20U))))) 
		 << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata)))
	        : ((0xb9eU == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					 >> 0x14U)))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_363)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_363))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_363);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_138 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen)
	    ? ((0xb1fU == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				     >> 0x14U))) ? 
	       (((QData)((IData)((0xffU & (IData)((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_366 
						   >> 0x20U))))) 
		 << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata)))
	        : ((0xb9fU == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					 >> 0x14U)))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_366)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_366))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_366);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_139 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen)
	    ? ((0xb20U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				     >> 0x14U))) ? 
	       (((QData)((IData)((0xffU & (IData)((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_369 
						   >> 0x20U))))) 
		 << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata)))
	        : ((0xba0U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					 >> 0x14U)))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_369)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_369))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_369);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_140 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen)
	    ? ((0xb21U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				     >> 0x14U))) ? 
	       (((QData)((IData)((0xffU & (IData)((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_372 
						   >> 0x20U))))) 
		 << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata)))
	        : ((0xba1U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					 >> 0x14U)))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_372)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_372))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_372);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_141 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen)
	    ? ((0xb22U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				     >> 0x14U))) ? 
	       (((QData)((IData)((0xffU & (IData)((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_375 
						   >> 0x20U))))) 
		 << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata)))
	        : ((0xba2U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					 >> 0x14U)))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_375)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_375))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_375);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1580 
	= (((QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata)) 
	    << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_267)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1583 
	= (((QData)((IData)((vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_267 
			     >> 0x20U))) << 0x20U) 
	   | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wdata)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1177 
	= ((~ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__stall)) 
	   & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1217));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1187 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__stall) 
	   & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1217));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_271 
	= (0x7fU & ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_270) 
		    + ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1217) 
		       & (~ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_dec_stall)))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_260 
	= ((((((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__cs0_7) 
	       | (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1222)) 
	      & (0U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_exe_pc_sel))) 
	     & (~ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_dec_stall))) 
	    & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1217)) 
	   & (~ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_pipeline_kill)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_399 
	= (((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_dec_stall) 
	    & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1217)) 
	   | (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_pipeline_kill));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_240 
	= ((~ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_dec_stall)) 
	   & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT___T_1217));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___GEN_142 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT__wen)
	    ? ((0xb00U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
				     >> 0x14U))) ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1583
	        : ((0xb80U == (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__mem_reg_inst 
					 >> 0x14U)))
		    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_1580
		    : (QData)((IData)((0x7fU & ((IData)(1U) 
						+ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_258)))))))
	    : (QData)((IData)((0x7fU & ((IData)(1U) 
					+ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__csr__DOT___T_258))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_241 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_240) 
	   | (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c_io_ctl_pipeline_kill));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___GEN_36 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_399)
	    ? 0U : ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT___T_240)
		     ? ((0U != (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__ctrl_exe_pc_sel))
			 ? 0U : (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__c__DOT__cs0_4))
		     : (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_fcn)));
}

VL_INLINE_OPT void VTop::_combo__TOP__3(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_combo__TOP__3\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Top__DOT__tile__DOT__core_reset = ((IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__coreresetval) 
					       | (IData)(vlTOPp->reset));
}

void VTop::_eval(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_eval\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VTop::_change_request(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_change_request\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VTop::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG
