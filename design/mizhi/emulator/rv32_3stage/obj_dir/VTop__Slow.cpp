// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop.h"              // For This
#include "VTop__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VTop) {
    VTop__Syms* __restrict vlSymsp = __VlSymsp = new VTop__Syms(this, name());
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL (__PVT____024unit, VTop___024unit);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VTop::__Vconfigure(VTop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VTop::~VTop() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------
// Internal Methods

void VTop::_settle__TOP__2(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_settle__TOP__2\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_success = (1U == vlTOPp->Top__DOT__SimDTM__DOT_____05Fexit);
    vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_ready 
	= vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_valid;
    vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_333 
	= ((0x16U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr)) 
	   & (IData)(vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_valid));
    vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_433 
	= ((0x44U == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr)) 
	   & (IData)(vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_valid));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_266 
	= (VL_ULL(0x3ffffffffffffff) & (VL_ULL(1) + vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_262));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_278 
	= (VL_ULL(0x3ffffffffffffff) & (VL_ULL(1) + vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_274));
    vlTOPp->Top__DOT__tile__DOT__debug_io_dmi_resp_valid 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__firstreaddone)
	    ? (IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_414)
	    : (IData)(vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_valid));
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
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_279 
	= ((vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_274 
	    << 6U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_270)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_405 
	= ((IData)(1U) + vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__irt_reg);
    vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_403 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__command_transfer) 
	   & (0U != (IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__abstractcs_cmderr)));
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
    vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_420 
	= (((0x3cU == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr)) 
	    & (1U == (3U & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))) 
	   | ((IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbcs_sbautoread) 
	      & (IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__firstreaddone)));
    vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_398 
	= ((IData)(4U) + vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbaddr);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__regfile___05FT_230_data 
	= vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__regfile
	[(0x1fU & (IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__command_regno))];
    vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_307 
	= ((0x3cU == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr))
	    ? vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbdata
	    : 0U);
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_267 
	= ((vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_262 
	    << 6U) | (QData)((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_258)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_271 
	= (0x7fU & ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_270) 
		    + (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_valid)));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_4 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_328)
	    ? (vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_pc 
	       - (IData)(4U)) : vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mepc);
    vlTOPp->Top__DOT__tile__DOT__core_reset = ((IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__coreresetval) 
					       | (IData)(vlTOPp->reset));
    vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_395 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__sbcs_sbautoincrement) 
	   & (IData)(vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_valid));
    vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_423 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT__memreadfire) 
	   & (IData)(vlTOPp->Top__DOT__tile__DOT__memory__DOT___T_332));
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
    vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__if_pc_plus4 
	= ((IData)(4U) + vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__if_reg_pc);
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
    vlTOPp->Top__DOT__tile__DOT__debug_io_debugmem_req_bits_fcn 
	= ((~ (IData)(vlTOPp->Top__DOT__tile__DOT__debug__DOT___T_420)) 
	   & ((0x3cU == (0x7fU & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr)) 
	      & (2U == (3U & vlTOPp->Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))));
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
    vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT__take_evec 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_1092) 
	   | (IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr_io_eret));
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
    vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT___GEN_0 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__cpath_io_imem_req_valid)
	    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath_io_imem_req_bits_pc
	    : ((IData)(4U) + vlTOPp->Top__DOT__tile__DOT__core__DOT__frontend__DOT__if_reg_pc));
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_63 
	= ((0xf0f0f0fU & (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_53 
			  >> 4U)) | (0xf0f0f0f0U & 
				     (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_53 
				      << 4U)));
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
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_73 
	= ((0x33333333U & (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_63 
			   >> 2U)) | (0xccccccccU & 
				      (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_63 
				       << 2U)));
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
    vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT__shin 
	= ((IData)(vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_32)
	    ? vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu_io_in1
	    : ((0x55555555U & (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_73 
			       >> 1U)) | (0xaaaaaaaaU 
					  & (vlTOPp->Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_73 
					     << 1U))));
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

