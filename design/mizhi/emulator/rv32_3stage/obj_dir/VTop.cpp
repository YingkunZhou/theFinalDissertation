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
    VL_SIG8(__Vdlyvdim0__Top__DOT__tile__DOT__core__DOT__dpath__DOT__regfile__v0,4,0);
    VL_SIG8(__Vdlyvdim0__Top__DOT__tile__DOT__core__DOT__dpath__DOT__regfile__v1,4,0);
    VL_SIG8(__Vdlyvset__Top__DOT__tile__DOT__core__DOT__dpath__DOT__regfile__v1,0,0);
    VL_SIG8(__Vdlyvval__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v0,7,0);
    VL_SIG8(__Vdlyvset__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v0,0,0);
    VL_SIG8(__Vdlyvval__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v1,7,0);
    VL_SIG8(__Vdlyvset__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v1,0,0);
    VL_SIG8(__Vdlyvval__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v2,7,0);
    VL_SIG8(__Vdlyvset__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v2,0,0);
    VL_SIG8(__Vdlyvval__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v3,7,0);
    VL_SIG8(__Vdlyvset__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v3,0,0);
    VL_SIG8(__Vdlyvval__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v4,7,0);
    VL_SIG8(__Vdlyvset__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v4,0,0);
    VL_SIG8(__Vdlyvval__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v5,7,0);
    VL_SIG8(__Vdlyvset__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v5,0,0);
    VL_SIG8(__Vdlyvval__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v6,7,0);
    VL_SIG8(__Vdlyvset__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v6,0,0);
    VL_SIG8(__Vdlyvval__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v7,7,0);
    VL_SIG8(__Vdlyvset__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v7,0,0);
    VL_SIG(__Vfunc_debug_tick__0__Vfuncout,31,0);
    VL_SIG(__Vfunc_debug_tick__0__debug_req_bits_addr,31,0);
    VL_SIG(__Vfunc_debug_tick__0__debug_req_bits_op,31,0);
    VL_SIG(__Vfunc_debug_tick__0__debug_req_bits_data,31,0);
    VL_SIG(__Vdlyvval__Top__DOT__tile__DOT__core__DOT__dpath__DOT__regfile__v0,31,0);
    VL_SIG(__Vdlyvval__Top__DOT__tile__DOT__core__DOT__dpath__DOT__regfile__v1,31,0);
    VL_SIG(__Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v0,20,0);
    VL_SIG(__Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v1,20,0);
    VL_SIG(__Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v2,20,0);
    VL_SIG(__Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v3,20,0);
    VL_SIG(__Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v4,20,0);
    VL_SIG(__Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v5,20,0);
    VL_SIG(__Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v6,20,0);
    VL_SIG(__Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v7,20,0);
    // Body
    // ALWAYS at generated-src/Top.v:5341
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
    __Vdlyvset__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v0 = 0U;
    __Vdlyvset__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v1 = 0U;
    __Vdlyvset__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v2 = 0U;
    __Vdlyvset__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v3 = 0U;
    __Vdlyvset__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v4 = 0U;
    __Vdlyvset__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v5 = 0U;
    __Vdlyvset__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v6 = 0U;
    __Vdlyvset__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v7 = 0U;
    __Vdlyvset__Top__DOT__tile__DOT__core__DOT__dpath__DOT__regfile__v1 = 0U;
    // ALWAYS at generated-src/Top.v:4028
    if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->Top__DOT__tile__DOT__core_reset))))) {
	VL_FWRITEF(0x80000002U,"Cyc=%10# Op1=[0x%x] Op2=[0x%x] W[%c,%2#= 0x%x] [%c,0x%x] %4# %c %c PC=(0x%x,0x%x,0x%x) [%x,%3#,%3#], WB: DASM(%x)\n",
		   32,(IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_267),
		   32,((2U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_op1_sel))
		        ? (0x1fU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst 
				    >> 0xfU)) : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_302),
		   32,((1U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_op2_sel))
		        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__imm_i_sext
		        : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_307),
		   8,((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_ctrl_rf_wen)
		       ? 0x57U : 0x5fU),5,(IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_wbaddr),
		   32,((0U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_ctrl_wb_sel))
		        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_alu
		        : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_399),
		   8,((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_exception)
		       ? 0x45U : 0x5fU),32,vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst,
		   12,(0xfffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__irt_reg),
		   8,((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_hazard_stall)
		       ? 0x48U : 0x20U),8,((1U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_pc_sel))
					    ? 0x42U
					    : ((2U 
						== (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_pc_sel))
					        ? 0x4aU
					        : (
						   (3U 
						    == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_pc_sel))
						    ? 0x52U
						    : 
						   ((4U 
						     == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_pc_sel))
						     ? 0x58U
						     : 
						    ((0U 
						      == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_pc_sel))
						      ? 0x20U
						      : 0x3fU))))),
		   32,vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__if_reg_pc,
		   32,vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_pc,
		   32,((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_454)
		        ? 0U : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_458),
		   7,(0x7fU & vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data_dataInstr_1_data),
		   7,(0x7fU & ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_valid)
			        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst
			        : 0x4033U)),7,(0x7fU 
					       & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__debug_wb_inst),
		   32,vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__debug_wb_inst);
    }
    // ALWAYS at generated-src/Top.v:3275
    if (VL_UNLIKELY((1U & (~ ((1U >= (3U & ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__insn_ret) 
					    + (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_328)))) 
			      | (IData)(vlTOPp->Top__DOT__tile__DOT__core_reset)))))) {
	VL_FWRITEF(0x80000002U,"Assertion failed: these conditions must be mutually exclusive\n    at CSR.scala:287 assert(PopCount(insn_ret :: io.exception :: Nil) <= 1, \"these conditions must be mutually exclusive\")\n");
    }
    if (VL_UNLIKELY((1U & (~ ((1U >= (3U & ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__insn_ret) 
					    + (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_328)))) 
			      | (IData)(vlTOPp->Top__DOT__tile__DOT__core_reset)))))) {
	VL_WRITEF("[%0t] %%Error: Top.v:3525: Assertion failed in %NTop.tile.core.dpath.csr\n",
		  64,VL_TIME_Q(),vlSymsp->name());
	VL_STOP_MT("generated-src/Top.v",3525,"");
    }
    // ALWAYS at generated-src/Top.v:4898
    if (vlTOPp->reset) {
	vlTOPp->Top__DOT__tile__DOT__debug__DOT__coreresetval = 1U;
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_433) {
	    vlTOPp->Top__DOT__tile__DOT__debug__DOT__coreresetval = 0U;
	}
    }
    // ALWAYS at generated-src/Top.v:4443
    vlTOPp->Top__DOT__tile__DOT__memory__DOT__req_typi 
	= vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_dmem_typ;
    // ALWAYS at generated-src/Top.v:4898
    vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_414 
	= vlTOPp->Top__DOT__tile__DOT__memory__DOT___T_332;
    // ALWAYS at generated-src/Top.v:4898
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
    // ALWAYS at generated-src/Top.v:102
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__if_reg_valid = 0U;
    } else {
	if ((1U & (~ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_hazard_stall)))) {
	    vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__if_reg_valid = 1U;
	}
    }
    // ALWAYS at generated-src/Top.v:4898
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
    // ALWAYS at generated-src/Top.v:4898
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
    // ALWAYS at generated-src/Top.v:4898
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
    // ALWAYS at generated-src/Top.v:4898
    if ((0x3cU != (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))) {
	vlTOPp->Top__DOT__tile__DOT__debug__DOT__firstreaddone = 0U;
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_420) {
	    vlTOPp->Top__DOT__tile__DOT__debug__DOT__firstreaddone = 1U;
	}
    }
    // ALWAYS at generated-src/Top.v:4898
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
    // ALWAYS at generated-src/Top.v:4898
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
    // ALWAYS at generated-src/Top.v:4898
    if ((2U == (3U & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))) {
	if ((0x10U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))) {
	    vlTOPp->Top__DOT__tile__DOT__debug__DOT__dmcontrol_hartreset 
		= (1U & (vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data 
			 >> 0x1dU));
	}
    }
    // ALWAYS at generated-src/Top.v:4898
    if ((2U == (3U & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))) {
	if ((0x10U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))) {
	    vlTOPp->Top__DOT__tile__DOT__debug__DOT__dmcontrol_ndmreset 
		= (1U & (vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data 
			 >> 1U));
	}
    }
    // ALWAYS at generated-src/Top.v:4898
    if ((2U == (3U & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))) {
	if ((0x10U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))) {
	    vlTOPp->Top__DOT__tile__DOT__debug__DOT__dmcontrol_dmactive 
		= (1U & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data);
	}
    }
    // ALWAYS at generated-src/Top.v:4898
    if ((2U == (3U & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))) {
	if ((5U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))) {
	    vlTOPp->Top__DOT__tile__DOT__debug__DOT__data1 
		= vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data;
	}
    }
    // ALWAYS at generated-src/Top.v:4898
    if ((2U == (3U & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))) {
	if ((6U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))) {
	    vlTOPp->Top__DOT__tile__DOT__debug__DOT__data2 
		= vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data;
	}
    }
    // ALWAYS at generated-src/Top.v:4898
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
    // ALWAYS at generated-src/Top.v:4898
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
    // ALWAYS at generated-src/Top.v:4898
    vlTOPp->Top__DOT__tile__DOT__debug__DOT__dmstatus_allrunning 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__dmcontrol_resumereq));
    // ALWAYS at generated-src/Top.v:4898
    vlTOPp->Top__DOT__tile__DOT__debug__DOT__dmstatus_allhalted 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__dmcontrol_haltreq));
    // ALWAYS at /home/albert/CPU/theFinalDissertation/design/mizhi/vsrc/SyncMem.sv:34
    vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__regdataInstr_1_addr 
	= (0x1fffffU & ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_hazard_stall)
			 ? vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__if_reg_pc
			 : vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT___GEN_0));
    // ALWAYS at /home/albert/CPU/theFinalDissertation/design/mizhi/vsrc/SyncMem.sv:34
    vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__regdataInstr_0_addr 
	= (0x1fffffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu_io_out);
    // ALWAYS at /home/albert/CPU/theFinalDissertation/design/mizhi/vsrc/SyncMem.sv:34
    vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__reghr_addr 
	= (0x1fffffU & vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbaddr);
    // ALWAYS at generated-src/Top.v:1198
    vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_1092 
	= vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_exception;
    // ALWAYS at generated-src/Top.v:3275
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_369 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_139);
    // ALWAYS at generated-src/Top.v:3275
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_372 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_140);
    // ALWAYS at generated-src/Top.v:3275
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_375 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_141);
    // ALWAYS at generated-src/Top.v:3275
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_351 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_133);
    // ALWAYS at generated-src/Top.v:3275
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_354 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_134);
    // ALWAYS at generated-src/Top.v:3275
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_357 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_135);
    // ALWAYS at generated-src/Top.v:3275
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_360 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_136);
    // ALWAYS at generated-src/Top.v:3275
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_363 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_137);
    // ALWAYS at generated-src/Top.v:3275
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_366 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_138);
    // ALWAYS at generated-src/Top.v:3275
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_330 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_126);
    // ALWAYS at generated-src/Top.v:3275
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_333 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_127);
    // ALWAYS at generated-src/Top.v:3275
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_336 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_128);
    // ALWAYS at generated-src/Top.v:3275
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_339 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_129);
    // ALWAYS at generated-src/Top.v:3275
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_342 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_130);
    // ALWAYS at generated-src/Top.v:3275
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_345 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_131);
    // ALWAYS at /home/albert/CPU/theFinalDissertation/design/mizhi/vsrc/SyncMem.sv:42
    if (vlTOPp->Top__DOT__tile__DOT__debug_io_debugmem_req_bits_fcn) {
	__Vdlyvval__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v0 
	    = (0xffU & vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbdata);
	__Vdlyvset__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v0 = 1U;
	__Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v0 
	    = (0x1fffffU & vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbaddr);
    }
    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath_io_dmem_req_bits_fcn) {
	if ((1U & (IData)(vlTOPp->Top__DOT__tile__DOT__memory__DOT___T_327))) {
	    __Vdlyvval__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v1 
		= (0xffU & (IData)(vlTOPp->Top__DOT__tile__DOT__memory__DOT___T_313));
	    __Vdlyvset__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v1 = 1U;
	    __Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v1 
		= (0x1ffffcU & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu_io_out);
	}
    }
    // ALWAYS at /home/albert/CPU/theFinalDissertation/design/mizhi/vsrc/SyncMem.sv:42
    if (vlTOPp->Top__DOT__tile__DOT__debug_io_debugmem_req_bits_fcn) {
	__Vdlyvval__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v2 
	    = (0xffU & (vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbdata 
			>> 8U));
	__Vdlyvset__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v2 = 1U;
	__Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v2 
	    = (0x1fffffU & ((IData)(1U) + vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbaddr));
    }
    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath_io_dmem_req_bits_fcn) {
	if ((2U & (IData)(vlTOPp->Top__DOT__tile__DOT__memory__DOT___T_327))) {
	    __Vdlyvval__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v3 
		= (0xffU & (IData)((vlTOPp->Top__DOT__tile__DOT__memory__DOT___T_313 
				    >> 8U)));
	    __Vdlyvset__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v3 = 1U;
	    __Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v3 
		= (0x1fffffU & ((IData)(1U) + (0x1ffffcU 
					       & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu_io_out)));
	}
    }
    // ALWAYS at /home/albert/CPU/theFinalDissertation/design/mizhi/vsrc/SyncMem.sv:42
    if (vlTOPp->Top__DOT__tile__DOT__debug_io_debugmem_req_bits_fcn) {
	__Vdlyvval__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v4 
	    = (0xffU & (vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbdata 
			>> 0x10U));
	__Vdlyvset__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v4 = 1U;
	__Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v4 
	    = (0x1fffffU & ((IData)(2U) + vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbaddr));
    }
    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath_io_dmem_req_bits_fcn) {
	if ((4U & (IData)(vlTOPp->Top__DOT__tile__DOT__memory__DOT___T_327))) {
	    __Vdlyvval__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v5 
		= (0xffU & (IData)((vlTOPp->Top__DOT__tile__DOT__memory__DOT___T_313 
				    >> 0x10U)));
	    __Vdlyvset__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v5 = 1U;
	    __Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v5 
		= (0x1fffffU & ((IData)(2U) + (0x1ffffcU 
					       & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu_io_out)));
	}
    }
    // ALWAYS at /home/albert/CPU/theFinalDissertation/design/mizhi/vsrc/SyncMem.sv:42
    if (vlTOPp->Top__DOT__tile__DOT__debug_io_debugmem_req_bits_fcn) {
	__Vdlyvval__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v6 
	    = (0xffU & (vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbdata 
			>> 0x18U));
	__Vdlyvset__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v6 = 1U;
	__Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v6 
	    = (0x1fffffU & ((IData)(3U) + vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbaddr));
    }
    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath_io_dmem_req_bits_fcn) {
	if ((8U & (IData)(vlTOPp->Top__DOT__tile__DOT__memory__DOT___T_327))) {
	    __Vdlyvval__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v7 
		= (0xffU & (IData)((vlTOPp->Top__DOT__tile__DOT__memory__DOT___T_313 
				    >> 0x18U)));
	    __Vdlyvset__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v7 = 1U;
	    __Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v7 
		= (0x1fffffU & ((IData)(3U) + (0x1ffffcU 
					       & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu_io_out)));
	}
    }
    // ALWAYS at generated-src/Top.v:3275
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_348 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_132);
    // ALWAYS at generated-src/Top.v:3275
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_312 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_120);
    // ALWAYS at generated-src/Top.v:3275
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_315 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_121);
    // ALWAYS at generated-src/Top.v:3275
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_318 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_122);
    // ALWAYS at generated-src/Top.v:3275
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_321 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_123);
    // ALWAYS at generated-src/Top.v:3275
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_324 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_124);
    // ALWAYS at generated-src/Top.v:3275
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_327 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_125);
    // ALWAYS at generated-src/Top.v:3275
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_291 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_113);
    // ALWAYS at generated-src/Top.v:3275
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_294 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_114);
    // ALWAYS at generated-src/Top.v:3275
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_297 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_115);
    // ALWAYS at generated-src/Top.v:3275
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_300 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_116);
    // ALWAYS at generated-src/Top.v:3275
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_303 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_117);
    // ALWAYS at generated-src/Top.v:3275
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_306 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_118);
    // ALWAYS at generated-src/Top.v:3275
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_309 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_119);
    // ALWAYS at generated-src/Top.v:3275
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_282 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_110);
    // ALWAYS at generated-src/Top.v:3275
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_285 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_111);
    // ALWAYS at generated-src/Top.v:3275
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_288 
	= (VL_ULL(0xffffffffff) & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_112);
    // ALWAYS at generated-src/Top.v:3275
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mip_mtip 
	= (1U & (~ (IData)(vlTOPp->Top__DOT__tile__DOT__core_reset)));
    // ALWAYS at generated-src/Top.v:4028
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_ctrl_csr_cmd 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_319)
	    ? 0U : ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_valid)
		     ? ((((2U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT__cs0_7)) 
			  | (3U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT__cs0_7))) 
			 & (0U == (0x1fU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst 
					    >> 0xfU))))
			 ? 5U : (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT__cs0_7))
		     : 0U));
    // ALWAYS at generated-src/Top.v:3275
    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen) {
	if ((0x343U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))) {
	    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mtval 
		= vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata;
	}
    }
    // ALWAYS at generated-src/Top.v:3275
    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen) {
	if ((0x302U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))) {
	    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_medeleg 
		= vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata;
	}
    }
    // ALWAYS at generated-src/Top.v:3275
    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen) {
	if ((0x7b2U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))) {
	    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_dscratch 
		= vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata;
	}
    }
    // ALWAYS at generated-src/Top.v:3275
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_dcsr_ebreakm = 0U;
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen) {
	    if ((0x7b0U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_dcsr_ebreakm 
		    = (1U & (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata 
			     >> 0xfU));
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:3275
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_dcsr_step = 0U;
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen) {
	    if ((0x7b0U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_dcsr_step 
		    = (1U & (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata 
			     >> 2U));
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:3275
    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen) {
	if ((0x7b1U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))) {
	    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_dpc 
		= vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata;
	}
    }
    // ALWAYS at generated-src/Top.v:3275
    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen) {
	if ((0x340U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))) {
	    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mscratch 
		= vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata;
	}
    }
    // ALWAYS at generated-src/Top.v:3275
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mip_msip = 0U;
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen) {
	    if ((0x344U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mip_msip 
		    = (1U & (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata 
			     >> 3U));
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:3275
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mie_mtip = 0U;
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen) {
	    if ((0x304U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mie_mtip 
		    = (1U & (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata 
			     >> 7U));
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:3275
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mie_msip = 0U;
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen) {
	    if ((0x304U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mie_msip 
		    = (1U & (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata 
			     >> 3U));
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:3275
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mepc 
	= (IData)((VL_ULL(0x7ffffffff) & ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen)
					   ? ((0x341U 
					       == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
					       ? ((QData)((IData)(
								  (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata 
								   >> 2U))) 
						  << 2U)
					       : (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_4)))
					   : (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_4)))));
    // ALWAYS at generated-src/Top.v:3275
    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen) {
	if ((0x342U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))) {
	    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mcause 
		= (0x8000001fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata);
	} else {
	    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__insn_break) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mcause = 3U;
	    } else {
		if (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__insn_call) {
		    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mcause 
			= (0xfU & ((IData)(8U) + (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mstatus_prv)));
		} else {
		    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_328) {
			vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mcause = 2U;
		    }
		}
	    }
	}
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__insn_break) {
	    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mcause = 3U;
	} else {
	    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__insn_call) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mcause 
		    = (0xfU & ((IData)(8U) + (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mstatus_prv)));
	    } else {
		if (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_328) {
		    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mcause = 2U;
		}
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:3275
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_270 
	= (0x3fU & ((IData)(vlTOPp->Top__DOT__tile__DOT__core_reset)
		     ? 0U : (IData)(((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen)
				      ? ((0xb02U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
					  ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1590
					  : ((0xb82U 
					      == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
					      ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1587
					      : (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_271))))
				      : (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_271))))));
    // ALWAYS at generated-src/Top.v:3275
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_274 = VL_ULL(0);
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen) {
	    if ((0xb02U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_274 
		    = (VL_ULL(0x3ffffffffffffff) & 
		       (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1590 
			>> 6U));
	    } else {
		if ((0xb82U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))) {
		    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_274 
			= (VL_ULL(0x3ffffffffffffff) 
			   & (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1587 
			      >> 6U));
		} else {
		    if ((0x40U & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_271))) {
			vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_274 
			    = vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_278;
		    }
		}
	    }
	} else {
	    if ((0x40U & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_271))) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_274 
		    = vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_278;
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:4028
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_ctrl_bypassable 
	= ((0x2003U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
	   & ((3U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
	      & ((0x4003U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
		 & ((0x1003U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
		    & ((0x5003U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
		       & ((0x2023U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
			  & ((0x23U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
			     & ((0x1023U != (0x707fU 
					     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
				& ((0x17U == (0x7fU 
					      & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
				   | ((0x37U == (0x7fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
				      | ((0x13U == 
					  (0x707fU 
					   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
					 | ((0x7013U 
					     == (0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
					    | (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_779)))))))))))));
    // ALWAYS at generated-src/Top.v:3275
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_262 = VL_ULL(0);
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen) {
	    if ((0xb00U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_262 
		    = (VL_ULL(0x3ffffffffffffff) & 
		       (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1583 
			>> 6U));
	    } else {
		if ((0xb80U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))) {
		    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_262 
			= (VL_ULL(0x3ffffffffffffff) 
			   & (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1580 
			      >> 6U));
		} else {
		    if ((0x40U & ((IData)(1U) + (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_258)))) {
			vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_262 
			    = vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_266;
		    }
		}
	    }
	} else {
	    if ((0x40U & ((IData)(1U) + (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_258)))) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_262 
		    = vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_266;
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:3275
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie = 0U;
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen) {
	    if ((0x300U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie 
		    = (1U & (IData)(((QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata)) 
				     >> 3U)));
	    } else {
		if (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1063) {
		    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie 
			= vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie;
		}
	    }
	} else {
	    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1063) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie 
		    = vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie;
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:4028
    __Vdlyvval__Top__DOT__tile__DOT__core__DOT__dpath__DOT__regfile__v0 
	= vlTOPp->Top__DOT__tile__DOT__debug__DOT__data0;
    __Vdlyvdim0__Top__DOT__tile__DOT__core__DOT__dpath__DOT__regfile__v0 
	= (0x1fU & (IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__command_regno));
    if (((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_ctrl_rf_wen) 
	 & (0U != (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_wbaddr)))) {
	__Vdlyvval__Top__DOT__tile__DOT__core__DOT__dpath__DOT__regfile__v1 
	    = ((0U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_ctrl_wb_sel))
	        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_alu
	        : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_399);
	__Vdlyvset__Top__DOT__tile__DOT__core__DOT__dpath__DOT__regfile__v1 = 1U;
	__Vdlyvdim0__Top__DOT__tile__DOT__core__DOT__dpath__DOT__regfile__v1 
	    = vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_wbaddr;
    }
    vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_433 
	= ((0x44U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr)) 
	   & (IData)(vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_valid));
    vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_333 
	= ((0x16U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr)) 
	   & (IData)(vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_valid));
    // ALWAYS at /home/albert/CPU/theFinalDissertation/design/mizhi/vsrc/SimDTM.v:58
    vlTOPp->Top__DOT__SimDTM__DOT__r_reset = vlTOPp->reset;
    // ALWAYSPOST at /home/albert/CPU/theFinalDissertation/design/mizhi/vsrc/SyncMem.sv:45
    if (__Vdlyvset__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v0) {
	vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem[__Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v0] 
	    = __Vdlyvval__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v0;
    }
    if (__Vdlyvset__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v1) {
	vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem[__Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v1] 
	    = __Vdlyvval__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v1;
    }
    if (__Vdlyvset__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v2) {
	vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem[__Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v2] 
	    = __Vdlyvval__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v2;
    }
    if (__Vdlyvset__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v3) {
	vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem[__Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v3] 
	    = __Vdlyvval__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v3;
    }
    if (__Vdlyvset__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v4) {
	vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem[__Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v4] 
	    = __Vdlyvval__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v4;
    }
    if (__Vdlyvset__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v5) {
	vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem[__Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v5] 
	    = __Vdlyvval__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v5;
    }
    if (__Vdlyvset__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v6) {
	vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem[__Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v6] 
	    = __Vdlyvval__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v6;
    }
    if (__Vdlyvset__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v7) {
	vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem[__Vdlyvdim0__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v7] 
	    = __Vdlyvval__Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem__v7;
    }
    // ALWAYSPOST at generated-src/Top.v:4028
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__regfile[__Vdlyvdim0__Top__DOT__tile__DOT__core__DOT__dpath__DOT__regfile__v0] 
	= __Vdlyvval__Top__DOT__tile__DOT__core__DOT__dpath__DOT__regfile__v0;
    if (__Vdlyvset__Top__DOT__tile__DOT__core__DOT__dpath__DOT__regfile__v1) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__regfile[__Vdlyvdim0__Top__DOT__tile__DOT__core__DOT__dpath__DOT__regfile__v1] 
	    = __Vdlyvval__Top__DOT__tile__DOT__core__DOT__dpath__DOT__regfile__v1;
    }
    // ALWAYS at generated-src/Top.v:4028
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_454 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_218) 
	   | (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_226));
    // ALWAYS at generated-src/Top.v:4028
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__irt_reg = 0U;
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_valid) {
	    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__irt_reg 
		= vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_405;
	}
    }
    // ALWAYS at generated-src/Top.v:4028
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_458 
	= vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_pc;
    // ALWAYS at generated-src/Top.v:4028
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__debug_wb_inst 
	= ((1U & ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_319) 
		  | (~ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_valid))))
	    ? 0x4033U : vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst);
    vlTOPp->Top__DOT__tile__DOT__debug_io_dmi_resp_valid 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__firstreaddone)
	    ? (IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_414)
	    : (IData)(vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_valid));
    // ALWAYS at generated-src/Top.v:4898
    if ((2U == (3U & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))) {
	if ((0x10U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))) {
	    vlTOPp->Top__DOT__tile__DOT__debug__DOT__dmcontrol_resumereq 
		= (1U & (vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data 
			 >> 0x1eU));
	}
    }
    // ALWAYS at generated-src/Top.v:4898
    if ((2U == (3U & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))) {
	if ((0x10U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))) {
	    vlTOPp->Top__DOT__tile__DOT__debug__DOT__dmcontrol_haltreq 
		= (1U & (vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data 
			 >> 0x1fU));
	}
    }
    // ALWAYS at generated-src/Top.v:4898
    if (vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_423) {
	vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbdata 
	    = vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data_hr_data;
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_420) {
	    if (vlTOPp->Top__DOT__tile__DOT__memory__DOT___T_332) {
		vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbdata 
		    = vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data_hr_data;
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
    vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data_dataInstr_0_data 
	= ((0xffffff00U & vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data_dataInstr_0_data) 
	   | vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem
	   [vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__regdataInstr_0_addr]);
    vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data_dataInstr_0_data 
	= ((0xffff00ffU & vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data_dataInstr_0_data) 
	   | (vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem
	      [(0x1fffffU & ((IData)(1U) + vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__regdataInstr_0_addr))] 
	      << 8U));
    vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data_dataInstr_0_data 
	= ((0xff00ffffU & vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data_dataInstr_0_data) 
	   | (vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem
	      [(0x1fffffU & ((IData)(2U) + vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__regdataInstr_0_addr))] 
	      << 0x10U));
    vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data_dataInstr_0_data 
	= ((0xffffffU & vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data_dataInstr_0_data) 
	   | (vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem
	      [(0x1fffffU & ((IData)(3U) + vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__regdataInstr_0_addr))] 
	      << 0x18U));
    // ALWAYS at generated-src/Top.v:4898
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
    // ALWAYS at generated-src/Top.v:4028
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_328 
	= vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_exception;
    // ALWAYS at generated-src/Top.v:3275
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mstatus_prv = 3U;
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1063) {
	    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mstatus_prv = 3U;
	} else {
	    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1058) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mstatus_prv = 3U;
	    }
	}
    }
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_278 
	= (VL_ULL(0x3ffffffffffffff) & (VL_ULL(1) + vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_274));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_279 
	= ((vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_274 
	    << 6U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_270)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_266 
	= (VL_ULL(0x3ffffffffffffff) & (VL_ULL(1) + vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_262));
    // ALWAYS at generated-src/Top.v:3275
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_258 
	= (0x3fU & ((IData)(vlTOPp->Top__DOT__tile__DOT__core_reset)
		     ? 0U : (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_142)));
    // ALWAYS at generated-src/Top.v:3275
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie = 0U;
    } else {
	if (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen) {
	    if ((0x300U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie 
		    = (1U & (IData)(((QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata)) 
				     >> 7U)));
	    } else {
		if (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1063) {
		    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie = 1U;
		}
	    }
	} else {
	    if (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1063) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie = 1U;
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:4898
    if ((2U == (3U & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))) {
	if ((0x17U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))) {
	    if ((2U == (7U & (vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data 
			      >> 0x14U)))) {
		vlTOPp->Top__DOT__tile__DOT__debug__DOT__command_regno 
		    = (0xffffU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data);
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:4898
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
		= vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__regfile___05FT_230_data;
	}
    } else {
	if ((2U == (3U & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))) {
	    if ((4U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))) {
		vlTOPp->Top__DOT__tile__DOT__debug__DOT__data0 
		    = vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data;
	    }
	}
    }
    // ALWAYS at generated-src/Top.v:4028
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_alu 
	= vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu_io_out;
    // ALWAYS at generated-src/Top.v:4028
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_ctrl_wb_sel 
	= ((0x2003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
	    ? 1U : ((3U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
		     ? 1U : ((0x4003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
			      ? 1U : ((0x1003U == (0x707fU 
						   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
				       ? 1U : ((0x5003U 
						== 
						(0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
					        ? 1U
					        : (
						   (0x2023U 
						    == 
						    (0x707fU 
						     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						    ? 0U
						    : 
						   ((0x23U 
						     == 
						     (0x707fU 
						      & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						     ? 0U
						     : 
						    ((0x1023U 
						      == 
						      (0x707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						      ? 0U
						      : 
						     ((0x17U 
						       == 
						       (0x7fU 
							& vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						       ? 0U
						       : 
						      ((0x37U 
							== 
							(0x7fU 
							 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						        ? 0U
						        : 
						       ((0x13U 
							 == 
							 (0x707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							 ? 0U
							 : 
							((0x7013U 
							  == 
							  (0x707fU 
							   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							  ? 0U
							  : 
							 ((0x6013U 
							   == 
							   (0x707fU 
							    & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							   ? 0U
							   : (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_680))))))))))))));
    // ALWAYS at generated-src/Top.v:4028
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_wbaddr 
	= (0x1fU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst 
		    >> 7U));
    // ALWAYS at generated-src/Top.v:4028
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_ctrl_rf_wen 
	= ((~ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_319)) 
	   & ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_valid) 
	      & ((0x2003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
		 | ((3U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
		    | ((0x4003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
		       | ((0x1003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
			  | ((0x5003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
			     | ((0x2023U != (0x707fU 
					     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
				& ((0x23U != (0x707fU 
					      & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
				   & ((0x1023U != (0x707fU 
						   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
				      & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_734)))))))))));
    vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_420 
	= (((0x3cU == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr)) 
	    & (1U == (3U & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))) 
	   | ((IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbcs_sbautoread) 
	      & (IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__firstreaddone)));
    vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data_hr_data 
	= ((0xffffff00U & vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data_hr_data) 
	   | vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem
	   [vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__reghr_addr]);
    vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data_hr_data 
	= ((0xffff00ffU & vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data_hr_data) 
	   | (vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem
	      [(0x1fffffU & ((IData)(1U) + vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__reghr_addr))] 
	      << 8U));
    vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data_hr_data 
	= ((0xff00ffffU & vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data_hr_data) 
	   | (vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem
	      [(0x1fffffU & ((IData)(2U) + vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__reghr_addr))] 
	      << 0x10U));
    vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data_hr_data 
	= ((0xffffffU & vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data_hr_data) 
	   | (vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem
	      [(0x1fffffU & ((IData)(3U) + vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__reghr_addr))] 
	      << 0x18U));
    vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_403 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__command_transfer) 
	   & (0U != (IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__abstractcs_cmderr)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_405 
	= ((IData)(1U) + vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__irt_reg);
    // ALWAYS at generated-src/Top.v:4028
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_valid 
	= ((~ (IData)(vlTOPp->Top__DOT__tile__DOT__core_reset)) 
	   & ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_valid) 
	      & (~ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_hazard_stall))));
    // ALWAYS at generated-src/Top.v:102
    if ((1U & (~ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_hazard_stall)))) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_pc 
	    = vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__if_reg_pc;
    }
    vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_307 
	= ((0x3cU == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))
	    ? vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbdata
	    : 0U);
    // ALWAYS at generated-src/Top.v:4443
    vlTOPp->Top__DOT__tile__DOT__memory__DOT___T_332 
	= ((IData)(vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_valid) 
	   & (~ (IData)(vlTOPp->Top__DOT__tile__DOT__debug_io_debugmem_req_bits_fcn)));
    vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_398 
	= ((IData)(4U) + vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbaddr);
    // ALWAYS at generated-src/Top.v:4898
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
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_267 
	= ((vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_262 
	    << 6U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_258)));
    // ALWAYS at generated-src/Top.v:4028
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr 
	= (0xfffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst 
		     >> 0x14U));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__regfile___05FT_230_data 
	= vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__regfile
	[(0x1fU & (IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__command_regno))];
    // ALWAYS at generated-src/Top.v:4898
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
    vlTOPp->Top__DOT__tile__DOT__debug_io_debugmem_req_bits_fcn 
	= ((~ (IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_420)) 
	   & ((0x3cU == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr)) 
	      & (2U == (3U & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_271 
	= (0x7fU & ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_270) 
		    + (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_valid)));
    // ALWAYS at generated-src/Top.v:102
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_valid = 0U;
    } else {
	if ((1U & (~ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_hazard_stall)))) {
	    vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_valid 
		= vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT___T_145;
	}
    }
    // ALWAYS at generated-src/Top.v:102
    if (vlTOPp->Top__DOT__tile__DOT__core_reset) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__if_reg_pc = 0x7ffffffcU;
    } else {
	if ((1U & (~ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_hazard_stall)))) {
	    if ((1U & (~ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_hazard_stall)))) {
		vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__if_reg_pc 
		    = ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_imem_req_valid)
		        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath_io_imem_req_bits_pc
		        : vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__if_pc_plus4);
	    }
	}
    }
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_4 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_328)
	    ? (vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_pc 
	       - (IData)(4U)) : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mepc);
    vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_423 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__memreadfire) 
	   & (IData)(vlTOPp->Top__DOT__tile__DOT__memory__DOT___T_332));
    vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_395 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbcs_sbautoincrement) 
	   & (IData)(vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_valid));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__insn_call 
	= (0xffU & ((4U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_ctrl_csr_cmd)) 
		    & ((IData)(1U) << (7U & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr)))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__insn_break 
	= (0x7fU & ((4U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_ctrl_csr_cmd)) 
		    & (((IData)(1U) << (7U & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))) 
		       >> 1U)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__priv_sufficient 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mstatus_prv) 
	   >= (3U & ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr) 
		     >> 8U)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1252 
	= (((((((((((0xb00U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		     ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_267
		     : VL_ULL(0)) | ((0xb02U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
				      ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_279
				      : VL_ULL(0))) 
		  | (QData)((IData)(((0xf13U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
				      ? 0x8000U : 0U)))) 
		 | (QData)((IData)(((0x301U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
				     ? 0x100U : 0U)))) 
		| ((0x300U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		    ? (((QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mstatus_prv)) 
			<< 0x20U) | (QData)((IData)(
						    (0x1800U 
						     | (((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie) 
							 << 7U) 
							| ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie) 
							   << 3U))))))
		    : VL_ULL(0))) | (QData)((IData)(
						    ((0x305U 
						      == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
						      ? 0x100U
						      : 0U)))) 
	      | (QData)((IData)(((0x344U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
				  ? (((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mip_mtip) 
				      << 7U) | ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mip_msip) 
						<< 3U))
				  : 0U)))) | (QData)((IData)(
							     ((0x304U 
							       == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
							       ? 
							      (((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mie_mtip) 
								<< 7U) 
							       | ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mie_msip) 
								  << 3U))
							       : 0U)))) 
	    | (QData)((IData)(((0x340U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
			        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mscratch
			        : 0U)))) | (QData)((IData)(
							   ((0x341U 
							     == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
							     ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mepc
							     : 0U))));
    // ALWAYS at generated-src/Top.v:102
    if ((1U & (~ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_hazard_stall)))) {
	vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst 
	    = vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data_dataInstr_1_data;
    }
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
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen 
	= (((((0U != (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_ctrl_csr_cmd)) 
	      & (4U != (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_ctrl_csr_cmd))) 
	     & (5U != (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_ctrl_csr_cmd))) 
	    & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__priv_sufficient)) 
	   & (0U != (3U & (~ ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr) 
			      >> 0xaU)))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__insn_ret 
	= (0x3fU & (((4U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_ctrl_csr_cmd)) 
		     & (((IData)(1U) << (7U & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))) 
			>> 2U)) & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__priv_sufficient)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1265 
	= ((((((((((((vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1252 
		      | (QData)((IData)(((0x343U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
					  ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mtval
					  : 0U)))) 
		     | (QData)((IData)(((0x342U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
					 ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mcause
					 : 0U)))) | (QData)((IData)(
								    ((0x7b0U 
								      == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
								      ? 
								     (0x40000003U 
								      | (((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_dcsr_ebreakm) 
									  << 0xfU) 
									 | ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_dcsr_step) 
									    << 2U)))
								      : 0U)))) 
		   | (QData)((IData)(((0x7b1U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
				       ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_dpc
				       : 0U)))) | (QData)((IData)(
								  ((0x7b2U 
								    == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
								    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_dscratch
								    : 0U)))) 
		 | (QData)((IData)(((0x302U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
				     ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_medeleg
				     : 0U)))) | ((0xb03U 
						  == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
						  ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_282
						  : VL_ULL(0))) 
	       | ((0xb83U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		   ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_282
		   : VL_ULL(0))) | ((0xb04U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
				     ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_285
				     : VL_ULL(0))) 
	     | ((0xb84U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		 ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_285
		 : VL_ULL(0))) | ((0xb05U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
				   ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_288
				   : VL_ULL(0))) | 
	   ((0xb85U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
	     ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_288
	     : VL_ULL(0)));
    vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data_dataInstr_1_data 
	= ((0xffffff00U & vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data_dataInstr_1_data) 
	   | vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem
	   [vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__regdataInstr_1_addr]);
    vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data_dataInstr_1_data 
	= ((0xffff00ffU & vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data_dataInstr_1_data) 
	   | (vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem
	      [(0x1fffffU & ((IData)(1U) + vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__regdataInstr_1_addr))] 
	      << 8U));
    vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data_dataInstr_1_data 
	= ((0xff00ffffU & vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data_dataInstr_1_data) 
	   | (vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem
	      [(0x1fffffU & ((IData)(2U) + vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__regdataInstr_1_addr))] 
	      << 0x10U));
    vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data_dataInstr_1_data 
	= ((0xffffffU & vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data_dataInstr_1_data) 
	   | (vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem
	      [(0x1fffffU & ((IData)(3U) + vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__regdataInstr_1_addr))] 
	      << 0x18U));
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
    vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__if_pc_plus4 
	= ((IData)(4U) + vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__if_reg_pc);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1058 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__insn_ret) 
	   & ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr) 
	      >> 0xaU));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1063 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__insn_ret) 
	   & (~ ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr) 
		 >> 0xaU)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr_io_eret 
	= (((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__insn_call) 
	    | (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__insn_break)) 
	   | (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__insn_ret));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1278 
	= (((((((((((((vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1265 
		       | ((0xb06U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
			   ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_291
			   : VL_ULL(0))) | ((0xb86U 
					     == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
					     ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_291
					     : VL_ULL(0))) 
		     | ((0xb07U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
			 ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_294
			 : VL_ULL(0))) | ((0xb87U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
					   ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_294
					   : VL_ULL(0))) 
		   | ((0xb08U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		       ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_297
		       : VL_ULL(0))) | ((0xb88U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
					 ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_297
					 : VL_ULL(0))) 
		 | ((0xb09U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		     ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_300
		     : VL_ULL(0))) | ((0xb89U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
				       ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_300
				       : VL_ULL(0))) 
	       | ((0xb0aU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		   ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_303
		   : VL_ULL(0))) | ((0xb8aU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
				     ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_303
				     : VL_ULL(0))) 
	     | ((0xb0bU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		 ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_306
		 : VL_ULL(0))) | ((0xb8bU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
				   ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_306
				   : VL_ULL(0))) | 
	   ((0xb0cU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
	     ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_309
	     : VL_ULL(0)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_779 
	= ((0x6013U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
	   | ((0x4013U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
	      | ((0x2013U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
		 | ((0x3013U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
		    | ((0x1013U == (0xfc00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
		       | ((0x40005013U == (0xfc00707fU 
					   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
			  | ((0x5013U == (0xfc00707fU 
					  & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
			     | ((0x1033U == (0xfe00707fU 
					     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
				| ((0x33U == (0xfe00707fU 
					      & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
				   | ((0x40000033U 
				       == (0xfe00707fU 
					   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
				      | ((0x2033U == 
					  (0xfe00707fU 
					   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
					 | ((0x3033U 
					     == (0xfe00707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
					    | ((0x7033U 
						== 
						(0xfe00707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
					       | ((0x6033U 
						   == 
						   (0xfe00707fU 
						    & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
						  | ((0x4033U 
						      == 
						      (0xfe00707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
						     | ((0x40005033U 
							 == 
							 (0xfe00707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
							| ((0x5033U 
							    == 
							    (0xfe00707fU 
							     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
							   | (0x6fU 
							      == 
							      (0x7fU 
							       & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)))))))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_665 
	= ((0x5033U == (0xfe00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
	    ? 0U : ((0x6fU == (0x7fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
		     ? 2U : ((0x67U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
			      ? 2U : ((0x63U == (0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
				       ? 0U : ((0x1063U 
						== 
						(0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
					        ? 0U
					        : (
						   (0x5063U 
						    == 
						    (0x707fU 
						     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						    ? 0U
						    : 
						   ((0x7063U 
						     == 
						     (0x707fU 
						      & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						     ? 0U
						     : 
						    ((0x4063U 
						      == 
						      (0x707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						      ? 0U
						      : 
						     ((0x6063U 
						       == 
						       (0x707fU 
							& vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						       ? 0U
						       : 
						      ((0x5073U 
							== 
							(0x707fU 
							 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						        ? 3U
						        : 
						       ((0x6073U 
							 == 
							 (0x707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							 ? 3U
							 : 
							((0x1073U 
							  == 
							  (0x707fU 
							   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							  ? 3U
							  : 
							 ((0x2073U 
							   == 
							   (0x707fU 
							    & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							   ? 3U
							   : 
							  ((0x3073U 
							    == 
							    (0x707fU 
							     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							    ? 3U
							    : 
							   ((0x7073U 
							     == 
							     (0x707fU 
							      & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							     ? 3U
							     : 0U)))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_717 
	= ((0x6033U == (0xfe00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
	   | ((0x4033U == (0xfe00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
	      | ((0x40005033U == (0xfe00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
		 | ((0x5033U == (0xfe00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
		    | ((0x6fU == (0x7fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
		       | ((0x67U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
			  | ((0x63U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
			     & ((0x1063U != (0x707fU 
					     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
				& ((0x5063U != (0x707fU 
						& vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
				   & ((0x7063U != (0x707fU 
						   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
				      & ((0x4063U != 
					  (0x707fU 
					   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
					 & ((0x6063U 
					     != (0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
					    & ((0x5073U 
						== 
						(0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
					       | ((0x6073U 
						   == 
						   (0x707fU 
						    & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
						  | ((0x1073U 
						      == 
						      (0x707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
						     | ((0x2073U 
							 == 
							 (0x707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
							| ((0x3073U 
							    == 
							    (0x707fU 
							     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
							   | (0x7073U 
							      == 
							      (0x707fU 
							       & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)))))))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_dmem_typ 
	= ((0x2003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
	    ? 3U : ((3U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
		     ? 1U : ((0x4003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
			      ? 5U : ((0x1003U == (0x707fU 
						   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
				       ? 2U : ((0x5003U 
						== 
						(0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
					        ? 6U
					        : (
						   (0x2023U 
						    == 
						    (0x707fU 
						     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						    ? 3U
						    : 
						   ((0x23U 
						     == 
						     (0x707fU 
						      & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						     ? 1U
						     : 
						    ((0x1023U 
						      == 
						      (0x707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						      ? 2U
						      : 0U))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_368 
	= ((0x63U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
	   | ((0x1063U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
	      | ((0x5063U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
		 | ((0x7063U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
		    | ((0x4063U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
		       | ((0x6063U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
			  | ((0x5073U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
			     | ((0x6073U == (0x707fU 
					     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
				| ((0x1073U == (0x707fU 
						& vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
				   | ((0x2073U == (0x707fU 
						   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
				      | ((0x3073U == 
					  (0x707fU 
					   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
					 | ((0x7073U 
					     == (0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
					    | ((0x73U 
						== vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst) 
					       | ((0x30200073U 
						   == vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst) 
						  | ((0x7b200073U 
						      == vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst) 
						     | ((0x100073U 
							 == vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst) 
							| ((0x10500073U 
							    == vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst) 
							   | ((0x100fU 
							       == 
							       (0x707fU 
								& vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
							      | (0xfU 
								 == 
								 (0x707fU 
								  & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))))))))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_955 
	= ((0x1063U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
	    ? 0U : ((0x5063U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
		     ? 0U : ((0x7063U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
			      ? 0U : ((0x4063U == (0x707fU 
						   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
				       ? 0U : ((0x6063U 
						== 
						(0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
					        ? 0U
					        : (
						   (0x5073U 
						    == 
						    (0x707fU 
						     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						    ? 1U
						    : 
						   ((0x6073U 
						     == 
						     (0x707fU 
						      & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						     ? 2U
						     : 
						    ((0x1073U 
						      == 
						      (0x707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						      ? 1U
						      : 
						     ((0x2073U 
						       == 
						       (0x707fU 
							& vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						       ? 2U
						       : 
						      ((0x3073U 
							== 
							(0x707fU 
							 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						        ? 3U
						        : 
						       ((0x7073U 
							 == 
							 (0x707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							 ? 3U
							 : 
							((0x73U 
							  == vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)
							  ? 4U
							  : 
							 ((0x30200073U 
							   == vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)
							   ? 4U
							   : 
							  ((0x7b200073U 
							    == vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)
							    ? 4U
							    : 
							   ((0x100073U 
							     == vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)
							     ? 4U
							     : 
							    ((0x10500073U 
							      == vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)
							      ? 4U
							      : 0U))))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_484 
	= ((0x4013U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
	   & ((0x2013U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
	      & ((0x3013U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
		 & ((0x1013U != (0xfc00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
		    & ((0x40005013U != (0xfc00707fU 
					& vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
		       & ((0x5013U != (0xfc00707fU 
				       & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
			  & ((0x1033U != (0xfe00707fU 
					  & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
			     & ((0x33U != (0xfe00707fU 
					   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
				& ((0x40000033U != 
				    (0xfe00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
				   & ((0x2033U != (0xfe00707fU 
						   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
				      & ((0x3033U != 
					  (0xfe00707fU 
					   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
					 & ((0x7033U 
					     != (0xfe00707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
					    & ((0x6033U 
						!= 
						(0xfe00707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
					       & ((0x4033U 
						   != 
						   (0xfe00707fU 
						    & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
						  & ((0x40005033U 
						      != 
						      (0xfe00707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
						     & ((0x5033U 
							 != 
							 (0xfe00707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
							& ((0x6fU 
							    == 
							    (0x7fU 
							     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
							   | (0x67U 
							      == 
							      (0x707fU 
							       & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)))))))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_426 
	= ((0x2033U == (0xfe00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
	    ? 0U : ((0x3033U == (0xfe00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
		     ? 0U : ((0x7033U == (0xfe00707fU 
					  & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
			      ? 0U : ((0x6033U == (0xfe00707fU 
						   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
				       ? 0U : ((0x4033U 
						== 
						(0xfe00707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
					        ? 0U
					        : (
						   (0x40005033U 
						    == 
						    (0xfe00707fU 
						     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						    ? 0U
						    : 
						   ((0x5033U 
						     == 
						     (0xfe00707fU 
						      & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						     ? 0U
						     : 
						    ((0x6fU 
						      == 
						      (0x7fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						      ? 7U
						      : 
						     ((0x67U 
						       == 
						       (0x707fU 
							& vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						       ? 8U
						       : 
						      ((0x63U 
							== 
							(0x707fU 
							 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						        ? 2U
						        : 
						       ((0x1063U 
							 == 
							 (0x707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							 ? 1U
							 : 
							((0x5063U 
							  == 
							  (0x707fU 
							   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							  ? 3U
							  : 
							 ((0x7063U 
							   == 
							   (0x707fU 
							    & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							   ? 4U
							   : 
							  ((0x4063U 
							    == 
							    (0x707fU 
							     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							    ? 5U
							    : 
							   ((0x6063U 
							     == 
							     (0x707fU 
							      & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							     ? 6U
							     : 0U)))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__imm_i_sext 
	= ((((0x80000000U & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)
	      ? 0xfffffU : 0U) << 0xcU) | (0xfffU & 
					   (vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst 
					    >> 0x14U)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__rf_rs2_data 
	= ((0U != (0x1fU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst 
			    >> 0x14U))) ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__regfile
	   [(0x1fU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst 
		      >> 0x14U))] : 0U);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_616 
	= ((0x5033U == (0xfe00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
	    ? 5U : ((0x6fU == (0x7fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
		     ? 0U : ((0x67U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
			      ? 0U : ((0x63U == (0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
				       ? 0U : ((0x1063U 
						== 
						(0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
					        ? 0U
					        : (
						   (0x5063U 
						    == 
						    (0x707fU 
						     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						    ? 0U
						    : 
						   ((0x7063U 
						     == 
						     (0x707fU 
						      & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						     ? 0U
						     : 
						    ((0x4063U 
						      == 
						      (0x707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						      ? 0U
						      : 
						     ((0x6063U 
						       == 
						       (0x707fU 
							& vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						       ? 0U
						       : 
						      ((0x5073U 
							== 
							(0x707fU 
							 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						        ? 8U
						        : 
						       ((0x6073U 
							 == 
							 (0x707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							 ? 8U
							 : 
							((0x1073U 
							  == 
							  (0x707fU 
							   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							  ? 8U
							  : 
							 ((0x2073U 
							   == 
							   (0x707fU 
							    & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							   ? 8U
							   : 
							  ((0x3073U 
							    == 
							    (0x707fU 
							     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							    ? 8U
							    : 
							   ((0x7073U 
							     == 
							     (0x707fU 
							      & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							     ? 8U
							     : 0U)))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_223 
	= ((((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_wbaddr) 
	     == (0x1fU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst 
			  >> 0x14U))) & (0U != (0x1fU 
						& (vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst 
						   >> 0x14U)))) 
	   & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_ctrl_rf_wen));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_579 
	= ((0x1013U == (0xfc00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
	    ? 1U : ((0x40005013U == (0xfc00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
		     ? 1U : ((0x5013U == (0xfc00707fU 
					  & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
			      ? 1U : ((0x1033U == (0xfe00707fU 
						   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
				       ? 0U : ((0x33U 
						== 
						(0xfe00707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
					        ? 0U
					        : (
						   (0x40000033U 
						    == 
						    (0xfe00707fU 
						     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						    ? 0U
						    : 
						   ((0x2033U 
						     == 
						     (0xfe00707fU 
						      & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						     ? 0U
						     : 
						    ((0x3033U 
						      == 
						      (0xfe00707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						      ? 0U
						      : 
						     ((0x7033U 
						       == 
						       (0xfe00707fU 
							& vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						       ? 0U
						       : 
						      ((0x6033U 
							== 
							(0xfe00707fU 
							 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						        ? 0U
						        : 
						       ((0x4033U 
							 == 
							 (0xfe00707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							 ? 0U
							 : 
							((0x40005033U 
							  == 
							  (0xfe00707fU 
							   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							  ? 0U
							  : 
							 ((0x5033U 
							   == 
							   (0xfe00707fU 
							    & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							   ? 0U
							   : 
							  ((0x6fU 
							    == 
							    (0x7fU 
							     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							    ? 0U
							    : 
							   ((0x67U 
							     == 
							     (0x707fU 
							      & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							     ? 1U
							     : 0U)))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_215 
	= ((((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_wbaddr) 
	     == (0x1fU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst 
			  >> 0xfU))) & (0U != (0x1fU 
					       & (vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst 
						  >> 0xfU)))) 
	   & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_ctrl_rf_wen));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_518 
	= ((0x5033U == (0xfe00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
	    ? 0U : ((0x6fU == (0x7fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
		     ? 0U : ((0x67U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
			      ? 0U : ((0x63U == (0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
				       ? 0U : ((0x1063U 
						== 
						(0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
					        ? 0U
					        : (
						   (0x5063U 
						    == 
						    (0x707fU 
						     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						    ? 0U
						    : 
						   ((0x7063U 
						     == 
						     (0x707fU 
						      & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						     ? 0U
						     : 
						    ((0x4063U 
						      == 
						      (0x707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						      ? 0U
						      : 
						     ((0x6063U 
						       == 
						       (0x707fU 
							& vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						       ? 0U
						       : 
						      ((0x5073U 
							== 
							(0x707fU 
							 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						        ? 2U
						        : 
						       ((0x6073U 
							 == 
							 (0x707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							 ? 2U
							 : 
							((0x1073U 
							  == 
							  (0x707fU 
							   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							  ? 0U
							  : 
							 ((0x2073U 
							   == 
							   (0x707fU 
							    & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							   ? 0U
							   : 
							  ((0x3073U 
							    == 
							    (0x707fU 
							     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							    ? 0U
							    : 
							   ((0x7073U 
							     == 
							     (0x707fU 
							      & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							     ? 2U
							     : 0U)))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT__take_evec 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_1092) 
	   | (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr_io_eret));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1291 
	= (((((((((((((vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1278 
		       | ((0xb8cU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
			   ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_309
			   : VL_ULL(0))) | ((0xb0dU 
					     == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
					     ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_312
					     : VL_ULL(0))) 
		     | ((0xb8dU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
			 ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_312
			 : VL_ULL(0))) | ((0xb0eU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
					   ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_315
					   : VL_ULL(0))) 
		   | ((0xb8eU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		       ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_315
		       : VL_ULL(0))) | ((0xb0fU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
					 ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_318
					 : VL_ULL(0))) 
		 | ((0xb8fU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		     ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_318
		     : VL_ULL(0))) | ((0xb10U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
				       ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_321
				       : VL_ULL(0))) 
	       | ((0xb90U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		   ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_321
		   : VL_ULL(0))) | ((0xb11U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
				     ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_324
				     : VL_ULL(0))) 
	     | ((0xb91U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		 ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_324
		 : VL_ULL(0))) | ((0xb12U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
				   ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_327
				   : VL_ULL(0))) | 
	   ((0xb92U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
	     ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_327
	     : VL_ULL(0)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_680 
	= ((0x4013U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
	    ? 0U : ((0x2013U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
		     ? 0U : ((0x3013U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
			      ? 0U : ((0x1013U == (0xfc00707fU 
						   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
				       ? 0U : ((0x40005013U 
						== 
						(0xfc00707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
					        ? 0U
					        : (
						   (0x5013U 
						    == 
						    (0xfc00707fU 
						     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						    ? 0U
						    : 
						   ((0x1033U 
						     == 
						     (0xfe00707fU 
						      & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						     ? 0U
						     : 
						    ((0x33U 
						      == 
						      (0xfe00707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						      ? 0U
						      : 
						     ((0x40000033U 
						       == 
						       (0xfe00707fU 
							& vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						       ? 0U
						       : 
						      ((0x2033U 
							== 
							(0xfe00707fU 
							 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						        ? 0U
						        : 
						       ((0x3033U 
							 == 
							 (0xfe00707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							 ? 0U
							 : 
							((0x7033U 
							  == 
							  (0xfe00707fU 
							   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							  ? 0U
							  : 
							 ((0x6033U 
							   == 
							   (0xfe00707fU 
							    & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							   ? 0U
							   : 
							  ((0x4033U 
							    == 
							    (0xfe00707fU 
							     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							    ? 0U
							    : 
							   ((0x40005033U 
							     == 
							     (0xfe00707fU 
							      & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							     ? 0U
							     : (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_665))))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_734 
	= ((0x17U == (0x7fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
	   | ((0x37U == (0x7fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
	      | ((0x13U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
		 | ((0x7013U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
		    | ((0x6013U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
		       | ((0x4013U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
			  | ((0x2013U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
			     | ((0x3013U == (0x707fU 
					     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
				| ((0x1013U == (0xfc00707fU 
						& vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
				   | ((0x40005013U 
				       == (0xfc00707fU 
					   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
				      | ((0x5013U == 
					  (0xfc00707fU 
					   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
					 | ((0x1033U 
					     == (0xfe00707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
					    | ((0x33U 
						== 
						(0xfe00707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
					       | ((0x40000033U 
						   == 
						   (0xfe00707fU 
						    & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
						  | ((0x2033U 
						      == 
						      (0xfe00707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
						     | ((0x3033U 
							 == 
							 (0xfe00707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
							| ((0x7033U 
							    == 
							    (0xfe00707fU 
							     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
							   | (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_717))))))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_385 
	= ((0x2013U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
	   | ((0x3013U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
	      | ((0x1013U == (0xfc00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
		 | ((0x40005013U == (0xfc00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
		    | ((0x5013U == (0xfc00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
		       | ((0x1033U == (0xfe00707fU 
				       & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
			  | ((0x33U == (0xfe00707fU 
					& vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
			     | ((0x40000033U == (0xfe00707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
				| ((0x2033U == (0xfe00707fU 
						& vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
				   | ((0x3033U == (0xfe00707fU 
						   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
				      | ((0x7033U == 
					  (0xfe00707fU 
					   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
					 | ((0x6033U 
					     == (0xfe00707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
					    | ((0x4033U 
						== 
						(0xfe00707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
					       | ((0x40005033U 
						   == 
						   (0xfe00707fU 
						    & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
						  | ((0x5033U 
						      == 
						      (0xfe00707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
						     | ((0x6fU 
							 == 
							 (0x7fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
							| ((0x67U 
							    == 
							    (0x707fU 
							     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
							   | (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_368))))))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_970 
	= ((0x40005013U == (0xfc00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
	    ? 0U : ((0x5013U == (0xfc00707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
		     ? 0U : ((0x1033U == (0xfe00707fU 
					  & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
			      ? 0U : ((0x33U == (0xfe00707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
				       ? 0U : ((0x40000033U 
						== 
						(0xfe00707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
					        ? 0U
					        : (
						   (0x2033U 
						    == 
						    (0xfe00707fU 
						     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						    ? 0U
						    : 
						   ((0x3033U 
						     == 
						     (0xfe00707fU 
						      & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						     ? 0U
						     : 
						    ((0x7033U 
						      == 
						      (0xfe00707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						      ? 0U
						      : 
						     ((0x6033U 
						       == 
						       (0xfe00707fU 
							& vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						       ? 0U
						       : 
						      ((0x4033U 
							== 
							(0xfe00707fU 
							 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						        ? 0U
						        : 
						       ((0x40005033U 
							 == 
							 (0xfe00707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							 ? 0U
							 : 
							((0x5033U 
							  == 
							  (0xfe00707fU 
							   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							  ? 0U
							  : 
							 ((0x6fU 
							   == 
							   (0x7fU 
							    & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							   ? 0U
							   : 
							  ((0x67U 
							    == 
							    (0x707fU 
							     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							    ? 0U
							    : 
							   ((0x63U 
							     == 
							     (0x707fU 
							      & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							     ? 0U
							     : (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_955))))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__imm_brjmp 
	= (((0x2003U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
	    & ((3U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
	       & ((0x4003U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
		  & ((0x1003U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
		     & ((0x5003U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
			& ((0x2023U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
			   & ((0x23U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
			      & ((0x1023U != (0x707fU 
					      & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
				 & ((0x17U != (0x7fU 
					       & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
				    & ((0x37U != (0x7fU 
						  & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
				       & ((0x13U != 
					   (0x707fU 
					    & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
					  & ((0x7013U 
					      != (0x707fU 
						  & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
					     & ((0x6013U 
						 != 
						 (0x707fU 
						  & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
						& (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_484))))))))))))))
	    ? ((((0x80000000U & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)
		  ? 0x7ffU : 0U) << 0x15U) | ((0x100000U 
					       & (vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst 
						  >> 0xbU)) 
					      | ((0xff000U 
						  & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst) 
						 | ((0x800U 
						     & (vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst 
							>> 9U)) 
						    | (0x7feU 
						       & (vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst 
							  >> 0x14U))))))
	    : ((((0x80000000U & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)
		  ? 0x7ffffU : 0U) << 0xdU) | ((0x1000U 
						& (vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst 
						   >> 0x13U)) 
					       | ((0x800U 
						   & (vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst 
						      << 4U)) 
						  | ((0x7e0U 
						      & (vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst 
							 >> 0x14U)) 
						     | (0x1eU 
							& (vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst 
							   >> 7U)))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_441 
	= ((0x1023U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
	    ? 0U : ((0x17U == (0x7fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
		     ? 0U : ((0x37U == (0x7fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
			      ? 0U : ((0x13U == (0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
				       ? 0U : ((0x7013U 
						== 
						(0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
					        ? 0U
					        : (
						   (0x6013U 
						    == 
						    (0x707fU 
						     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						    ? 0U
						    : 
						   ((0x4013U 
						     == 
						     (0x707fU 
						      & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						     ? 0U
						     : 
						    ((0x2013U 
						      == 
						      (0x707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						      ? 0U
						      : 
						     ((0x3013U 
						       == 
						       (0x707fU 
							& vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						       ? 0U
						       : 
						      ((0x1013U 
							== 
							(0xfc00707fU 
							 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						        ? 0U
						        : 
						       ((0x40005013U 
							 == 
							 (0xfc00707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							 ? 0U
							 : 
							((0x5013U 
							  == 
							  (0xfc00707fU 
							   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							  ? 0U
							  : 
							 ((0x1033U 
							   == 
							   (0xfe00707fU 
							    & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							   ? 0U
							   : 
							  ((0x33U 
							    == 
							    (0xfe00707fU 
							     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							    ? 0U
							    : 
							   ((0x40000033U 
							     == 
							     (0xfe00707fU 
							      & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							     ? 0U
							     : (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_426))))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_631 
	= ((0x4013U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
	    ? 4U : ((0x2013U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
		     ? 0xcU : ((0x3013U == (0x707fU 
					    & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
			        ? 0xeU : ((0x1013U 
					   == (0xfc00707fU 
					       & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
					   ? 1U : (
						   (0x40005013U 
						    == 
						    (0xfc00707fU 
						     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						    ? 0xbU
						    : 
						   ((0x5013U 
						     == 
						     (0xfc00707fU 
						      & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						     ? 5U
						     : 
						    ((0x1033U 
						      == 
						      (0xfe00707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						      ? 1U
						      : 
						     ((0x33U 
						       == 
						       (0xfe00707fU 
							& vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						       ? 0U
						       : 
						      ((0x40000033U 
							== 
							(0xfe00707fU 
							 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						        ? 0xaU
						        : 
						       ((0x2033U 
							 == 
							 (0xfe00707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							 ? 0xcU
							 : 
							((0x3033U 
							  == 
							  (0xfe00707fU 
							   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							  ? 0xeU
							  : 
							 ((0x7033U 
							   == 
							   (0xfe00707fU 
							    & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							   ? 7U
							   : 
							  ((0x6033U 
							    == 
							    (0xfe00707fU 
							     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							    ? 6U
							    : 
							   ((0x4033U 
							     == 
							     (0xfe00707fU 
							      & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							     ? 4U
							     : 
							    ((0x40005033U 
							      == 
							      (0xfe00707fU 
							       & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							      ? 0xbU
							      : (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_616))))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_226 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_223) 
	   & (~ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_ctrl_bypassable)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_299 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_223) 
	   & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_ctrl_bypassable));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_594 
	= ((3U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
	    ? 1U : ((0x4003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
		     ? 1U : ((0x1003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
			      ? 1U : ((0x5003U == (0x707fU 
						   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
				       ? 1U : ((0x2023U 
						== 
						(0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
					        ? 2U
					        : (
						   (0x23U 
						    == 
						    (0x707fU 
						     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						    ? 2U
						    : 
						   ((0x1023U 
						     == 
						     (0x707fU 
						      & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						     ? 2U
						     : 
						    ((0x17U 
						      == 
						      (0x7fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						      ? 3U
						      : 
						     ((0x37U 
						       == 
						       (0x7fU 
							& vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						       ? 0U
						       : 
						      ((0x13U 
							== 
							(0x707fU 
							 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						        ? 1U
						        : 
						       ((0x7013U 
							 == 
							 (0x707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							 ? 1U
							 : 
							((0x6013U 
							  == 
							  (0x707fU 
							   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							  ? 1U
							  : 
							 ((0x4013U 
							   == 
							   (0x707fU 
							    & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							   ? 1U
							   : 
							  ((0x2013U 
							    == 
							    (0x707fU 
							     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							    ? 1U
							    : 
							   ((0x3013U 
							     == 
							     (0x707fU 
							      & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							     ? 1U
							     : (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_579))))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_218 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_215) 
	   & (~ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_ctrl_bypassable)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__exe_rs1_data 
	= (((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_215) 
	    & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_ctrl_bypassable))
	    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_alu
	    : ((0U != (0x1fU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst 
				>> 0xfU))) ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__regfile
	       [(0x1fU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst 
			  >> 0xfU))] : 0U));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_533 
	= ((0x4013U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
	    ? 0U : ((0x2013U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
		     ? 0U : ((0x3013U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
			      ? 0U : ((0x1013U == (0xfc00707fU 
						   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
				       ? 0U : ((0x40005013U 
						== 
						(0xfc00707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
					        ? 0U
					        : (
						   (0x5013U 
						    == 
						    (0xfc00707fU 
						     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						    ? 0U
						    : 
						   ((0x1033U 
						     == 
						     (0xfe00707fU 
						      & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						     ? 0U
						     : 
						    ((0x33U 
						      == 
						      (0xfe00707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						      ? 0U
						      : 
						     ((0x40000033U 
						       == 
						       (0xfe00707fU 
							& vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						       ? 0U
						       : 
						      ((0x2033U 
							== 
							(0xfe00707fU 
							 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						        ? 0U
						        : 
						       ((0x3033U 
							 == 
							 (0xfe00707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							 ? 0U
							 : 
							((0x7033U 
							  == 
							  (0xfe00707fU 
							   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							  ? 0U
							  : 
							 ((0x6033U 
							   == 
							   (0xfe00707fU 
							    & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							   ? 0U
							   : 
							  ((0x4033U 
							    == 
							    (0xfe00707fU 
							     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							    ? 0U
							    : 
							   ((0x40005033U 
							     == 
							     (0xfe00707fU 
							      & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							     ? 0U
							     : (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_518))))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1304 
	= (((((((((((((vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1291 
		       | ((0xb13U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
			   ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_330
			   : VL_ULL(0))) | ((0xb93U 
					     == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
					     ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_330
					     : VL_ULL(0))) 
		     | ((0xb14U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
			 ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_333
			 : VL_ULL(0))) | ((0xb94U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
					   ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_333
					   : VL_ULL(0))) 
		   | ((0xb15U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		       ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_336
		       : VL_ULL(0))) | ((0xb95U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
					 ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_336
					 : VL_ULL(0))) 
		 | ((0xb16U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		     ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_339
		     : VL_ULL(0))) | ((0xb96U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
				       ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_339
				       : VL_ULL(0))) 
	       | ((0xb17U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		   ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_342
		   : VL_ULL(0))) | ((0xb97U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
				     ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_342
				     : VL_ULL(0))) 
	     | ((0xb18U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		 ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_345
		 : VL_ULL(0))) | ((0xb98U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
				   ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_345
				   : VL_ULL(0))) | 
	   ((0xb19U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
	     ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_348
	     : VL_ULL(0)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_exception 
	= ((~ ((0x2003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
	       | ((3U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
		  | ((0x4003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
		     | ((0x1003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
			| ((0x5003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
			   | ((0x2023U == (0x707fU 
					   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
			      | ((0x23U == (0x707fU 
					    & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
				 | ((0x1023U == (0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
				    | ((0x17U == (0x7fU 
						  & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
				       | ((0x37U == 
					   (0x7fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
					  | ((0x13U 
					      == (0x707fU 
						  & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
					     | ((0x7013U 
						 == 
						 (0x707fU 
						  & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
						| ((0x6013U 
						    == 
						    (0x707fU 
						     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
						   | ((0x4013U 
						       == 
						       (0x707fU 
							& vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
						      | (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_385)))))))))))))))) 
	   & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_valid));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_985 
	= ((0x4003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
	    ? 0U : ((0x1003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
		     ? 0U : ((0x5003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
			      ? 0U : ((0x2023U == (0x707fU 
						   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
				       ? 0U : ((0x23U 
						== 
						(0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
					        ? 0U
					        : (
						   (0x1023U 
						    == 
						    (0x707fU 
						     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						    ? 0U
						    : 
						   ((0x17U 
						     == 
						     (0x7fU 
						      & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						     ? 0U
						     : 
						    ((0x37U 
						      == 
						      (0x7fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						      ? 0U
						      : 
						     ((0x13U 
						       == 
						       (0x707fU 
							& vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						       ? 0U
						       : 
						      ((0x7013U 
							== 
							(0x707fU 
							 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						        ? 0U
						        : 
						       ((0x6013U 
							 == 
							 (0x707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							 ? 0U
							 : 
							((0x4013U 
							  == 
							  (0x707fU 
							   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							  ? 0U
							  : 
							 ((0x2013U 
							   == 
							   (0x707fU 
							    & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							   ? 0U
							   : 
							  ((0x3013U 
							    == 
							    (0x707fU 
							     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							    ? 0U
							    : 
							   ((0x1013U 
							     == 
							     (0xfc00707fU 
							      & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							     ? 0U
							     : (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_970))))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT__cs_br_type 
	= ((0x2003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
	    ? 0U : ((3U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
		     ? 0U : ((0x4003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
			      ? 0U : ((0x1003U == (0x707fU 
						   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
				       ? 0U : ((0x5003U 
						== 
						(0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
					        ? 0U
					        : (
						   (0x2023U 
						    == 
						    (0x707fU 
						     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						    ? 0U
						    : 
						   ((0x23U 
						     == 
						     (0x707fU 
						      & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						     ? 0U
						     : (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_441))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_alu_fun 
	= ((0x2003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
	    ? 0U : ((3U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
		     ? 0U : ((0x4003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
			      ? 0U : ((0x1003U == (0x707fU 
						   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
				       ? 0U : ((0x5003U 
						== 
						(0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
					        ? 0U
					        : (
						   (0x2023U 
						    == 
						    (0x707fU 
						     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						    ? 0U
						    : 
						   ((0x23U 
						     == 
						     (0x707fU 
						      & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						     ? 0U
						     : 
						    ((0x1023U 
						      == 
						      (0x707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						      ? 0U
						      : 
						     ((0x17U 
						       == 
						       (0x7fU 
							& vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						       ? 0U
						       : 
						      ((0x37U 
							== 
							(0x7fU 
							 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						        ? 8U
						        : 
						       ((0x13U 
							 == 
							 (0x707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							 ? 0U
							 : 
							((0x7013U 
							  == 
							  (0x707fU 
							   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							  ? 7U
							  : 
							 ((0x6013U 
							   == 
							   (0x707fU 
							    & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							   ? 6U
							   : (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_631))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__exe_rs2_data 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_299)
	    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_alu
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__rf_rs2_data);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_op2_sel 
	= ((0x2003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
	    ? 1U : (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_594));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_hazard_stall 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_218) 
	   | (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_226));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_op1_sel 
	= ((0x2003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
	    ? 0U : ((3U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
		     ? 0U : ((0x4003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
			      ? 0U : ((0x1003U == (0x707fU 
						   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
				       ? 0U : ((0x5003U 
						== 
						(0x707fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
					        ? 0U
					        : (
						   (0x2023U 
						    == 
						    (0x707fU 
						     & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						    ? 0U
						    : 
						   ((0x23U 
						     == 
						     (0x707fU 
						      & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						     ? 0U
						     : 
						    ((0x1023U 
						      == 
						      (0x707fU 
						       & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						      ? 0U
						      : 
						     ((0x17U 
						       == 
						       (0x7fU 
							& vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						       ? 1U
						       : 
						      ((0x37U 
							== 
							(0x7fU 
							 & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
						        ? 1U
						        : 
						       ((0x13U 
							 == 
							 (0x707fU 
							  & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							 ? 0U
							 : 
							((0x7013U 
							  == 
							  (0x707fU 
							   & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							  ? 0U
							  : 
							 ((0x6013U 
							   == 
							   (0x707fU 
							    & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
							   ? 0U
							   : (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_533))))))))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1317 
	= (((((((((((((vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1304 
		       | ((0xb99U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
			   ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_348
			   : VL_ULL(0))) | ((0xb1aU 
					     == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
					     ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_351
					     : VL_ULL(0))) 
		     | ((0xb9aU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
			 ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_351
			 : VL_ULL(0))) | ((0xb1bU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
					   ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_354
					   : VL_ULL(0))) 
		   | ((0xb9bU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		       ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_354
		       : VL_ULL(0))) | ((0xb1cU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
					 ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_357
					 : VL_ULL(0))) 
		 | ((0xb9cU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		     ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_357
		     : VL_ULL(0))) | ((0xb1dU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
				       ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_360
				       : VL_ULL(0))) 
	       | ((0xb9dU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		   ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_360
		   : VL_ULL(0))) | ((0xb1eU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
				     ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_363
				     : VL_ULL(0))) 
	     | ((0xb9eU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		 ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_363
		 : VL_ULL(0))) | ((0xb1fU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
				   ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_366
				   : VL_ULL(0))) | 
	   ((0xb9fU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
	     ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_366
	     : VL_ULL(0)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT__cs0_7 
	= ((0x2003U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
	    ? 0U : ((3U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))
		     ? 0U : (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_985)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_32 
	= ((5U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_alu_fun)) 
	   | (0xbU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_alu_fun)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath_io_dat_br_eq 
	= (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__exe_rs1_data 
	   == vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__exe_rs2_data);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath_io_dat_br_lt 
	= VL_LTS_III(1,32,32, vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__exe_rs1_data, vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__exe_rs2_data);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath_io_dat_br_ltu 
	= (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__exe_rs1_data 
	   < vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__exe_rs2_data);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_307 
	= ((3U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_op2_sel))
	    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_pc
	    : ((2U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_op2_sel))
	        ? ((((0x80000000U & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)
		      ? 0xfffffU : 0U) << 0xcU) | (
						   (0xfe0U 
						    & (vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst 
						       >> 0x14U)) 
						   | (0x1fU 
						      & (vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst 
							 >> 7U))))
	        : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__exe_rs2_data));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_319 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_hazard_stall) 
	   | ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_1092) 
	      | (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr_io_eret)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath_io_dmem_req_bits_fcn 
	= ((((0x2003U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
	     & ((3U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
		& ((0x4003U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
		   & ((0x1003U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
		      & ((0x5003U != (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
			 & ((0x2023U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
			    | ((0x23U == (0x707fU & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)) 
			       | (0x1023U == (0x707fU 
					      & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst))))))))) 
	    & (~ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_hazard_stall))) 
	   & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_valid));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_302 
	= ((1U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_op1_sel))
	    ? (0xfffff000U & vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst)
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__exe_rs1_data);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1323 
	= ((((((vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1317 
		| ((0xb20U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_369
		    : VL_ULL(0))) | ((0xba0U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
				      ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_369
				      : VL_ULL(0))) 
	      | ((0xb21U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		  ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_372
		  : VL_ULL(0))) | ((0xba1U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
				    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_372
				    : VL_ULL(0))) | 
	    ((0xb22U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
	      ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_375
	      : VL_ULL(0))) | ((0xba2U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
			        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_375
			        : VL_ULL(0)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_1066 
	= ((0U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT__cs_br_type))
	    ? 0U : ((1U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT__cs_br_type))
		     ? ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath_io_dat_br_eq)
			 ? 0U : 1U) : ((2U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT__cs_br_type))
				        ? ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath_io_dat_br_eq)
					    ? 1U : 0U)
				        : ((3U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT__cs_br_type))
					    ? ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath_io_dat_br_lt)
					        ? 0U
					        : 1U)
					    : ((4U 
						== (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT__cs_br_type))
					        ? ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath_io_dat_br_ltu)
						    ? 0U
						    : 1U)
					        : (
						   (5U 
						    == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT__cs_br_type))
						    ? 
						   ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath_io_dat_br_lt)
						     ? 1U
						     : 0U)
						    : 
						   ((6U 
						     == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT__cs_br_type))
						     ? 
						    ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath_io_dat_br_ltu)
						      ? 1U
						      : 0U)
						     : 
						    ((7U 
						      == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT__cs_br_type))
						      ? 2U
						      : 
						     ((8U 
						       == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT__cs_br_type))
						       ? 3U
						       : 0U)))))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu_io_in2 
	= ((1U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_op2_sel))
	    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__imm_i_sext
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_307);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu_io_in1 
	= ((2U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_op1_sel))
	    ? (0x1fU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst 
			>> 0xfU)) : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_302);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_399 
	= ((1U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_ctrl_wb_sel))
	    ? ((1U == (IData)(vlTOPp->Top__DOT__tile__DOT__memory__DOT__req_typi))
	        ? ((((0x80U & vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data_dataInstr_0_data)
		      ? 0xffffffU : 0U) << 8U) | (0xffU 
						  & vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data_dataInstr_0_data))
	        : ((2U == (IData)(vlTOPp->Top__DOT__tile__DOT__memory__DOT__req_typi))
		    ? ((((0x8000U & vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data_dataInstr_0_data)
			  ? 0xffffU : 0U) << 0x10U) 
		       | (0xffffU & vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data_dataInstr_0_data))
		    : ((5U == (IData)(vlTOPp->Top__DOT__tile__DOT__memory__DOT__req_typi))
		        ? (0xffU & vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data_dataInstr_0_data)
		        : ((6U == (IData)(vlTOPp->Top__DOT__tile__DOT__memory__DOT__req_typi))
			    ? (0xffffU & vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data_dataInstr_0_data)
			    : vlTOPp->Top__DOT__tile__DOT__memory__DOT__sync_data_dataInstr_0_data))))
	    : ((2U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_ctrl_wb_sel))
	        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_pc
	        : ((3U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_ctrl_wb_sel))
		    ? (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1323)
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_alu)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata 
	= (((((2U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_ctrl_csr_cmd)) 
	      | (3U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_ctrl_csr_cmd)))
	      ? (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1323)
	      : 0U) | vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_alu) 
	   & (~ ((3U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_ctrl_csr_cmd))
		  ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_alu
		  : 0U)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_imem_req_valid 
	= ((0U != ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT__take_evec)
		    ? 4U : (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_1066))) 
	   & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_valid));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_pc_sel 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT__take_evec)
	    ? 4U : (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_1066));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_20 
	= ((8U & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_alu_fun))
	    ? (IData)((VL_ULL(0x1ffffffff) & VL_NEGATE_Q((QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu_io_in2)))))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu_io_in2);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_43 
	= ((0xffffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu_io_in1 
		       >> 0x10U)) | (0xffff0000U & 
				     (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu_io_in1 
				      << 0x10U)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1587 
	= (((QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata)) 
	    << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_279)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1590 
	= (((QData)((IData)((vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_279 
			     >> 0x20U))) << 0x20U) 
	   | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_110 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen)
	    ? ((0xb03U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
	        ? (((QData)((IData)((0xffU & (IData)(
						     (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_282 
						      >> 0x20U))))) 
		    << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata)))
	        : ((0xb83U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_282)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_282))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_282);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_111 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen)
	    ? ((0xb04U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
	        ? (((QData)((IData)((0xffU & (IData)(
						     (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_285 
						      >> 0x20U))))) 
		    << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata)))
	        : ((0xb84U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_285)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_285))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_285);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_112 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen)
	    ? ((0xb05U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
	        ? (((QData)((IData)((0xffU & (IData)(
						     (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_288 
						      >> 0x20U))))) 
		    << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata)))
	        : ((0xb85U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_288)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_288))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_288);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_113 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen)
	    ? ((0xb06U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
	        ? (((QData)((IData)((0xffU & (IData)(
						     (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_291 
						      >> 0x20U))))) 
		    << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata)))
	        : ((0xb86U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_291)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_291))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_291);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_114 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen)
	    ? ((0xb07U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
	        ? (((QData)((IData)((0xffU & (IData)(
						     (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_294 
						      >> 0x20U))))) 
		    << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata)))
	        : ((0xb87U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_294)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_294))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_294);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_115 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen)
	    ? ((0xb08U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
	        ? (((QData)((IData)((0xffU & (IData)(
						     (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_297 
						      >> 0x20U))))) 
		    << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata)))
	        : ((0xb88U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_297)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_297))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_297);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_116 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen)
	    ? ((0xb09U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
	        ? (((QData)((IData)((0xffU & (IData)(
						     (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_300 
						      >> 0x20U))))) 
		    << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata)))
	        : ((0xb89U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_300)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_300))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_300);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_117 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen)
	    ? ((0xb0aU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
	        ? (((QData)((IData)((0xffU & (IData)(
						     (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_303 
						      >> 0x20U))))) 
		    << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata)))
	        : ((0xb8aU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_303)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_303))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_303);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_118 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen)
	    ? ((0xb0bU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
	        ? (((QData)((IData)((0xffU & (IData)(
						     (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_306 
						      >> 0x20U))))) 
		    << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata)))
	        : ((0xb8bU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_306)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_306))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_306);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_119 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen)
	    ? ((0xb0cU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
	        ? (((QData)((IData)((0xffU & (IData)(
						     (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_309 
						      >> 0x20U))))) 
		    << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata)))
	        : ((0xb8cU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_309)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_309))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_309);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_120 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen)
	    ? ((0xb0dU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
	        ? (((QData)((IData)((0xffU & (IData)(
						     (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_312 
						      >> 0x20U))))) 
		    << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata)))
	        : ((0xb8dU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_312)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_312))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_312);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_121 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen)
	    ? ((0xb0eU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
	        ? (((QData)((IData)((0xffU & (IData)(
						     (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_315 
						      >> 0x20U))))) 
		    << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata)))
	        : ((0xb8eU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_315)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_315))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_315);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_122 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen)
	    ? ((0xb0fU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
	        ? (((QData)((IData)((0xffU & (IData)(
						     (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_318 
						      >> 0x20U))))) 
		    << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata)))
	        : ((0xb8fU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_318)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_318))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_318);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_123 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen)
	    ? ((0xb10U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
	        ? (((QData)((IData)((0xffU & (IData)(
						     (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_321 
						      >> 0x20U))))) 
		    << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata)))
	        : ((0xb90U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_321)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_321))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_321);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_124 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen)
	    ? ((0xb11U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
	        ? (((QData)((IData)((0xffU & (IData)(
						     (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_324 
						      >> 0x20U))))) 
		    << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata)))
	        : ((0xb91U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_324)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_324))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_324);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_125 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen)
	    ? ((0xb12U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
	        ? (((QData)((IData)((0xffU & (IData)(
						     (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_327 
						      >> 0x20U))))) 
		    << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata)))
	        : ((0xb92U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_327)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_327))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_327);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_126 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen)
	    ? ((0xb13U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
	        ? (((QData)((IData)((0xffU & (IData)(
						     (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_330 
						      >> 0x20U))))) 
		    << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata)))
	        : ((0xb93U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_330)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_330))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_330);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_127 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen)
	    ? ((0xb14U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
	        ? (((QData)((IData)((0xffU & (IData)(
						     (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_333 
						      >> 0x20U))))) 
		    << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata)))
	        : ((0xb94U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_333)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_333))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_333);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_128 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen)
	    ? ((0xb15U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
	        ? (((QData)((IData)((0xffU & (IData)(
						     (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_336 
						      >> 0x20U))))) 
		    << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata)))
	        : ((0xb95U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_336)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_336))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_336);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_129 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen)
	    ? ((0xb16U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
	        ? (((QData)((IData)((0xffU & (IData)(
						     (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_339 
						      >> 0x20U))))) 
		    << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata)))
	        : ((0xb96U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_339)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_339))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_339);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_130 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen)
	    ? ((0xb17U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
	        ? (((QData)((IData)((0xffU & (IData)(
						     (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_342 
						      >> 0x20U))))) 
		    << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata)))
	        : ((0xb97U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_342)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_342))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_342);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_131 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen)
	    ? ((0xb18U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
	        ? (((QData)((IData)((0xffU & (IData)(
						     (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_345 
						      >> 0x20U))))) 
		    << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata)))
	        : ((0xb98U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_345)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_345))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_345);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_132 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen)
	    ? ((0xb19U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
	        ? (((QData)((IData)((0xffU & (IData)(
						     (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_348 
						      >> 0x20U))))) 
		    << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata)))
	        : ((0xb99U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_348)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_348))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_348);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_133 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen)
	    ? ((0xb1aU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
	        ? (((QData)((IData)((0xffU & (IData)(
						     (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_351 
						      >> 0x20U))))) 
		    << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata)))
	        : ((0xb9aU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_351)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_351))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_351);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_134 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen)
	    ? ((0xb1bU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
	        ? (((QData)((IData)((0xffU & (IData)(
						     (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_354 
						      >> 0x20U))))) 
		    << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata)))
	        : ((0xb9bU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_354)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_354))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_354);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_135 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen)
	    ? ((0xb1cU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
	        ? (((QData)((IData)((0xffU & (IData)(
						     (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_357 
						      >> 0x20U))))) 
		    << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata)))
	        : ((0xb9cU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_357)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_357))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_357);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_136 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen)
	    ? ((0xb1dU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
	        ? (((QData)((IData)((0xffU & (IData)(
						     (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_360 
						      >> 0x20U))))) 
		    << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata)))
	        : ((0xb9dU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_360)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_360))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_360);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_137 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen)
	    ? ((0xb1eU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
	        ? (((QData)((IData)((0xffU & (IData)(
						     (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_363 
						      >> 0x20U))))) 
		    << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata)))
	        : ((0xb9eU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_363)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_363))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_363);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_138 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen)
	    ? ((0xb1fU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
	        ? (((QData)((IData)((0xffU & (IData)(
						     (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_366 
						      >> 0x20U))))) 
		    << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata)))
	        : ((0xb9fU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_366)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_366))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_366);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_139 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen)
	    ? ((0xb20U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
	        ? (((QData)((IData)((0xffU & (IData)(
						     (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_369 
						      >> 0x20U))))) 
		    << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata)))
	        : ((0xba0U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_369)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_369))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_369);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_140 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen)
	    ? ((0xb21U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
	        ? (((QData)((IData)((0xffU & (IData)(
						     (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_372 
						      >> 0x20U))))) 
		    << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata)))
	        : ((0xba1U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_372)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_372))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_372);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_141 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen)
	    ? ((0xb22U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
	        ? (((QData)((IData)((0xffU & (IData)(
						     (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_375 
						      >> 0x20U))))) 
		    << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata)))
	        : ((0xba2U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		    ? (((QData)((IData)((0xffU & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_375)))
		    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_375))
	    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_375);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1580 
	= (((QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata)) 
	    << 0x20U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_267)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1583 
	= (((QData)((IData)((vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_267 
			     >> 0x20U))) << 0x20U) 
	   | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT___T_145 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__if_reg_valid) 
	   & (~ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_imem_req_valid)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath_io_imem_req_bits_pc 
	= ((4U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_pc_sel))
	    ? ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__insn_break)
	        ? 0x80000004U : ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__insn_call)
				  ? 0x80000004U : ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1063)
						    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mepc
						    : 
						   ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1058)
						     ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_dpc
						     : 0x80000004U))))
	    : ((3U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_pc_sel))
	        ? (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu_io_in1 
		   + vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_20)
	        : (vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_pc 
		   + vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__imm_brjmp)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT__sum 
	= (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu_io_in1 
	   + vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_20);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_53 
	= ((0xff00ffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_43 
			 >> 8U)) | (0xff00ff00U & (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_43 
						   << 8U)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_142 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen)
	    ? ((0xb00U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
	        ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1583
	        : ((0xb80U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr))
		    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1580
		    : (QData)((IData)((0x7fU & ((IData)(1U) 
						+ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_258)))))))
	    : (QData)((IData)((0x7fU & ((IData)(1U) 
					+ (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_258))))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT___GEN_0 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_imem_req_valid)
	    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath_io_imem_req_bits_pc
	    : ((IData)(4U) + vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__if_reg_pc));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_63 
	= ((0xf0f0f0fU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_53 
			  >> 4U)) | (0xf0f0f0f0U & 
				     (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_53 
				      << 4U)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_73 
	= ((0x33333333U & (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_63 
			   >> 2U)) | (0xccccccccU & 
				      (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_63 
				       << 2U)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT__shin 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_32)
	    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu_io_in1
	    : ((0x55555555U & (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_73 
			       >> 1U)) | (0xaaaaaaaaU 
					  & (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_73 
					     << 1U))));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_89 
	= (VL_ULL(0x1ffffffff) & VL_SHIFTRS_QQI(33,33,5, 
						(((QData)((IData)(
								  (1U 
								   & (((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_alu_fun) 
								       >> 3U) 
								      & (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT__shin 
									 >> 0x1fU))))) 
						  << 0x20U) 
						 | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT__shin))), 
						(0x1fU 
						 & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu_io_in2)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_100 
	= ((0xffffU & (IData)((vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_89 
			       >> 0x10U))) | (0xffff0000U 
					      & ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_89) 
						 << 0x10U)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_110 
	= ((0xff00ffU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_100 
			 >> 8U)) | (0xff00ff00U & (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_100 
						   << 8U)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_120 
	= ((0xf0f0f0fU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_110 
			  >> 4U)) | (0xf0f0f0f0U & 
				     (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_110 
				      << 4U)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_130 
	= ((0x33333333U & (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_120 
			   >> 2U)) | (0xccccccccU & 
				      (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_120 
				       << 2U)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu_io_out 
	= (((0U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_alu_fun)) 
	    | (0xaU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_alu_fun)))
	    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT__sum
	    : (((0xcU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_alu_fun)) 
		| (0xeU == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_alu_fun)))
	        ? (1U & (((1U & (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu_io_in1 
				 >> 0x1fU)) == (1U 
						& (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu_io_in2 
						   >> 0x1fU)))
			  ? (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT__sum 
			     >> 0x1fU) : ((2U & (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_alu_fun))
					   ? (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu_io_in2 
					      >> 0x1fU)
					   : (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu_io_in1 
					      >> 0x1fU))))
	        : ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_32)
		    ? (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_89)
		    : ((1U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_alu_fun))
		        ? ((0x55555555U & (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_130 
					   >> 1U)) 
			   | (0xaaaaaaaaU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_130 
					     << 1U)))
		        : ((7U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_alu_fun))
			    ? (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu_io_in1 
			       & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu_io_in2)
			    : ((6U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_alu_fun))
			        ? (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu_io_in1 
				   | vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu_io_in2)
			        : ((4U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_alu_fun))
				    ? (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu_io_in1 
				       ^ vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu_io_in2)
				    : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu_io_in1)))))));
    vlTOPp->Top__DOT__tile__DOT__memory__DOT___T_327 
	= (0x1fU & ((1U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_dmem_typ))
		     ? (0xfU & ((IData)(1U) << (3U 
						& vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu_io_out)))
		     : ((2U == (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_dmem_typ))
			 ? ((IData)(3U) << (3U & vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu_io_out))
			 : 0xfU)));
    vlTOPp->Top__DOT__tile__DOT__memory__DOT___T_313 
	= (VL_ULL(0x7fffffffffffffff) & ((QData)((IData)(
							 ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_299)
							   ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_alu
							   : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__rf_rs2_data))) 
					 << (0x18U 
					     & (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu_io_out 
						<< 3U))));
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
