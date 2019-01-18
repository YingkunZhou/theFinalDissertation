// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VInstDecoder__Syms.h"


//======================

void VInstDecoder::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VInstDecoder::traceInit, &VInstDecoder::traceFull, &VInstDecoder::traceChg, this);
}
void VInstDecoder::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VInstDecoder* t=(VInstDecoder*)userthis;
    VInstDecoder__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
	VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VInstDecoder::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VInstDecoder* t=(VInstDecoder*)userthis;
    VInstDecoder__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VInstDecoder::traceInitThis(VInstDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInstDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VInstDecoder::traceFullThis(VInstDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInstDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VInstDecoder::traceInitThis__1(VInstDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInstDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+2,"clock",-1);
	vcdp->declBit  (c+3,"reset",-1);
	vcdp->declBus  (c+4,"io_inst",-1,31,0);
	vcdp->declBus  (c+5,"io_aluOPCode",-1,3,0);
	vcdp->declBus  (c+6,"io_regInfos_0_regIdx",-1,4,0);
	vcdp->declBit  (c+7,"io_regInfos_0_need",-1);
	vcdp->declBus  (c+8,"io_regInfos_1_regIdx",-1,4,0);
	vcdp->declBit  (c+9,"io_regInfos_1_need",-1);
	vcdp->declBus  (c+10,"io_regInfos_2_regIdx",-1,4,0);
	vcdp->declBit  (c+11,"io_regInfos_2_need",-1);
	vcdp->declBus  (c+12,"io_regInfos_3_regIdx",-1,4,0);
	vcdp->declBit  (c+13,"io_regInfos_3_need",-1);
	vcdp->declBit  (c+2,"InstDecoder clock",-1);
	vcdp->declBit  (c+3,"InstDecoder reset",-1);
	vcdp->declBus  (c+4,"InstDecoder io_inst",-1,31,0);
	vcdp->declBus  (c+5,"InstDecoder io_aluOPCode",-1,3,0);
	vcdp->declBus  (c+6,"InstDecoder io_regInfos_0_regIdx",-1,4,0);
	vcdp->declBit  (c+7,"InstDecoder io_regInfos_0_need",-1);
	vcdp->declBus  (c+8,"InstDecoder io_regInfos_1_regIdx",-1,4,0);
	vcdp->declBit  (c+9,"InstDecoder io_regInfos_1_need",-1);
	vcdp->declBus  (c+10,"InstDecoder io_regInfos_2_regIdx",-1,4,0);
	vcdp->declBit  (c+11,"InstDecoder io_regInfos_2_need",-1);
	vcdp->declBus  (c+12,"InstDecoder io_regInfos_3_regIdx",-1,4,0);
	vcdp->declBit  (c+13,"InstDecoder io_regInfos_3_need",-1);
	vcdp->declBus  (c+14,"InstDecoder decoder_3_8_io_in",-1,2,0);
	vcdp->declBus  (c+1,"InstDecoder decoder_3_8_io_out",-1,7,0);
	vcdp->declBit  (c+15,"InstDecoder alu_op_encoder_io_in_1",-1);
	vcdp->declBit  (c+16,"InstDecoder alu_op_encoder_io_in_2",-1);
	vcdp->declBit  (c+17,"InstDecoder alu_op_encoder_io_in_3",-1);
	vcdp->declBit  (c+18,"InstDecoder alu_op_encoder_io_in_4",-1);
	vcdp->declBit  (c+19,"InstDecoder alu_op_encoder_io_in_5",-1);
	vcdp->declBit  (c+20,"InstDecoder alu_op_encoder_io_in_6",-1);
	vcdp->declBit  (c+21,"InstDecoder alu_op_encoder_io_in_7",-1);
	vcdp->declBit  (c+22,"InstDecoder alu_op_encoder_io_in_8",-1);
	vcdp->declBit  (c+23,"InstDecoder alu_op_encoder_io_in_9",-1);
	vcdp->declBit  (c+24,"InstDecoder alu_op_encoder_io_in_10",-1);
	vcdp->declBit  (c+25,"InstDecoder alu_op_encoder_io_in_11",-1);
	vcdp->declBit  (c+26,"InstDecoder alu_op_encoder_io_in_12",-1);
	vcdp->declBit  (c+27,"InstDecoder alu_op_encoder_io_in_13",-1);
	vcdp->declBit  (c+28,"InstDecoder alu_op_encoder_io_in_14",-1);
	vcdp->declBus  (c+29,"InstDecoder alu_op_encoder_io_out",-1,3,0);
	// Tracing: InstDecoder _T_37 // Ignored: Inlined leading underscore at InstDecoder.v:157
	vcdp->declBit  (c+30,"InstDecoder func7_op_0",-1);
	vcdp->declBit  (c+31,"InstDecoder func7_op_100000",-1);
	// Tracing: InstDecoder _T_41 // Ignored: Inlined leading underscore at InstDecoder.v:160
	vcdp->declBit  (c+32,"InstDecoder func6_op_0",-1);
	vcdp->declBit  (c+33,"InstDecoder func6_op_10000",-1);
	// Tracing: InstDecoder _T_63 // Ignored: Inlined leading underscore at InstDecoder.v:163
	vcdp->declBit  (c+34,"InstDecoder inst_I",-1);
	vcdp->declBit  (c+35,"InstDecoder inst_R",-1);
	vcdp->declBit  (c+36,"InstDecoder inst_IW",-1);
	vcdp->declBit  (c+37,"InstDecoder inst_RW",-1);
	// Tracing: InstDecoder _T_94 // Ignored: Inlined leading underscore at InstDecoder.v:168
	// Tracing: InstDecoder _T_98 // Ignored: Inlined leading underscore at InstDecoder.v:169
	// Tracing: InstDecoder _T_100 // Ignored: Inlined leading underscore at InstDecoder.v:170
	// Tracing: InstDecoder _T_102 // Ignored: Inlined leading underscore at InstDecoder.v:171
	// Tracing: InstDecoder _T_104 // Ignored: Inlined leading underscore at InstDecoder.v:172
	// Tracing: InstDecoder _T_106 // Ignored: Inlined leading underscore at InstDecoder.v:173
	// Tracing: InstDecoder _T_112 // Ignored: Inlined leading underscore at InstDecoder.v:174
	// Tracing: InstDecoder _T_114 // Ignored: Inlined leading underscore at InstDecoder.v:175
	vcdp->declBit  (c+38,"InstDecoder inst_SLTI",-1);
	vcdp->declBit  (c+39,"InstDecoder inst_SLTIU",-1);
	vcdp->declBit  (c+40,"InstDecoder inst_XORI",-1);
	vcdp->declBit  (c+41,"InstDecoder inst_ORI",-1);
	vcdp->declBit  (c+42,"InstDecoder inst_ANDI",-1);
	// Tracing: InstDecoder _T_144 // Ignored: Inlined leading underscore at InstDecoder.v:181
	vcdp->declBit  (c+43,"InstDecoder inst_SLLI",-1);
	// Tracing: InstDecoder _T_147 // Ignored: Inlined leading underscore at InstDecoder.v:183
	vcdp->declBit  (c+44,"InstDecoder inst_SRLI",-1);
	vcdp->declBit  (c+45,"InstDecoder inst_SRAI",-1);
	// Tracing: InstDecoder _T_153 // Ignored: Inlined leading underscore at InstDecoder.v:186
	// Tracing: InstDecoder _T_159 // Ignored: Inlined leading underscore at InstDecoder.v:187
	vcdp->declBit  (c+46,"InstDecoder inst_SLL",-1);
	// Tracing: InstDecoder _T_162 // Ignored: Inlined leading underscore at InstDecoder.v:189
	vcdp->declBit  (c+47,"InstDecoder inst_SLT",-1);
	// Tracing: InstDecoder _T_165 // Ignored: Inlined leading underscore at InstDecoder.v:191
	vcdp->declBit  (c+48,"InstDecoder inst_SLTU",-1);
	// Tracing: InstDecoder _T_168 // Ignored: Inlined leading underscore at InstDecoder.v:193
	vcdp->declBit  (c+49,"InstDecoder inst_XOR",-1);
	// Tracing: InstDecoder _T_171 // Ignored: Inlined leading underscore at InstDecoder.v:195
	vcdp->declBit  (c+50,"InstDecoder inst_SRL",-1);
	vcdp->declBit  (c+51,"InstDecoder inst_SRA",-1);
	// Tracing: InstDecoder _T_177 // Ignored: Inlined leading underscore at InstDecoder.v:198
	vcdp->declBit  (c+52,"InstDecoder inst_OR",-1);
	// Tracing: InstDecoder _T_180 // Ignored: Inlined leading underscore at InstDecoder.v:200
	vcdp->declBit  (c+53,"InstDecoder inst_AND",-1);
	vcdp->declBit  (c+54,"InstDecoder inst_ADDIW",-1);
	// Tracing: InstDecoder _T_185 // Ignored: Inlined leading underscore at InstDecoder.v:203
	vcdp->declBit  (c+55,"InstDecoder inst_SLLIW",-1);
	// Tracing: InstDecoder _T_188 // Ignored: Inlined leading underscore at InstDecoder.v:205
	vcdp->declBit  (c+56,"InstDecoder inst_SRLIW",-1);
	vcdp->declBit  (c+57,"InstDecoder inst_SRAIW",-1);
	// Tracing: InstDecoder _T_194 // Ignored: Inlined leading underscore at InstDecoder.v:208
	vcdp->declBit  (c+58,"InstDecoder inst_ADDW",-1);
	// Tracing: InstDecoder _T_200 // Ignored: Inlined leading underscore at InstDecoder.v:210
	vcdp->declBit  (c+59,"InstDecoder inst_SLLW",-1);
	// Tracing: InstDecoder _T_203 // Ignored: Inlined leading underscore at InstDecoder.v:212
	vcdp->declBit  (c+60,"InstDecoder inst_SRLW",-1);
	vcdp->declBit  (c+61,"InstDecoder inst_SRAW",-1);
	vcdp->declBus  (c+14,"InstDecoder decoder_3_8 io_in",-1,2,0);
	vcdp->declBus  (c+1,"InstDecoder decoder_3_8 io_out",-1,7,0);
	vcdp->declBit  (c+62,"InstDecoder decoder_3_8 bools_0",-1);
	vcdp->declBit  (c+63,"InstDecoder decoder_3_8 bools_1",-1);
	vcdp->declBit  (c+64,"InstDecoder decoder_3_8 bools_2",-1);
	vcdp->declBit  (c+65,"InstDecoder decoder_3_8 bools_3",-1);
	vcdp->declBit  (c+66,"InstDecoder decoder_3_8 bools_4",-1);
	vcdp->declBit  (c+67,"InstDecoder decoder_3_8 bools_5",-1);
	vcdp->declBit  (c+68,"InstDecoder decoder_3_8 bools_6",-1);
	vcdp->declBit  (c+69,"InstDecoder decoder_3_8 bools_7",-1);
	// Tracing: InstDecoder decoder_3_8 _T_40 // Ignored: Inlined leading underscore at InstDecoder.v:13
	// Tracing: InstDecoder decoder_3_8 _T_43 // Ignored: Inlined leading underscore at InstDecoder.v:14
	vcdp->declBit  (c+15,"InstDecoder alu_op_encoder io_in_1",-1);
	vcdp->declBit  (c+16,"InstDecoder alu_op_encoder io_in_2",-1);
	vcdp->declBit  (c+17,"InstDecoder alu_op_encoder io_in_3",-1);
	vcdp->declBit  (c+18,"InstDecoder alu_op_encoder io_in_4",-1);
	vcdp->declBit  (c+19,"InstDecoder alu_op_encoder io_in_5",-1);
	vcdp->declBit  (c+20,"InstDecoder alu_op_encoder io_in_6",-1);
	vcdp->declBit  (c+21,"InstDecoder alu_op_encoder io_in_7",-1);
	vcdp->declBit  (c+22,"InstDecoder alu_op_encoder io_in_8",-1);
	vcdp->declBit  (c+23,"InstDecoder alu_op_encoder io_in_9",-1);
	vcdp->declBit  (c+24,"InstDecoder alu_op_encoder io_in_10",-1);
	vcdp->declBit  (c+25,"InstDecoder alu_op_encoder io_in_11",-1);
	vcdp->declBit  (c+26,"InstDecoder alu_op_encoder io_in_12",-1);
	vcdp->declBit  (c+27,"InstDecoder alu_op_encoder io_in_13",-1);
	vcdp->declBit  (c+28,"InstDecoder alu_op_encoder io_in_14",-1);
	vcdp->declBus  (c+29,"InstDecoder alu_op_encoder io_out",-1,3,0);
	// Tracing: InstDecoder alu_op_encoder _T_74 // Ignored: Inlined leading underscore at InstDecoder.v:44
	// Tracing: InstDecoder alu_op_encoder _T_76 // Ignored: Inlined leading underscore at InstDecoder.v:45
	// Tracing: InstDecoder alu_op_encoder _T_89 // Ignored: Inlined leading underscore at InstDecoder.v:46
	// Tracing: InstDecoder alu_op_encoder _T_91 // Ignored: Inlined leading underscore at InstDecoder.v:47
	// Tracing: InstDecoder alu_op_encoder _T_104 // Ignored: Inlined leading underscore at InstDecoder.v:48
	// Tracing: InstDecoder alu_op_encoder _T_106 // Ignored: Inlined leading underscore at InstDecoder.v:49
	// Tracing: InstDecoder alu_op_encoder _T_119 // Ignored: Inlined leading underscore at InstDecoder.v:50
	// Tracing: InstDecoder alu_op_encoder _T_121 // Ignored: Inlined leading underscore at InstDecoder.v:51
	// Tracing: InstDecoder alu_op_encoder _T_134 // Ignored: Inlined leading underscore at InstDecoder.v:52
	// Tracing: InstDecoder alu_op_encoder _T_136 // Ignored: Inlined leading underscore at InstDecoder.v:53
	// Tracing: InstDecoder alu_op_encoder _T_149 // Ignored: Inlined leading underscore at InstDecoder.v:54
	// Tracing: InstDecoder alu_op_encoder _T_151 // Ignored: Inlined leading underscore at InstDecoder.v:55
	// Tracing: InstDecoder alu_op_encoder _T_164 // Ignored: Inlined leading underscore at InstDecoder.v:56
	// Tracing: InstDecoder alu_op_encoder _T_166 // Ignored: Inlined leading underscore at InstDecoder.v:57
	// Tracing: InstDecoder alu_op_encoder _T_179 // Ignored: Inlined leading underscore at InstDecoder.v:58
	// Tracing: InstDecoder alu_op_encoder _T_181 // Ignored: Inlined leading underscore at InstDecoder.v:59
	// Tracing: InstDecoder alu_op_encoder _T_194 // Ignored: Inlined leading underscore at InstDecoder.v:60
	// Tracing: InstDecoder alu_op_encoder _T_196 // Ignored: Inlined leading underscore at InstDecoder.v:61
	// Tracing: InstDecoder alu_op_encoder _T_209 // Ignored: Inlined leading underscore at InstDecoder.v:62
	// Tracing: InstDecoder alu_op_encoder _T_211 // Ignored: Inlined leading underscore at InstDecoder.v:63
	// Tracing: InstDecoder alu_op_encoder _T_224 // Ignored: Inlined leading underscore at InstDecoder.v:64
	// Tracing: InstDecoder alu_op_encoder _T_226 // Ignored: Inlined leading underscore at InstDecoder.v:65
	// Tracing: InstDecoder alu_op_encoder _T_239 // Ignored: Inlined leading underscore at InstDecoder.v:66
	// Tracing: InstDecoder alu_op_encoder _T_241 // Ignored: Inlined leading underscore at InstDecoder.v:67
	// Tracing: InstDecoder alu_op_encoder _T_254 // Ignored: Inlined leading underscore at InstDecoder.v:68
	// Tracing: InstDecoder alu_op_encoder _T_256 // Ignored: Inlined leading underscore at InstDecoder.v:69
	// Tracing: InstDecoder alu_op_encoder _T_269 // Ignored: Inlined leading underscore at InstDecoder.v:70
	// Tracing: InstDecoder alu_op_encoder _T_271 // Ignored: Inlined leading underscore at InstDecoder.v:71
	// Tracing: InstDecoder alu_op_encoder _T_273 // Ignored: Inlined leading underscore at InstDecoder.v:72
	// Tracing: InstDecoder alu_op_encoder _T_274 // Ignored: Inlined leading underscore at InstDecoder.v:73
	// Tracing: InstDecoder alu_op_encoder _T_275 // Ignored: Inlined leading underscore at InstDecoder.v:74
	// Tracing: InstDecoder alu_op_encoder _T_276 // Ignored: Inlined leading underscore at InstDecoder.v:75
	// Tracing: InstDecoder alu_op_encoder _T_277 // Ignored: Inlined leading underscore at InstDecoder.v:76
	// Tracing: InstDecoder alu_op_encoder _T_278 // Ignored: Inlined leading underscore at InstDecoder.v:77
	// Tracing: InstDecoder alu_op_encoder _T_279 // Ignored: Inlined leading underscore at InstDecoder.v:78
	// Tracing: InstDecoder alu_op_encoder _T_280 // Ignored: Inlined leading underscore at InstDecoder.v:79
	// Tracing: InstDecoder alu_op_encoder _T_281 // Ignored: Inlined leading underscore at InstDecoder.v:80
	// Tracing: InstDecoder alu_op_encoder _T_282 // Ignored: Inlined leading underscore at InstDecoder.v:81
	// Tracing: InstDecoder alu_op_encoder _T_283 // Ignored: Inlined leading underscore at InstDecoder.v:82
	// Tracing: InstDecoder alu_op_encoder _T_284 // Ignored: Inlined leading underscore at InstDecoder.v:83
    }
}