void VTop::_eval_initial(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_eval_initial\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VTop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::final\n"); );
    // Variables
    VTop__Syms* __restrict vlSymsp = this->__VlSymsp;
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VTop::_eval_settle(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_eval_settle\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VTop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_success = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core_reset = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__debug_io_dmi_resp_valid = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__debug_io_debugmem_req_bits_fcn = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__cpath_io_imem_req_valid = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_pc_sel = VL_RAND_RESET_I(3);
    Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_op1_sel = VL_RAND_RESET_I(2);
    Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_op2_sel = VL_RAND_RESET_I(2);
    Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_alu_fun = VL_RAND_RESET_I(4);
    Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_dmem_typ = VL_RAND_RESET_I(3);
    Top__DOT__tile__DOT__core__DOT__cpath_io_ctl_exception = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__dpath_io_imem_req_bits_pc = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__dpath_io_dmem_req_bits_fcn = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__dpath_io_dat_br_eq = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__dpath_io_dat_br_lt = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__dpath_io_dat_br_ltu = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__frontend__DOT__if_reg_valid = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__frontend__DOT__if_reg_pc = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_valid = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_pc = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__frontend__DOT__exe_reg_inst = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__frontend__DOT__if_pc_plus4 = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__frontend__DOT___GEN_0 = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__frontend__DOT___T_145 = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_368 = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_385 = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_426 = VL_RAND_RESET_I(4);
    Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_441 = VL_RAND_RESET_I(4);
    Top__DOT__tile__DOT__core__DOT__cpath__DOT__cs_br_type = VL_RAND_RESET_I(4);
    Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_484 = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_518 = VL_RAND_RESET_I(2);
    Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_533 = VL_RAND_RESET_I(2);
    Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_579 = VL_RAND_RESET_I(2);
    Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_594 = VL_RAND_RESET_I(2);
    Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_616 = VL_RAND_RESET_I(4);
    Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_631 = VL_RAND_RESET_I(4);
    Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_665 = VL_RAND_RESET_I(2);
    Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_680 = VL_RAND_RESET_I(2);
    Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_717 = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_734 = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_779 = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_955 = VL_RAND_RESET_I(3);
    Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_970 = VL_RAND_RESET_I(3);
    Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_985 = VL_RAND_RESET_I(3);
    Top__DOT__tile__DOT__core__DOT__cpath__DOT__cs0_7 = VL_RAND_RESET_I(3);
    Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_1066 = VL_RAND_RESET_I(3);
    Top__DOT__tile__DOT__core__DOT__cpath__DOT___T_1092 = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__cpath__DOT__take_evec = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
	    Top__DOT__tile__DOT__core__DOT__dpath__DOT__regfile[__Vi0] = VL_RAND_RESET_I(32);
    }}
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__regfile___05FT_230_data = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu_io_in2 = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu_io_in1 = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu_io_out = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr_io_eret = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_valid = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_ctrl_wb_sel = VL_RAND_RESET_I(2);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_ctrl_rf_wen = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_ctrl_bypassable = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_ctrl_csr_cmd = VL_RAND_RESET_I(3);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_alu = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_csr_addr = VL_RAND_RESET_I(12);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_reg_wbaddr = VL_RAND_RESET_I(5);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_215 = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_218 = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_223 = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_226 = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__wb_hazard_stall = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__imm_brjmp = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_399 = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__rf_rs2_data = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__imm_i_sext = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__exe_rs1_data = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_299 = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__exe_rs2_data = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_302 = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_307 = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_319 = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_328 = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__irt_reg = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_405 = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__debug_wb_inst = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_454 = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT___T_458 = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_20 = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT__sum = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_32 = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_43 = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_53 = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_63 = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_73 = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT__shin = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_89 = VL_RAND_RESET_Q(33);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_100 = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_110 = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_120 = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__alu__DOT___T_130 = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mstatus_prv = VL_RAND_RESET_I(2);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mstatus_mpie = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mstatus_mie = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mepc = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mcause = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mtval = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mscratch = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_medeleg = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mip_mtip = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mip_msip = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mie_mtip = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_mie_msip = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_258 = VL_RAND_RESET_I(6);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_262 = VL_RAND_RESET_Q(58);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_266 = VL_RAND_RESET_Q(58);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_267 = VL_RAND_RESET_Q(64);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_270 = VL_RAND_RESET_I(6);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_271 = VL_RAND_RESET_I(7);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_274 = VL_RAND_RESET_Q(58);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_278 = VL_RAND_RESET_Q(58);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_279 = VL_RAND_RESET_Q(64);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_282 = VL_RAND_RESET_Q(40);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_285 = VL_RAND_RESET_Q(40);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_288 = VL_RAND_RESET_Q(40);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_291 = VL_RAND_RESET_Q(40);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_294 = VL_RAND_RESET_Q(40);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_297 = VL_RAND_RESET_Q(40);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_300 = VL_RAND_RESET_Q(40);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_303 = VL_RAND_RESET_Q(40);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_306 = VL_RAND_RESET_Q(40);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_309 = VL_RAND_RESET_Q(40);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_312 = VL_RAND_RESET_Q(40);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_315 = VL_RAND_RESET_Q(40);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_318 = VL_RAND_RESET_Q(40);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_321 = VL_RAND_RESET_Q(40);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_324 = VL_RAND_RESET_Q(40);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_327 = VL_RAND_RESET_Q(40);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_330 = VL_RAND_RESET_Q(40);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_333 = VL_RAND_RESET_Q(40);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_336 = VL_RAND_RESET_Q(40);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_339 = VL_RAND_RESET_Q(40);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_342 = VL_RAND_RESET_Q(40);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_345 = VL_RAND_RESET_Q(40);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_348 = VL_RAND_RESET_Q(40);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_351 = VL_RAND_RESET_Q(40);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_354 = VL_RAND_RESET_Q(40);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_357 = VL_RAND_RESET_Q(40);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_360 = VL_RAND_RESET_Q(40);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_363 = VL_RAND_RESET_Q(40);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_366 = VL_RAND_RESET_Q(40);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_369 = VL_RAND_RESET_Q(40);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_372 = VL_RAND_RESET_Q(40);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_375 = VL_RAND_RESET_Q(40);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_dpc = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_dscratch = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_dcsr_ebreakm = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__reg_dcsr_step = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__priv_sufficient = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__wdata = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__insn_call = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__insn_break = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT__insn_ret = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_4 = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1058 = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1063 = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1252 = VL_RAND_RESET_Q(64);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1265 = VL_RAND_RESET_Q(64);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1278 = VL_RAND_RESET_Q(64);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1291 = VL_RAND_RESET_Q(64);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1304 = VL_RAND_RESET_Q(64);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1317 = VL_RAND_RESET_Q(64);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1323 = VL_RAND_RESET_Q(64);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1580 = VL_RAND_RESET_Q(64);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1583 = VL_RAND_RESET_Q(64);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1587 = VL_RAND_RESET_Q(64);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___T_1590 = VL_RAND_RESET_Q(64);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_110 = VL_RAND_RESET_Q(41);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_111 = VL_RAND_RESET_Q(41);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_112 = VL_RAND_RESET_Q(41);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_113 = VL_RAND_RESET_Q(41);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_114 = VL_RAND_RESET_Q(41);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_115 = VL_RAND_RESET_Q(41);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_116 = VL_RAND_RESET_Q(41);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_117 = VL_RAND_RESET_Q(41);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_118 = VL_RAND_RESET_Q(41);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_119 = VL_RAND_RESET_Q(41);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_120 = VL_RAND_RESET_Q(41);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_121 = VL_RAND_RESET_Q(41);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_122 = VL_RAND_RESET_Q(41);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_123 = VL_RAND_RESET_Q(41);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_124 = VL_RAND_RESET_Q(41);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_125 = VL_RAND_RESET_Q(41);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_126 = VL_RAND_RESET_Q(41);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_127 = VL_RAND_RESET_Q(41);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_128 = VL_RAND_RESET_Q(41);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_129 = VL_RAND_RESET_Q(41);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_130 = VL_RAND_RESET_Q(41);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_131 = VL_RAND_RESET_Q(41);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_132 = VL_RAND_RESET_Q(41);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_133 = VL_RAND_RESET_Q(41);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_134 = VL_RAND_RESET_Q(41);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_135 = VL_RAND_RESET_Q(41);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_136 = VL_RAND_RESET_Q(41);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_137 = VL_RAND_RESET_Q(41);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_138 = VL_RAND_RESET_Q(41);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_139 = VL_RAND_RESET_Q(41);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_140 = VL_RAND_RESET_Q(41);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_141 = VL_RAND_RESET_Q(41);
    Top__DOT__tile__DOT__core__DOT__dpath__DOT__csr__DOT___GEN_142 = VL_RAND_RESET_Q(64);
    Top__DOT__tile__DOT__memory__DOT__sync_data_hr_data = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__memory__DOT__sync_data_dataInstr_0_data = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__memory__DOT__sync_data_dataInstr_1_data = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__memory__DOT__req_typi = VL_RAND_RESET_I(3);
    Top__DOT__tile__DOT__memory__DOT___T_313 = VL_RAND_RESET_Q(63);
    Top__DOT__tile__DOT__memory__DOT___T_327 = VL_RAND_RESET_I(5);
    Top__DOT__tile__DOT__memory__DOT___T_332 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<2097152; ++__Vi0) {
	    Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }}
    Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__regdataInstr_0_addr = VL_RAND_RESET_I(21);
    Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__regdataInstr_1_addr = VL_RAND_RESET_I(21);
    Top__DOT__tile__DOT__memory__DOT__sync_data__DOT__reghr_addr = VL_RAND_RESET_I(21);
    Top__DOT__tile__DOT__debug__DOT__dmstatus_allrunning = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__debug__DOT__dmstatus_allhalted = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__debug__DOT__sbcs_sbsingleread = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__debug__DOT__sbcs_sbaccess = VL_RAND_RESET_I(3);
    Top__DOT__tile__DOT__debug__DOT__sbcs_sbautoincrement = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__debug__DOT__sbcs_sbautoread = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__debug__DOT__sbcs_sberror = VL_RAND_RESET_I(3);
    Top__DOT__tile__DOT__debug__DOT__abstractcs_cmderr = VL_RAND_RESET_I(3);
    Top__DOT__tile__DOT__debug__DOT__command_postexec = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__debug__DOT__command_transfer = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__debug__DOT__command_write = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__debug__DOT__command_regno = VL_RAND_RESET_I(16);
    Top__DOT__tile__DOT__debug__DOT__dmcontrol_haltreq = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__debug__DOT__dmcontrol_resumereq = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__debug__DOT__dmcontrol_hartreset = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__debug__DOT__dmcontrol_ndmreset = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__debug__DOT__dmcontrol_dmactive = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__debug__DOT__data0 = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__debug__DOT__data1 = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__debug__DOT__data2 = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__debug__DOT__sbaddr = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__debug__DOT__sbdata = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__debug__DOT__memreadfire = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__debug__DOT__coreresetval = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__debug__DOT___T_307 = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__debug__DOT___T_316 = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__debug__DOT___T_324 = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__debug__DOT___T_333 = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__debug__DOT___T_395 = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__debug__DOT___T_398 = VL_RAND_RESET_I(32);
    Top__DOT__tile__DOT__debug__DOT___T_403 = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__debug__DOT__firstreaddone = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__debug__DOT___T_414 = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__debug__DOT___T_420 = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__debug__DOT___T_423 = VL_RAND_RESET_I(1);
    Top__DOT__tile__DOT__debug__DOT___T_433 = VL_RAND_RESET_I(1);
    Top__DOT__SimDTM__DOT__r_reset = 0;
    Top__DOT__SimDTM__DOT_____05Fdebug_req_ready = VL_RAND_RESET_I(1);
    Top__DOT__SimDTM__DOT_____05Fdebug_req_valid = 0;
    Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr = 0;
    Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_op = 0;
    Top__DOT__SimDTM__DOT_____05Fdebug_req_bits_data = 0;
    Top__DOT__SimDTM__DOT_____05Fexit = 0;
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
}