void VInstDecoder::traceFullThis__1(VInstDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInstDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out),8);
	vcdp->fullBit  (c+2,(vlTOPp->clock));
	vcdp->fullBit  (c+3,(vlTOPp->reset));
	vcdp->fullBus  (c+4,(vlTOPp->io_inst),32);
	vcdp->fullBus  (c+5,(vlTOPp->io_aluOPCode),4);
	vcdp->fullBus  (c+6,(vlTOPp->io_regInfos_0_regIdx),5);
	vcdp->fullBit  (c+7,(vlTOPp->io_regInfos_0_need));
	vcdp->fullBus  (c+8,(vlTOPp->io_regInfos_1_regIdx),5);
	vcdp->fullBit  (c+9,(vlTOPp->io_regInfos_1_need));
	vcdp->fullBus  (c+10,(vlTOPp->io_regInfos_2_regIdx),5);
	vcdp->fullBit  (c+11,(vlTOPp->io_regInfos_2_need));
	vcdp->fullBus  (c+12,(vlTOPp->io_regInfos_3_regIdx),5);
	vcdp->fullBit  (c+13,(vlTOPp->io_regInfos_3_need));
	vcdp->fullBus  (c+14,((7U & (vlTOPp->io_inst 
				     >> 0xcU))),3);
	vcdp->fullBit  (c+15,((((0xcU == (0x1fU & (vlTOPp->io_inst 
						   >> 2U))) 
				& (IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out)) 
			       & (0x20U == (0x7fU & 
					    (vlTOPp->io_inst 
					     >> 0x19U))))));
	vcdp->fullBit  (c+16,((((4U == (0x1fU & (vlTOPp->io_inst 
						 >> 2U))) 
				& ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				   >> 2U)) | (((0xcU 
						== 
						(0x1fU 
						 & (vlTOPp->io_inst 
						    >> 2U))) 
					       & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
						  >> 2U)) 
					      & (0U 
						 == 
						 (0x7fU 
						  & (vlTOPp->io_inst 
						     >> 0x19U)))))));
	vcdp->fullBit  (c+17,((((4U == (0x1fU & (vlTOPp->io_inst 
						 >> 2U))) 
				& ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				   >> 3U)) | (((0xcU 
						== 
						(0x1fU 
						 & (vlTOPp->io_inst 
						    >> 2U))) 
					       & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
						  >> 3U)) 
					      & (0U 
						 == 
						 (0x7fU 
						  & (vlTOPp->io_inst 
						     >> 0x19U)))))));
	vcdp->fullBit  (c+18,((((4U == (0x1fU & (vlTOPp->io_inst 
						 >> 2U))) 
				& ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				   >> 4U)) | (((0xcU 
						== 
						(0x1fU 
						 & (vlTOPp->io_inst 
						    >> 2U))) 
					       & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
						  >> 4U)) 
					      & (0U 
						 == 
						 (0x7fU 
						  & (vlTOPp->io_inst 
						     >> 0x19U)))))));
	vcdp->fullBit  (c+19,((((4U == (0x1fU & (vlTOPp->io_inst 
						 >> 2U))) 
				& ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				   >> 6U)) | (((0xcU 
						== 
						(0x1fU 
						 & (vlTOPp->io_inst 
						    >> 2U))) 
					       & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
						  >> 6U)) 
					      & (0U 
						 == 
						 (0x7fU 
						  & (vlTOPp->io_inst 
						     >> 0x19U)))))));
	vcdp->fullBit  (c+20,((((4U == (0x1fU & (vlTOPp->io_inst 
						 >> 2U))) 
				& ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				   >> 7U)) | (((0xcU 
						== 
						(0x1fU 
						 & (vlTOPp->io_inst 
						    >> 2U))) 
					       & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
						  >> 7U)) 
					      & (0U 
						 == 
						 (0x7fU 
						  & (vlTOPp->io_inst 
						     >> 0x19U)))))));
	vcdp->fullBit  (c+21,(((((4U == (0x1fU & (vlTOPp->io_inst 
						  >> 2U))) 
				 & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				    >> 1U)) & (0U == 
					       (0x3fU 
						& (vlTOPp->io_inst 
						   >> 0x1aU)))) 
			       | (((0xcU == (0x1fU 
					     & (vlTOPp->io_inst 
						>> 2U))) 
				   & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				      >> 1U)) & (0U 
						 == 
						 (0x7fU 
						  & (vlTOPp->io_inst 
						     >> 0x19U)))))));
	vcdp->fullBit  (c+22,((((IData)(vlTOPp->InstDecoder__DOT___T_147) 
				& (0U == (0x3fU & (vlTOPp->io_inst 
						   >> 0x1aU)))) 
			       | ((IData)(vlTOPp->InstDecoder__DOT___T_171) 
				  & (0U == (0x7fU & 
					    (vlTOPp->io_inst 
					     >> 0x19U)))))));
	vcdp->fullBit  (c+23,((((IData)(vlTOPp->InstDecoder__DOT___T_147) 
				& (0x10U == (0x3fU 
					     & (vlTOPp->io_inst 
						>> 0x1aU)))) 
			       | ((IData)(vlTOPp->InstDecoder__DOT___T_171) 
				  & (0x20U == (0x7fU 
					       & (vlTOPp->io_inst 
						  >> 0x19U)))))));
	vcdp->fullBit  (c+24,((((6U == (0x1fU & (vlTOPp->io_inst 
						 >> 2U))) 
				& (IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out)) 
			       | ((IData)(vlTOPp->InstDecoder__DOT___T_194) 
				  & (0U == (0x7fU & 
					    (vlTOPp->io_inst 
					     >> 0x19U)))))));
	vcdp->fullBit  (c+25,(((IData)(vlTOPp->InstDecoder__DOT___T_194) 
			       & (0x20U == (0x7fU & 
					    (vlTOPp->io_inst 
					     >> 0x19U))))));
	vcdp->fullBit  (c+26,(((((6U == (0x1fU & (vlTOPp->io_inst 
						  >> 2U))) 
				 & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				    >> 1U)) & (0U == 
					       (0x7fU 
						& (vlTOPp->io_inst 
						   >> 0x19U)))) 
			       | (((0xeU == (0x1fU 
					     & (vlTOPp->io_inst 
						>> 2U))) 
				   & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				      >> 1U)) & (0U 
						 == 
						 (0x7fU 
						  & (vlTOPp->io_inst 
						     >> 0x19U)))))));
	vcdp->fullBit  (c+27,((((IData)(vlTOPp->InstDecoder__DOT___T_188) 
				& (0U == (0x7fU & (vlTOPp->io_inst 
						   >> 0x19U)))) 
			       | ((IData)(vlTOPp->InstDecoder__DOT___T_203) 
				  & (0U == (0x7fU & 
					    (vlTOPp->io_inst 
					     >> 0x19U)))))));
	vcdp->fullBit  (c+28,((((IData)(vlTOPp->InstDecoder__DOT___T_188) 
				& (0x20U == (0x7fU 
					     & (vlTOPp->io_inst 
						>> 0x19U)))) 
			       | ((IData)(vlTOPp->InstDecoder__DOT___T_203) 
				  & (0x20U == (0x7fU 
					       & (vlTOPp->io_inst 
						  >> 0x19U)))))));
	vcdp->fullBus  (c+29,((((IData)(vlTOPp->InstDecoder__DOT__alu_op_encoder__DOT___T_283) 
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
	vcdp->fullBit  (c+30,((0U == (0x7fU & (vlTOPp->io_inst 
					       >> 0x19U)))));
	vcdp->fullBit  (c+31,((0x20U == (0x7fU & (vlTOPp->io_inst 
						  >> 0x19U)))));
	vcdp->fullBit  (c+32,((0U == (0x3fU & (vlTOPp->io_inst 
					       >> 0x1aU)))));
	vcdp->fullBit  (c+33,((0x10U == (0x3fU & (vlTOPp->io_inst 
						  >> 0x1aU)))));
	vcdp->fullBit  (c+34,((4U == (0x1fU & (vlTOPp->io_inst 
					       >> 2U)))));
	vcdp->fullBit  (c+35,((0xcU == (0x1fU & (vlTOPp->io_inst 
						 >> 2U)))));
	vcdp->fullBit  (c+36,((6U == (0x1fU & (vlTOPp->io_inst 
					       >> 2U)))));
	vcdp->fullBit  (c+37,((0xeU == (0x1fU & (vlTOPp->io_inst 
						 >> 2U)))));
	vcdp->fullBit  (c+38,(((4U == (0x1fU & (vlTOPp->io_inst 
						>> 2U))) 
			       & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				  >> 2U))));
	vcdp->fullBit  (c+39,(((4U == (0x1fU & (vlTOPp->io_inst 
						>> 2U))) 
			       & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				  >> 3U))));
	vcdp->fullBit  (c+40,(((4U == (0x1fU & (vlTOPp->io_inst 
						>> 2U))) 
			       & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				  >> 4U))));
	vcdp->fullBit  (c+41,(((4U == (0x1fU & (vlTOPp->io_inst 
						>> 2U))) 
			       & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				  >> 6U))));
	vcdp->fullBit  (c+42,(((4U == (0x1fU & (vlTOPp->io_inst 
						>> 2U))) 
			       & ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				  >> 7U))));
	vcdp->fullBit  (c+43,((((4U == (0x1fU & (vlTOPp->io_inst 
						 >> 2U))) 
				& ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				   >> 1U)) & (0U == 
					      (0x3fU 
					       & (vlTOPp->io_inst 
						  >> 0x1aU))))));
	vcdp->fullBit  (c+44,(((IData)(vlTOPp->InstDecoder__DOT___T_147) 
			       & (0U == (0x3fU & (vlTOPp->io_inst 
						  >> 0x1aU))))));
	vcdp->fullBit  (c+45,(((IData)(vlTOPp->InstDecoder__DOT___T_147) 
			       & (0x10U == (0x3fU & 
					    (vlTOPp->io_inst 
					     >> 0x1aU))))));
	vcdp->fullBit  (c+46,((((0xcU == (0x1fU & (vlTOPp->io_inst 
						   >> 2U))) 
				& ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				   >> 1U)) & (0U == 
					      (0x7fU 
					       & (vlTOPp->io_inst 
						  >> 0x19U))))));
	vcdp->fullBit  (c+47,((((0xcU == (0x1fU & (vlTOPp->io_inst 
						   >> 2U))) 
				& ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				   >> 2U)) & (0U == 
					      (0x7fU 
					       & (vlTOPp->io_inst 
						  >> 0x19U))))));
	vcdp->fullBit  (c+48,((((0xcU == (0x1fU & (vlTOPp->io_inst 
						   >> 2U))) 
				& ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				   >> 3U)) & (0U == 
					      (0x7fU 
					       & (vlTOPp->io_inst 
						  >> 0x19U))))));
	vcdp->fullBit  (c+49,((((0xcU == (0x1fU & (vlTOPp->io_inst 
						   >> 2U))) 
				& ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				   >> 4U)) & (0U == 
					      (0x7fU 
					       & (vlTOPp->io_inst 
						  >> 0x19U))))));
	vcdp->fullBit  (c+50,(((IData)(vlTOPp->InstDecoder__DOT___T_171) 
			       & (0U == (0x7fU & (vlTOPp->io_inst 
						  >> 0x19U))))));
	vcdp->fullBit  (c+51,(((IData)(vlTOPp->InstDecoder__DOT___T_171) 
			       & (0x20U == (0x7fU & 
					    (vlTOPp->io_inst 
					     >> 0x19U))))));
	vcdp->fullBit  (c+52,((((0xcU == (0x1fU & (vlTOPp->io_inst 
						   >> 2U))) 
				& ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				   >> 6U)) & (0U == 
					      (0x7fU 
					       & (vlTOPp->io_inst 
						  >> 0x19U))))));
	vcdp->fullBit  (c+53,((((0xcU == (0x1fU & (vlTOPp->io_inst 
						   >> 2U))) 
				& ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				   >> 7U)) & (0U == 
					      (0x7fU 
					       & (vlTOPp->io_inst 
						  >> 0x19U))))));
	vcdp->fullBit  (c+54,(((6U == (0x1fU & (vlTOPp->io_inst 
						>> 2U))) 
			       & (IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out))));
	vcdp->fullBit  (c+55,((((6U == (0x1fU & (vlTOPp->io_inst 
						 >> 2U))) 
				& ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				   >> 1U)) & (0U == 
					      (0x7fU 
					       & (vlTOPp->io_inst 
						  >> 0x19U))))));
	vcdp->fullBit  (c+56,(((IData)(vlTOPp->InstDecoder__DOT___T_188) 
			       & (0U == (0x7fU & (vlTOPp->io_inst 
						  >> 0x19U))))));
	vcdp->fullBit  (c+57,(((IData)(vlTOPp->InstDecoder__DOT___T_188) 
			       & (0x20U == (0x7fU & 
					    (vlTOPp->io_inst 
					     >> 0x19U))))));
	vcdp->fullBit  (c+58,(((IData)(vlTOPp->InstDecoder__DOT___T_194) 
			       & (0U == (0x7fU & (vlTOPp->io_inst 
						  >> 0x19U))))));
	vcdp->fullBit  (c+59,((((0xeU == (0x1fU & (vlTOPp->io_inst 
						   >> 2U))) 
				& ((IData)(vlTOPp->InstDecoder__DOT__decoder_3_8_io_out) 
				   >> 1U)) & (0U == 
					      (0x7fU 
					       & (vlTOPp->io_inst 
						  >> 0x19U))))));
	vcdp->fullBit  (c+60,(((IData)(vlTOPp->InstDecoder__DOT___T_203) 
			       & (0U == (0x7fU & (vlTOPp->io_inst 
						  >> 0x19U))))));
	vcdp->fullBit  (c+61,(((IData)(vlTOPp->InstDecoder__DOT___T_203) 
			       & (0x20U == (0x7fU & 
					    (vlTOPp->io_inst 
					     >> 0x19U))))));
	vcdp->fullBit  (c+62,((0U == (7U & (vlTOPp->io_inst 
					    >> 0xcU)))));
	vcdp->fullBit  (c+63,((1U == (7U & (vlTOPp->io_inst 
					    >> 0xcU)))));
	vcdp->fullBit  (c+64,((2U == (7U & (vlTOPp->io_inst 
					    >> 0xcU)))));
	vcdp->fullBit  (c+65,((3U == (7U & (vlTOPp->io_inst 
					    >> 0xcU)))));
	vcdp->fullBit  (c+66,((4U == (7U & (vlTOPp->io_inst 
					    >> 0xcU)))));
	vcdp->fullBit  (c+67,((5U == (7U & (vlTOPp->io_inst 
					    >> 0xcU)))));
	vcdp->fullBit  (c+68,((6U == (7U & (vlTOPp->io_inst 
					    >> 0xcU)))));
	vcdp->fullBit  (c+69,((7U == (7U & (vlTOPp->io_inst 
					    >> 0xcU)))));
    }
}
