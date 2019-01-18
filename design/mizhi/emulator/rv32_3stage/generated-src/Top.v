module FrontEnd( // @[:@3.2]
  input         clock, // @[:@4.4]
  input         reset, // @[:@5.4]
  input         io_cpu_req_valid, // @[:@6.4]
  input  [31:0] io_cpu_req_bits_pc, // @[:@6.4]
  input         io_cpu_resp_ready, // @[:@6.4]
  output        io_cpu_resp_valid, // @[:@6.4]
  output [31:0] io_cpu_resp_bits_pc, // @[:@6.4]
  output [31:0] io_cpu_resp_bits_inst, // @[:@6.4]
  output [31:0] io_cpu_debug_if_pc, // @[:@6.4]
  output [31:0] io_cpu_debug_if_inst, // @[:@6.4]
  output [31:0] io_imem_req_bits_addr, // @[:@6.4]
  input  [31:0] io_imem_resp_bits_data // @[:@6.4]
);
  reg  if_reg_valid; // @[Frontend.scala 82:29:@24.4]
  reg [31:0] _RAND_0;
  wire [32:0] _T_130; // @[Frontend.scala 83:38:@25.4]
  wire [32:0] _T_131; // @[Frontend.scala 83:38:@26.4]
  wire [31:0] _T_132; // @[Frontend.scala 83:38:@27.4]
  reg [31:0] if_reg_pc; // @[Frontend.scala 83:26:@28.4]
  reg [31:0] _RAND_1;
  reg  exe_reg_valid; // @[Frontend.scala 85:30:@29.4]
  reg [31:0] _RAND_2;
  reg [31:0] exe_reg_pc; // @[Frontend.scala 86:23:@30.4]
  reg [31:0] _RAND_3;
  reg [31:0] exe_reg_inst; // @[Frontend.scala 87:25:@31.4]
  reg [31:0] _RAND_4;
  wire [32:0] _T_142; // @[Frontend.scala 95:32:@35.4]
  wire [31:0] if_pc_plus4; // @[Frontend.scala 95:32:@36.4]
  wire [31:0] _GEN_0; // @[Frontend.scala 100:28:@39.6]
  wire [31:0] if_pc_next; // @[Frontend.scala 98:27:@37.4]
  wire [31:0] _GEN_2; // @[Frontend.scala 109:27:@46.4]
  wire  _GEN_3; // @[Frontend.scala 109:27:@46.4]
  wire  _T_144; // @[Frontend.scala 123:38:@55.6]
  wire  _T_145; // @[Frontend.scala 123:35:@56.6]
  wire  _GEN_4; // @[Frontend.scala 122:27:@54.4]
  assign _T_130 = 32'h80000000 - 32'h4; // @[Frontend.scala 83:38:@25.4]
  assign _T_131 = $unsigned(_T_130); // @[Frontend.scala 83:38:@26.4]
  assign _T_132 = _T_131[31:0]; // @[Frontend.scala 83:38:@27.4]
  assign _T_142 = if_reg_pc + 32'h4; // @[Frontend.scala 95:32:@35.4]
  assign if_pc_plus4 = if_reg_pc + 32'h4; // @[Frontend.scala 95:32:@36.4]
  assign _GEN_0 = io_cpu_req_valid ? io_cpu_req_bits_pc : if_pc_plus4; // @[Frontend.scala 100:28:@39.6]
  assign if_pc_next = io_cpu_resp_ready ? _GEN_0 : if_reg_pc; // @[Frontend.scala 98:27:@37.4]
  assign _GEN_2 = io_cpu_resp_ready ? if_pc_next : if_reg_pc; // @[Frontend.scala 109:27:@46.4]
  assign _GEN_3 = io_cpu_resp_ready ? 1'h1 : if_reg_valid; // @[Frontend.scala 109:27:@46.4]
  assign _T_144 = io_cpu_req_valid == 1'h0; // @[Frontend.scala 123:38:@55.6]
  assign _T_145 = if_reg_valid & _T_144; // @[Frontend.scala 123:35:@56.6]
  assign _GEN_4 = io_cpu_resp_ready ? _T_145 : exe_reg_valid; // @[Frontend.scala 122:27:@54.4]
  assign io_cpu_resp_valid = exe_reg_valid; // @[Frontend.scala 131:21:@61.4]
  assign io_cpu_resp_bits_pc = exe_reg_pc; // @[Frontend.scala 133:23:@63.4]
  assign io_cpu_resp_bits_inst = exe_reg_inst; // @[Frontend.scala 132:25:@62.4]
  assign io_cpu_debug_if_pc = if_reg_pc; // @[Frontend.scala 137:22:@64.4]
  assign io_cpu_debug_if_inst = io_imem_resp_bits_data; // @[Frontend.scala 138:24:@65.4]
  assign io_imem_req_bits_addr = io_cpu_resp_ready ? _GEN_0 : if_reg_pc; // @[Frontend.scala 115:25:@50.4]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  if_reg_valid = _RAND_0[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  if_reg_pc = _RAND_1[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  exe_reg_valid = _RAND_2[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  exe_reg_pc = _RAND_3[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  exe_reg_inst = _RAND_4[31:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      if_reg_valid <= 1'h0;
    end else begin
      if (io_cpu_resp_ready) begin
        if_reg_valid <= 1'h1;
      end
    end
    if (reset) begin
      if_reg_pc <= _T_132;
    end else begin
      if (io_cpu_resp_ready) begin
        if (io_cpu_resp_ready) begin
          if (io_cpu_req_valid) begin
            if_reg_pc <= io_cpu_req_bits_pc;
          end else begin
            if_reg_pc <= if_pc_plus4;
          end
        end
      end
    end
    if (reset) begin
      exe_reg_valid <= 1'h0;
    end else begin
      if (io_cpu_resp_ready) begin
        exe_reg_valid <= _T_145;
      end
    end
    if (io_cpu_resp_ready) begin
      exe_reg_pc <= if_reg_pc;
    end
    if (io_cpu_resp_ready) begin
      exe_reg_inst <= io_imem_resp_bits_data;
    end
  end
endmodule
module CtlPath( // @[:@67.2]
  input         clock, // @[:@68.4]
  output        io_imem_req_valid, // @[:@70.4]
  input         io_imem_resp_valid, // @[:@70.4]
  input  [31:0] io_imem_resp_bits_inst, // @[:@70.4]
  input         io_dat_br_eq, // @[:@70.4]
  input         io_dat_br_lt, // @[:@70.4]
  input         io_dat_br_ltu, // @[:@70.4]
  input         io_dat_csr_eret, // @[:@70.4]
  output        io_ctl_exe_kill, // @[:@70.4]
  output [2:0]  io_ctl_pc_sel, // @[:@70.4]
  output        io_ctl_brjmp_sel, // @[:@70.4]
  output [1:0]  io_ctl_op1_sel, // @[:@70.4]
  output [1:0]  io_ctl_op2_sel, // @[:@70.4]
  output [3:0]  io_ctl_alu_fun, // @[:@70.4]
  output [1:0]  io_ctl_wb_sel, // @[:@70.4]
  output        io_ctl_rf_wen, // @[:@70.4]
  output        io_ctl_bypassable, // @[:@70.4]
  output [2:0]  io_ctl_csr_cmd, // @[:@70.4]
  output        io_ctl_dmem_fcn, // @[:@70.4]
  output [2:0]  io_ctl_dmem_typ, // @[:@70.4]
  output        io_ctl_exception // @[:@70.4]
);
  wire [31:0] _T_152; // @[Lookup.scala 9:38:@107.4]
  wire  _T_153; // @[Lookup.scala 9:38:@108.4]
  wire  _T_157; // @[Lookup.scala 9:38:@110.4]
  wire  _T_161; // @[Lookup.scala 9:38:@112.4]
  wire  _T_165; // @[Lookup.scala 9:38:@114.4]
  wire  _T_169; // @[Lookup.scala 9:38:@116.4]
  wire  _T_173; // @[Lookup.scala 9:38:@118.4]
  wire  _T_177; // @[Lookup.scala 9:38:@120.4]
  wire  _T_181; // @[Lookup.scala 9:38:@122.4]
  wire [31:0] _T_184; // @[Lookup.scala 9:38:@123.4]
  wire  _T_185; // @[Lookup.scala 9:38:@124.4]
  wire  _T_189; // @[Lookup.scala 9:38:@126.4]
  wire  _T_193; // @[Lookup.scala 9:38:@128.4]
  wire  _T_197; // @[Lookup.scala 9:38:@130.4]
  wire  _T_201; // @[Lookup.scala 9:38:@132.4]
  wire  _T_205; // @[Lookup.scala 9:38:@134.4]
  wire  _T_209; // @[Lookup.scala 9:38:@136.4]
  wire  _T_213; // @[Lookup.scala 9:38:@138.4]
  wire [31:0] _T_216; // @[Lookup.scala 9:38:@139.4]
  wire  _T_217; // @[Lookup.scala 9:38:@140.4]
  wire  _T_221; // @[Lookup.scala 9:38:@142.4]
  wire  _T_225; // @[Lookup.scala 9:38:@144.4]
  wire [31:0] _T_228; // @[Lookup.scala 9:38:@145.4]
  wire  _T_229; // @[Lookup.scala 9:38:@146.4]
  wire  _T_233; // @[Lookup.scala 9:38:@148.4]
  wire  _T_237; // @[Lookup.scala 9:38:@150.4]
  wire  _T_241; // @[Lookup.scala 9:38:@152.4]
  wire  _T_245; // @[Lookup.scala 9:38:@154.4]
  wire  _T_249; // @[Lookup.scala 9:38:@156.4]
  wire  _T_253; // @[Lookup.scala 9:38:@158.4]
  wire  _T_257; // @[Lookup.scala 9:38:@160.4]
  wire  _T_261; // @[Lookup.scala 9:38:@162.4]
  wire  _T_265; // @[Lookup.scala 9:38:@164.4]
  wire  _T_269; // @[Lookup.scala 9:38:@166.4]
  wire  _T_273; // @[Lookup.scala 9:38:@168.4]
  wire  _T_277; // @[Lookup.scala 9:38:@170.4]
  wire  _T_281; // @[Lookup.scala 9:38:@172.4]
  wire  _T_285; // @[Lookup.scala 9:38:@174.4]
  wire  _T_289; // @[Lookup.scala 9:38:@176.4]
  wire  _T_293; // @[Lookup.scala 9:38:@178.4]
  wire  _T_297; // @[Lookup.scala 9:38:@180.4]
  wire  _T_301; // @[Lookup.scala 9:38:@182.4]
  wire  _T_305; // @[Lookup.scala 9:38:@184.4]
  wire  _T_309; // @[Lookup.scala 9:38:@186.4]
  wire  _T_313; // @[Lookup.scala 9:38:@188.4]
  wire  _T_317; // @[Lookup.scala 9:38:@190.4]
  wire  _T_321; // @[Lookup.scala 9:38:@192.4]
  wire  _T_325; // @[Lookup.scala 9:38:@194.4]
  wire  _T_329; // @[Lookup.scala 9:38:@196.4]
  wire  _T_333; // @[Lookup.scala 9:38:@198.4]
  wire  _T_337; // @[Lookup.scala 9:38:@200.4]
  wire  _T_341; // @[Lookup.scala 9:38:@202.4]
  wire  _T_345; // @[Lookup.scala 9:38:@204.4]
  wire  _T_349; // @[Lookup.scala 9:38:@206.4]
  wire  _T_351; // @[Lookup.scala 11:37:@208.4]
  wire  _T_352; // @[Lookup.scala 11:37:@209.4]
  wire  _T_353; // @[Lookup.scala 11:37:@210.4]
  wire  _T_354; // @[Lookup.scala 11:37:@211.4]
  wire  _T_355; // @[Lookup.scala 11:37:@212.4]
  wire  _T_356; // @[Lookup.scala 11:37:@213.4]
  wire  _T_357; // @[Lookup.scala 11:37:@214.4]
  wire  _T_358; // @[Lookup.scala 11:37:@215.4]
  wire  _T_359; // @[Lookup.scala 11:37:@216.4]
  wire  _T_360; // @[Lookup.scala 11:37:@217.4]
  wire  _T_361; // @[Lookup.scala 11:37:@218.4]
  wire  _T_362; // @[Lookup.scala 11:37:@219.4]
  wire  _T_363; // @[Lookup.scala 11:37:@220.4]
  wire  _T_364; // @[Lookup.scala 11:37:@221.4]
  wire  _T_365; // @[Lookup.scala 11:37:@222.4]
  wire  _T_366; // @[Lookup.scala 11:37:@223.4]
  wire  _T_367; // @[Lookup.scala 11:37:@224.4]
  wire  _T_368; // @[Lookup.scala 11:37:@225.4]
  wire  _T_369; // @[Lookup.scala 11:37:@226.4]
  wire  _T_370; // @[Lookup.scala 11:37:@227.4]
  wire  _T_371; // @[Lookup.scala 11:37:@228.4]
  wire  _T_372; // @[Lookup.scala 11:37:@229.4]
  wire  _T_373; // @[Lookup.scala 11:37:@230.4]
  wire  _T_374; // @[Lookup.scala 11:37:@231.4]
  wire  _T_375; // @[Lookup.scala 11:37:@232.4]
  wire  _T_376; // @[Lookup.scala 11:37:@233.4]
  wire  _T_377; // @[Lookup.scala 11:37:@234.4]
  wire  _T_378; // @[Lookup.scala 11:37:@235.4]
  wire  _T_379; // @[Lookup.scala 11:37:@236.4]
  wire  _T_380; // @[Lookup.scala 11:37:@237.4]
  wire  _T_381; // @[Lookup.scala 11:37:@238.4]
  wire  _T_382; // @[Lookup.scala 11:37:@239.4]
  wire  _T_383; // @[Lookup.scala 11:37:@240.4]
  wire  _T_384; // @[Lookup.scala 11:37:@241.4]
  wire  _T_385; // @[Lookup.scala 11:37:@242.4]
  wire  _T_386; // @[Lookup.scala 11:37:@243.4]
  wire  _T_387; // @[Lookup.scala 11:37:@244.4]
  wire  _T_388; // @[Lookup.scala 11:37:@245.4]
  wire  _T_389; // @[Lookup.scala 11:37:@246.4]
  wire  _T_390; // @[Lookup.scala 11:37:@247.4]
  wire  _T_391; // @[Lookup.scala 11:37:@248.4]
  wire  _T_392; // @[Lookup.scala 11:37:@249.4]
  wire  _T_393; // @[Lookup.scala 11:37:@250.4]
  wire  _T_394; // @[Lookup.scala 11:37:@251.4]
  wire  _T_395; // @[Lookup.scala 11:37:@252.4]
  wire  _T_396; // @[Lookup.scala 11:37:@253.4]
  wire  _T_397; // @[Lookup.scala 11:37:@254.4]
  wire  _T_398; // @[Lookup.scala 11:37:@255.4]
  wire  cs_inst_val; // @[Lookup.scala 11:37:@256.4]
  wire [3:0] _T_412; // @[Lookup.scala 11:37:@270.4]
  wire [3:0] _T_413; // @[Lookup.scala 11:37:@271.4]
  wire [3:0] _T_414; // @[Lookup.scala 11:37:@272.4]
  wire [3:0] _T_415; // @[Lookup.scala 11:37:@273.4]
  wire [3:0] _T_416; // @[Lookup.scala 11:37:@274.4]
  wire [3:0] _T_417; // @[Lookup.scala 11:37:@275.4]
  wire [3:0] _T_418; // @[Lookup.scala 11:37:@276.4]
  wire [3:0] _T_419; // @[Lookup.scala 11:37:@277.4]
  wire [3:0] _T_420; // @[Lookup.scala 11:37:@278.4]
  wire [3:0] _T_421; // @[Lookup.scala 11:37:@279.4]
  wire [3:0] _T_422; // @[Lookup.scala 11:37:@280.4]
  wire [3:0] _T_423; // @[Lookup.scala 11:37:@281.4]
  wire [3:0] _T_424; // @[Lookup.scala 11:37:@282.4]
  wire [3:0] _T_425; // @[Lookup.scala 11:37:@283.4]
  wire [3:0] _T_426; // @[Lookup.scala 11:37:@284.4]
  wire [3:0] _T_427; // @[Lookup.scala 11:37:@285.4]
  wire [3:0] _T_428; // @[Lookup.scala 11:37:@286.4]
  wire [3:0] _T_429; // @[Lookup.scala 11:37:@287.4]
  wire [3:0] _T_430; // @[Lookup.scala 11:37:@288.4]
  wire [3:0] _T_431; // @[Lookup.scala 11:37:@289.4]
  wire [3:0] _T_432; // @[Lookup.scala 11:37:@290.4]
  wire [3:0] _T_433; // @[Lookup.scala 11:37:@291.4]
  wire [3:0] _T_434; // @[Lookup.scala 11:37:@292.4]
  wire [3:0] _T_435; // @[Lookup.scala 11:37:@293.4]
  wire [3:0] _T_436; // @[Lookup.scala 11:37:@294.4]
  wire [3:0] _T_437; // @[Lookup.scala 11:37:@295.4]
  wire [3:0] _T_438; // @[Lookup.scala 11:37:@296.4]
  wire [3:0] _T_439; // @[Lookup.scala 11:37:@297.4]
  wire [3:0] _T_440; // @[Lookup.scala 11:37:@298.4]
  wire [3:0] _T_441; // @[Lookup.scala 11:37:@299.4]
  wire [3:0] _T_442; // @[Lookup.scala 11:37:@300.4]
  wire [3:0] _T_443; // @[Lookup.scala 11:37:@301.4]
  wire [3:0] _T_444; // @[Lookup.scala 11:37:@302.4]
  wire [3:0] _T_445; // @[Lookup.scala 11:37:@303.4]
  wire [3:0] _T_446; // @[Lookup.scala 11:37:@304.4]
  wire [3:0] _T_447; // @[Lookup.scala 11:37:@305.4]
  wire [3:0] cs_br_type; // @[Lookup.scala 11:37:@306.4]
  wire  _T_468; // @[Lookup.scala 11:37:@327.4]
  wire  _T_469; // @[Lookup.scala 11:37:@328.4]
  wire  _T_470; // @[Lookup.scala 11:37:@329.4]
  wire  _T_471; // @[Lookup.scala 11:37:@330.4]
  wire  _T_472; // @[Lookup.scala 11:37:@331.4]
  wire  _T_473; // @[Lookup.scala 11:37:@332.4]
  wire  _T_474; // @[Lookup.scala 11:37:@333.4]
  wire  _T_475; // @[Lookup.scala 11:37:@334.4]
  wire  _T_476; // @[Lookup.scala 11:37:@335.4]
  wire  _T_477; // @[Lookup.scala 11:37:@336.4]
  wire  _T_478; // @[Lookup.scala 11:37:@337.4]
  wire  _T_479; // @[Lookup.scala 11:37:@338.4]
  wire  _T_480; // @[Lookup.scala 11:37:@339.4]
  wire  _T_481; // @[Lookup.scala 11:37:@340.4]
  wire  _T_482; // @[Lookup.scala 11:37:@341.4]
  wire  _T_483; // @[Lookup.scala 11:37:@342.4]
  wire  _T_484; // @[Lookup.scala 11:37:@343.4]
  wire  _T_485; // @[Lookup.scala 11:37:@344.4]
  wire  _T_486; // @[Lookup.scala 11:37:@345.4]
  wire  _T_487; // @[Lookup.scala 11:37:@346.4]
  wire  _T_488; // @[Lookup.scala 11:37:@347.4]
  wire  _T_489; // @[Lookup.scala 11:37:@348.4]
  wire  _T_490; // @[Lookup.scala 11:37:@349.4]
  wire  _T_491; // @[Lookup.scala 11:37:@350.4]
  wire  _T_492; // @[Lookup.scala 11:37:@351.4]
  wire  _T_493; // @[Lookup.scala 11:37:@352.4]
  wire  _T_494; // @[Lookup.scala 11:37:@353.4]
  wire  _T_495; // @[Lookup.scala 11:37:@354.4]
  wire  _T_496; // @[Lookup.scala 11:37:@355.4]
  wire [1:0] _T_504; // @[Lookup.scala 11:37:@364.4]
  wire [1:0] _T_505; // @[Lookup.scala 11:37:@365.4]
  wire [1:0] _T_506; // @[Lookup.scala 11:37:@366.4]
  wire [1:0] _T_507; // @[Lookup.scala 11:37:@367.4]
  wire [1:0] _T_508; // @[Lookup.scala 11:37:@368.4]
  wire [1:0] _T_509; // @[Lookup.scala 11:37:@369.4]
  wire [1:0] _T_510; // @[Lookup.scala 11:37:@370.4]
  wire [1:0] _T_511; // @[Lookup.scala 11:37:@371.4]
  wire [1:0] _T_512; // @[Lookup.scala 11:37:@372.4]
  wire [1:0] _T_513; // @[Lookup.scala 11:37:@373.4]
  wire [1:0] _T_514; // @[Lookup.scala 11:37:@374.4]
  wire [1:0] _T_515; // @[Lookup.scala 11:37:@375.4]
  wire [1:0] _T_516; // @[Lookup.scala 11:37:@376.4]
  wire [1:0] _T_517; // @[Lookup.scala 11:37:@377.4]
  wire [1:0] _T_518; // @[Lookup.scala 11:37:@378.4]
  wire [1:0] _T_519; // @[Lookup.scala 11:37:@379.4]
  wire [1:0] _T_520; // @[Lookup.scala 11:37:@380.4]
  wire [1:0] _T_521; // @[Lookup.scala 11:37:@381.4]
  wire [1:0] _T_522; // @[Lookup.scala 11:37:@382.4]
  wire [1:0] _T_523; // @[Lookup.scala 11:37:@383.4]
  wire [1:0] _T_524; // @[Lookup.scala 11:37:@384.4]
  wire [1:0] _T_525; // @[Lookup.scala 11:37:@385.4]
  wire [1:0] _T_526; // @[Lookup.scala 11:37:@386.4]
  wire [1:0] _T_527; // @[Lookup.scala 11:37:@387.4]
  wire [1:0] _T_528; // @[Lookup.scala 11:37:@388.4]
  wire [1:0] _T_529; // @[Lookup.scala 11:37:@389.4]
  wire [1:0] _T_530; // @[Lookup.scala 11:37:@390.4]
  wire [1:0] _T_531; // @[Lookup.scala 11:37:@391.4]
  wire [1:0] _T_532; // @[Lookup.scala 11:37:@392.4]
  wire [1:0] _T_533; // @[Lookup.scala 11:37:@393.4]
  wire [1:0] _T_534; // @[Lookup.scala 11:37:@394.4]
  wire [1:0] _T_535; // @[Lookup.scala 11:37:@395.4]
  wire [1:0] _T_536; // @[Lookup.scala 11:37:@396.4]
  wire [1:0] _T_537; // @[Lookup.scala 11:37:@397.4]
  wire [1:0] _T_538; // @[Lookup.scala 11:37:@398.4]
  wire [1:0] _T_539; // @[Lookup.scala 11:37:@399.4]
  wire [1:0] _T_540; // @[Lookup.scala 11:37:@400.4]
  wire [1:0] _T_541; // @[Lookup.scala 11:37:@401.4]
  wire [1:0] _T_542; // @[Lookup.scala 11:37:@402.4]
  wire [1:0] _T_543; // @[Lookup.scala 11:37:@403.4]
  wire [1:0] _T_544; // @[Lookup.scala 11:37:@404.4]
  wire [1:0] _T_545; // @[Lookup.scala 11:37:@405.4]
  wire [1:0] _T_565; // @[Lookup.scala 11:37:@426.4]
  wire [1:0] _T_566; // @[Lookup.scala 11:37:@427.4]
  wire [1:0] _T_567; // @[Lookup.scala 11:37:@428.4]
  wire [1:0] _T_568; // @[Lookup.scala 11:37:@429.4]
  wire [1:0] _T_569; // @[Lookup.scala 11:37:@430.4]
  wire [1:0] _T_570; // @[Lookup.scala 11:37:@431.4]
  wire [1:0] _T_571; // @[Lookup.scala 11:37:@432.4]
  wire [1:0] _T_572; // @[Lookup.scala 11:37:@433.4]
  wire [1:0] _T_573; // @[Lookup.scala 11:37:@434.4]
  wire [1:0] _T_574; // @[Lookup.scala 11:37:@435.4]
  wire [1:0] _T_575; // @[Lookup.scala 11:37:@436.4]
  wire [1:0] _T_576; // @[Lookup.scala 11:37:@437.4]
  wire [1:0] _T_577; // @[Lookup.scala 11:37:@438.4]
  wire [1:0] _T_578; // @[Lookup.scala 11:37:@439.4]
  wire [1:0] _T_579; // @[Lookup.scala 11:37:@440.4]
  wire [1:0] _T_580; // @[Lookup.scala 11:37:@441.4]
  wire [1:0] _T_581; // @[Lookup.scala 11:37:@442.4]
  wire [1:0] _T_582; // @[Lookup.scala 11:37:@443.4]
  wire [1:0] _T_583; // @[Lookup.scala 11:37:@444.4]
  wire [1:0] _T_584; // @[Lookup.scala 11:37:@445.4]
  wire [1:0] _T_585; // @[Lookup.scala 11:37:@446.4]
  wire [1:0] _T_586; // @[Lookup.scala 11:37:@447.4]
  wire [1:0] _T_587; // @[Lookup.scala 11:37:@448.4]
  wire [1:0] _T_588; // @[Lookup.scala 11:37:@449.4]
  wire [1:0] _T_589; // @[Lookup.scala 11:37:@450.4]
  wire [1:0] _T_590; // @[Lookup.scala 11:37:@451.4]
  wire [1:0] _T_591; // @[Lookup.scala 11:37:@452.4]
  wire [1:0] _T_592; // @[Lookup.scala 11:37:@453.4]
  wire [1:0] _T_593; // @[Lookup.scala 11:37:@454.4]
  wire [1:0] _T_594; // @[Lookup.scala 11:37:@455.4]
  wire [3:0] _T_602; // @[Lookup.scala 11:37:@464.4]
  wire [3:0] _T_603; // @[Lookup.scala 11:37:@465.4]
  wire [3:0] _T_604; // @[Lookup.scala 11:37:@466.4]
  wire [3:0] _T_605; // @[Lookup.scala 11:37:@467.4]
  wire [3:0] _T_606; // @[Lookup.scala 11:37:@468.4]
  wire [3:0] _T_607; // @[Lookup.scala 11:37:@469.4]
  wire [3:0] _T_608; // @[Lookup.scala 11:37:@470.4]
  wire [3:0] _T_609; // @[Lookup.scala 11:37:@471.4]
  wire [3:0] _T_610; // @[Lookup.scala 11:37:@472.4]
  wire [3:0] _T_611; // @[Lookup.scala 11:37:@473.4]
  wire [3:0] _T_612; // @[Lookup.scala 11:37:@474.4]
  wire [3:0] _T_613; // @[Lookup.scala 11:37:@475.4]
  wire [3:0] _T_614; // @[Lookup.scala 11:37:@476.4]
  wire [3:0] _T_615; // @[Lookup.scala 11:37:@477.4]
  wire [3:0] _T_616; // @[Lookup.scala 11:37:@478.4]
  wire [3:0] _T_617; // @[Lookup.scala 11:37:@479.4]
  wire [3:0] _T_618; // @[Lookup.scala 11:37:@480.4]
  wire [3:0] _T_619; // @[Lookup.scala 11:37:@481.4]
  wire [3:0] _T_620; // @[Lookup.scala 11:37:@482.4]
  wire [3:0] _T_621; // @[Lookup.scala 11:37:@483.4]
  wire [3:0] _T_622; // @[Lookup.scala 11:37:@484.4]
  wire [3:0] _T_623; // @[Lookup.scala 11:37:@485.4]
  wire [3:0] _T_624; // @[Lookup.scala 11:37:@486.4]
  wire [3:0] _T_625; // @[Lookup.scala 11:37:@487.4]
  wire [3:0] _T_626; // @[Lookup.scala 11:37:@488.4]
  wire [3:0] _T_627; // @[Lookup.scala 11:37:@489.4]
  wire [3:0] _T_628; // @[Lookup.scala 11:37:@490.4]
  wire [3:0] _T_629; // @[Lookup.scala 11:37:@491.4]
  wire [3:0] _T_630; // @[Lookup.scala 11:37:@492.4]
  wire [3:0] _T_631; // @[Lookup.scala 11:37:@493.4]
  wire [3:0] _T_632; // @[Lookup.scala 11:37:@494.4]
  wire [3:0] _T_633; // @[Lookup.scala 11:37:@495.4]
  wire [3:0] _T_634; // @[Lookup.scala 11:37:@496.4]
  wire [3:0] _T_635; // @[Lookup.scala 11:37:@497.4]
  wire [3:0] _T_636; // @[Lookup.scala 11:37:@498.4]
  wire [3:0] _T_637; // @[Lookup.scala 11:37:@499.4]
  wire [3:0] _T_638; // @[Lookup.scala 11:37:@500.4]
  wire [3:0] _T_639; // @[Lookup.scala 11:37:@501.4]
  wire [3:0] _T_640; // @[Lookup.scala 11:37:@502.4]
  wire [3:0] _T_641; // @[Lookup.scala 11:37:@503.4]
  wire [3:0] _T_642; // @[Lookup.scala 11:37:@504.4]
  wire [3:0] _T_643; // @[Lookup.scala 11:37:@505.4]
  wire [1:0] _T_651; // @[Lookup.scala 11:37:@514.4]
  wire [1:0] _T_652; // @[Lookup.scala 11:37:@515.4]
  wire [1:0] _T_653; // @[Lookup.scala 11:37:@516.4]
  wire [1:0] _T_654; // @[Lookup.scala 11:37:@517.4]
  wire [1:0] _T_655; // @[Lookup.scala 11:37:@518.4]
  wire [1:0] _T_656; // @[Lookup.scala 11:37:@519.4]
  wire [1:0] _T_657; // @[Lookup.scala 11:37:@520.4]
  wire [1:0] _T_658; // @[Lookup.scala 11:37:@521.4]
  wire [1:0] _T_659; // @[Lookup.scala 11:37:@522.4]
  wire [1:0] _T_660; // @[Lookup.scala 11:37:@523.4]
  wire [1:0] _T_661; // @[Lookup.scala 11:37:@524.4]
  wire [1:0] _T_662; // @[Lookup.scala 11:37:@525.4]
  wire [1:0] _T_663; // @[Lookup.scala 11:37:@526.4]
  wire [1:0] _T_664; // @[Lookup.scala 11:37:@527.4]
  wire [1:0] _T_665; // @[Lookup.scala 11:37:@528.4]
  wire [1:0] _T_666; // @[Lookup.scala 11:37:@529.4]
  wire [1:0] _T_667; // @[Lookup.scala 11:37:@530.4]
  wire [1:0] _T_668; // @[Lookup.scala 11:37:@531.4]
  wire [1:0] _T_669; // @[Lookup.scala 11:37:@532.4]
  wire [1:0] _T_670; // @[Lookup.scala 11:37:@533.4]
  wire [1:0] _T_671; // @[Lookup.scala 11:37:@534.4]
  wire [1:0] _T_672; // @[Lookup.scala 11:37:@535.4]
  wire [1:0] _T_673; // @[Lookup.scala 11:37:@536.4]
  wire [1:0] _T_674; // @[Lookup.scala 11:37:@537.4]
  wire [1:0] _T_675; // @[Lookup.scala 11:37:@538.4]
  wire [1:0] _T_676; // @[Lookup.scala 11:37:@539.4]
  wire [1:0] _T_677; // @[Lookup.scala 11:37:@540.4]
  wire [1:0] _T_678; // @[Lookup.scala 11:37:@541.4]
  wire [1:0] _T_679; // @[Lookup.scala 11:37:@542.4]
  wire [1:0] _T_680; // @[Lookup.scala 11:37:@543.4]
  wire [1:0] _T_681; // @[Lookup.scala 11:37:@544.4]
  wire [1:0] _T_682; // @[Lookup.scala 11:37:@545.4]
  wire [1:0] _T_683; // @[Lookup.scala 11:37:@546.4]
  wire [1:0] _T_684; // @[Lookup.scala 11:37:@547.4]
  wire [1:0] _T_685; // @[Lookup.scala 11:37:@548.4]
  wire [1:0] _T_686; // @[Lookup.scala 11:37:@549.4]
  wire [1:0] _T_687; // @[Lookup.scala 11:37:@550.4]
  wire [1:0] _T_688; // @[Lookup.scala 11:37:@551.4]
  wire [1:0] _T_689; // @[Lookup.scala 11:37:@552.4]
  wire [1:0] _T_690; // @[Lookup.scala 11:37:@553.4]
  wire [1:0] _T_691; // @[Lookup.scala 11:37:@554.4]
  wire [1:0] _T_692; // @[Lookup.scala 11:37:@555.4]
  wire  _T_701; // @[Lookup.scala 11:37:@565.4]
  wire  _T_702; // @[Lookup.scala 11:37:@566.4]
  wire  _T_703; // @[Lookup.scala 11:37:@567.4]
  wire  _T_704; // @[Lookup.scala 11:37:@568.4]
  wire  _T_705; // @[Lookup.scala 11:37:@569.4]
  wire  _T_706; // @[Lookup.scala 11:37:@570.4]
  wire  _T_707; // @[Lookup.scala 11:37:@571.4]
  wire  _T_708; // @[Lookup.scala 11:37:@572.4]
  wire  _T_709; // @[Lookup.scala 11:37:@573.4]
  wire  _T_710; // @[Lookup.scala 11:37:@574.4]
  wire  _T_711; // @[Lookup.scala 11:37:@575.4]
  wire  _T_712; // @[Lookup.scala 11:37:@576.4]
  wire  _T_713; // @[Lookup.scala 11:37:@577.4]
  wire  _T_714; // @[Lookup.scala 11:37:@578.4]
  wire  _T_715; // @[Lookup.scala 11:37:@579.4]
  wire  _T_716; // @[Lookup.scala 11:37:@580.4]
  wire  _T_717; // @[Lookup.scala 11:37:@581.4]
  wire  _T_718; // @[Lookup.scala 11:37:@582.4]
  wire  _T_719; // @[Lookup.scala 11:37:@583.4]
  wire  _T_720; // @[Lookup.scala 11:37:@584.4]
  wire  _T_721; // @[Lookup.scala 11:37:@585.4]
  wire  _T_722; // @[Lookup.scala 11:37:@586.4]
  wire  _T_723; // @[Lookup.scala 11:37:@587.4]
  wire  _T_724; // @[Lookup.scala 11:37:@588.4]
  wire  _T_725; // @[Lookup.scala 11:37:@589.4]
  wire  _T_726; // @[Lookup.scala 11:37:@590.4]
  wire  _T_727; // @[Lookup.scala 11:37:@591.4]
  wire  _T_728; // @[Lookup.scala 11:37:@592.4]
  wire  _T_729; // @[Lookup.scala 11:37:@593.4]
  wire  _T_730; // @[Lookup.scala 11:37:@594.4]
  wire  _T_731; // @[Lookup.scala 11:37:@595.4]
  wire  _T_732; // @[Lookup.scala 11:37:@596.4]
  wire  _T_733; // @[Lookup.scala 11:37:@597.4]
  wire  _T_734; // @[Lookup.scala 11:37:@598.4]
  wire  _T_735; // @[Lookup.scala 11:37:@599.4]
  wire  _T_736; // @[Lookup.scala 11:37:@600.4]
  wire  _T_737; // @[Lookup.scala 11:37:@601.4]
  wire  _T_738; // @[Lookup.scala 11:37:@602.4]
  wire  _T_739; // @[Lookup.scala 11:37:@603.4]
  wire  _T_740; // @[Lookup.scala 11:37:@604.4]
  wire  _T_741; // @[Lookup.scala 11:37:@605.4]
  wire  cs0_2; // @[Lookup.scala 11:37:@606.4]
  wire  _T_763; // @[Lookup.scala 11:37:@628.4]
  wire  _T_764; // @[Lookup.scala 11:37:@629.4]
  wire  _T_765; // @[Lookup.scala 11:37:@630.4]
  wire  _T_766; // @[Lookup.scala 11:37:@631.4]
  wire  _T_767; // @[Lookup.scala 11:37:@632.4]
  wire  _T_768; // @[Lookup.scala 11:37:@633.4]
  wire  _T_769; // @[Lookup.scala 11:37:@634.4]
  wire  _T_770; // @[Lookup.scala 11:37:@635.4]
  wire  _T_771; // @[Lookup.scala 11:37:@636.4]
  wire  _T_772; // @[Lookup.scala 11:37:@637.4]
  wire  _T_773; // @[Lookup.scala 11:37:@638.4]
  wire  _T_774; // @[Lookup.scala 11:37:@639.4]
  wire  _T_775; // @[Lookup.scala 11:37:@640.4]
  wire  _T_776; // @[Lookup.scala 11:37:@641.4]
  wire  _T_777; // @[Lookup.scala 11:37:@642.4]
  wire  _T_778; // @[Lookup.scala 11:37:@643.4]
  wire  _T_779; // @[Lookup.scala 11:37:@644.4]
  wire  _T_780; // @[Lookup.scala 11:37:@645.4]
  wire  _T_781; // @[Lookup.scala 11:37:@646.4]
  wire  _T_782; // @[Lookup.scala 11:37:@647.4]
  wire  _T_783; // @[Lookup.scala 11:37:@648.4]
  wire  _T_784; // @[Lookup.scala 11:37:@649.4]
  wire  _T_785; // @[Lookup.scala 11:37:@650.4]
  wire  _T_786; // @[Lookup.scala 11:37:@651.4]
  wire  _T_787; // @[Lookup.scala 11:37:@652.4]
  wire  _T_788; // @[Lookup.scala 11:37:@653.4]
  wire  _T_789; // @[Lookup.scala 11:37:@654.4]
  wire  _T_790; // @[Lookup.scala 11:37:@655.4]
  wire  _T_883; // @[Lookup.scala 11:37:@750.4]
  wire  _T_884; // @[Lookup.scala 11:37:@751.4]
  wire  _T_885; // @[Lookup.scala 11:37:@752.4]
  wire  _T_886; // @[Lookup.scala 11:37:@753.4]
  wire  _T_887; // @[Lookup.scala 11:37:@754.4]
  wire  _T_888; // @[Lookup.scala 11:37:@755.4]
  wire [2:0] _T_931; // @[Lookup.scala 11:37:@799.4]
  wire [2:0] _T_932; // @[Lookup.scala 11:37:@800.4]
  wire [2:0] _T_933; // @[Lookup.scala 11:37:@801.4]
  wire [2:0] _T_934; // @[Lookup.scala 11:37:@802.4]
  wire [2:0] _T_935; // @[Lookup.scala 11:37:@803.4]
  wire [2:0] _T_936; // @[Lookup.scala 11:37:@804.4]
  wire [2:0] _T_937; // @[Lookup.scala 11:37:@805.4]
  wire [2:0] _T_940; // @[Lookup.scala 11:37:@809.4]
  wire [2:0] _T_941; // @[Lookup.scala 11:37:@810.4]
  wire [2:0] _T_942; // @[Lookup.scala 11:37:@811.4]
  wire [2:0] _T_943; // @[Lookup.scala 11:37:@812.4]
  wire [2:0] _T_944; // @[Lookup.scala 11:37:@813.4]
  wire [2:0] _T_945; // @[Lookup.scala 11:37:@814.4]
  wire [2:0] _T_946; // @[Lookup.scala 11:37:@815.4]
  wire [2:0] _T_947; // @[Lookup.scala 11:37:@816.4]
  wire [2:0] _T_948; // @[Lookup.scala 11:37:@817.4]
  wire [2:0] _T_949; // @[Lookup.scala 11:37:@818.4]
  wire [2:0] _T_950; // @[Lookup.scala 11:37:@819.4]
  wire [2:0] _T_951; // @[Lookup.scala 11:37:@820.4]
  wire [2:0] _T_952; // @[Lookup.scala 11:37:@821.4]
  wire [2:0] _T_953; // @[Lookup.scala 11:37:@822.4]
  wire [2:0] _T_954; // @[Lookup.scala 11:37:@823.4]
  wire [2:0] _T_955; // @[Lookup.scala 11:37:@824.4]
  wire [2:0] _T_956; // @[Lookup.scala 11:37:@825.4]
  wire [2:0] _T_957; // @[Lookup.scala 11:37:@826.4]
  wire [2:0] _T_958; // @[Lookup.scala 11:37:@827.4]
  wire [2:0] _T_959; // @[Lookup.scala 11:37:@828.4]
  wire [2:0] _T_960; // @[Lookup.scala 11:37:@829.4]
  wire [2:0] _T_961; // @[Lookup.scala 11:37:@830.4]
  wire [2:0] _T_962; // @[Lookup.scala 11:37:@831.4]
  wire [2:0] _T_963; // @[Lookup.scala 11:37:@832.4]
  wire [2:0] _T_964; // @[Lookup.scala 11:37:@833.4]
  wire [2:0] _T_965; // @[Lookup.scala 11:37:@834.4]
  wire [2:0] _T_966; // @[Lookup.scala 11:37:@835.4]
  wire [2:0] _T_967; // @[Lookup.scala 11:37:@836.4]
  wire [2:0] _T_968; // @[Lookup.scala 11:37:@837.4]
  wire [2:0] _T_969; // @[Lookup.scala 11:37:@838.4]
  wire [2:0] _T_970; // @[Lookup.scala 11:37:@839.4]
  wire [2:0] _T_971; // @[Lookup.scala 11:37:@840.4]
  wire [2:0] _T_972; // @[Lookup.scala 11:37:@841.4]
  wire [2:0] _T_973; // @[Lookup.scala 11:37:@842.4]
  wire [2:0] _T_974; // @[Lookup.scala 11:37:@843.4]
  wire [2:0] _T_975; // @[Lookup.scala 11:37:@844.4]
  wire [2:0] _T_976; // @[Lookup.scala 11:37:@845.4]
  wire [2:0] _T_977; // @[Lookup.scala 11:37:@846.4]
  wire [2:0] _T_978; // @[Lookup.scala 11:37:@847.4]
  wire [2:0] _T_979; // @[Lookup.scala 11:37:@848.4]
  wire [2:0] _T_980; // @[Lookup.scala 11:37:@849.4]
  wire [2:0] _T_981; // @[Lookup.scala 11:37:@850.4]
  wire [2:0] _T_982; // @[Lookup.scala 11:37:@851.4]
  wire [2:0] _T_983; // @[Lookup.scala 11:37:@852.4]
  wire [2:0] _T_984; // @[Lookup.scala 11:37:@853.4]
  wire [2:0] _T_985; // @[Lookup.scala 11:37:@854.4]
  wire [2:0] _T_986; // @[Lookup.scala 11:37:@855.4]
  wire [2:0] cs0_7; // @[Lookup.scala 11:37:@856.4]
  wire  _T_1037; // @[Cpath.scala 132:20:@908.4]
  wire  _T_1038; // @[Cpath.scala 133:22:@909.4]
  wire  _T_1040; // @[Cpath.scala 133:37:@910.4]
  wire [2:0] _T_1041; // @[Cpath.scala 133:36:@911.4]
  wire  _T_1042; // @[Cpath.scala 134:24:@912.4]
  wire [2:0] _T_1043; // @[Cpath.scala 134:38:@913.4]
  wire  _T_1044; // @[Cpath.scala 135:26:@914.4]
  wire  _T_1046; // @[Cpath.scala 135:41:@915.4]
  wire [2:0] _T_1047; // @[Cpath.scala 135:40:@916.4]
  wire  _T_1048; // @[Cpath.scala 136:28:@917.4]
  wire  _T_1050; // @[Cpath.scala 136:44:@918.4]
  wire [2:0] _T_1051; // @[Cpath.scala 136:43:@919.4]
  wire  _T_1052; // @[Cpath.scala 137:30:@920.4]
  wire [2:0] _T_1053; // @[Cpath.scala 137:44:@921.4]
  wire  _T_1054; // @[Cpath.scala 138:32:@922.4]
  wire [2:0] _T_1055; // @[Cpath.scala 138:47:@923.4]
  wire  _T_1056; // @[Cpath.scala 139:34:@924.4]
  wire  _T_1057; // @[Cpath.scala 140:36:@925.4]
  wire [2:0] _T_1058; // @[Cpath.scala 140:24:@926.4]
  wire [2:0] _T_1059; // @[Cpath.scala 139:22:@927.4]
  wire [2:0] _T_1060; // @[Cpath.scala 138:20:@928.4]
  wire [2:0] _T_1061; // @[Cpath.scala 137:18:@929.4]
  wire [2:0] _T_1062; // @[Cpath.scala 136:16:@930.4]
  wire [2:0] _T_1063; // @[Cpath.scala 135:14:@931.4]
  wire [2:0] _T_1064; // @[Cpath.scala 134:12:@932.4]
  wire [2:0] _T_1065; // @[Cpath.scala 133:10:@933.4]
  wire [2:0] _T_1066; // @[Cpath.scala 132:8:@934.4]
  reg  _T_1092; // @[Cpath.scala 173:23:@972.4]
  reg [31:0] _RAND_0;
  wire  take_evec; // @[Cpath.scala 173:42:@974.4]
  wire [2:0] ctrl_pc_sel; // @[Cpath.scala 131:24:@935.4]
  wire  _T_1067; // @[Cpath.scala 144:38:@936.4]
  wire  _T_1069; // @[Cpath.scala 144:24:@937.4]
  wire  _T_1073; // @[Cpath.scala 153:24:@948.4]
  wire [4:0] rs1_addr; // @[Cpath.scala 156:40:@954.4]
  wire  _T_1078; // @[Cpath.scala 157:29:@955.4]
  wire  _T_1079; // @[Cpath.scala 157:53:@956.4]
  wire  _T_1080; // @[Cpath.scala 157:39:@957.4]
  wire  _T_1082; // @[Cpath.scala 157:76:@958.4]
  wire  csr_ren; // @[Cpath.scala 157:64:@959.4]
  wire [2:0] csr_cmd; // @[Cpath.scala 158:20:@960.4]
  wire  _T_1089; // @[Cpath.scala 172:23:@969.4]
  assign _T_152 = io_imem_resp_bits_inst & 32'h707f; // @[Lookup.scala 9:38:@107.4]
  assign _T_153 = 32'h2003 == _T_152; // @[Lookup.scala 9:38:@108.4]
  assign _T_157 = 32'h3 == _T_152; // @[Lookup.scala 9:38:@110.4]
  assign _T_161 = 32'h4003 == _T_152; // @[Lookup.scala 9:38:@112.4]
  assign _T_165 = 32'h1003 == _T_152; // @[Lookup.scala 9:38:@114.4]
  assign _T_169 = 32'h5003 == _T_152; // @[Lookup.scala 9:38:@116.4]
  assign _T_173 = 32'h2023 == _T_152; // @[Lookup.scala 9:38:@118.4]
  assign _T_177 = 32'h23 == _T_152; // @[Lookup.scala 9:38:@120.4]
  assign _T_181 = 32'h1023 == _T_152; // @[Lookup.scala 9:38:@122.4]
  assign _T_184 = io_imem_resp_bits_inst & 32'h7f; // @[Lookup.scala 9:38:@123.4]
  assign _T_185 = 32'h17 == _T_184; // @[Lookup.scala 9:38:@124.4]
  assign _T_189 = 32'h37 == _T_184; // @[Lookup.scala 9:38:@126.4]
  assign _T_193 = 32'h13 == _T_152; // @[Lookup.scala 9:38:@128.4]
  assign _T_197 = 32'h7013 == _T_152; // @[Lookup.scala 9:38:@130.4]
  assign _T_201 = 32'h6013 == _T_152; // @[Lookup.scala 9:38:@132.4]
  assign _T_205 = 32'h4013 == _T_152; // @[Lookup.scala 9:38:@134.4]
  assign _T_209 = 32'h2013 == _T_152; // @[Lookup.scala 9:38:@136.4]
  assign _T_213 = 32'h3013 == _T_152; // @[Lookup.scala 9:38:@138.4]
  assign _T_216 = io_imem_resp_bits_inst & 32'hfc00707f; // @[Lookup.scala 9:38:@139.4]
  assign _T_217 = 32'h1013 == _T_216; // @[Lookup.scala 9:38:@140.4]
  assign _T_221 = 32'h40005013 == _T_216; // @[Lookup.scala 9:38:@142.4]
  assign _T_225 = 32'h5013 == _T_216; // @[Lookup.scala 9:38:@144.4]
  assign _T_228 = io_imem_resp_bits_inst & 32'hfe00707f; // @[Lookup.scala 9:38:@145.4]
  assign _T_229 = 32'h1033 == _T_228; // @[Lookup.scala 9:38:@146.4]
  assign _T_233 = 32'h33 == _T_228; // @[Lookup.scala 9:38:@148.4]
  assign _T_237 = 32'h40000033 == _T_228; // @[Lookup.scala 9:38:@150.4]
  assign _T_241 = 32'h2033 == _T_228; // @[Lookup.scala 9:38:@152.4]
  assign _T_245 = 32'h3033 == _T_228; // @[Lookup.scala 9:38:@154.4]
  assign _T_249 = 32'h7033 == _T_228; // @[Lookup.scala 9:38:@156.4]
  assign _T_253 = 32'h6033 == _T_228; // @[Lookup.scala 9:38:@158.4]
  assign _T_257 = 32'h4033 == _T_228; // @[Lookup.scala 9:38:@160.4]
  assign _T_261 = 32'h40005033 == _T_228; // @[Lookup.scala 9:38:@162.4]
  assign _T_265 = 32'h5033 == _T_228; // @[Lookup.scala 9:38:@164.4]
  assign _T_269 = 32'h6f == _T_184; // @[Lookup.scala 9:38:@166.4]
  assign _T_273 = 32'h67 == _T_152; // @[Lookup.scala 9:38:@168.4]
  assign _T_277 = 32'h63 == _T_152; // @[Lookup.scala 9:38:@170.4]
  assign _T_281 = 32'h1063 == _T_152; // @[Lookup.scala 9:38:@172.4]
  assign _T_285 = 32'h5063 == _T_152; // @[Lookup.scala 9:38:@174.4]
  assign _T_289 = 32'h7063 == _T_152; // @[Lookup.scala 9:38:@176.4]
  assign _T_293 = 32'h4063 == _T_152; // @[Lookup.scala 9:38:@178.4]
  assign _T_297 = 32'h6063 == _T_152; // @[Lookup.scala 9:38:@180.4]
  assign _T_301 = 32'h5073 == _T_152; // @[Lookup.scala 9:38:@182.4]
  assign _T_305 = 32'h6073 == _T_152; // @[Lookup.scala 9:38:@184.4]
  assign _T_309 = 32'h1073 == _T_152; // @[Lookup.scala 9:38:@186.4]
  assign _T_313 = 32'h2073 == _T_152; // @[Lookup.scala 9:38:@188.4]
  assign _T_317 = 32'h3073 == _T_152; // @[Lookup.scala 9:38:@190.4]
  assign _T_321 = 32'h7073 == _T_152; // @[Lookup.scala 9:38:@192.4]
  assign _T_325 = 32'h73 == io_imem_resp_bits_inst; // @[Lookup.scala 9:38:@194.4]
  assign _T_329 = 32'h30200073 == io_imem_resp_bits_inst; // @[Lookup.scala 9:38:@196.4]
  assign _T_333 = 32'h7b200073 == io_imem_resp_bits_inst; // @[Lookup.scala 9:38:@198.4]
  assign _T_337 = 32'h100073 == io_imem_resp_bits_inst; // @[Lookup.scala 9:38:@200.4]
  assign _T_341 = 32'h10500073 == io_imem_resp_bits_inst; // @[Lookup.scala 9:38:@202.4]
  assign _T_345 = 32'h100f == _T_152; // @[Lookup.scala 9:38:@204.4]
  assign _T_349 = 32'hf == _T_152; // @[Lookup.scala 9:38:@206.4]
  assign _T_351 = _T_345 ? 1'h1 : _T_349; // @[Lookup.scala 11:37:@208.4]
  assign _T_352 = _T_341 ? 1'h1 : _T_351; // @[Lookup.scala 11:37:@209.4]
  assign _T_353 = _T_337 ? 1'h1 : _T_352; // @[Lookup.scala 11:37:@210.4]
  assign _T_354 = _T_333 ? 1'h1 : _T_353; // @[Lookup.scala 11:37:@211.4]
  assign _T_355 = _T_329 ? 1'h1 : _T_354; // @[Lookup.scala 11:37:@212.4]
  assign _T_356 = _T_325 ? 1'h1 : _T_355; // @[Lookup.scala 11:37:@213.4]
  assign _T_357 = _T_321 ? 1'h1 : _T_356; // @[Lookup.scala 11:37:@214.4]
  assign _T_358 = _T_317 ? 1'h1 : _T_357; // @[Lookup.scala 11:37:@215.4]
  assign _T_359 = _T_313 ? 1'h1 : _T_358; // @[Lookup.scala 11:37:@216.4]
  assign _T_360 = _T_309 ? 1'h1 : _T_359; // @[Lookup.scala 11:37:@217.4]
  assign _T_361 = _T_305 ? 1'h1 : _T_360; // @[Lookup.scala 11:37:@218.4]
  assign _T_362 = _T_301 ? 1'h1 : _T_361; // @[Lookup.scala 11:37:@219.4]
  assign _T_363 = _T_297 ? 1'h1 : _T_362; // @[Lookup.scala 11:37:@220.4]
  assign _T_364 = _T_293 ? 1'h1 : _T_363; // @[Lookup.scala 11:37:@221.4]
  assign _T_365 = _T_289 ? 1'h1 : _T_364; // @[Lookup.scala 11:37:@222.4]
  assign _T_366 = _T_285 ? 1'h1 : _T_365; // @[Lookup.scala 11:37:@223.4]
  assign _T_367 = _T_281 ? 1'h1 : _T_366; // @[Lookup.scala 11:37:@224.4]
  assign _T_368 = _T_277 ? 1'h1 : _T_367; // @[Lookup.scala 11:37:@225.4]
  assign _T_369 = _T_273 ? 1'h1 : _T_368; // @[Lookup.scala 11:37:@226.4]
  assign _T_370 = _T_269 ? 1'h1 : _T_369; // @[Lookup.scala 11:37:@227.4]
  assign _T_371 = _T_265 ? 1'h1 : _T_370; // @[Lookup.scala 11:37:@228.4]
  assign _T_372 = _T_261 ? 1'h1 : _T_371; // @[Lookup.scala 11:37:@229.4]
  assign _T_373 = _T_257 ? 1'h1 : _T_372; // @[Lookup.scala 11:37:@230.4]
  assign _T_374 = _T_253 ? 1'h1 : _T_373; // @[Lookup.scala 11:37:@231.4]
  assign _T_375 = _T_249 ? 1'h1 : _T_374; // @[Lookup.scala 11:37:@232.4]
  assign _T_376 = _T_245 ? 1'h1 : _T_375; // @[Lookup.scala 11:37:@233.4]
  assign _T_377 = _T_241 ? 1'h1 : _T_376; // @[Lookup.scala 11:37:@234.4]
  assign _T_378 = _T_237 ? 1'h1 : _T_377; // @[Lookup.scala 11:37:@235.4]
  assign _T_379 = _T_233 ? 1'h1 : _T_378; // @[Lookup.scala 11:37:@236.4]
  assign _T_380 = _T_229 ? 1'h1 : _T_379; // @[Lookup.scala 11:37:@237.4]
  assign _T_381 = _T_225 ? 1'h1 : _T_380; // @[Lookup.scala 11:37:@238.4]
  assign _T_382 = _T_221 ? 1'h1 : _T_381; // @[Lookup.scala 11:37:@239.4]
  assign _T_383 = _T_217 ? 1'h1 : _T_382; // @[Lookup.scala 11:37:@240.4]
  assign _T_384 = _T_213 ? 1'h1 : _T_383; // @[Lookup.scala 11:37:@241.4]
  assign _T_385 = _T_209 ? 1'h1 : _T_384; // @[Lookup.scala 11:37:@242.4]
  assign _T_386 = _T_205 ? 1'h1 : _T_385; // @[Lookup.scala 11:37:@243.4]
  assign _T_387 = _T_201 ? 1'h1 : _T_386; // @[Lookup.scala 11:37:@244.4]
  assign _T_388 = _T_197 ? 1'h1 : _T_387; // @[Lookup.scala 11:37:@245.4]
  assign _T_389 = _T_193 ? 1'h1 : _T_388; // @[Lookup.scala 11:37:@246.4]
  assign _T_390 = _T_189 ? 1'h1 : _T_389; // @[Lookup.scala 11:37:@247.4]
  assign _T_391 = _T_185 ? 1'h1 : _T_390; // @[Lookup.scala 11:37:@248.4]
  assign _T_392 = _T_181 ? 1'h1 : _T_391; // @[Lookup.scala 11:37:@249.4]
  assign _T_393 = _T_177 ? 1'h1 : _T_392; // @[Lookup.scala 11:37:@250.4]
  assign _T_394 = _T_173 ? 1'h1 : _T_393; // @[Lookup.scala 11:37:@251.4]
  assign _T_395 = _T_169 ? 1'h1 : _T_394; // @[Lookup.scala 11:37:@252.4]
  assign _T_396 = _T_165 ? 1'h1 : _T_395; // @[Lookup.scala 11:37:@253.4]
  assign _T_397 = _T_161 ? 1'h1 : _T_396; // @[Lookup.scala 11:37:@254.4]
  assign _T_398 = _T_157 ? 1'h1 : _T_397; // @[Lookup.scala 11:37:@255.4]
  assign cs_inst_val = _T_153 ? 1'h1 : _T_398; // @[Lookup.scala 11:37:@256.4]
  assign _T_412 = _T_297 ? 4'h6 : 4'h0; // @[Lookup.scala 11:37:@270.4]
  assign _T_413 = _T_293 ? 4'h5 : _T_412; // @[Lookup.scala 11:37:@271.4]
  assign _T_414 = _T_289 ? 4'h4 : _T_413; // @[Lookup.scala 11:37:@272.4]
  assign _T_415 = _T_285 ? 4'h3 : _T_414; // @[Lookup.scala 11:37:@273.4]
  assign _T_416 = _T_281 ? 4'h1 : _T_415; // @[Lookup.scala 11:37:@274.4]
  assign _T_417 = _T_277 ? 4'h2 : _T_416; // @[Lookup.scala 11:37:@275.4]
  assign _T_418 = _T_273 ? 4'h8 : _T_417; // @[Lookup.scala 11:37:@276.4]
  assign _T_419 = _T_269 ? 4'h7 : _T_418; // @[Lookup.scala 11:37:@277.4]
  assign _T_420 = _T_265 ? 4'h0 : _T_419; // @[Lookup.scala 11:37:@278.4]
  assign _T_421 = _T_261 ? 4'h0 : _T_420; // @[Lookup.scala 11:37:@279.4]
  assign _T_422 = _T_257 ? 4'h0 : _T_421; // @[Lookup.scala 11:37:@280.4]
  assign _T_423 = _T_253 ? 4'h0 : _T_422; // @[Lookup.scala 11:37:@281.4]
  assign _T_424 = _T_249 ? 4'h0 : _T_423; // @[Lookup.scala 11:37:@282.4]
  assign _T_425 = _T_245 ? 4'h0 : _T_424; // @[Lookup.scala 11:37:@283.4]
  assign _T_426 = _T_241 ? 4'h0 : _T_425; // @[Lookup.scala 11:37:@284.4]
  assign _T_427 = _T_237 ? 4'h0 : _T_426; // @[Lookup.scala 11:37:@285.4]
  assign _T_428 = _T_233 ? 4'h0 : _T_427; // @[Lookup.scala 11:37:@286.4]
  assign _T_429 = _T_229 ? 4'h0 : _T_428; // @[Lookup.scala 11:37:@287.4]
  assign _T_430 = _T_225 ? 4'h0 : _T_429; // @[Lookup.scala 11:37:@288.4]
  assign _T_431 = _T_221 ? 4'h0 : _T_430; // @[Lookup.scala 11:37:@289.4]
  assign _T_432 = _T_217 ? 4'h0 : _T_431; // @[Lookup.scala 11:37:@290.4]
  assign _T_433 = _T_213 ? 4'h0 : _T_432; // @[Lookup.scala 11:37:@291.4]
  assign _T_434 = _T_209 ? 4'h0 : _T_433; // @[Lookup.scala 11:37:@292.4]
  assign _T_435 = _T_205 ? 4'h0 : _T_434; // @[Lookup.scala 11:37:@293.4]
  assign _T_436 = _T_201 ? 4'h0 : _T_435; // @[Lookup.scala 11:37:@294.4]
  assign _T_437 = _T_197 ? 4'h0 : _T_436; // @[Lookup.scala 11:37:@295.4]
  assign _T_438 = _T_193 ? 4'h0 : _T_437; // @[Lookup.scala 11:37:@296.4]
  assign _T_439 = _T_189 ? 4'h0 : _T_438; // @[Lookup.scala 11:37:@297.4]
  assign _T_440 = _T_185 ? 4'h0 : _T_439; // @[Lookup.scala 11:37:@298.4]
  assign _T_441 = _T_181 ? 4'h0 : _T_440; // @[Lookup.scala 11:37:@299.4]
  assign _T_442 = _T_177 ? 4'h0 : _T_441; // @[Lookup.scala 11:37:@300.4]
  assign _T_443 = _T_173 ? 4'h0 : _T_442; // @[Lookup.scala 11:37:@301.4]
  assign _T_444 = _T_169 ? 4'h0 : _T_443; // @[Lookup.scala 11:37:@302.4]
  assign _T_445 = _T_165 ? 4'h0 : _T_444; // @[Lookup.scala 11:37:@303.4]
  assign _T_446 = _T_161 ? 4'h0 : _T_445; // @[Lookup.scala 11:37:@304.4]
  assign _T_447 = _T_157 ? 4'h0 : _T_446; // @[Lookup.scala 11:37:@305.4]
  assign cs_br_type = _T_153 ? 4'h0 : _T_447; // @[Lookup.scala 11:37:@306.4]
  assign _T_468 = _T_269 ? 1'h1 : _T_273; // @[Lookup.scala 11:37:@327.4]
  assign _T_469 = _T_265 ? 1'h0 : _T_468; // @[Lookup.scala 11:37:@328.4]
  assign _T_470 = _T_261 ? 1'h0 : _T_469; // @[Lookup.scala 11:37:@329.4]
  assign _T_471 = _T_257 ? 1'h0 : _T_470; // @[Lookup.scala 11:37:@330.4]
  assign _T_472 = _T_253 ? 1'h0 : _T_471; // @[Lookup.scala 11:37:@331.4]
  assign _T_473 = _T_249 ? 1'h0 : _T_472; // @[Lookup.scala 11:37:@332.4]
  assign _T_474 = _T_245 ? 1'h0 : _T_473; // @[Lookup.scala 11:37:@333.4]
  assign _T_475 = _T_241 ? 1'h0 : _T_474; // @[Lookup.scala 11:37:@334.4]
  assign _T_476 = _T_237 ? 1'h0 : _T_475; // @[Lookup.scala 11:37:@335.4]
  assign _T_477 = _T_233 ? 1'h0 : _T_476; // @[Lookup.scala 11:37:@336.4]
  assign _T_478 = _T_229 ? 1'h0 : _T_477; // @[Lookup.scala 11:37:@337.4]
  assign _T_479 = _T_225 ? 1'h0 : _T_478; // @[Lookup.scala 11:37:@338.4]
  assign _T_480 = _T_221 ? 1'h0 : _T_479; // @[Lookup.scala 11:37:@339.4]
  assign _T_481 = _T_217 ? 1'h0 : _T_480; // @[Lookup.scala 11:37:@340.4]
  assign _T_482 = _T_213 ? 1'h0 : _T_481; // @[Lookup.scala 11:37:@341.4]
  assign _T_483 = _T_209 ? 1'h0 : _T_482; // @[Lookup.scala 11:37:@342.4]
  assign _T_484 = _T_205 ? 1'h0 : _T_483; // @[Lookup.scala 11:37:@343.4]
  assign _T_485 = _T_201 ? 1'h0 : _T_484; // @[Lookup.scala 11:37:@344.4]
  assign _T_486 = _T_197 ? 1'h0 : _T_485; // @[Lookup.scala 11:37:@345.4]
  assign _T_487 = _T_193 ? 1'h0 : _T_486; // @[Lookup.scala 11:37:@346.4]
  assign _T_488 = _T_189 ? 1'h0 : _T_487; // @[Lookup.scala 11:37:@347.4]
  assign _T_489 = _T_185 ? 1'h0 : _T_488; // @[Lookup.scala 11:37:@348.4]
  assign _T_490 = _T_181 ? 1'h0 : _T_489; // @[Lookup.scala 11:37:@349.4]
  assign _T_491 = _T_177 ? 1'h0 : _T_490; // @[Lookup.scala 11:37:@350.4]
  assign _T_492 = _T_173 ? 1'h0 : _T_491; // @[Lookup.scala 11:37:@351.4]
  assign _T_493 = _T_169 ? 1'h0 : _T_492; // @[Lookup.scala 11:37:@352.4]
  assign _T_494 = _T_165 ? 1'h0 : _T_493; // @[Lookup.scala 11:37:@353.4]
  assign _T_495 = _T_161 ? 1'h0 : _T_494; // @[Lookup.scala 11:37:@354.4]
  assign _T_496 = _T_157 ? 1'h0 : _T_495; // @[Lookup.scala 11:37:@355.4]
  assign _T_504 = _T_321 ? 2'h2 : 2'h0; // @[Lookup.scala 11:37:@364.4]
  assign _T_505 = _T_317 ? 2'h0 : _T_504; // @[Lookup.scala 11:37:@365.4]
  assign _T_506 = _T_313 ? 2'h0 : _T_505; // @[Lookup.scala 11:37:@366.4]
  assign _T_507 = _T_309 ? 2'h0 : _T_506; // @[Lookup.scala 11:37:@367.4]
  assign _T_508 = _T_305 ? 2'h2 : _T_507; // @[Lookup.scala 11:37:@368.4]
  assign _T_509 = _T_301 ? 2'h2 : _T_508; // @[Lookup.scala 11:37:@369.4]
  assign _T_510 = _T_297 ? 2'h0 : _T_509; // @[Lookup.scala 11:37:@370.4]
  assign _T_511 = _T_293 ? 2'h0 : _T_510; // @[Lookup.scala 11:37:@371.4]
  assign _T_512 = _T_289 ? 2'h0 : _T_511; // @[Lookup.scala 11:37:@372.4]
  assign _T_513 = _T_285 ? 2'h0 : _T_512; // @[Lookup.scala 11:37:@373.4]
  assign _T_514 = _T_281 ? 2'h0 : _T_513; // @[Lookup.scala 11:37:@374.4]
  assign _T_515 = _T_277 ? 2'h0 : _T_514; // @[Lookup.scala 11:37:@375.4]
  assign _T_516 = _T_273 ? 2'h0 : _T_515; // @[Lookup.scala 11:37:@376.4]
  assign _T_517 = _T_269 ? 2'h0 : _T_516; // @[Lookup.scala 11:37:@377.4]
  assign _T_518 = _T_265 ? 2'h0 : _T_517; // @[Lookup.scala 11:37:@378.4]
  assign _T_519 = _T_261 ? 2'h0 : _T_518; // @[Lookup.scala 11:37:@379.4]
  assign _T_520 = _T_257 ? 2'h0 : _T_519; // @[Lookup.scala 11:37:@380.4]
  assign _T_521 = _T_253 ? 2'h0 : _T_520; // @[Lookup.scala 11:37:@381.4]
  assign _T_522 = _T_249 ? 2'h0 : _T_521; // @[Lookup.scala 11:37:@382.4]
  assign _T_523 = _T_245 ? 2'h0 : _T_522; // @[Lookup.scala 11:37:@383.4]
  assign _T_524 = _T_241 ? 2'h0 : _T_523; // @[Lookup.scala 11:37:@384.4]
  assign _T_525 = _T_237 ? 2'h0 : _T_524; // @[Lookup.scala 11:37:@385.4]
  assign _T_526 = _T_233 ? 2'h0 : _T_525; // @[Lookup.scala 11:37:@386.4]
  assign _T_527 = _T_229 ? 2'h0 : _T_526; // @[Lookup.scala 11:37:@387.4]
  assign _T_528 = _T_225 ? 2'h0 : _T_527; // @[Lookup.scala 11:37:@388.4]
  assign _T_529 = _T_221 ? 2'h0 : _T_528; // @[Lookup.scala 11:37:@389.4]
  assign _T_530 = _T_217 ? 2'h0 : _T_529; // @[Lookup.scala 11:37:@390.4]
  assign _T_531 = _T_213 ? 2'h0 : _T_530; // @[Lookup.scala 11:37:@391.4]
  assign _T_532 = _T_209 ? 2'h0 : _T_531; // @[Lookup.scala 11:37:@392.4]
  assign _T_533 = _T_205 ? 2'h0 : _T_532; // @[Lookup.scala 11:37:@393.4]
  assign _T_534 = _T_201 ? 2'h0 : _T_533; // @[Lookup.scala 11:37:@394.4]
  assign _T_535 = _T_197 ? 2'h0 : _T_534; // @[Lookup.scala 11:37:@395.4]
  assign _T_536 = _T_193 ? 2'h0 : _T_535; // @[Lookup.scala 11:37:@396.4]
  assign _T_537 = _T_189 ? 2'h1 : _T_536; // @[Lookup.scala 11:37:@397.4]
  assign _T_538 = _T_185 ? 2'h1 : _T_537; // @[Lookup.scala 11:37:@398.4]
  assign _T_539 = _T_181 ? 2'h0 : _T_538; // @[Lookup.scala 11:37:@399.4]
  assign _T_540 = _T_177 ? 2'h0 : _T_539; // @[Lookup.scala 11:37:@400.4]
  assign _T_541 = _T_173 ? 2'h0 : _T_540; // @[Lookup.scala 11:37:@401.4]
  assign _T_542 = _T_169 ? 2'h0 : _T_541; // @[Lookup.scala 11:37:@402.4]
  assign _T_543 = _T_165 ? 2'h0 : _T_542; // @[Lookup.scala 11:37:@403.4]
  assign _T_544 = _T_161 ? 2'h0 : _T_543; // @[Lookup.scala 11:37:@404.4]
  assign _T_545 = _T_157 ? 2'h0 : _T_544; // @[Lookup.scala 11:37:@405.4]
  assign _T_565 = _T_273 ? 2'h1 : 2'h0; // @[Lookup.scala 11:37:@426.4]
  assign _T_566 = _T_269 ? 2'h0 : _T_565; // @[Lookup.scala 11:37:@427.4]
  assign _T_567 = _T_265 ? 2'h0 : _T_566; // @[Lookup.scala 11:37:@428.4]
  assign _T_568 = _T_261 ? 2'h0 : _T_567; // @[Lookup.scala 11:37:@429.4]
  assign _T_569 = _T_257 ? 2'h0 : _T_568; // @[Lookup.scala 11:37:@430.4]
  assign _T_570 = _T_253 ? 2'h0 : _T_569; // @[Lookup.scala 11:37:@431.4]
  assign _T_571 = _T_249 ? 2'h0 : _T_570; // @[Lookup.scala 11:37:@432.4]
  assign _T_572 = _T_245 ? 2'h0 : _T_571; // @[Lookup.scala 11:37:@433.4]
  assign _T_573 = _T_241 ? 2'h0 : _T_572; // @[Lookup.scala 11:37:@434.4]
  assign _T_574 = _T_237 ? 2'h0 : _T_573; // @[Lookup.scala 11:37:@435.4]
  assign _T_575 = _T_233 ? 2'h0 : _T_574; // @[Lookup.scala 11:37:@436.4]
  assign _T_576 = _T_229 ? 2'h0 : _T_575; // @[Lookup.scala 11:37:@437.4]
  assign _T_577 = _T_225 ? 2'h1 : _T_576; // @[Lookup.scala 11:37:@438.4]
  assign _T_578 = _T_221 ? 2'h1 : _T_577; // @[Lookup.scala 11:37:@439.4]
  assign _T_579 = _T_217 ? 2'h1 : _T_578; // @[Lookup.scala 11:37:@440.4]
  assign _T_580 = _T_213 ? 2'h1 : _T_579; // @[Lookup.scala 11:37:@441.4]
  assign _T_581 = _T_209 ? 2'h1 : _T_580; // @[Lookup.scala 11:37:@442.4]
  assign _T_582 = _T_205 ? 2'h1 : _T_581; // @[Lookup.scala 11:37:@443.4]
  assign _T_583 = _T_201 ? 2'h1 : _T_582; // @[Lookup.scala 11:37:@444.4]
  assign _T_584 = _T_197 ? 2'h1 : _T_583; // @[Lookup.scala 11:37:@445.4]
  assign _T_585 = _T_193 ? 2'h1 : _T_584; // @[Lookup.scala 11:37:@446.4]
  assign _T_586 = _T_189 ? 2'h0 : _T_585; // @[Lookup.scala 11:37:@447.4]
  assign _T_587 = _T_185 ? 2'h3 : _T_586; // @[Lookup.scala 11:37:@448.4]
  assign _T_588 = _T_181 ? 2'h2 : _T_587; // @[Lookup.scala 11:37:@449.4]
  assign _T_589 = _T_177 ? 2'h2 : _T_588; // @[Lookup.scala 11:37:@450.4]
  assign _T_590 = _T_173 ? 2'h2 : _T_589; // @[Lookup.scala 11:37:@451.4]
  assign _T_591 = _T_169 ? 2'h1 : _T_590; // @[Lookup.scala 11:37:@452.4]
  assign _T_592 = _T_165 ? 2'h1 : _T_591; // @[Lookup.scala 11:37:@453.4]
  assign _T_593 = _T_161 ? 2'h1 : _T_592; // @[Lookup.scala 11:37:@454.4]
  assign _T_594 = _T_157 ? 2'h1 : _T_593; // @[Lookup.scala 11:37:@455.4]
  assign _T_602 = _T_321 ? 4'h8 : 4'h0; // @[Lookup.scala 11:37:@464.4]
  assign _T_603 = _T_317 ? 4'h8 : _T_602; // @[Lookup.scala 11:37:@465.4]
  assign _T_604 = _T_313 ? 4'h8 : _T_603; // @[Lookup.scala 11:37:@466.4]
  assign _T_605 = _T_309 ? 4'h8 : _T_604; // @[Lookup.scala 11:37:@467.4]
  assign _T_606 = _T_305 ? 4'h8 : _T_605; // @[Lookup.scala 11:37:@468.4]
  assign _T_607 = _T_301 ? 4'h8 : _T_606; // @[Lookup.scala 11:37:@469.4]
  assign _T_608 = _T_297 ? 4'h0 : _T_607; // @[Lookup.scala 11:37:@470.4]
  assign _T_609 = _T_293 ? 4'h0 : _T_608; // @[Lookup.scala 11:37:@471.4]
  assign _T_610 = _T_289 ? 4'h0 : _T_609; // @[Lookup.scala 11:37:@472.4]
  assign _T_611 = _T_285 ? 4'h0 : _T_610; // @[Lookup.scala 11:37:@473.4]
  assign _T_612 = _T_281 ? 4'h0 : _T_611; // @[Lookup.scala 11:37:@474.4]
  assign _T_613 = _T_277 ? 4'h0 : _T_612; // @[Lookup.scala 11:37:@475.4]
  assign _T_614 = _T_273 ? 4'h0 : _T_613; // @[Lookup.scala 11:37:@476.4]
  assign _T_615 = _T_269 ? 4'h0 : _T_614; // @[Lookup.scala 11:37:@477.4]
  assign _T_616 = _T_265 ? 4'h5 : _T_615; // @[Lookup.scala 11:37:@478.4]
  assign _T_617 = _T_261 ? 4'hb : _T_616; // @[Lookup.scala 11:37:@479.4]
  assign _T_618 = _T_257 ? 4'h4 : _T_617; // @[Lookup.scala 11:37:@480.4]
  assign _T_619 = _T_253 ? 4'h6 : _T_618; // @[Lookup.scala 11:37:@481.4]
  assign _T_620 = _T_249 ? 4'h7 : _T_619; // @[Lookup.scala 11:37:@482.4]
  assign _T_621 = _T_245 ? 4'he : _T_620; // @[Lookup.scala 11:37:@483.4]
  assign _T_622 = _T_241 ? 4'hc : _T_621; // @[Lookup.scala 11:37:@484.4]
  assign _T_623 = _T_237 ? 4'ha : _T_622; // @[Lookup.scala 11:37:@485.4]
  assign _T_624 = _T_233 ? 4'h0 : _T_623; // @[Lookup.scala 11:37:@486.4]
  assign _T_625 = _T_229 ? 4'h1 : _T_624; // @[Lookup.scala 11:37:@487.4]
  assign _T_626 = _T_225 ? 4'h5 : _T_625; // @[Lookup.scala 11:37:@488.4]
  assign _T_627 = _T_221 ? 4'hb : _T_626; // @[Lookup.scala 11:37:@489.4]
  assign _T_628 = _T_217 ? 4'h1 : _T_627; // @[Lookup.scala 11:37:@490.4]
  assign _T_629 = _T_213 ? 4'he : _T_628; // @[Lookup.scala 11:37:@491.4]
  assign _T_630 = _T_209 ? 4'hc : _T_629; // @[Lookup.scala 11:37:@492.4]
  assign _T_631 = _T_205 ? 4'h4 : _T_630; // @[Lookup.scala 11:37:@493.4]
  assign _T_632 = _T_201 ? 4'h6 : _T_631; // @[Lookup.scala 11:37:@494.4]
  assign _T_633 = _T_197 ? 4'h7 : _T_632; // @[Lookup.scala 11:37:@495.4]
  assign _T_634 = _T_193 ? 4'h0 : _T_633; // @[Lookup.scala 11:37:@496.4]
  assign _T_635 = _T_189 ? 4'h8 : _T_634; // @[Lookup.scala 11:37:@497.4]
  assign _T_636 = _T_185 ? 4'h0 : _T_635; // @[Lookup.scala 11:37:@498.4]
  assign _T_637 = _T_181 ? 4'h0 : _T_636; // @[Lookup.scala 11:37:@499.4]
  assign _T_638 = _T_177 ? 4'h0 : _T_637; // @[Lookup.scala 11:37:@500.4]
  assign _T_639 = _T_173 ? 4'h0 : _T_638; // @[Lookup.scala 11:37:@501.4]
  assign _T_640 = _T_169 ? 4'h0 : _T_639; // @[Lookup.scala 11:37:@502.4]
  assign _T_641 = _T_165 ? 4'h0 : _T_640; // @[Lookup.scala 11:37:@503.4]
  assign _T_642 = _T_161 ? 4'h0 : _T_641; // @[Lookup.scala 11:37:@504.4]
  assign _T_643 = _T_157 ? 4'h0 : _T_642; // @[Lookup.scala 11:37:@505.4]
  assign _T_651 = _T_321 ? 2'h3 : 2'h0; // @[Lookup.scala 11:37:@514.4]
  assign _T_652 = _T_317 ? 2'h3 : _T_651; // @[Lookup.scala 11:37:@515.4]
  assign _T_653 = _T_313 ? 2'h3 : _T_652; // @[Lookup.scala 11:37:@516.4]
  assign _T_654 = _T_309 ? 2'h3 : _T_653; // @[Lookup.scala 11:37:@517.4]
  assign _T_655 = _T_305 ? 2'h3 : _T_654; // @[Lookup.scala 11:37:@518.4]
  assign _T_656 = _T_301 ? 2'h3 : _T_655; // @[Lookup.scala 11:37:@519.4]
  assign _T_657 = _T_297 ? 2'h0 : _T_656; // @[Lookup.scala 11:37:@520.4]
  assign _T_658 = _T_293 ? 2'h0 : _T_657; // @[Lookup.scala 11:37:@521.4]
  assign _T_659 = _T_289 ? 2'h0 : _T_658; // @[Lookup.scala 11:37:@522.4]
  assign _T_660 = _T_285 ? 2'h0 : _T_659; // @[Lookup.scala 11:37:@523.4]
  assign _T_661 = _T_281 ? 2'h0 : _T_660; // @[Lookup.scala 11:37:@524.4]
  assign _T_662 = _T_277 ? 2'h0 : _T_661; // @[Lookup.scala 11:37:@525.4]
  assign _T_663 = _T_273 ? 2'h2 : _T_662; // @[Lookup.scala 11:37:@526.4]
  assign _T_664 = _T_269 ? 2'h2 : _T_663; // @[Lookup.scala 11:37:@527.4]
  assign _T_665 = _T_265 ? 2'h0 : _T_664; // @[Lookup.scala 11:37:@528.4]
  assign _T_666 = _T_261 ? 2'h0 : _T_665; // @[Lookup.scala 11:37:@529.4]
  assign _T_667 = _T_257 ? 2'h0 : _T_666; // @[Lookup.scala 11:37:@530.4]
  assign _T_668 = _T_253 ? 2'h0 : _T_667; // @[Lookup.scala 11:37:@531.4]
  assign _T_669 = _T_249 ? 2'h0 : _T_668; // @[Lookup.scala 11:37:@532.4]
  assign _T_670 = _T_245 ? 2'h0 : _T_669; // @[Lookup.scala 11:37:@533.4]
  assign _T_671 = _T_241 ? 2'h0 : _T_670; // @[Lookup.scala 11:37:@534.4]
  assign _T_672 = _T_237 ? 2'h0 : _T_671; // @[Lookup.scala 11:37:@535.4]
  assign _T_673 = _T_233 ? 2'h0 : _T_672; // @[Lookup.scala 11:37:@536.4]
  assign _T_674 = _T_229 ? 2'h0 : _T_673; // @[Lookup.scala 11:37:@537.4]
  assign _T_675 = _T_225 ? 2'h0 : _T_674; // @[Lookup.scala 11:37:@538.4]
  assign _T_676 = _T_221 ? 2'h0 : _T_675; // @[Lookup.scala 11:37:@539.4]
  assign _T_677 = _T_217 ? 2'h0 : _T_676; // @[Lookup.scala 11:37:@540.4]
  assign _T_678 = _T_213 ? 2'h0 : _T_677; // @[Lookup.scala 11:37:@541.4]
  assign _T_679 = _T_209 ? 2'h0 : _T_678; // @[Lookup.scala 11:37:@542.4]
  assign _T_680 = _T_205 ? 2'h0 : _T_679; // @[Lookup.scala 11:37:@543.4]
  assign _T_681 = _T_201 ? 2'h0 : _T_680; // @[Lookup.scala 11:37:@544.4]
  assign _T_682 = _T_197 ? 2'h0 : _T_681; // @[Lookup.scala 11:37:@545.4]
  assign _T_683 = _T_193 ? 2'h0 : _T_682; // @[Lookup.scala 11:37:@546.4]
  assign _T_684 = _T_189 ? 2'h0 : _T_683; // @[Lookup.scala 11:37:@547.4]
  assign _T_685 = _T_185 ? 2'h0 : _T_684; // @[Lookup.scala 11:37:@548.4]
  assign _T_686 = _T_181 ? 2'h0 : _T_685; // @[Lookup.scala 11:37:@549.4]
  assign _T_687 = _T_177 ? 2'h0 : _T_686; // @[Lookup.scala 11:37:@550.4]
  assign _T_688 = _T_173 ? 2'h0 : _T_687; // @[Lookup.scala 11:37:@551.4]
  assign _T_689 = _T_169 ? 2'h1 : _T_688; // @[Lookup.scala 11:37:@552.4]
  assign _T_690 = _T_165 ? 2'h1 : _T_689; // @[Lookup.scala 11:37:@553.4]
  assign _T_691 = _T_161 ? 2'h1 : _T_690; // @[Lookup.scala 11:37:@554.4]
  assign _T_692 = _T_157 ? 2'h1 : _T_691; // @[Lookup.scala 11:37:@555.4]
  assign _T_701 = _T_317 ? 1'h1 : _T_321; // @[Lookup.scala 11:37:@565.4]
  assign _T_702 = _T_313 ? 1'h1 : _T_701; // @[Lookup.scala 11:37:@566.4]
  assign _T_703 = _T_309 ? 1'h1 : _T_702; // @[Lookup.scala 11:37:@567.4]
  assign _T_704 = _T_305 ? 1'h1 : _T_703; // @[Lookup.scala 11:37:@568.4]
  assign _T_705 = _T_301 ? 1'h1 : _T_704; // @[Lookup.scala 11:37:@569.4]
  assign _T_706 = _T_297 ? 1'h0 : _T_705; // @[Lookup.scala 11:37:@570.4]
  assign _T_707 = _T_293 ? 1'h0 : _T_706; // @[Lookup.scala 11:37:@571.4]
  assign _T_708 = _T_289 ? 1'h0 : _T_707; // @[Lookup.scala 11:37:@572.4]
  assign _T_709 = _T_285 ? 1'h0 : _T_708; // @[Lookup.scala 11:37:@573.4]
  assign _T_710 = _T_281 ? 1'h0 : _T_709; // @[Lookup.scala 11:37:@574.4]
  assign _T_711 = _T_277 ? 1'h0 : _T_710; // @[Lookup.scala 11:37:@575.4]
  assign _T_712 = _T_273 ? 1'h1 : _T_711; // @[Lookup.scala 11:37:@576.4]
  assign _T_713 = _T_269 ? 1'h1 : _T_712; // @[Lookup.scala 11:37:@577.4]
  assign _T_714 = _T_265 ? 1'h1 : _T_713; // @[Lookup.scala 11:37:@578.4]
  assign _T_715 = _T_261 ? 1'h1 : _T_714; // @[Lookup.scala 11:37:@579.4]
  assign _T_716 = _T_257 ? 1'h1 : _T_715; // @[Lookup.scala 11:37:@580.4]
  assign _T_717 = _T_253 ? 1'h1 : _T_716; // @[Lookup.scala 11:37:@581.4]
  assign _T_718 = _T_249 ? 1'h1 : _T_717; // @[Lookup.scala 11:37:@582.4]
  assign _T_719 = _T_245 ? 1'h1 : _T_718; // @[Lookup.scala 11:37:@583.4]
  assign _T_720 = _T_241 ? 1'h1 : _T_719; // @[Lookup.scala 11:37:@584.4]
  assign _T_721 = _T_237 ? 1'h1 : _T_720; // @[Lookup.scala 11:37:@585.4]
  assign _T_722 = _T_233 ? 1'h1 : _T_721; // @[Lookup.scala 11:37:@586.4]
  assign _T_723 = _T_229 ? 1'h1 : _T_722; // @[Lookup.scala 11:37:@587.4]
  assign _T_724 = _T_225 ? 1'h1 : _T_723; // @[Lookup.scala 11:37:@588.4]
  assign _T_725 = _T_221 ? 1'h1 : _T_724; // @[Lookup.scala 11:37:@589.4]
  assign _T_726 = _T_217 ? 1'h1 : _T_725; // @[Lookup.scala 11:37:@590.4]
  assign _T_727 = _T_213 ? 1'h1 : _T_726; // @[Lookup.scala 11:37:@591.4]
  assign _T_728 = _T_209 ? 1'h1 : _T_727; // @[Lookup.scala 11:37:@592.4]
  assign _T_729 = _T_205 ? 1'h1 : _T_728; // @[Lookup.scala 11:37:@593.4]
  assign _T_730 = _T_201 ? 1'h1 : _T_729; // @[Lookup.scala 11:37:@594.4]
  assign _T_731 = _T_197 ? 1'h1 : _T_730; // @[Lookup.scala 11:37:@595.4]
  assign _T_732 = _T_193 ? 1'h1 : _T_731; // @[Lookup.scala 11:37:@596.4]
  assign _T_733 = _T_189 ? 1'h1 : _T_732; // @[Lookup.scala 11:37:@597.4]
  assign _T_734 = _T_185 ? 1'h1 : _T_733; // @[Lookup.scala 11:37:@598.4]
  assign _T_735 = _T_181 ? 1'h0 : _T_734; // @[Lookup.scala 11:37:@599.4]
  assign _T_736 = _T_177 ? 1'h0 : _T_735; // @[Lookup.scala 11:37:@600.4]
  assign _T_737 = _T_173 ? 1'h0 : _T_736; // @[Lookup.scala 11:37:@601.4]
  assign _T_738 = _T_169 ? 1'h1 : _T_737; // @[Lookup.scala 11:37:@602.4]
  assign _T_739 = _T_165 ? 1'h1 : _T_738; // @[Lookup.scala 11:37:@603.4]
  assign _T_740 = _T_161 ? 1'h1 : _T_739; // @[Lookup.scala 11:37:@604.4]
  assign _T_741 = _T_157 ? 1'h1 : _T_740; // @[Lookup.scala 11:37:@605.4]
  assign cs0_2 = _T_153 ? 1'h1 : _T_741; // @[Lookup.scala 11:37:@606.4]
  assign _T_763 = _T_265 ? 1'h1 : _T_269; // @[Lookup.scala 11:37:@628.4]
  assign _T_764 = _T_261 ? 1'h1 : _T_763; // @[Lookup.scala 11:37:@629.4]
  assign _T_765 = _T_257 ? 1'h1 : _T_764; // @[Lookup.scala 11:37:@630.4]
  assign _T_766 = _T_253 ? 1'h1 : _T_765; // @[Lookup.scala 11:37:@631.4]
  assign _T_767 = _T_249 ? 1'h1 : _T_766; // @[Lookup.scala 11:37:@632.4]
  assign _T_768 = _T_245 ? 1'h1 : _T_767; // @[Lookup.scala 11:37:@633.4]
  assign _T_769 = _T_241 ? 1'h1 : _T_768; // @[Lookup.scala 11:37:@634.4]
  assign _T_770 = _T_237 ? 1'h1 : _T_769; // @[Lookup.scala 11:37:@635.4]
  assign _T_771 = _T_233 ? 1'h1 : _T_770; // @[Lookup.scala 11:37:@636.4]
  assign _T_772 = _T_229 ? 1'h1 : _T_771; // @[Lookup.scala 11:37:@637.4]
  assign _T_773 = _T_225 ? 1'h1 : _T_772; // @[Lookup.scala 11:37:@638.4]
  assign _T_774 = _T_221 ? 1'h1 : _T_773; // @[Lookup.scala 11:37:@639.4]
  assign _T_775 = _T_217 ? 1'h1 : _T_774; // @[Lookup.scala 11:37:@640.4]
  assign _T_776 = _T_213 ? 1'h1 : _T_775; // @[Lookup.scala 11:37:@641.4]
  assign _T_777 = _T_209 ? 1'h1 : _T_776; // @[Lookup.scala 11:37:@642.4]
  assign _T_778 = _T_205 ? 1'h1 : _T_777; // @[Lookup.scala 11:37:@643.4]
  assign _T_779 = _T_201 ? 1'h1 : _T_778; // @[Lookup.scala 11:37:@644.4]
  assign _T_780 = _T_197 ? 1'h1 : _T_779; // @[Lookup.scala 11:37:@645.4]
  assign _T_781 = _T_193 ? 1'h1 : _T_780; // @[Lookup.scala 11:37:@646.4]
  assign _T_782 = _T_189 ? 1'h1 : _T_781; // @[Lookup.scala 11:37:@647.4]
  assign _T_783 = _T_185 ? 1'h1 : _T_782; // @[Lookup.scala 11:37:@648.4]
  assign _T_784 = _T_181 ? 1'h0 : _T_783; // @[Lookup.scala 11:37:@649.4]
  assign _T_785 = _T_177 ? 1'h0 : _T_784; // @[Lookup.scala 11:37:@650.4]
  assign _T_786 = _T_173 ? 1'h0 : _T_785; // @[Lookup.scala 11:37:@651.4]
  assign _T_787 = _T_169 ? 1'h0 : _T_786; // @[Lookup.scala 11:37:@652.4]
  assign _T_788 = _T_165 ? 1'h0 : _T_787; // @[Lookup.scala 11:37:@653.4]
  assign _T_789 = _T_161 ? 1'h0 : _T_788; // @[Lookup.scala 11:37:@654.4]
  assign _T_790 = _T_157 ? 1'h0 : _T_789; // @[Lookup.scala 11:37:@655.4]
  assign _T_883 = _T_177 ? 1'h1 : _T_181; // @[Lookup.scala 11:37:@750.4]
  assign _T_884 = _T_173 ? 1'h1 : _T_883; // @[Lookup.scala 11:37:@751.4]
  assign _T_885 = _T_169 ? 1'h0 : _T_884; // @[Lookup.scala 11:37:@752.4]
  assign _T_886 = _T_165 ? 1'h0 : _T_885; // @[Lookup.scala 11:37:@753.4]
  assign _T_887 = _T_161 ? 1'h0 : _T_886; // @[Lookup.scala 11:37:@754.4]
  assign _T_888 = _T_157 ? 1'h0 : _T_887; // @[Lookup.scala 11:37:@755.4]
  assign _T_931 = _T_181 ? 3'h2 : 3'h0; // @[Lookup.scala 11:37:@799.4]
  assign _T_932 = _T_177 ? 3'h1 : _T_931; // @[Lookup.scala 11:37:@800.4]
  assign _T_933 = _T_173 ? 3'h3 : _T_932; // @[Lookup.scala 11:37:@801.4]
  assign _T_934 = _T_169 ? 3'h6 : _T_933; // @[Lookup.scala 11:37:@802.4]
  assign _T_935 = _T_165 ? 3'h2 : _T_934; // @[Lookup.scala 11:37:@803.4]
  assign _T_936 = _T_161 ? 3'h5 : _T_935; // @[Lookup.scala 11:37:@804.4]
  assign _T_937 = _T_157 ? 3'h1 : _T_936; // @[Lookup.scala 11:37:@805.4]
  assign _T_940 = _T_341 ? 3'h4 : 3'h0; // @[Lookup.scala 11:37:@809.4]
  assign _T_941 = _T_337 ? 3'h4 : _T_940; // @[Lookup.scala 11:37:@810.4]
  assign _T_942 = _T_333 ? 3'h4 : _T_941; // @[Lookup.scala 11:37:@811.4]
  assign _T_943 = _T_329 ? 3'h4 : _T_942; // @[Lookup.scala 11:37:@812.4]
  assign _T_944 = _T_325 ? 3'h4 : _T_943; // @[Lookup.scala 11:37:@813.4]
  assign _T_945 = _T_321 ? 3'h3 : _T_944; // @[Lookup.scala 11:37:@814.4]
  assign _T_946 = _T_317 ? 3'h3 : _T_945; // @[Lookup.scala 11:37:@815.4]
  assign _T_947 = _T_313 ? 3'h2 : _T_946; // @[Lookup.scala 11:37:@816.4]
  assign _T_948 = _T_309 ? 3'h1 : _T_947; // @[Lookup.scala 11:37:@817.4]
  assign _T_949 = _T_305 ? 3'h2 : _T_948; // @[Lookup.scala 11:37:@818.4]
  assign _T_950 = _T_301 ? 3'h1 : _T_949; // @[Lookup.scala 11:37:@819.4]
  assign _T_951 = _T_297 ? 3'h0 : _T_950; // @[Lookup.scala 11:37:@820.4]
  assign _T_952 = _T_293 ? 3'h0 : _T_951; // @[Lookup.scala 11:37:@821.4]
  assign _T_953 = _T_289 ? 3'h0 : _T_952; // @[Lookup.scala 11:37:@822.4]
  assign _T_954 = _T_285 ? 3'h0 : _T_953; // @[Lookup.scala 11:37:@823.4]
  assign _T_955 = _T_281 ? 3'h0 : _T_954; // @[Lookup.scala 11:37:@824.4]
  assign _T_956 = _T_277 ? 3'h0 : _T_955; // @[Lookup.scala 11:37:@825.4]
  assign _T_957 = _T_273 ? 3'h0 : _T_956; // @[Lookup.scala 11:37:@826.4]
  assign _T_958 = _T_269 ? 3'h0 : _T_957; // @[Lookup.scala 11:37:@827.4]
  assign _T_959 = _T_265 ? 3'h0 : _T_958; // @[Lookup.scala 11:37:@828.4]
  assign _T_960 = _T_261 ? 3'h0 : _T_959; // @[Lookup.scala 11:37:@829.4]
  assign _T_961 = _T_257 ? 3'h0 : _T_960; // @[Lookup.scala 11:37:@830.4]
  assign _T_962 = _T_253 ? 3'h0 : _T_961; // @[Lookup.scala 11:37:@831.4]
  assign _T_963 = _T_249 ? 3'h0 : _T_962; // @[Lookup.scala 11:37:@832.4]
  assign _T_964 = _T_245 ? 3'h0 : _T_963; // @[Lookup.scala 11:37:@833.4]
  assign _T_965 = _T_241 ? 3'h0 : _T_964; // @[Lookup.scala 11:37:@834.4]
  assign _T_966 = _T_237 ? 3'h0 : _T_965; // @[Lookup.scala 11:37:@835.4]
  assign _T_967 = _T_233 ? 3'h0 : _T_966; // @[Lookup.scala 11:37:@836.4]
  assign _T_968 = _T_229 ? 3'h0 : _T_967; // @[Lookup.scala 11:37:@837.4]
  assign _T_969 = _T_225 ? 3'h0 : _T_968; // @[Lookup.scala 11:37:@838.4]
  assign _T_970 = _T_221 ? 3'h0 : _T_969; // @[Lookup.scala 11:37:@839.4]
  assign _T_971 = _T_217 ? 3'h0 : _T_970; // @[Lookup.scala 11:37:@840.4]
  assign _T_972 = _T_213 ? 3'h0 : _T_971; // @[Lookup.scala 11:37:@841.4]
  assign _T_973 = _T_209 ? 3'h0 : _T_972; // @[Lookup.scala 11:37:@842.4]
  assign _T_974 = _T_205 ? 3'h0 : _T_973; // @[Lookup.scala 11:37:@843.4]
  assign _T_975 = _T_201 ? 3'h0 : _T_974; // @[Lookup.scala 11:37:@844.4]
  assign _T_976 = _T_197 ? 3'h0 : _T_975; // @[Lookup.scala 11:37:@845.4]
  assign _T_977 = _T_193 ? 3'h0 : _T_976; // @[Lookup.scala 11:37:@846.4]
  assign _T_978 = _T_189 ? 3'h0 : _T_977; // @[Lookup.scala 11:37:@847.4]
  assign _T_979 = _T_185 ? 3'h0 : _T_978; // @[Lookup.scala 11:37:@848.4]
  assign _T_980 = _T_181 ? 3'h0 : _T_979; // @[Lookup.scala 11:37:@849.4]
  assign _T_981 = _T_177 ? 3'h0 : _T_980; // @[Lookup.scala 11:37:@850.4]
  assign _T_982 = _T_173 ? 3'h0 : _T_981; // @[Lookup.scala 11:37:@851.4]
  assign _T_983 = _T_169 ? 3'h0 : _T_982; // @[Lookup.scala 11:37:@852.4]
  assign _T_984 = _T_165 ? 3'h0 : _T_983; // @[Lookup.scala 11:37:@853.4]
  assign _T_985 = _T_161 ? 3'h0 : _T_984; // @[Lookup.scala 11:37:@854.4]
  assign _T_986 = _T_157 ? 3'h0 : _T_985; // @[Lookup.scala 11:37:@855.4]
  assign cs0_7 = _T_153 ? 3'h0 : _T_986; // @[Lookup.scala 11:37:@856.4]
  assign _T_1037 = cs_br_type == 4'h0; // @[Cpath.scala 132:20:@908.4]
  assign _T_1038 = cs_br_type == 4'h1; // @[Cpath.scala 133:22:@909.4]
  assign _T_1040 = io_dat_br_eq == 1'h0; // @[Cpath.scala 133:37:@910.4]
  assign _T_1041 = _T_1040 ? 3'h1 : 3'h0; // @[Cpath.scala 133:36:@911.4]
  assign _T_1042 = cs_br_type == 4'h2; // @[Cpath.scala 134:24:@912.4]
  assign _T_1043 = io_dat_br_eq ? 3'h1 : 3'h0; // @[Cpath.scala 134:38:@913.4]
  assign _T_1044 = cs_br_type == 4'h3; // @[Cpath.scala 135:26:@914.4]
  assign _T_1046 = io_dat_br_lt == 1'h0; // @[Cpath.scala 135:41:@915.4]
  assign _T_1047 = _T_1046 ? 3'h1 : 3'h0; // @[Cpath.scala 135:40:@916.4]
  assign _T_1048 = cs_br_type == 4'h4; // @[Cpath.scala 136:28:@917.4]
  assign _T_1050 = io_dat_br_ltu == 1'h0; // @[Cpath.scala 136:44:@918.4]
  assign _T_1051 = _T_1050 ? 3'h1 : 3'h0; // @[Cpath.scala 136:43:@919.4]
  assign _T_1052 = cs_br_type == 4'h5; // @[Cpath.scala 137:30:@920.4]
  assign _T_1053 = io_dat_br_lt ? 3'h1 : 3'h0; // @[Cpath.scala 137:44:@921.4]
  assign _T_1054 = cs_br_type == 4'h6; // @[Cpath.scala 138:32:@922.4]
  assign _T_1055 = io_dat_br_ltu ? 3'h1 : 3'h0; // @[Cpath.scala 138:47:@923.4]
  assign _T_1056 = cs_br_type == 4'h7; // @[Cpath.scala 139:34:@924.4]
  assign _T_1057 = cs_br_type == 4'h8; // @[Cpath.scala 140:36:@925.4]
  assign _T_1058 = _T_1057 ? 3'h3 : 3'h0; // @[Cpath.scala 140:24:@926.4]
  assign _T_1059 = _T_1056 ? 3'h2 : _T_1058; // @[Cpath.scala 139:22:@927.4]
  assign _T_1060 = _T_1054 ? _T_1055 : _T_1059; // @[Cpath.scala 138:20:@928.4]
  assign _T_1061 = _T_1052 ? _T_1053 : _T_1060; // @[Cpath.scala 137:18:@929.4]
  assign _T_1062 = _T_1048 ? _T_1051 : _T_1061; // @[Cpath.scala 136:16:@930.4]
  assign _T_1063 = _T_1044 ? _T_1047 : _T_1062; // @[Cpath.scala 135:14:@931.4]
  assign _T_1064 = _T_1042 ? _T_1043 : _T_1063; // @[Cpath.scala 134:12:@932.4]
  assign _T_1065 = _T_1038 ? _T_1041 : _T_1064; // @[Cpath.scala 133:10:@933.4]
  assign _T_1066 = _T_1037 ? 3'h0 : _T_1065; // @[Cpath.scala 132:8:@934.4]
  assign take_evec = _T_1092 | io_dat_csr_eret; // @[Cpath.scala 173:42:@974.4]
  assign ctrl_pc_sel = take_evec ? 3'h4 : _T_1066; // @[Cpath.scala 131:24:@935.4]
  assign _T_1067 = ctrl_pc_sel == 3'h0; // @[Cpath.scala 144:38:@936.4]
  assign _T_1069 = _T_1067 == 1'h0; // @[Cpath.scala 144:24:@937.4]
  assign _T_1073 = io_imem_resp_valid == 1'h0; // @[Cpath.scala 153:24:@948.4]
  assign rs1_addr = io_imem_resp_bits_inst[19:15]; // @[Cpath.scala 156:40:@954.4]
  assign _T_1078 = cs0_7 == 3'h2; // @[Cpath.scala 157:29:@955.4]
  assign _T_1079 = cs0_7 == 3'h3; // @[Cpath.scala 157:53:@956.4]
  assign _T_1080 = _T_1078 | _T_1079; // @[Cpath.scala 157:39:@957.4]
  assign _T_1082 = rs1_addr == 5'h0; // @[Cpath.scala 157:76:@958.4]
  assign csr_ren = _T_1080 & _T_1082; // @[Cpath.scala 157:64:@959.4]
  assign csr_cmd = csr_ren ? 3'h5 : cs0_7; // @[Cpath.scala 158:20:@960.4]
  assign _T_1089 = cs_inst_val == 1'h0; // @[Cpath.scala 172:23:@969.4]
  assign io_imem_req_valid = _T_1069 & io_imem_resp_valid; // @[Cpath.scala 144:21:@939.4]
  assign io_ctl_exe_kill = _T_1092 | io_dat_csr_eret; // @[Cpath.scala 146:19:@940.4]
  assign io_ctl_pc_sel = take_evec ? 3'h4 : _T_1066; // @[Cpath.scala 147:17:@941.4]
  assign io_ctl_brjmp_sel = _T_153 ? 1'h0 : _T_496; // @[Cpath.scala 148:20:@943.4]
  assign io_ctl_op1_sel = _T_153 ? 2'h0 : _T_545; // @[Cpath.scala 149:18:@944.4]
  assign io_ctl_op2_sel = _T_153 ? 2'h1 : _T_594; // @[Cpath.scala 150:18:@945.4]
  assign io_ctl_alu_fun = _T_153 ? 4'h0 : _T_643; // @[Cpath.scala 151:18:@946.4]
  assign io_ctl_wb_sel = _T_153 ? 2'h1 : _T_692; // @[Cpath.scala 152:17:@947.4]
  assign io_ctl_rf_wen = _T_1073 ? 1'h0 : cs0_2; // @[Cpath.scala 153:17:@951.4]
  assign io_ctl_bypassable = _T_153 ? 1'h0 : _T_790; // @[Cpath.scala 154:21:@953.4]
  assign io_ctl_csr_cmd = _T_1073 ? 3'h0 : csr_cmd; // @[Cpath.scala 159:18:@963.4]
  assign io_ctl_dmem_fcn = _T_153 ? 1'h0 : _T_888; // @[Cpath.scala 166:19:@967.4]
  assign io_ctl_dmem_typ = _T_153 ? 3'h3 : _T_937; // @[Cpath.scala 167:19:@968.4]
  assign io_ctl_exception = _T_1089 & io_imem_resp_valid; // @[Cpath.scala 172:20:@971.4]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  _T_1092 = _RAND_0[0:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    _T_1092 <= io_ctl_exception;
  end
endmodule
module ALU( // @[:@977.2]
  input  [3:0]  io_fn, // @[:@980.4]
  input  [31:0] io_in2, // @[:@980.4]
  input  [31:0] io_in1, // @[:@980.4]
  output [31:0] io_out, // @[:@980.4]
  output [31:0] io_adder_out // @[:@980.4]
);
  wire  _T_15; // @[ALU.scala 28:29:@982.4]
  wire [32:0] _T_17; // @[ALU.scala 49:40:@983.4]
  wire [32:0] _T_18; // @[ALU.scala 49:40:@984.4]
  wire [31:0] _T_19; // @[ALU.scala 49:40:@985.4]
  wire [31:0] _T_20; // @[ALU.scala 49:25:@986.4]
  wire [32:0] _T_21; // @[ALU.scala 49:20:@987.4]
  wire [31:0] sum; // @[ALU.scala 49:20:@988.4]
  wire  _T_22; // @[ALU.scala 52:26:@989.4]
  wire  _T_23; // @[ALU.scala 52:42:@990.4]
  wire  _T_24; // @[ALU.scala 52:32:@991.4]
  wire  _T_25; // @[ALU.scala 52:52:@992.4]
  wire  _T_26; // @[ALU.scala 29:30:@993.4]
  wire  _T_29; // @[ALU.scala 53:18:@996.4]
  wire  less; // @[ALU.scala 52:19:@997.4]
  wire [4:0] shamt; // @[ALU.scala 57:21:@998.4]
  wire  _T_30; // @[ALU.scala 59:24:@1000.4]
  wire  _T_31; // @[ALU.scala 59:46:@1001.4]
  wire  _T_32; // @[ALU.scala 59:37:@1002.4]
  wire [15:0] _T_37; // @[Bitwise.scala 103:21:@1005.4]
  wire [31:0] _T_38; // @[Bitwise.scala 103:31:@1006.4]
  wire [15:0] _T_39; // @[Bitwise.scala 103:46:@1007.4]
  wire [31:0] _GEN_0; // @[Bitwise.scala 103:65:@1008.4]
  wire [31:0] _T_40; // @[Bitwise.scala 103:65:@1008.4]
  wire [31:0] _T_42; // @[Bitwise.scala 103:75:@1010.4]
  wire [31:0] _T_43; // @[Bitwise.scala 103:39:@1011.4]
  wire [23:0] _T_47; // @[Bitwise.scala 103:21:@1015.4]
  wire [31:0] _GEN_1; // @[Bitwise.scala 103:31:@1016.4]
  wire [31:0] _T_48; // @[Bitwise.scala 103:31:@1016.4]
  wire [23:0] _T_49; // @[Bitwise.scala 103:46:@1017.4]
  wire [31:0] _GEN_2; // @[Bitwise.scala 103:65:@1018.4]
  wire [31:0] _T_50; // @[Bitwise.scala 103:65:@1018.4]
  wire [31:0] _T_52; // @[Bitwise.scala 103:75:@1020.4]
  wire [31:0] _T_53; // @[Bitwise.scala 103:39:@1021.4]
  wire [27:0] _T_57; // @[Bitwise.scala 103:21:@1025.4]
  wire [31:0] _GEN_3; // @[Bitwise.scala 103:31:@1026.4]
  wire [31:0] _T_58; // @[Bitwise.scala 103:31:@1026.4]
  wire [27:0] _T_59; // @[Bitwise.scala 103:46:@1027.4]
  wire [31:0] _GEN_4; // @[Bitwise.scala 103:65:@1028.4]
  wire [31:0] _T_60; // @[Bitwise.scala 103:65:@1028.4]
  wire [31:0] _T_62; // @[Bitwise.scala 103:75:@1030.4]
  wire [31:0] _T_63; // @[Bitwise.scala 103:39:@1031.4]
  wire [29:0] _T_67; // @[Bitwise.scala 103:21:@1035.4]
  wire [31:0] _GEN_5; // @[Bitwise.scala 103:31:@1036.4]
  wire [31:0] _T_68; // @[Bitwise.scala 103:31:@1036.4]
  wire [29:0] _T_69; // @[Bitwise.scala 103:46:@1037.4]
  wire [31:0] _GEN_6; // @[Bitwise.scala 103:65:@1038.4]
  wire [31:0] _T_70; // @[Bitwise.scala 103:65:@1038.4]
  wire [31:0] _T_72; // @[Bitwise.scala 103:75:@1040.4]
  wire [31:0] _T_73; // @[Bitwise.scala 103:39:@1041.4]
  wire [30:0] _T_77; // @[Bitwise.scala 103:21:@1045.4]
  wire [31:0] _GEN_7; // @[Bitwise.scala 103:31:@1046.4]
  wire [31:0] _T_78; // @[Bitwise.scala 103:31:@1046.4]
  wire [30:0] _T_79; // @[Bitwise.scala 103:46:@1047.4]
  wire [31:0] _GEN_8; // @[Bitwise.scala 103:65:@1048.4]
  wire [31:0] _T_80; // @[Bitwise.scala 103:65:@1048.4]
  wire [31:0] _T_82; // @[Bitwise.scala 103:75:@1050.4]
  wire [31:0] _T_83; // @[Bitwise.scala 103:39:@1051.4]
  wire [31:0] shin; // @[ALU.scala 59:17:@1052.4]
  wire  _T_85; // @[ALU.scala 60:41:@1054.4]
  wire  _T_86; // @[ALU.scala 60:35:@1055.4]
  wire [32:0] _T_87; // @[Cat.scala 30:58:@1056.4]
  wire [32:0] _T_88; // @[ALU.scala 60:60:@1057.4]
  wire [32:0] _T_89; // @[ALU.scala 60:63:@1058.4]
  wire [31:0] shout_r; // @[ALU.scala 60:72:@1059.4]
  wire [15:0] _T_94; // @[Bitwise.scala 103:21:@1062.4]
  wire [31:0] _T_95; // @[Bitwise.scala 103:31:@1063.4]
  wire [15:0] _T_96; // @[Bitwise.scala 103:46:@1064.4]
  wire [31:0] _GEN_9; // @[Bitwise.scala 103:65:@1065.4]
  wire [31:0] _T_97; // @[Bitwise.scala 103:65:@1065.4]
  wire [31:0] _T_99; // @[Bitwise.scala 103:75:@1067.4]
  wire [31:0] _T_100; // @[Bitwise.scala 103:39:@1068.4]
  wire [23:0] _T_104; // @[Bitwise.scala 103:21:@1072.4]
  wire [31:0] _GEN_10; // @[Bitwise.scala 103:31:@1073.4]
  wire [31:0] _T_105; // @[Bitwise.scala 103:31:@1073.4]
  wire [23:0] _T_106; // @[Bitwise.scala 103:46:@1074.4]
  wire [31:0] _GEN_11; // @[Bitwise.scala 103:65:@1075.4]
  wire [31:0] _T_107; // @[Bitwise.scala 103:65:@1075.4]
  wire [31:0] _T_109; // @[Bitwise.scala 103:75:@1077.4]
  wire [31:0] _T_110; // @[Bitwise.scala 103:39:@1078.4]
  wire [27:0] _T_114; // @[Bitwise.scala 103:21:@1082.4]
  wire [31:0] _GEN_12; // @[Bitwise.scala 103:31:@1083.4]
  wire [31:0] _T_115; // @[Bitwise.scala 103:31:@1083.4]
  wire [27:0] _T_116; // @[Bitwise.scala 103:46:@1084.4]
  wire [31:0] _GEN_13; // @[Bitwise.scala 103:65:@1085.4]
  wire [31:0] _T_117; // @[Bitwise.scala 103:65:@1085.4]
  wire [31:0] _T_119; // @[Bitwise.scala 103:75:@1087.4]
  wire [31:0] _T_120; // @[Bitwise.scala 103:39:@1088.4]
  wire [29:0] _T_124; // @[Bitwise.scala 103:21:@1092.4]
  wire [31:0] _GEN_14; // @[Bitwise.scala 103:31:@1093.4]
  wire [31:0] _T_125; // @[Bitwise.scala 103:31:@1093.4]
  wire [29:0] _T_126; // @[Bitwise.scala 103:46:@1094.4]
  wire [31:0] _GEN_15; // @[Bitwise.scala 103:65:@1095.4]
  wire [31:0] _T_127; // @[Bitwise.scala 103:65:@1095.4]
  wire [31:0] _T_129; // @[Bitwise.scala 103:75:@1097.4]
  wire [31:0] _T_130; // @[Bitwise.scala 103:39:@1098.4]
  wire [30:0] _T_134; // @[Bitwise.scala 103:21:@1102.4]
  wire [31:0] _GEN_16; // @[Bitwise.scala 103:31:@1103.4]
  wire [31:0] _T_135; // @[Bitwise.scala 103:31:@1103.4]
  wire [30:0] _T_136; // @[Bitwise.scala 103:46:@1104.4]
  wire [31:0] _GEN_17; // @[Bitwise.scala 103:65:@1105.4]
  wire [31:0] _T_137; // @[Bitwise.scala 103:65:@1105.4]
  wire [31:0] _T_139; // @[Bitwise.scala 103:75:@1107.4]
  wire [31:0] shout_l; // @[Bitwise.scala 103:39:@1108.4]
  wire  _T_140; // @[ALU.scala 64:15:@1109.4]
  wire [31:0] _T_141; // @[ALU.scala 64:35:@1110.4]
  wire  _T_142; // @[ALU.scala 65:15:@1111.4]
  wire [31:0] _T_143; // @[ALU.scala 65:35:@1112.4]
  wire  _T_144; // @[ALU.scala 66:15:@1113.4]
  wire [31:0] _T_145; // @[ALU.scala 66:35:@1114.4]
  wire [31:0] _T_146; // @[ALU.scala 66:8:@1115.4]
  wire [31:0] _T_147; // @[ALU.scala 65:8:@1116.4]
  wire [31:0] bitwise_logic; // @[ALU.scala 64:8:@1117.4]
  wire  _T_148; // @[ALU.scala 70:15:@1118.4]
  wire  _T_149; // @[ALU.scala 70:36:@1119.4]
  wire  _T_150; // @[ALU.scala 70:27:@1120.4]
  wire  _T_151; // @[ALU.scala 71:15:@1121.4]
  wire  _T_152; // @[ALU.scala 71:36:@1122.4]
  wire  _T_153; // @[ALU.scala 71:27:@1123.4]
  wire  _T_157; // @[ALU.scala 73:15:@1127.4]
  wire [31:0] _T_158; // @[ALU.scala 73:8:@1128.4]
  wire [31:0] _T_159; // @[ALU.scala 72:8:@1129.4]
  wire [31:0] _T_160; // @[ALU.scala 71:8:@1130.4]
  assign _T_15 = io_fn[3]; // @[ALU.scala 28:29:@982.4]
  assign _T_17 = 32'h0 - io_in2; // @[ALU.scala 49:40:@983.4]
  assign _T_18 = $unsigned(_T_17); // @[ALU.scala 49:40:@984.4]
  assign _T_19 = _T_18[31:0]; // @[ALU.scala 49:40:@985.4]
  assign _T_20 = _T_15 ? _T_19 : io_in2; // @[ALU.scala 49:25:@986.4]
  assign _T_21 = io_in1 + _T_20; // @[ALU.scala 49:20:@987.4]
  assign sum = io_in1 + _T_20; // @[ALU.scala 49:20:@988.4]
  assign _T_22 = io_in1[31]; // @[ALU.scala 52:26:@989.4]
  assign _T_23 = io_in2[31]; // @[ALU.scala 52:42:@990.4]
  assign _T_24 = _T_22 == _T_23; // @[ALU.scala 52:32:@991.4]
  assign _T_25 = sum[31]; // @[ALU.scala 52:52:@992.4]
  assign _T_26 = io_fn[1]; // @[ALU.scala 29:30:@993.4]
  assign _T_29 = _T_26 ? _T_23 : _T_22; // @[ALU.scala 53:18:@996.4]
  assign less = _T_24 ? _T_25 : _T_29; // @[ALU.scala 52:19:@997.4]
  assign shamt = io_in2[4:0]; // @[ALU.scala 57:21:@998.4]
  assign _T_30 = io_fn == 4'h5; // @[ALU.scala 59:24:@1000.4]
  assign _T_31 = io_fn == 4'hb; // @[ALU.scala 59:46:@1001.4]
  assign _T_32 = _T_30 | _T_31; // @[ALU.scala 59:37:@1002.4]
  assign _T_37 = io_in1[31:16]; // @[Bitwise.scala 103:21:@1005.4]
  assign _T_38 = {{16'd0}, _T_37}; // @[Bitwise.scala 103:31:@1006.4]
  assign _T_39 = io_in1[15:0]; // @[Bitwise.scala 103:46:@1007.4]
  assign _GEN_0 = {{16'd0}, _T_39}; // @[Bitwise.scala 103:65:@1008.4]
  assign _T_40 = _GEN_0 << 16; // @[Bitwise.scala 103:65:@1008.4]
  assign _T_42 = _T_40 & 32'hffff0000; // @[Bitwise.scala 103:75:@1010.4]
  assign _T_43 = _T_38 | _T_42; // @[Bitwise.scala 103:39:@1011.4]
  assign _T_47 = _T_43[31:8]; // @[Bitwise.scala 103:21:@1015.4]
  assign _GEN_1 = {{8'd0}, _T_47}; // @[Bitwise.scala 103:31:@1016.4]
  assign _T_48 = _GEN_1 & 32'hff00ff; // @[Bitwise.scala 103:31:@1016.4]
  assign _T_49 = _T_43[23:0]; // @[Bitwise.scala 103:46:@1017.4]
  assign _GEN_2 = {{8'd0}, _T_49}; // @[Bitwise.scala 103:65:@1018.4]
  assign _T_50 = _GEN_2 << 8; // @[Bitwise.scala 103:65:@1018.4]
  assign _T_52 = _T_50 & 32'hff00ff00; // @[Bitwise.scala 103:75:@1020.4]
  assign _T_53 = _T_48 | _T_52; // @[Bitwise.scala 103:39:@1021.4]
  assign _T_57 = _T_53[31:4]; // @[Bitwise.scala 103:21:@1025.4]
  assign _GEN_3 = {{4'd0}, _T_57}; // @[Bitwise.scala 103:31:@1026.4]
  assign _T_58 = _GEN_3 & 32'hf0f0f0f; // @[Bitwise.scala 103:31:@1026.4]
  assign _T_59 = _T_53[27:0]; // @[Bitwise.scala 103:46:@1027.4]
  assign _GEN_4 = {{4'd0}, _T_59}; // @[Bitwise.scala 103:65:@1028.4]
  assign _T_60 = _GEN_4 << 4; // @[Bitwise.scala 103:65:@1028.4]
  assign _T_62 = _T_60 & 32'hf0f0f0f0; // @[Bitwise.scala 103:75:@1030.4]
  assign _T_63 = _T_58 | _T_62; // @[Bitwise.scala 103:39:@1031.4]
  assign _T_67 = _T_63[31:2]; // @[Bitwise.scala 103:21:@1035.4]
  assign _GEN_5 = {{2'd0}, _T_67}; // @[Bitwise.scala 103:31:@1036.4]
  assign _T_68 = _GEN_5 & 32'h33333333; // @[Bitwise.scala 103:31:@1036.4]
  assign _T_69 = _T_63[29:0]; // @[Bitwise.scala 103:46:@1037.4]
  assign _GEN_6 = {{2'd0}, _T_69}; // @[Bitwise.scala 103:65:@1038.4]
  assign _T_70 = _GEN_6 << 2; // @[Bitwise.scala 103:65:@1038.4]
  assign _T_72 = _T_70 & 32'hcccccccc; // @[Bitwise.scala 103:75:@1040.4]
  assign _T_73 = _T_68 | _T_72; // @[Bitwise.scala 103:39:@1041.4]
  assign _T_77 = _T_73[31:1]; // @[Bitwise.scala 103:21:@1045.4]
  assign _GEN_7 = {{1'd0}, _T_77}; // @[Bitwise.scala 103:31:@1046.4]
  assign _T_78 = _GEN_7 & 32'h55555555; // @[Bitwise.scala 103:31:@1046.4]
  assign _T_79 = _T_73[30:0]; // @[Bitwise.scala 103:46:@1047.4]
  assign _GEN_8 = {{1'd0}, _T_79}; // @[Bitwise.scala 103:65:@1048.4]
  assign _T_80 = _GEN_8 << 1; // @[Bitwise.scala 103:65:@1048.4]
  assign _T_82 = _T_80 & 32'haaaaaaaa; // @[Bitwise.scala 103:75:@1050.4]
  assign _T_83 = _T_78 | _T_82; // @[Bitwise.scala 103:39:@1051.4]
  assign shin = _T_32 ? io_in1 : _T_83; // @[ALU.scala 59:17:@1052.4]
  assign _T_85 = shin[31]; // @[ALU.scala 60:41:@1054.4]
  assign _T_86 = _T_15 & _T_85; // @[ALU.scala 60:35:@1055.4]
  assign _T_87 = {_T_86,shin}; // @[Cat.scala 30:58:@1056.4]
  assign _T_88 = $signed(_T_87); // @[ALU.scala 60:60:@1057.4]
  assign _T_89 = $signed(_T_88) >>> shamt; // @[ALU.scala 60:63:@1058.4]
  assign shout_r = _T_89[31:0]; // @[ALU.scala 60:72:@1059.4]
  assign _T_94 = shout_r[31:16]; // @[Bitwise.scala 103:21:@1062.4]
  assign _T_95 = {{16'd0}, _T_94}; // @[Bitwise.scala 103:31:@1063.4]
  assign _T_96 = shout_r[15:0]; // @[Bitwise.scala 103:46:@1064.4]
  assign _GEN_9 = {{16'd0}, _T_96}; // @[Bitwise.scala 103:65:@1065.4]
  assign _T_97 = _GEN_9 << 16; // @[Bitwise.scala 103:65:@1065.4]
  assign _T_99 = _T_97 & 32'hffff0000; // @[Bitwise.scala 103:75:@1067.4]
  assign _T_100 = _T_95 | _T_99; // @[Bitwise.scala 103:39:@1068.4]
  assign _T_104 = _T_100[31:8]; // @[Bitwise.scala 103:21:@1072.4]
  assign _GEN_10 = {{8'd0}, _T_104}; // @[Bitwise.scala 103:31:@1073.4]
  assign _T_105 = _GEN_10 & 32'hff00ff; // @[Bitwise.scala 103:31:@1073.4]
  assign _T_106 = _T_100[23:0]; // @[Bitwise.scala 103:46:@1074.4]
  assign _GEN_11 = {{8'd0}, _T_106}; // @[Bitwise.scala 103:65:@1075.4]
  assign _T_107 = _GEN_11 << 8; // @[Bitwise.scala 103:65:@1075.4]
  assign _T_109 = _T_107 & 32'hff00ff00; // @[Bitwise.scala 103:75:@1077.4]
  assign _T_110 = _T_105 | _T_109; // @[Bitwise.scala 103:39:@1078.4]
  assign _T_114 = _T_110[31:4]; // @[Bitwise.scala 103:21:@1082.4]
  assign _GEN_12 = {{4'd0}, _T_114}; // @[Bitwise.scala 103:31:@1083.4]
  assign _T_115 = _GEN_12 & 32'hf0f0f0f; // @[Bitwise.scala 103:31:@1083.4]
  assign _T_116 = _T_110[27:0]; // @[Bitwise.scala 103:46:@1084.4]
  assign _GEN_13 = {{4'd0}, _T_116}; // @[Bitwise.scala 103:65:@1085.4]
  assign _T_117 = _GEN_13 << 4; // @[Bitwise.scala 103:65:@1085.4]
  assign _T_119 = _T_117 & 32'hf0f0f0f0; // @[Bitwise.scala 103:75:@1087.4]
  assign _T_120 = _T_115 | _T_119; // @[Bitwise.scala 103:39:@1088.4]
  assign _T_124 = _T_120[31:2]; // @[Bitwise.scala 103:21:@1092.4]
  assign _GEN_14 = {{2'd0}, _T_124}; // @[Bitwise.scala 103:31:@1093.4]
  assign _T_125 = _GEN_14 & 32'h33333333; // @[Bitwise.scala 103:31:@1093.4]
  assign _T_126 = _T_120[29:0]; // @[Bitwise.scala 103:46:@1094.4]
  assign _GEN_15 = {{2'd0}, _T_126}; // @[Bitwise.scala 103:65:@1095.4]
  assign _T_127 = _GEN_15 << 2; // @[Bitwise.scala 103:65:@1095.4]
  assign _T_129 = _T_127 & 32'hcccccccc; // @[Bitwise.scala 103:75:@1097.4]
  assign _T_130 = _T_125 | _T_129; // @[Bitwise.scala 103:39:@1098.4]
  assign _T_134 = _T_130[31:1]; // @[Bitwise.scala 103:21:@1102.4]
  assign _GEN_16 = {{1'd0}, _T_134}; // @[Bitwise.scala 103:31:@1103.4]
  assign _T_135 = _GEN_16 & 32'h55555555; // @[Bitwise.scala 103:31:@1103.4]
  assign _T_136 = _T_130[30:0]; // @[Bitwise.scala 103:46:@1104.4]
  assign _GEN_17 = {{1'd0}, _T_136}; // @[Bitwise.scala 103:65:@1105.4]
  assign _T_137 = _GEN_17 << 1; // @[Bitwise.scala 103:65:@1105.4]
  assign _T_139 = _T_137 & 32'haaaaaaaa; // @[Bitwise.scala 103:75:@1107.4]
  assign shout_l = _T_135 | _T_139; // @[Bitwise.scala 103:39:@1108.4]
  assign _T_140 = io_fn == 4'h7; // @[ALU.scala 64:15:@1109.4]
  assign _T_141 = io_in1 & io_in2; // @[ALU.scala 64:35:@1110.4]
  assign _T_142 = io_fn == 4'h6; // @[ALU.scala 65:15:@1111.4]
  assign _T_143 = io_in1 | io_in2; // @[ALU.scala 65:35:@1112.4]
  assign _T_144 = io_fn == 4'h4; // @[ALU.scala 66:15:@1113.4]
  assign _T_145 = io_in1 ^ io_in2; // @[ALU.scala 66:35:@1114.4]
  assign _T_146 = _T_144 ? _T_145 : io_in1; // @[ALU.scala 66:8:@1115.4]
  assign _T_147 = _T_142 ? _T_143 : _T_146; // @[ALU.scala 65:8:@1116.4]
  assign bitwise_logic = _T_140 ? _T_141 : _T_147; // @[ALU.scala 64:8:@1117.4]
  assign _T_148 = io_fn == 4'h0; // @[ALU.scala 70:15:@1118.4]
  assign _T_149 = io_fn == 4'ha; // @[ALU.scala 70:36:@1119.4]
  assign _T_150 = _T_148 | _T_149; // @[ALU.scala 70:27:@1120.4]
  assign _T_151 = io_fn == 4'hc; // @[ALU.scala 71:15:@1121.4]
  assign _T_152 = io_fn == 4'he; // @[ALU.scala 71:36:@1122.4]
  assign _T_153 = _T_151 | _T_152; // @[ALU.scala 71:27:@1123.4]
  assign _T_157 = io_fn == 4'h1; // @[ALU.scala 73:15:@1127.4]
  assign _T_158 = _T_157 ? shout_l : bitwise_logic; // @[ALU.scala 73:8:@1128.4]
  assign _T_159 = _T_32 ? shout_r : _T_158; // @[ALU.scala 72:8:@1129.4]
  assign _T_160 = _T_153 ? {{31'd0}, less} : _T_159; // @[ALU.scala 71:8:@1130.4]
  assign io_out = _T_150 ? sum : _T_160; // @[ALU.scala 76:10:@1133.4]
  assign io_adder_out = io_in1 + _T_20; // @[ALU.scala 77:16:@1134.4]
endmodule
module CSRFile( // @[:@1136.2]
  input         clock, // @[:@1137.4]
  input         reset, // @[:@1138.4]
  input  [2:0]  io_rw_cmd, // @[:@1139.4]
  output [31:0] io_rw_rdata, // @[:@1139.4]
  input  [31:0] io_rw_wdata, // @[:@1139.4]
  output        io_eret, // @[:@1139.4]
  input  [11:0] io_decode_csr, // @[:@1139.4]
  output        io_status_debug, // @[:@1139.4]
  output [1:0]  io_status_prv, // @[:@1139.4]
  output        io_status_sd, // @[:@1139.4]
  output [7:0]  io_status_zero1, // @[:@1139.4]
  output        io_status_tsr, // @[:@1139.4]
  output        io_status_tw, // @[:@1139.4]
  output        io_status_tvm, // @[:@1139.4]
  output        io_status_mxr, // @[:@1139.4]
  output        io_status_sum, // @[:@1139.4]
  output        io_status_mprv, // @[:@1139.4]
  output [1:0]  io_status_xs, // @[:@1139.4]
  output [1:0]  io_status_fs, // @[:@1139.4]
  output [1:0]  io_status_mpp, // @[:@1139.4]
  output [1:0]  io_status_hpp, // @[:@1139.4]
  output        io_status_spp, // @[:@1139.4]
  output        io_status_mpie, // @[:@1139.4]
  output        io_status_hpie, // @[:@1139.4]
  output        io_status_spie, // @[:@1139.4]
  output        io_status_upie, // @[:@1139.4]
  output        io_status_mie, // @[:@1139.4]
  output        io_status_hie, // @[:@1139.4]
  output        io_status_sie, // @[:@1139.4]
  output        io_status_uie, // @[:@1139.4]
  output [31:0] io_evec, // @[:@1139.4]
  input         io_exception, // @[:@1139.4]
  input         io_retire, // @[:@1139.4]
  input  [31:0] io_pc, // @[:@1139.4]
  output [31:0] io_time // @[:@1139.4]
);
  reg [1:0] reg_mstatus_prv; // @[CSR.scala 159:28:@1315.4]
  reg [31:0] _RAND_0;
  reg  reg_mstatus_mpie; // @[CSR.scala 159:28:@1315.4]
  reg [31:0] _RAND_1;
  reg  reg_mstatus_mie; // @[CSR.scala 159:28:@1315.4]
  reg [31:0] _RAND_2;
  reg [31:0] reg_mepc; // @[CSR.scala 160:21:@1316.4]
  reg [31:0] _RAND_3;
  reg [31:0] reg_mcause; // @[CSR.scala 161:23:@1317.4]
  reg [31:0] _RAND_4;
  reg [31:0] reg_mtval; // @[CSR.scala 162:22:@1318.4]
  reg [31:0] _RAND_5;
  reg [31:0] reg_mscratch; // @[CSR.scala 163:25:@1319.4]
  reg [31:0] _RAND_6;
  reg [31:0] reg_medeleg; // @[CSR.scala 165:24:@1321.4]
  reg [31:0] _RAND_7;
  reg  reg_mip_mtip; // @[CSR.scala 167:24:@1357.4]
  reg [31:0] _RAND_8;
  reg  reg_mip_msip; // @[CSR.scala 167:24:@1357.4]
  reg [31:0] _RAND_9;
  reg  reg_mie_mtip; // @[CSR.scala 168:24:@1393.4]
  reg [31:0] _RAND_10;
  reg  reg_mie_msip; // @[CSR.scala 168:24:@1393.4]
  reg [31:0] _RAND_11;
  reg [5:0] _T_258; // @[Util.scala 112:41:@1396.4]
  reg [31:0] _RAND_12;
  wire [6:0] _T_259; // @[Util.scala 113:33:@1397.4]
  reg [57:0] _T_262; // @[Util.scala 117:31:@1399.4]
  reg [63:0] _RAND_13;
  wire  _T_263; // @[Util.scala 118:20:@1400.4]
  wire [58:0] _T_265; // @[Util.scala 118:43:@1402.6]
  wire [57:0] _T_266; // @[Util.scala 118:43:@1403.6]
  wire [57:0] _GEN_0; // @[Util.scala 118:34:@1401.4]
  wire [63:0] _T_267; // @[Cat.scala 30:58:@1406.4]
  reg [5:0] _T_270; // @[Util.scala 112:41:@1407.4]
  reg [31:0] _RAND_14;
  wire [5:0] _GEN_153; // @[Util.scala 113:33:@1408.4]
  wire [6:0] _T_271; // @[Util.scala 113:33:@1408.4]
  reg [57:0] _T_274; // @[Util.scala 117:31:@1410.4]
  reg [63:0] _RAND_15;
  wire  _T_275; // @[Util.scala 118:20:@1411.4]
  wire [58:0] _T_277; // @[Util.scala 118:43:@1413.6]
  wire [57:0] _T_278; // @[Util.scala 118:43:@1414.6]
  wire [57:0] _GEN_1; // @[Util.scala 118:34:@1412.4]
  wire [63:0] _T_279; // @[Cat.scala 30:58:@1417.4]
  reg [39:0] _T_282; // @[Util.scala 112:74:@1419.4]
  reg [63:0] _RAND_16;
  wire [40:0] _T_283; // @[Util.scala 113:33:@1420.4]
  reg [39:0] _T_285; // @[Util.scala 112:74:@1422.4]
  reg [63:0] _RAND_17;
  wire [40:0] _T_286; // @[Util.scala 113:33:@1423.4]
  reg [39:0] _T_288; // @[Util.scala 112:74:@1425.4]
  reg [63:0] _RAND_18;
  wire [40:0] _T_289; // @[Util.scala 113:33:@1426.4]
  reg [39:0] _T_291; // @[Util.scala 112:74:@1428.4]
  reg [63:0] _RAND_19;
  wire [40:0] _T_292; // @[Util.scala 113:33:@1429.4]
  reg [39:0] _T_294; // @[Util.scala 112:74:@1431.4]
  reg [63:0] _RAND_20;
  wire [40:0] _T_295; // @[Util.scala 113:33:@1432.4]
  reg [39:0] _T_297; // @[Util.scala 112:74:@1434.4]
  reg [63:0] _RAND_21;
  wire [40:0] _T_298; // @[Util.scala 113:33:@1435.4]
  reg [39:0] _T_300; // @[Util.scala 112:74:@1437.4]
  reg [63:0] _RAND_22;
  wire [40:0] _T_301; // @[Util.scala 113:33:@1438.4]
  reg [39:0] _T_303; // @[Util.scala 112:74:@1440.4]
  reg [63:0] _RAND_23;
  wire [40:0] _T_304; // @[Util.scala 113:33:@1441.4]
  reg [39:0] _T_306; // @[Util.scala 112:74:@1443.4]
  reg [63:0] _RAND_24;
  wire [40:0] _T_307; // @[Util.scala 113:33:@1444.4]
  reg [39:0] _T_309; // @[Util.scala 112:74:@1446.4]
  reg [63:0] _RAND_25;
  wire [40:0] _T_310; // @[Util.scala 113:33:@1447.4]
  reg [39:0] _T_312; // @[Util.scala 112:74:@1449.4]
  reg [63:0] _RAND_26;
  wire [40:0] _T_313; // @[Util.scala 113:33:@1450.4]
  reg [39:0] _T_315; // @[Util.scala 112:74:@1452.4]
  reg [63:0] _RAND_27;
  wire [40:0] _T_316; // @[Util.scala 113:33:@1453.4]
  reg [39:0] _T_318; // @[Util.scala 112:74:@1455.4]
  reg [63:0] _RAND_28;
  wire [40:0] _T_319; // @[Util.scala 113:33:@1456.4]
  reg [39:0] _T_321; // @[Util.scala 112:74:@1458.4]
  reg [63:0] _RAND_29;
  wire [40:0] _T_322; // @[Util.scala 113:33:@1459.4]
  reg [39:0] _T_324; // @[Util.scala 112:74:@1461.4]
  reg [63:0] _RAND_30;
  wire [40:0] _T_325; // @[Util.scala 113:33:@1462.4]
  reg [39:0] _T_327; // @[Util.scala 112:74:@1464.4]
  reg [63:0] _RAND_31;
  wire [40:0] _T_328; // @[Util.scala 113:33:@1465.4]
  reg [39:0] _T_330; // @[Util.scala 112:74:@1467.4]
  reg [63:0] _RAND_32;
  wire [40:0] _T_331; // @[Util.scala 113:33:@1468.4]
  reg [39:0] _T_333; // @[Util.scala 112:74:@1470.4]
  reg [63:0] _RAND_33;
  wire [40:0] _T_334; // @[Util.scala 113:33:@1471.4]
  reg [39:0] _T_336; // @[Util.scala 112:74:@1473.4]
  reg [63:0] _RAND_34;
  wire [40:0] _T_337; // @[Util.scala 113:33:@1474.4]
  reg [39:0] _T_339; // @[Util.scala 112:74:@1476.4]
  reg [63:0] _RAND_35;
  wire [40:0] _T_340; // @[Util.scala 113:33:@1477.4]
  reg [39:0] _T_342; // @[Util.scala 112:74:@1479.4]
  reg [63:0] _RAND_36;
  wire [40:0] _T_343; // @[Util.scala 113:33:@1480.4]
  reg [39:0] _T_345; // @[Util.scala 112:74:@1482.4]
  reg [63:0] _RAND_37;
  wire [40:0] _T_346; // @[Util.scala 113:33:@1483.4]
  reg [39:0] _T_348; // @[Util.scala 112:74:@1485.4]
  reg [63:0] _RAND_38;
  wire [40:0] _T_349; // @[Util.scala 113:33:@1486.4]
  reg [39:0] _T_351; // @[Util.scala 112:74:@1488.4]
  reg [63:0] _RAND_39;
  wire [40:0] _T_352; // @[Util.scala 113:33:@1489.4]
  reg [39:0] _T_354; // @[Util.scala 112:74:@1491.4]
  reg [63:0] _RAND_40;
  wire [40:0] _T_355; // @[Util.scala 113:33:@1492.4]
  reg [39:0] _T_357; // @[Util.scala 112:74:@1494.4]
  reg [63:0] _RAND_41;
  wire [40:0] _T_358; // @[Util.scala 113:33:@1495.4]
  reg [39:0] _T_360; // @[Util.scala 112:74:@1497.4]
  reg [63:0] _RAND_42;
  wire [40:0] _T_361; // @[Util.scala 113:33:@1498.4]
  reg [39:0] _T_363; // @[Util.scala 112:74:@1500.4]
  reg [63:0] _RAND_43;
  wire [40:0] _T_364; // @[Util.scala 113:33:@1501.4]
  reg [39:0] _T_366; // @[Util.scala 112:74:@1503.4]
  reg [63:0] _RAND_44;
  wire [40:0] _T_367; // @[Util.scala 113:33:@1504.4]
  reg [39:0] _T_369; // @[Util.scala 112:74:@1506.4]
  reg [63:0] _RAND_45;
  wire [40:0] _T_370; // @[Util.scala 113:33:@1507.4]
  reg [39:0] _T_372; // @[Util.scala 112:74:@1509.4]
  reg [63:0] _RAND_46;
  wire [40:0] _T_373; // @[Util.scala 113:33:@1510.4]
  reg [39:0] _T_375; // @[Util.scala 112:74:@1512.4]
  reg [63:0] _RAND_47;
  wire [40:0] _T_376; // @[Util.scala 113:33:@1513.4]
  reg [31:0] reg_dpc; // @[CSR.scala 184:20:@1603.4]
  reg [31:0] _RAND_48;
  reg [31:0] reg_dscratch; // @[CSR.scala 185:25:@1604.4]
  reg [31:0] _RAND_49;
  reg  reg_dcsr_ebreakm; // @[CSR.scala 190:25:@1657.4]
  reg [31:0] _RAND_50;
  reg  reg_dcsr_step; // @[CSR.scala 190:25:@1657.4]
  reg [31:0] _RAND_51;
  wire  system_insn; // @[CSR.scala 192:31:@1658.4]
  wire  _T_492; // @[CSR.scala 193:27:@1659.4]
  wire  _T_494; // @[CSR.scala 193:40:@1660.4]
  wire  cpu_ren; // @[CSR.scala 193:37:@1661.4]
  wire [4:0] _T_498; // @[CSR.scala 195:38:@1665.4]
  wire [12:0] _T_504; // @[CSR.scala 195:38:@1671.4]
  wire [7:0] _T_509; // @[CSR.scala 195:38:@1676.4]
  wire [34:0] read_mstatus; // @[CSR.scala 195:38:@1683.4]
  wire [15:0] _T_536; // @[CSR.scala 211:31:@1698.4]
  wire [15:0] _T_551; // @[CSR.scala 212:31:@1713.4]
  wire [31:0] _T_565; // @[CSR.scala 218:27:@1727.4]
  wire  _T_569; // @[CSR.scala 255:76:@1728.4]
  wire  _T_571; // @[CSR.scala 255:76:@1729.4]
  wire  _T_573; // @[CSR.scala 255:76:@1730.4]
  wire  _T_579; // @[CSR.scala 255:76:@1733.4]
  wire  _T_581; // @[CSR.scala 255:76:@1734.4]
  wire  _T_583; // @[CSR.scala 255:76:@1735.4]
  wire  _T_585; // @[CSR.scala 255:76:@1736.4]
  wire  _T_587; // @[CSR.scala 255:76:@1737.4]
  wire  _T_589; // @[CSR.scala 255:76:@1738.4]
  wire  _T_591; // @[CSR.scala 255:76:@1739.4]
  wire  _T_593; // @[CSR.scala 255:76:@1740.4]
  wire  _T_595; // @[CSR.scala 255:76:@1741.4]
  wire  _T_599; // @[CSR.scala 255:76:@1743.4]
  wire  _T_601; // @[CSR.scala 255:76:@1744.4]
  wire  _T_603; // @[CSR.scala 255:76:@1745.4]
  wire  _T_605; // @[CSR.scala 255:76:@1746.4]
  wire  _T_607; // @[CSR.scala 255:76:@1747.4]
  wire  _T_609; // @[CSR.scala 255:76:@1748.4]
  wire  _T_611; // @[CSR.scala 255:76:@1749.4]
  wire  _T_613; // @[CSR.scala 255:76:@1750.4]
  wire  _T_615; // @[CSR.scala 255:76:@1751.4]
  wire  _T_617; // @[CSR.scala 255:76:@1752.4]
  wire  _T_619; // @[CSR.scala 255:76:@1753.4]
  wire  _T_621; // @[CSR.scala 255:76:@1754.4]
  wire  _T_623; // @[CSR.scala 255:76:@1755.4]
  wire  _T_625; // @[CSR.scala 255:76:@1756.4]
  wire  _T_627; // @[CSR.scala 255:76:@1757.4]
  wire  _T_629; // @[CSR.scala 255:76:@1758.4]
  wire  _T_631; // @[CSR.scala 255:76:@1759.4]
  wire  _T_633; // @[CSR.scala 255:76:@1760.4]
  wire  _T_635; // @[CSR.scala 255:76:@1761.4]
  wire  _T_637; // @[CSR.scala 255:76:@1762.4]
  wire  _T_639; // @[CSR.scala 255:76:@1763.4]
  wire  _T_641; // @[CSR.scala 255:76:@1764.4]
  wire  _T_643; // @[CSR.scala 255:76:@1765.4]
  wire  _T_645; // @[CSR.scala 255:76:@1766.4]
  wire  _T_647; // @[CSR.scala 255:76:@1767.4]
  wire  _T_649; // @[CSR.scala 255:76:@1768.4]
  wire  _T_651; // @[CSR.scala 255:76:@1769.4]
  wire  _T_653; // @[CSR.scala 255:76:@1770.4]
  wire  _T_655; // @[CSR.scala 255:76:@1771.4]
  wire  _T_657; // @[CSR.scala 255:76:@1772.4]
  wire  _T_659; // @[CSR.scala 255:76:@1773.4]
  wire  _T_661; // @[CSR.scala 255:76:@1774.4]
  wire  _T_663; // @[CSR.scala 255:76:@1775.4]
  wire  _T_665; // @[CSR.scala 255:76:@1776.4]
  wire  _T_667; // @[CSR.scala 255:76:@1777.4]
  wire  _T_669; // @[CSR.scala 255:76:@1778.4]
  wire  _T_671; // @[CSR.scala 255:76:@1779.4]
  wire  _T_673; // @[CSR.scala 255:76:@1780.4]
  wire  _T_675; // @[CSR.scala 255:76:@1781.4]
  wire  _T_677; // @[CSR.scala 255:76:@1782.4]
  wire  _T_679; // @[CSR.scala 255:76:@1783.4]
  wire  _T_681; // @[CSR.scala 255:76:@1784.4]
  wire  _T_683; // @[CSR.scala 255:76:@1785.4]
  wire  _T_685; // @[CSR.scala 255:76:@1786.4]
  wire  _T_687; // @[CSR.scala 255:76:@1787.4]
  wire  _T_689; // @[CSR.scala 255:76:@1788.4]
  wire  _T_691; // @[CSR.scala 255:76:@1789.4]
  wire  _T_693; // @[CSR.scala 255:76:@1790.4]
  wire  _T_695; // @[CSR.scala 255:76:@1791.4]
  wire  _T_697; // @[CSR.scala 255:76:@1792.4]
  wire  _T_699; // @[CSR.scala 255:76:@1793.4]
  wire  _T_701; // @[CSR.scala 255:76:@1794.4]
  wire  _T_703; // @[CSR.scala 255:76:@1795.4]
  wire  _T_705; // @[CSR.scala 255:76:@1796.4]
  wire  _T_707; // @[CSR.scala 255:76:@1797.4]
  wire  _T_709; // @[CSR.scala 255:76:@1798.4]
  wire  _T_711; // @[CSR.scala 255:76:@1799.4]
  wire  _T_713; // @[CSR.scala 255:76:@1800.4]
  wire  _T_715; // @[CSR.scala 255:76:@1801.4]
  wire  _T_717; // @[CSR.scala 255:76:@1802.4]
  wire  _T_719; // @[CSR.scala 255:76:@1803.4]
  wire  _T_721; // @[CSR.scala 255:76:@1804.4]
  wire  _T_723; // @[CSR.scala 255:76:@1805.4]
  wire  _T_725; // @[CSR.scala 255:76:@1806.4]
  wire  _T_727; // @[CSR.scala 255:76:@1807.4]
  wire  _T_729; // @[CSR.scala 255:76:@1808.4]
  wire  _T_731; // @[CSR.scala 255:76:@1809.4]
  wire  _T_733; // @[CSR.scala 255:76:@1810.4]
  wire  _T_735; // @[CSR.scala 255:76:@1811.4]
  wire  _T_737; // @[CSR.scala 255:76:@1812.4]
  wire [1:0] _T_738; // @[CSR.scala 257:57:@1813.4]
  wire  priv_sufficient; // @[CSR.scala 257:41:@1814.4]
  wire [1:0] _T_739; // @[CSR.scala 258:32:@1815.4]
  wire [1:0] _T_740; // @[CSR.scala 258:40:@1816.4]
  wire  read_only; // @[CSR.scala 258:40:@1817.4]
  wire  _T_742; // @[CSR.scala 259:38:@1818.4]
  wire  _T_743; // @[CSR.scala 259:25:@1819.4]
  wire  cpu_wen; // @[CSR.scala 259:48:@1820.4]
  wire  _T_745; // @[CSR.scala 260:24:@1821.4]
  wire  wen; // @[CSR.scala 260:21:@1822.4]
  wire  _T_746; // @[Util.scala 23:47:@1823.4]
  wire  _T_747; // @[Util.scala 23:47:@1824.4]
  wire  _T_748; // @[Util.scala 23:62:@1825.4]
  wire [31:0] _T_750; // @[CSR.scala 386:9:@1826.4]
  wire [31:0] _T_751; // @[CSR.scala 386:49:@1827.4]
  wire [31:0] _T_754; // @[CSR.scala 386:64:@1829.4]
  wire [31:0] _T_755; // @[CSR.scala 386:60:@1830.4]
  wire [31:0] wdata; // @[CSR.scala 386:58:@1831.4]
  wire [2:0] _T_757; // @[CSR.scala 263:36:@1832.4]
  wire [7:0] opcode; // @[CSR.scala 263:20:@1833.4]
  wire  _T_758; // @[CSR.scala 264:40:@1834.4]
  wire  insn_call; // @[CSR.scala 264:31:@1835.4]
  wire  _T_759; // @[CSR.scala 265:41:@1836.4]
  wire  insn_break; // @[CSR.scala 265:32:@1837.4]
  wire  _T_760; // @[CSR.scala 266:39:@1838.4]
  wire  _T_761; // @[CSR.scala 266:30:@1839.4]
  wire  insn_ret; // @[CSR.scala 266:43:@1840.4]
  wire  _T_1044; // @[CSR.scala 278:24:@2058.4]
  wire [31:0] _GEN_2; // @[CSR.scala 281:23:@2061.4]
  wire [31:0] _GEN_4; // @[CSR.scala 281:23:@2061.4]
  wire [1:0] _T_1048; // @[Bitwise.scala 48:55:@2066.4]
  wire  _T_1050; // @[CSR.scala 287:52:@2067.4]
  wire  _T_1052; // @[CSR.scala 287:9:@2069.4]
  wire  _T_1054; // @[CSR.scala 287:9:@2070.4]
  wire  _T_1057; // @[CSR.scala 294:33:@2079.4]
  wire  _T_1058; // @[CSR.scala 294:17:@2080.4]
  wire [1:0] _GEN_6; // @[CSR.scala 294:38:@2081.4]
  wire [31:0] _GEN_8; // @[CSR.scala 294:38:@2081.4]
  wire  _T_1062; // @[CSR.scala 301:21:@2087.4]
  wire  _T_1063; // @[CSR.scala 301:18:@2088.4]
  wire  _GEN_9; // @[CSR.scala 301:41:@2089.4]
  wire  _GEN_10; // @[CSR.scala 301:41:@2089.4]
  wire [1:0] new_prv; // @[CSR.scala 301:41:@2089.4]
  wire [31:0] _GEN_12; // @[CSR.scala 301:41:@2089.4]
  wire [3:0] _GEN_154; // @[CSR.scala 311:35:@2097.6]
  wire [4:0] _T_1067; // @[CSR.scala 311:35:@2097.6]
  wire [3:0] _T_1068; // @[CSR.scala 311:35:@2098.6]
  wire [31:0] _GEN_13; // @[CSR.scala 309:18:@2095.4]
  wire [31:0] _GEN_14; // @[CSR.scala 309:18:@2095.4]
  wire [31:0] _GEN_16; // @[CSR.scala 315:19:@2101.4]
  wire [63:0] _T_1073; // @[Mux.scala 19:72:@2107.4]
  wire [63:0] _T_1075; // @[Mux.scala 19:72:@2108.4]
  wire [15:0] _T_1077; // @[Mux.scala 19:72:@2109.4]
  wire [8:0] _T_1083; // @[Mux.scala 19:72:@2112.4]
  wire [34:0] _T_1085; // @[Mux.scala 19:72:@2113.4]
  wire [8:0] _T_1087; // @[Mux.scala 19:72:@2114.4]
  wire [15:0] _T_1089; // @[Mux.scala 19:72:@2115.4]
  wire [15:0] _T_1091; // @[Mux.scala 19:72:@2116.4]
  wire [31:0] _T_1093; // @[Mux.scala 19:72:@2117.4]
  wire [31:0] _T_1095; // @[Mux.scala 19:72:@2118.4]
  wire [31:0] _T_1097; // @[Mux.scala 19:72:@2119.4]
  wire [31:0] _T_1099; // @[Mux.scala 19:72:@2120.4]
  wire [31:0] _T_1103; // @[Mux.scala 19:72:@2122.4]
  wire [31:0] _T_1105; // @[Mux.scala 19:72:@2123.4]
  wire [31:0] _T_1107; // @[Mux.scala 19:72:@2124.4]
  wire [31:0] _T_1109; // @[Mux.scala 19:72:@2125.4]
  wire [39:0] _T_1111; // @[Mux.scala 19:72:@2126.4]
  wire [39:0] _T_1113; // @[Mux.scala 19:72:@2127.4]
  wire [39:0] _T_1115; // @[Mux.scala 19:72:@2128.4]
  wire [39:0] _T_1117; // @[Mux.scala 19:72:@2129.4]
  wire [39:0] _T_1119; // @[Mux.scala 19:72:@2130.4]
  wire [39:0] _T_1121; // @[Mux.scala 19:72:@2131.4]
  wire [39:0] _T_1123; // @[Mux.scala 19:72:@2132.4]
  wire [39:0] _T_1125; // @[Mux.scala 19:72:@2133.4]
  wire [39:0] _T_1127; // @[Mux.scala 19:72:@2134.4]
  wire [39:0] _T_1129; // @[Mux.scala 19:72:@2135.4]
  wire [39:0] _T_1131; // @[Mux.scala 19:72:@2136.4]
  wire [39:0] _T_1133; // @[Mux.scala 19:72:@2137.4]
  wire [39:0] _T_1135; // @[Mux.scala 19:72:@2138.4]
  wire [39:0] _T_1137; // @[Mux.scala 19:72:@2139.4]
  wire [39:0] _T_1139; // @[Mux.scala 19:72:@2140.4]
  wire [39:0] _T_1141; // @[Mux.scala 19:72:@2141.4]
  wire [39:0] _T_1143; // @[Mux.scala 19:72:@2142.4]
  wire [39:0] _T_1145; // @[Mux.scala 19:72:@2143.4]
  wire [39:0] _T_1147; // @[Mux.scala 19:72:@2144.4]
  wire [39:0] _T_1149; // @[Mux.scala 19:72:@2145.4]
  wire [39:0] _T_1151; // @[Mux.scala 19:72:@2146.4]
  wire [39:0] _T_1153; // @[Mux.scala 19:72:@2147.4]
  wire [39:0] _T_1155; // @[Mux.scala 19:72:@2148.4]
  wire [39:0] _T_1157; // @[Mux.scala 19:72:@2149.4]
  wire [39:0] _T_1159; // @[Mux.scala 19:72:@2150.4]
  wire [39:0] _T_1161; // @[Mux.scala 19:72:@2151.4]
  wire [39:0] _T_1163; // @[Mux.scala 19:72:@2152.4]
  wire [39:0] _T_1165; // @[Mux.scala 19:72:@2153.4]
  wire [39:0] _T_1167; // @[Mux.scala 19:72:@2154.4]
  wire [39:0] _T_1169; // @[Mux.scala 19:72:@2155.4]
  wire [39:0] _T_1171; // @[Mux.scala 19:72:@2156.4]
  wire [39:0] _T_1173; // @[Mux.scala 19:72:@2157.4]
  wire [39:0] _T_1175; // @[Mux.scala 19:72:@2158.4]
  wire [39:0] _T_1177; // @[Mux.scala 19:72:@2159.4]
  wire [39:0] _T_1179; // @[Mux.scala 19:72:@2160.4]
  wire [39:0] _T_1181; // @[Mux.scala 19:72:@2161.4]
  wire [39:0] _T_1183; // @[Mux.scala 19:72:@2162.4]
  wire [39:0] _T_1185; // @[Mux.scala 19:72:@2163.4]
  wire [39:0] _T_1187; // @[Mux.scala 19:72:@2164.4]
  wire [39:0] _T_1189; // @[Mux.scala 19:72:@2165.4]
  wire [39:0] _T_1191; // @[Mux.scala 19:72:@2166.4]
  wire [39:0] _T_1193; // @[Mux.scala 19:72:@2167.4]
  wire [39:0] _T_1195; // @[Mux.scala 19:72:@2168.4]
  wire [39:0] _T_1197; // @[Mux.scala 19:72:@2169.4]
  wire [39:0] _T_1199; // @[Mux.scala 19:72:@2170.4]
  wire [39:0] _T_1201; // @[Mux.scala 19:72:@2171.4]
  wire [39:0] _T_1203; // @[Mux.scala 19:72:@2172.4]
  wire [39:0] _T_1205; // @[Mux.scala 19:72:@2173.4]
  wire [39:0] _T_1207; // @[Mux.scala 19:72:@2174.4]
  wire [39:0] _T_1209; // @[Mux.scala 19:72:@2175.4]
  wire [39:0] _T_1211; // @[Mux.scala 19:72:@2176.4]
  wire [39:0] _T_1213; // @[Mux.scala 19:72:@2177.4]
  wire [39:0] _T_1215; // @[Mux.scala 19:72:@2178.4]
  wire [39:0] _T_1217; // @[Mux.scala 19:72:@2179.4]
  wire [39:0] _T_1219; // @[Mux.scala 19:72:@2180.4]
  wire [39:0] _T_1221; // @[Mux.scala 19:72:@2181.4]
  wire [39:0] _T_1223; // @[Mux.scala 19:72:@2182.4]
  wire [39:0] _T_1225; // @[Mux.scala 19:72:@2183.4]
  wire [39:0] _T_1227; // @[Mux.scala 19:72:@2184.4]
  wire [39:0] _T_1229; // @[Mux.scala 19:72:@2185.4]
  wire [39:0] _T_1231; // @[Mux.scala 19:72:@2186.4]
  wire [39:0] _T_1233; // @[Mux.scala 19:72:@2187.4]
  wire [39:0] _T_1235; // @[Mux.scala 19:72:@2188.4]
  wire [39:0] _T_1237; // @[Mux.scala 19:72:@2189.4]
  wire [63:0] _T_1242; // @[Mux.scala 19:72:@2192.4]
  wire [63:0] _GEN_155; // @[Mux.scala 19:72:@2193.4]
  wire [63:0] _T_1243; // @[Mux.scala 19:72:@2193.4]
  wire [63:0] _GEN_156; // @[Mux.scala 19:72:@2196.4]
  wire [63:0] _T_1246; // @[Mux.scala 19:72:@2196.4]
  wire [63:0] _GEN_157; // @[Mux.scala 19:72:@2197.4]
  wire [63:0] _T_1247; // @[Mux.scala 19:72:@2197.4]
  wire [63:0] _GEN_158; // @[Mux.scala 19:72:@2198.4]
  wire [63:0] _T_1248; // @[Mux.scala 19:72:@2198.4]
  wire [63:0] _GEN_159; // @[Mux.scala 19:72:@2199.4]
  wire [63:0] _T_1249; // @[Mux.scala 19:72:@2199.4]
  wire [63:0] _GEN_160; // @[Mux.scala 19:72:@2200.4]
  wire [63:0] _T_1250; // @[Mux.scala 19:72:@2200.4]
  wire [63:0] _GEN_161; // @[Mux.scala 19:72:@2201.4]
  wire [63:0] _T_1251; // @[Mux.scala 19:72:@2201.4]
  wire [63:0] _GEN_162; // @[Mux.scala 19:72:@2202.4]
  wire [63:0] _T_1252; // @[Mux.scala 19:72:@2202.4]
  wire [63:0] _GEN_163; // @[Mux.scala 19:72:@2203.4]
  wire [63:0] _T_1253; // @[Mux.scala 19:72:@2203.4]
  wire [63:0] _GEN_164; // @[Mux.scala 19:72:@2204.4]
  wire [63:0] _T_1254; // @[Mux.scala 19:72:@2204.4]
  wire [63:0] _GEN_165; // @[Mux.scala 19:72:@2206.4]
  wire [63:0] _T_1256; // @[Mux.scala 19:72:@2206.4]
  wire [63:0] _GEN_166; // @[Mux.scala 19:72:@2207.4]
  wire [63:0] _T_1257; // @[Mux.scala 19:72:@2207.4]
  wire [63:0] _GEN_167; // @[Mux.scala 19:72:@2208.4]
  wire [63:0] _T_1258; // @[Mux.scala 19:72:@2208.4]
  wire [63:0] _GEN_168; // @[Mux.scala 19:72:@2209.4]
  wire [63:0] _T_1259; // @[Mux.scala 19:72:@2209.4]
  wire [63:0] _GEN_169; // @[Mux.scala 19:72:@2210.4]
  wire [63:0] _T_1260; // @[Mux.scala 19:72:@2210.4]
  wire [63:0] _GEN_170; // @[Mux.scala 19:72:@2211.4]
  wire [63:0] _T_1261; // @[Mux.scala 19:72:@2211.4]
  wire [63:0] _GEN_171; // @[Mux.scala 19:72:@2212.4]
  wire [63:0] _T_1262; // @[Mux.scala 19:72:@2212.4]
  wire [63:0] _GEN_172; // @[Mux.scala 19:72:@2213.4]
  wire [63:0] _T_1263; // @[Mux.scala 19:72:@2213.4]
  wire [63:0] _GEN_173; // @[Mux.scala 19:72:@2214.4]
  wire [63:0] _T_1264; // @[Mux.scala 19:72:@2214.4]
  wire [63:0] _GEN_174; // @[Mux.scala 19:72:@2215.4]
  wire [63:0] _T_1265; // @[Mux.scala 19:72:@2215.4]
  wire [63:0] _GEN_175; // @[Mux.scala 19:72:@2216.4]
  wire [63:0] _T_1266; // @[Mux.scala 19:72:@2216.4]
  wire [63:0] _GEN_176; // @[Mux.scala 19:72:@2217.4]
  wire [63:0] _T_1267; // @[Mux.scala 19:72:@2217.4]
  wire [63:0] _GEN_177; // @[Mux.scala 19:72:@2218.4]
  wire [63:0] _T_1268; // @[Mux.scala 19:72:@2218.4]
  wire [63:0] _GEN_178; // @[Mux.scala 19:72:@2219.4]
  wire [63:0] _T_1269; // @[Mux.scala 19:72:@2219.4]
  wire [63:0] _GEN_179; // @[Mux.scala 19:72:@2220.4]
  wire [63:0] _T_1270; // @[Mux.scala 19:72:@2220.4]
  wire [63:0] _GEN_180; // @[Mux.scala 19:72:@2221.4]
  wire [63:0] _T_1271; // @[Mux.scala 19:72:@2221.4]
  wire [63:0] _GEN_181; // @[Mux.scala 19:72:@2222.4]
  wire [63:0] _T_1272; // @[Mux.scala 19:72:@2222.4]
  wire [63:0] _GEN_182; // @[Mux.scala 19:72:@2223.4]
  wire [63:0] _T_1273; // @[Mux.scala 19:72:@2223.4]
  wire [63:0] _GEN_183; // @[Mux.scala 19:72:@2224.4]
  wire [63:0] _T_1274; // @[Mux.scala 19:72:@2224.4]
  wire [63:0] _GEN_184; // @[Mux.scala 19:72:@2225.4]
  wire [63:0] _T_1275; // @[Mux.scala 19:72:@2225.4]
  wire [63:0] _GEN_185; // @[Mux.scala 19:72:@2226.4]
  wire [63:0] _T_1276; // @[Mux.scala 19:72:@2226.4]
  wire [63:0] _GEN_186; // @[Mux.scala 19:72:@2227.4]
  wire [63:0] _T_1277; // @[Mux.scala 19:72:@2227.4]
  wire [63:0] _GEN_187; // @[Mux.scala 19:72:@2228.4]
  wire [63:0] _T_1278; // @[Mux.scala 19:72:@2228.4]
  wire [63:0] _GEN_188; // @[Mux.scala 19:72:@2229.4]
  wire [63:0] _T_1279; // @[Mux.scala 19:72:@2229.4]
  wire [63:0] _GEN_189; // @[Mux.scala 19:72:@2230.4]
  wire [63:0] _T_1280; // @[Mux.scala 19:72:@2230.4]
  wire [63:0] _GEN_190; // @[Mux.scala 19:72:@2231.4]
  wire [63:0] _T_1281; // @[Mux.scala 19:72:@2231.4]
  wire [63:0] _GEN_191; // @[Mux.scala 19:72:@2232.4]
  wire [63:0] _T_1282; // @[Mux.scala 19:72:@2232.4]
  wire [63:0] _GEN_192; // @[Mux.scala 19:72:@2233.4]
  wire [63:0] _T_1283; // @[Mux.scala 19:72:@2233.4]
  wire [63:0] _GEN_193; // @[Mux.scala 19:72:@2234.4]
  wire [63:0] _T_1284; // @[Mux.scala 19:72:@2234.4]
  wire [63:0] _GEN_194; // @[Mux.scala 19:72:@2235.4]
  wire [63:0] _T_1285; // @[Mux.scala 19:72:@2235.4]
  wire [63:0] _GEN_195; // @[Mux.scala 19:72:@2236.4]
  wire [63:0] _T_1286; // @[Mux.scala 19:72:@2236.4]
  wire [63:0] _GEN_196; // @[Mux.scala 19:72:@2237.4]
  wire [63:0] _T_1287; // @[Mux.scala 19:72:@2237.4]
  wire [63:0] _GEN_197; // @[Mux.scala 19:72:@2238.4]
  wire [63:0] _T_1288; // @[Mux.scala 19:72:@2238.4]
  wire [63:0] _GEN_198; // @[Mux.scala 19:72:@2239.4]
  wire [63:0] _T_1289; // @[Mux.scala 19:72:@2239.4]
  wire [63:0] _GEN_199; // @[Mux.scala 19:72:@2240.4]
  wire [63:0] _T_1290; // @[Mux.scala 19:72:@2240.4]
  wire [63:0] _GEN_200; // @[Mux.scala 19:72:@2241.4]
  wire [63:0] _T_1291; // @[Mux.scala 19:72:@2241.4]
  wire [63:0] _GEN_201; // @[Mux.scala 19:72:@2242.4]
  wire [63:0] _T_1292; // @[Mux.scala 19:72:@2242.4]
  wire [63:0] _GEN_202; // @[Mux.scala 19:72:@2243.4]
  wire [63:0] _T_1293; // @[Mux.scala 19:72:@2243.4]
  wire [63:0] _GEN_203; // @[Mux.scala 19:72:@2244.4]
  wire [63:0] _T_1294; // @[Mux.scala 19:72:@2244.4]
  wire [63:0] _GEN_204; // @[Mux.scala 19:72:@2245.4]
  wire [63:0] _T_1295; // @[Mux.scala 19:72:@2245.4]
  wire [63:0] _GEN_205; // @[Mux.scala 19:72:@2246.4]
  wire [63:0] _T_1296; // @[Mux.scala 19:72:@2246.4]
  wire [63:0] _GEN_206; // @[Mux.scala 19:72:@2247.4]
  wire [63:0] _T_1297; // @[Mux.scala 19:72:@2247.4]
  wire [63:0] _GEN_207; // @[Mux.scala 19:72:@2248.4]
  wire [63:0] _T_1298; // @[Mux.scala 19:72:@2248.4]
  wire [63:0] _GEN_208; // @[Mux.scala 19:72:@2249.4]
  wire [63:0] _T_1299; // @[Mux.scala 19:72:@2249.4]
  wire [63:0] _GEN_209; // @[Mux.scala 19:72:@2250.4]
  wire [63:0] _T_1300; // @[Mux.scala 19:72:@2250.4]
  wire [63:0] _GEN_210; // @[Mux.scala 19:72:@2251.4]
  wire [63:0] _T_1301; // @[Mux.scala 19:72:@2251.4]
  wire [63:0] _GEN_211; // @[Mux.scala 19:72:@2252.4]
  wire [63:0] _T_1302; // @[Mux.scala 19:72:@2252.4]
  wire [63:0] _GEN_212; // @[Mux.scala 19:72:@2253.4]
  wire [63:0] _T_1303; // @[Mux.scala 19:72:@2253.4]
  wire [63:0] _GEN_213; // @[Mux.scala 19:72:@2254.4]
  wire [63:0] _T_1304; // @[Mux.scala 19:72:@2254.4]
  wire [63:0] _GEN_214; // @[Mux.scala 19:72:@2255.4]
  wire [63:0] _T_1305; // @[Mux.scala 19:72:@2255.4]
  wire [63:0] _GEN_215; // @[Mux.scala 19:72:@2256.4]
  wire [63:0] _T_1306; // @[Mux.scala 19:72:@2256.4]
  wire [63:0] _GEN_216; // @[Mux.scala 19:72:@2257.4]
  wire [63:0] _T_1307; // @[Mux.scala 19:72:@2257.4]
  wire [63:0] _GEN_217; // @[Mux.scala 19:72:@2258.4]
  wire [63:0] _T_1308; // @[Mux.scala 19:72:@2258.4]
  wire [63:0] _GEN_218; // @[Mux.scala 19:72:@2259.4]
  wire [63:0] _T_1309; // @[Mux.scala 19:72:@2259.4]
  wire [63:0] _GEN_219; // @[Mux.scala 19:72:@2260.4]
  wire [63:0] _T_1310; // @[Mux.scala 19:72:@2260.4]
  wire [63:0] _GEN_220; // @[Mux.scala 19:72:@2261.4]
  wire [63:0] _T_1311; // @[Mux.scala 19:72:@2261.4]
  wire [63:0] _GEN_221; // @[Mux.scala 19:72:@2262.4]
  wire [63:0] _T_1312; // @[Mux.scala 19:72:@2262.4]
  wire [63:0] _GEN_222; // @[Mux.scala 19:72:@2263.4]
  wire [63:0] _T_1313; // @[Mux.scala 19:72:@2263.4]
  wire [63:0] _GEN_223; // @[Mux.scala 19:72:@2264.4]
  wire [63:0] _T_1314; // @[Mux.scala 19:72:@2264.4]
  wire [63:0] _GEN_224; // @[Mux.scala 19:72:@2265.4]
  wire [63:0] _T_1315; // @[Mux.scala 19:72:@2265.4]
  wire [63:0] _GEN_225; // @[Mux.scala 19:72:@2266.4]
  wire [63:0] _T_1316; // @[Mux.scala 19:72:@2266.4]
  wire [63:0] _GEN_226; // @[Mux.scala 19:72:@2267.4]
  wire [63:0] _T_1317; // @[Mux.scala 19:72:@2267.4]
  wire [63:0] _GEN_227; // @[Mux.scala 19:72:@2268.4]
  wire [63:0] _T_1318; // @[Mux.scala 19:72:@2268.4]
  wire [63:0] _GEN_228; // @[Mux.scala 19:72:@2269.4]
  wire [63:0] _T_1319; // @[Mux.scala 19:72:@2269.4]
  wire [63:0] _GEN_229; // @[Mux.scala 19:72:@2270.4]
  wire [63:0] _T_1320; // @[Mux.scala 19:72:@2270.4]
  wire [63:0] _GEN_230; // @[Mux.scala 19:72:@2271.4]
  wire [63:0] _T_1321; // @[Mux.scala 19:72:@2271.4]
  wire [63:0] _GEN_231; // @[Mux.scala 19:72:@2272.4]
  wire [63:0] _T_1322; // @[Mux.scala 19:72:@2272.4]
  wire [63:0] _GEN_232; // @[Mux.scala 19:72:@2273.4]
  wire [63:0] _T_1323; // @[Mux.scala 19:72:@2273.4]
  wire  _T_1334; // @[CSR.scala 330:38:@2286.8]
  wire  _T_1344; // @[CSR.scala 330:38:@2306.8]
  wire  _GEN_17; // @[CSR.scala 329:36:@2280.6]
  wire  _GEN_18; // @[CSR.scala 329:36:@2280.6]
  wire [34:0] _T_1352; // @[:@2319.8 :@2320.8]
  wire  _T_1356; // @[CSR.scala 337:39:@2327.8]
  wire  _T_1360; // @[CSR.scala 337:39:@2335.8]
  wire  _GEN_19; // @[CSR.scala 336:39:@2317.6]
  wire  _GEN_20; // @[CSR.scala 336:39:@2317.6]
  wire [15:0] _T_1380; // @[:@2372.8 :@2373.8]
  wire  _T_1384; // @[CSR.scala 342:35:@2380.8]
  wire  _T_1388; // @[CSR.scala 342:35:@2388.8]
  wire  _GEN_21; // @[CSR.scala 341:35:@2370.6]
  wire  _GEN_22; // @[CSR.scala 345:35:@2408.6]
  wire  _GEN_23; // @[CSR.scala 345:35:@2408.6]
  wire [7:0] _T_1418; // @[CSR.scala 382:47:@2448.8]
  wire [31:0] _T_1419; // @[CSR.scala 382:72:@2449.8]
  wire [39:0] _T_1420; // @[Cat.scala 30:58:@2450.8]
  wire [40:0] _GEN_24; // @[CSR.scala 382:29:@2447.6]
  wire [7:0] _T_1421; // @[CSR.scala 383:45:@2454.8]
  wire [39:0] _T_1422; // @[Cat.scala 30:58:@2455.8]
  wire [40:0] _GEN_25; // @[CSR.scala 383:29:@2453.6]
  wire [31:0] _T_1424; // @[CSR.scala 382:72:@2460.8]
  wire [39:0] _T_1425; // @[Cat.scala 30:58:@2461.8]
  wire [40:0] _GEN_26; // @[CSR.scala 382:29:@2458.6]
  wire [7:0] _T_1426; // @[CSR.scala 383:45:@2465.8]
  wire [39:0] _T_1427; // @[Cat.scala 30:58:@2466.8]
  wire [40:0] _GEN_27; // @[CSR.scala 383:29:@2464.6]
  wire [31:0] _T_1429; // @[CSR.scala 382:72:@2471.8]
  wire [39:0] _T_1430; // @[Cat.scala 30:58:@2472.8]
  wire [40:0] _GEN_28; // @[CSR.scala 382:29:@2469.6]
  wire [7:0] _T_1431; // @[CSR.scala 383:45:@2476.8]
  wire [39:0] _T_1432; // @[Cat.scala 30:58:@2477.8]
  wire [40:0] _GEN_29; // @[CSR.scala 383:29:@2475.6]
  wire [31:0] _T_1434; // @[CSR.scala 382:72:@2482.8]
  wire [39:0] _T_1435; // @[Cat.scala 30:58:@2483.8]
  wire [40:0] _GEN_30; // @[CSR.scala 382:29:@2480.6]
  wire [7:0] _T_1436; // @[CSR.scala 383:45:@2487.8]
  wire [39:0] _T_1437; // @[Cat.scala 30:58:@2488.8]
  wire [40:0] _GEN_31; // @[CSR.scala 383:29:@2486.6]
  wire [31:0] _T_1439; // @[CSR.scala 382:72:@2493.8]
  wire [39:0] _T_1440; // @[Cat.scala 30:58:@2494.8]
  wire [40:0] _GEN_32; // @[CSR.scala 382:29:@2491.6]
  wire [7:0] _T_1441; // @[CSR.scala 383:45:@2498.8]
  wire [39:0] _T_1442; // @[Cat.scala 30:58:@2499.8]
  wire [40:0] _GEN_33; // @[CSR.scala 383:29:@2497.6]
  wire [31:0] _T_1444; // @[CSR.scala 382:72:@2504.8]
  wire [39:0] _T_1445; // @[Cat.scala 30:58:@2505.8]
  wire [40:0] _GEN_34; // @[CSR.scala 382:29:@2502.6]
  wire [7:0] _T_1446; // @[CSR.scala 383:45:@2509.8]
  wire [39:0] _T_1447; // @[Cat.scala 30:58:@2510.8]
  wire [40:0] _GEN_35; // @[CSR.scala 383:29:@2508.6]
  wire [31:0] _T_1449; // @[CSR.scala 382:72:@2515.8]
  wire [39:0] _T_1450; // @[Cat.scala 30:58:@2516.8]
  wire [40:0] _GEN_36; // @[CSR.scala 382:29:@2513.6]
  wire [7:0] _T_1451; // @[CSR.scala 383:45:@2520.8]
  wire [39:0] _T_1452; // @[Cat.scala 30:58:@2521.8]
  wire [40:0] _GEN_37; // @[CSR.scala 383:29:@2519.6]
  wire [31:0] _T_1454; // @[CSR.scala 382:72:@2526.8]
  wire [39:0] _T_1455; // @[Cat.scala 30:58:@2527.8]
  wire [40:0] _GEN_38; // @[CSR.scala 382:29:@2524.6]
  wire [7:0] _T_1456; // @[CSR.scala 383:45:@2531.8]
  wire [39:0] _T_1457; // @[Cat.scala 30:58:@2532.8]
  wire [40:0] _GEN_39; // @[CSR.scala 383:29:@2530.6]
  wire [31:0] _T_1459; // @[CSR.scala 382:72:@2537.8]
  wire [39:0] _T_1460; // @[Cat.scala 30:58:@2538.8]
  wire [40:0] _GEN_40; // @[CSR.scala 382:29:@2535.6]
  wire [7:0] _T_1461; // @[CSR.scala 383:45:@2542.8]
  wire [39:0] _T_1462; // @[Cat.scala 30:58:@2543.8]
  wire [40:0] _GEN_41; // @[CSR.scala 383:29:@2541.6]
  wire [31:0] _T_1464; // @[CSR.scala 382:72:@2548.8]
  wire [39:0] _T_1465; // @[Cat.scala 30:58:@2549.8]
  wire [40:0] _GEN_42; // @[CSR.scala 382:29:@2546.6]
  wire [7:0] _T_1466; // @[CSR.scala 383:45:@2553.8]
  wire [39:0] _T_1467; // @[Cat.scala 30:58:@2554.8]
  wire [40:0] _GEN_43; // @[CSR.scala 383:29:@2552.6]
  wire [31:0] _T_1469; // @[CSR.scala 382:72:@2559.8]
  wire [39:0] _T_1470; // @[Cat.scala 30:58:@2560.8]
  wire [40:0] _GEN_44; // @[CSR.scala 382:29:@2557.6]
  wire [7:0] _T_1471; // @[CSR.scala 383:45:@2564.8]
  wire [39:0] _T_1472; // @[Cat.scala 30:58:@2565.8]
  wire [40:0] _GEN_45; // @[CSR.scala 383:29:@2563.6]
  wire [31:0] _T_1474; // @[CSR.scala 382:72:@2570.8]
  wire [39:0] _T_1475; // @[Cat.scala 30:58:@2571.8]
  wire [40:0] _GEN_46; // @[CSR.scala 382:29:@2568.6]
  wire [7:0] _T_1476; // @[CSR.scala 383:45:@2575.8]
  wire [39:0] _T_1477; // @[Cat.scala 30:58:@2576.8]
  wire [40:0] _GEN_47; // @[CSR.scala 383:29:@2574.6]
  wire [31:0] _T_1479; // @[CSR.scala 382:72:@2581.8]
  wire [39:0] _T_1480; // @[Cat.scala 30:58:@2582.8]
  wire [40:0] _GEN_48; // @[CSR.scala 382:29:@2579.6]
  wire [7:0] _T_1481; // @[CSR.scala 383:45:@2586.8]
  wire [39:0] _T_1482; // @[Cat.scala 30:58:@2587.8]
  wire [40:0] _GEN_49; // @[CSR.scala 383:29:@2585.6]
  wire [31:0] _T_1484; // @[CSR.scala 382:72:@2592.8]
  wire [39:0] _T_1485; // @[Cat.scala 30:58:@2593.8]
  wire [40:0] _GEN_50; // @[CSR.scala 382:29:@2590.6]
  wire [7:0] _T_1486; // @[CSR.scala 383:45:@2597.8]
  wire [39:0] _T_1487; // @[Cat.scala 30:58:@2598.8]
  wire [40:0] _GEN_51; // @[CSR.scala 383:29:@2596.6]
  wire [31:0] _T_1489; // @[CSR.scala 382:72:@2603.8]
  wire [39:0] _T_1490; // @[Cat.scala 30:58:@2604.8]
  wire [40:0] _GEN_52; // @[CSR.scala 382:29:@2601.6]
  wire [7:0] _T_1491; // @[CSR.scala 383:45:@2608.8]
  wire [39:0] _T_1492; // @[Cat.scala 30:58:@2609.8]
  wire [40:0] _GEN_53; // @[CSR.scala 383:29:@2607.6]
  wire [31:0] _T_1494; // @[CSR.scala 382:72:@2614.8]
  wire [39:0] _T_1495; // @[Cat.scala 30:58:@2615.8]
  wire [40:0] _GEN_54; // @[CSR.scala 382:29:@2612.6]
  wire [7:0] _T_1496; // @[CSR.scala 383:45:@2619.8]
  wire [39:0] _T_1497; // @[Cat.scala 30:58:@2620.8]
  wire [40:0] _GEN_55; // @[CSR.scala 383:29:@2618.6]
  wire [31:0] _T_1499; // @[CSR.scala 382:72:@2625.8]
  wire [39:0] _T_1500; // @[Cat.scala 30:58:@2626.8]
  wire [40:0] _GEN_56; // @[CSR.scala 382:29:@2623.6]
  wire [7:0] _T_1501; // @[CSR.scala 383:45:@2630.8]
  wire [39:0] _T_1502; // @[Cat.scala 30:58:@2631.8]
  wire [40:0] _GEN_57; // @[CSR.scala 383:29:@2629.6]
  wire [31:0] _T_1504; // @[CSR.scala 382:72:@2636.8]
  wire [39:0] _T_1505; // @[Cat.scala 30:58:@2637.8]
  wire [40:0] _GEN_58; // @[CSR.scala 382:29:@2634.6]
  wire [7:0] _T_1506; // @[CSR.scala 383:45:@2641.8]
  wire [39:0] _T_1507; // @[Cat.scala 30:58:@2642.8]
  wire [40:0] _GEN_59; // @[CSR.scala 383:29:@2640.6]
  wire [31:0] _T_1509; // @[CSR.scala 382:72:@2647.8]
  wire [39:0] _T_1510; // @[Cat.scala 30:58:@2648.8]
  wire [40:0] _GEN_60; // @[CSR.scala 382:29:@2645.6]
  wire [7:0] _T_1511; // @[CSR.scala 383:45:@2652.8]
  wire [39:0] _T_1512; // @[Cat.scala 30:58:@2653.8]
  wire [40:0] _GEN_61; // @[CSR.scala 383:29:@2651.6]
  wire [31:0] _T_1514; // @[CSR.scala 382:72:@2658.8]
  wire [39:0] _T_1515; // @[Cat.scala 30:58:@2659.8]
  wire [40:0] _GEN_62; // @[CSR.scala 382:29:@2656.6]
  wire [7:0] _T_1516; // @[CSR.scala 383:45:@2663.8]
  wire [39:0] _T_1517; // @[Cat.scala 30:58:@2664.8]
  wire [40:0] _GEN_63; // @[CSR.scala 383:29:@2662.6]
  wire [31:0] _T_1519; // @[CSR.scala 382:72:@2669.8]
  wire [39:0] _T_1520; // @[Cat.scala 30:58:@2670.8]
  wire [40:0] _GEN_64; // @[CSR.scala 382:29:@2667.6]
  wire [7:0] _T_1521; // @[CSR.scala 383:45:@2674.8]
  wire [39:0] _T_1522; // @[Cat.scala 30:58:@2675.8]
  wire [40:0] _GEN_65; // @[CSR.scala 383:29:@2673.6]
  wire [31:0] _T_1524; // @[CSR.scala 382:72:@2680.8]
  wire [39:0] _T_1525; // @[Cat.scala 30:58:@2681.8]
  wire [40:0] _GEN_66; // @[CSR.scala 382:29:@2678.6]
  wire [7:0] _T_1526; // @[CSR.scala 383:45:@2685.8]
  wire [39:0] _T_1527; // @[Cat.scala 30:58:@2686.8]
  wire [40:0] _GEN_67; // @[CSR.scala 383:29:@2684.6]
  wire [31:0] _T_1529; // @[CSR.scala 382:72:@2691.8]
  wire [39:0] _T_1530; // @[Cat.scala 30:58:@2692.8]
  wire [40:0] _GEN_68; // @[CSR.scala 382:29:@2689.6]
  wire [7:0] _T_1531; // @[CSR.scala 383:45:@2696.8]
  wire [39:0] _T_1532; // @[Cat.scala 30:58:@2697.8]
  wire [40:0] _GEN_69; // @[CSR.scala 383:29:@2695.6]
  wire [31:0] _T_1534; // @[CSR.scala 382:72:@2702.8]
  wire [39:0] _T_1535; // @[Cat.scala 30:58:@2703.8]
  wire [40:0] _GEN_70; // @[CSR.scala 382:29:@2700.6]
  wire [7:0] _T_1536; // @[CSR.scala 383:45:@2707.8]
  wire [39:0] _T_1537; // @[Cat.scala 30:58:@2708.8]
  wire [40:0] _GEN_71; // @[CSR.scala 383:29:@2706.6]
  wire [31:0] _T_1539; // @[CSR.scala 382:72:@2713.8]
  wire [39:0] _T_1540; // @[Cat.scala 30:58:@2714.8]
  wire [40:0] _GEN_72; // @[CSR.scala 382:29:@2711.6]
  wire [7:0] _T_1541; // @[CSR.scala 383:45:@2718.8]
  wire [39:0] _T_1542; // @[Cat.scala 30:58:@2719.8]
  wire [40:0] _GEN_73; // @[CSR.scala 383:29:@2717.6]
  wire [31:0] _T_1544; // @[CSR.scala 382:72:@2724.8]
  wire [39:0] _T_1545; // @[Cat.scala 30:58:@2725.8]
  wire [40:0] _GEN_74; // @[CSR.scala 382:29:@2722.6]
  wire [7:0] _T_1546; // @[CSR.scala 383:45:@2729.8]
  wire [39:0] _T_1547; // @[Cat.scala 30:58:@2730.8]
  wire [40:0] _GEN_75; // @[CSR.scala 383:29:@2728.6]
  wire [31:0] _T_1549; // @[CSR.scala 382:72:@2735.8]
  wire [39:0] _T_1550; // @[Cat.scala 30:58:@2736.8]
  wire [40:0] _GEN_76; // @[CSR.scala 382:29:@2733.6]
  wire [7:0] _T_1551; // @[CSR.scala 383:45:@2740.8]
  wire [39:0] _T_1552; // @[Cat.scala 30:58:@2741.8]
  wire [40:0] _GEN_77; // @[CSR.scala 383:29:@2739.6]
  wire [31:0] _T_1554; // @[CSR.scala 382:72:@2746.8]
  wire [39:0] _T_1555; // @[Cat.scala 30:58:@2747.8]
  wire [40:0] _GEN_78; // @[CSR.scala 382:29:@2744.6]
  wire [7:0] _T_1556; // @[CSR.scala 383:45:@2751.8]
  wire [39:0] _T_1557; // @[Cat.scala 30:58:@2752.8]
  wire [40:0] _GEN_79; // @[CSR.scala 383:29:@2750.6]
  wire [31:0] _T_1559; // @[CSR.scala 382:72:@2757.8]
  wire [39:0] _T_1560; // @[Cat.scala 30:58:@2758.8]
  wire [40:0] _GEN_80; // @[CSR.scala 382:29:@2755.6]
  wire [7:0] _T_1561; // @[CSR.scala 383:45:@2762.8]
  wire [39:0] _T_1562; // @[Cat.scala 30:58:@2763.8]
  wire [40:0] _GEN_81; // @[CSR.scala 383:29:@2761.6]
  wire [31:0] _T_1564; // @[CSR.scala 382:72:@2768.8]
  wire [39:0] _T_1565; // @[Cat.scala 30:58:@2769.8]
  wire [40:0] _GEN_82; // @[CSR.scala 382:29:@2766.6]
  wire [7:0] _T_1566; // @[CSR.scala 383:45:@2773.8]
  wire [39:0] _T_1567; // @[Cat.scala 30:58:@2774.8]
  wire [40:0] _GEN_83; // @[CSR.scala 383:29:@2772.6]
  wire [31:0] _T_1569; // @[CSR.scala 382:72:@2779.8]
  wire [39:0] _T_1570; // @[Cat.scala 30:58:@2780.8]
  wire [40:0] _GEN_84; // @[CSR.scala 382:29:@2777.6]
  wire [7:0] _T_1571; // @[CSR.scala 383:45:@2784.8]
  wire [39:0] _T_1572; // @[Cat.scala 30:58:@2785.8]
  wire [40:0] _GEN_85; // @[CSR.scala 383:29:@2783.6]
  wire [31:0] _T_1574; // @[CSR.scala 382:72:@2790.8]
  wire [39:0] _T_1575; // @[Cat.scala 30:58:@2791.8]
  wire [40:0] _GEN_86; // @[CSR.scala 382:29:@2788.6]
  wire [7:0] _T_1576; // @[CSR.scala 383:45:@2795.8]
  wire [39:0] _T_1577; // @[Cat.scala 30:58:@2796.8]
  wire [40:0] _GEN_87; // @[CSR.scala 383:29:@2794.6]
  wire [31:0] _T_1579; // @[CSR.scala 382:72:@2801.8]
  wire [63:0] _T_1580; // @[Cat.scala 30:58:@2802.8]
  wire [57:0] _T_1581; // @[Util.scala 133:28:@2804.8]
  wire [63:0] _GEN_88; // @[CSR.scala 382:29:@2799.6]
  wire [57:0] _GEN_89; // @[CSR.scala 382:29:@2799.6]
  wire [31:0] _T_1582; // @[CSR.scala 383:45:@2808.8]
  wire [63:0] _T_1583; // @[Cat.scala 30:58:@2809.8]
  wire [57:0] _T_1584; // @[Util.scala 133:28:@2811.8]
  wire [63:0] _GEN_90; // @[CSR.scala 383:29:@2807.6]
  wire [57:0] _GEN_91; // @[CSR.scala 383:29:@2807.6]
  wire [31:0] _T_1586; // @[CSR.scala 382:72:@2816.8]
  wire [63:0] _T_1587; // @[Cat.scala 30:58:@2817.8]
  wire [57:0] _T_1588; // @[Util.scala 133:28:@2819.8]
  wire [63:0] _GEN_92; // @[CSR.scala 382:29:@2814.6]
  wire [57:0] _GEN_93; // @[CSR.scala 382:29:@2814.6]
  wire [31:0] _T_1589; // @[CSR.scala 383:45:@2823.8]
  wire [63:0] _T_1590; // @[Cat.scala 30:58:@2824.8]
  wire [57:0] _T_1591; // @[Util.scala 133:28:@2826.8]
  wire [63:0] _GEN_94; // @[CSR.scala 383:29:@2822.6]
  wire [57:0] _GEN_95; // @[CSR.scala 383:29:@2822.6]
  wire [31:0] _GEN_96; // @[CSR.scala 361:40:@2829.6]
  wire [31:0] _GEN_97; // @[CSR.scala 362:40:@2832.6]
  wire [31:0] _T_1594; // @[CSR.scala 364:78:@2837.8]
  wire [34:0] _GEN_233; // @[CSR.scala 364:86:@2838.8]
  wire [34:0] _T_1596; // @[CSR.scala 364:86:@2838.8]
  wire [34:0] _GEN_98; // @[CSR.scala 364:40:@2835.6]
  wire [31:0] _GEN_99; // @[CSR.scala 365:40:@2841.6]
  wire [31:0] _T_1598; // @[CSR.scala 366:62:@2845.8]
  wire [31:0] _GEN_100; // @[CSR.scala 366:40:@2844.6]
  wire [31:0] _GEN_101; // @[CSR.scala 367:40:@2848.6]
  wire [31:0] _GEN_102; // @[CSR.scala 368:42:@2852.6]
  wire  _GEN_103; // @[CSR.scala 327:14:@2279.4]
  wire  _GEN_104; // @[CSR.scala 327:14:@2279.4]
  wire  _GEN_105; // @[CSR.scala 327:14:@2279.4]
  wire  _GEN_106; // @[CSR.scala 327:14:@2279.4]
  wire  _GEN_107; // @[CSR.scala 327:14:@2279.4]
  wire  _GEN_108; // @[CSR.scala 327:14:@2279.4]
  wire  _GEN_109; // @[CSR.scala 327:14:@2279.4]
  wire [40:0] _GEN_110; // @[CSR.scala 327:14:@2279.4]
  wire [40:0] _GEN_111; // @[CSR.scala 327:14:@2279.4]
  wire [40:0] _GEN_112; // @[CSR.scala 327:14:@2279.4]
  wire [40:0] _GEN_113; // @[CSR.scala 327:14:@2279.4]
  wire [40:0] _GEN_114; // @[CSR.scala 327:14:@2279.4]
  wire [40:0] _GEN_115; // @[CSR.scala 327:14:@2279.4]
  wire [40:0] _GEN_116; // @[CSR.scala 327:14:@2279.4]
  wire [40:0] _GEN_117; // @[CSR.scala 327:14:@2279.4]
  wire [40:0] _GEN_118; // @[CSR.scala 327:14:@2279.4]
  wire [40:0] _GEN_119; // @[CSR.scala 327:14:@2279.4]
  wire [40:0] _GEN_120; // @[CSR.scala 327:14:@2279.4]
  wire [40:0] _GEN_121; // @[CSR.scala 327:14:@2279.4]
  wire [40:0] _GEN_122; // @[CSR.scala 327:14:@2279.4]
  wire [40:0] _GEN_123; // @[CSR.scala 327:14:@2279.4]
  wire [40:0] _GEN_124; // @[CSR.scala 327:14:@2279.4]
  wire [40:0] _GEN_125; // @[CSR.scala 327:14:@2279.4]
  wire [40:0] _GEN_126; // @[CSR.scala 327:14:@2279.4]
  wire [40:0] _GEN_127; // @[CSR.scala 327:14:@2279.4]
  wire [40:0] _GEN_128; // @[CSR.scala 327:14:@2279.4]
  wire [40:0] _GEN_129; // @[CSR.scala 327:14:@2279.4]
  wire [40:0] _GEN_130; // @[CSR.scala 327:14:@2279.4]
  wire [40:0] _GEN_131; // @[CSR.scala 327:14:@2279.4]
  wire [40:0] _GEN_132; // @[CSR.scala 327:14:@2279.4]
  wire [40:0] _GEN_133; // @[CSR.scala 327:14:@2279.4]
  wire [40:0] _GEN_134; // @[CSR.scala 327:14:@2279.4]
  wire [40:0] _GEN_135; // @[CSR.scala 327:14:@2279.4]
  wire [40:0] _GEN_136; // @[CSR.scala 327:14:@2279.4]
  wire [40:0] _GEN_137; // @[CSR.scala 327:14:@2279.4]
  wire [40:0] _GEN_138; // @[CSR.scala 327:14:@2279.4]
  wire [40:0] _GEN_139; // @[CSR.scala 327:14:@2279.4]
  wire [40:0] _GEN_140; // @[CSR.scala 327:14:@2279.4]
  wire [40:0] _GEN_141; // @[CSR.scala 327:14:@2279.4]
  wire [63:0] _GEN_142; // @[CSR.scala 327:14:@2279.4]
  wire [57:0] _GEN_143; // @[CSR.scala 327:14:@2279.4]
  wire [63:0] _GEN_144; // @[CSR.scala 327:14:@2279.4]
  wire [57:0] _GEN_145; // @[CSR.scala 327:14:@2279.4]
  wire [34:0] _GEN_148; // @[CSR.scala 327:14:@2279.4]
  assign _T_259 = _T_258 + 6'h1; // @[Util.scala 113:33:@1397.4]
  assign _T_263 = _T_259[6]; // @[Util.scala 118:20:@1400.4]
  assign _T_265 = _T_262 + 58'h1; // @[Util.scala 118:43:@1402.6]
  assign _T_266 = _T_262 + 58'h1; // @[Util.scala 118:43:@1403.6]
  assign _GEN_0 = _T_263 ? _T_266 : _T_262; // @[Util.scala 118:34:@1401.4]
  assign _T_267 = {_T_262,_T_258}; // @[Cat.scala 30:58:@1406.4]
  assign _GEN_153 = {{5'd0}, io_retire}; // @[Util.scala 113:33:@1408.4]
  assign _T_271 = _T_270 + _GEN_153; // @[Util.scala 113:33:@1408.4]
  assign _T_275 = _T_271[6]; // @[Util.scala 118:20:@1411.4]
  assign _T_277 = _T_274 + 58'h1; // @[Util.scala 118:43:@1413.6]
  assign _T_278 = _T_274 + 58'h1; // @[Util.scala 118:43:@1414.6]
  assign _GEN_1 = _T_275 ? _T_278 : _T_274; // @[Util.scala 118:34:@1412.4]
  assign _T_279 = {_T_274,_T_270}; // @[Cat.scala 30:58:@1417.4]
  assign _T_283 = {{1'd0}, _T_282}; // @[Util.scala 113:33:@1420.4]
  assign _T_286 = {{1'd0}, _T_285}; // @[Util.scala 113:33:@1423.4]
  assign _T_289 = {{1'd0}, _T_288}; // @[Util.scala 113:33:@1426.4]
  assign _T_292 = {{1'd0}, _T_291}; // @[Util.scala 113:33:@1429.4]
  assign _T_295 = {{1'd0}, _T_294}; // @[Util.scala 113:33:@1432.4]
  assign _T_298 = {{1'd0}, _T_297}; // @[Util.scala 113:33:@1435.4]
  assign _T_301 = {{1'd0}, _T_300}; // @[Util.scala 113:33:@1438.4]
  assign _T_304 = {{1'd0}, _T_303}; // @[Util.scala 113:33:@1441.4]
  assign _T_307 = {{1'd0}, _T_306}; // @[Util.scala 113:33:@1444.4]
  assign _T_310 = {{1'd0}, _T_309}; // @[Util.scala 113:33:@1447.4]
  assign _T_313 = {{1'd0}, _T_312}; // @[Util.scala 113:33:@1450.4]
  assign _T_316 = {{1'd0}, _T_315}; // @[Util.scala 113:33:@1453.4]
  assign _T_319 = {{1'd0}, _T_318}; // @[Util.scala 113:33:@1456.4]
  assign _T_322 = {{1'd0}, _T_321}; // @[Util.scala 113:33:@1459.4]
  assign _T_325 = {{1'd0}, _T_324}; // @[Util.scala 113:33:@1462.4]
  assign _T_328 = {{1'd0}, _T_327}; // @[Util.scala 113:33:@1465.4]
  assign _T_331 = {{1'd0}, _T_330}; // @[Util.scala 113:33:@1468.4]
  assign _T_334 = {{1'd0}, _T_333}; // @[Util.scala 113:33:@1471.4]
  assign _T_337 = {{1'd0}, _T_336}; // @[Util.scala 113:33:@1474.4]
  assign _T_340 = {{1'd0}, _T_339}; // @[Util.scala 113:33:@1477.4]
  assign _T_343 = {{1'd0}, _T_342}; // @[Util.scala 113:33:@1480.4]
  assign _T_346 = {{1'd0}, _T_345}; // @[Util.scala 113:33:@1483.4]
  assign _T_349 = {{1'd0}, _T_348}; // @[Util.scala 113:33:@1486.4]
  assign _T_352 = {{1'd0}, _T_351}; // @[Util.scala 113:33:@1489.4]
  assign _T_355 = {{1'd0}, _T_354}; // @[Util.scala 113:33:@1492.4]
  assign _T_358 = {{1'd0}, _T_357}; // @[Util.scala 113:33:@1495.4]
  assign _T_361 = {{1'd0}, _T_360}; // @[Util.scala 113:33:@1498.4]
  assign _T_364 = {{1'd0}, _T_363}; // @[Util.scala 113:33:@1501.4]
  assign _T_367 = {{1'd0}, _T_366}; // @[Util.scala 113:33:@1504.4]
  assign _T_370 = {{1'd0}, _T_369}; // @[Util.scala 113:33:@1507.4]
  assign _T_373 = {{1'd0}, _T_372}; // @[Util.scala 113:33:@1510.4]
  assign _T_376 = {{1'd0}, _T_375}; // @[Util.scala 113:33:@1513.4]
  assign system_insn = io_rw_cmd == 3'h4; // @[CSR.scala 192:31:@1658.4]
  assign _T_492 = io_rw_cmd != 3'h0; // @[CSR.scala 193:27:@1659.4]
  assign _T_494 = system_insn == 1'h0; // @[CSR.scala 193:40:@1660.4]
  assign cpu_ren = _T_492 & _T_494; // @[CSR.scala 193:37:@1661.4]
  assign _T_498 = {io_status_upie,io_status_mie,io_status_hie,io_status_sie,io_status_uie}; // @[CSR.scala 195:38:@1665.4]
  assign _T_504 = {io_status_mpp,io_status_hpp,io_status_spp,io_status_mpie,io_status_hpie,io_status_spie,_T_498}; // @[CSR.scala 195:38:@1671.4]
  assign _T_509 = {io_status_tvm,io_status_mxr,io_status_sum,io_status_mprv,io_status_xs,io_status_fs}; // @[CSR.scala 195:38:@1676.4]
  assign read_mstatus = {io_status_debug,io_status_prv,io_status_sd,io_status_zero1,io_status_tsr,io_status_tw,_T_509,_T_504}; // @[CSR.scala 195:38:@1683.4]
  assign _T_536 = {8'h0,reg_mip_mtip,1'h0,2'h0,reg_mip_msip,1'h0,2'h0}; // @[CSR.scala 211:31:@1698.4]
  assign _T_551 = {8'h0,reg_mie_mtip,1'h0,2'h0,reg_mie_msip,1'h0,2'h0}; // @[CSR.scala 212:31:@1713.4]
  assign _T_565 = {4'h4,12'h0,reg_dcsr_ebreakm,4'h0,6'h0,2'h0,reg_dcsr_step,2'h3}; // @[CSR.scala 218:27:@1727.4]
  assign _T_569 = io_decode_csr == 12'hb00; // @[CSR.scala 255:76:@1728.4]
  assign _T_571 = io_decode_csr == 12'hb02; // @[CSR.scala 255:76:@1729.4]
  assign _T_573 = io_decode_csr == 12'hf13; // @[CSR.scala 255:76:@1730.4]
  assign _T_579 = io_decode_csr == 12'h301; // @[CSR.scala 255:76:@1733.4]
  assign _T_581 = io_decode_csr == 12'h300; // @[CSR.scala 255:76:@1734.4]
  assign _T_583 = io_decode_csr == 12'h305; // @[CSR.scala 255:76:@1735.4]
  assign _T_585 = io_decode_csr == 12'h344; // @[CSR.scala 255:76:@1736.4]
  assign _T_587 = io_decode_csr == 12'h304; // @[CSR.scala 255:76:@1737.4]
  assign _T_589 = io_decode_csr == 12'h340; // @[CSR.scala 255:76:@1738.4]
  assign _T_591 = io_decode_csr == 12'h341; // @[CSR.scala 255:76:@1739.4]
  assign _T_593 = io_decode_csr == 12'h343; // @[CSR.scala 255:76:@1740.4]
  assign _T_595 = io_decode_csr == 12'h342; // @[CSR.scala 255:76:@1741.4]
  assign _T_599 = io_decode_csr == 12'h7b0; // @[CSR.scala 255:76:@1743.4]
  assign _T_601 = io_decode_csr == 12'h7b1; // @[CSR.scala 255:76:@1744.4]
  assign _T_603 = io_decode_csr == 12'h7b2; // @[CSR.scala 255:76:@1745.4]
  assign _T_605 = io_decode_csr == 12'h302; // @[CSR.scala 255:76:@1746.4]
  assign _T_607 = io_decode_csr == 12'hb03; // @[CSR.scala 255:76:@1747.4]
  assign _T_609 = io_decode_csr == 12'hb83; // @[CSR.scala 255:76:@1748.4]
  assign _T_611 = io_decode_csr == 12'hb04; // @[CSR.scala 255:76:@1749.4]
  assign _T_613 = io_decode_csr == 12'hb84; // @[CSR.scala 255:76:@1750.4]
  assign _T_615 = io_decode_csr == 12'hb05; // @[CSR.scala 255:76:@1751.4]
  assign _T_617 = io_decode_csr == 12'hb85; // @[CSR.scala 255:76:@1752.4]
  assign _T_619 = io_decode_csr == 12'hb06; // @[CSR.scala 255:76:@1753.4]
  assign _T_621 = io_decode_csr == 12'hb86; // @[CSR.scala 255:76:@1754.4]
  assign _T_623 = io_decode_csr == 12'hb07; // @[CSR.scala 255:76:@1755.4]
  assign _T_625 = io_decode_csr == 12'hb87; // @[CSR.scala 255:76:@1756.4]
  assign _T_627 = io_decode_csr == 12'hb08; // @[CSR.scala 255:76:@1757.4]
  assign _T_629 = io_decode_csr == 12'hb88; // @[CSR.scala 255:76:@1758.4]
  assign _T_631 = io_decode_csr == 12'hb09; // @[CSR.scala 255:76:@1759.4]
  assign _T_633 = io_decode_csr == 12'hb89; // @[CSR.scala 255:76:@1760.4]
  assign _T_635 = io_decode_csr == 12'hb0a; // @[CSR.scala 255:76:@1761.4]
  assign _T_637 = io_decode_csr == 12'hb8a; // @[CSR.scala 255:76:@1762.4]
  assign _T_639 = io_decode_csr == 12'hb0b; // @[CSR.scala 255:76:@1763.4]
  assign _T_641 = io_decode_csr == 12'hb8b; // @[CSR.scala 255:76:@1764.4]
  assign _T_643 = io_decode_csr == 12'hb0c; // @[CSR.scala 255:76:@1765.4]
  assign _T_645 = io_decode_csr == 12'hb8c; // @[CSR.scala 255:76:@1766.4]
  assign _T_647 = io_decode_csr == 12'hb0d; // @[CSR.scala 255:76:@1767.4]
  assign _T_649 = io_decode_csr == 12'hb8d; // @[CSR.scala 255:76:@1768.4]
  assign _T_651 = io_decode_csr == 12'hb0e; // @[CSR.scala 255:76:@1769.4]
  assign _T_653 = io_decode_csr == 12'hb8e; // @[CSR.scala 255:76:@1770.4]
  assign _T_655 = io_decode_csr == 12'hb0f; // @[CSR.scala 255:76:@1771.4]
  assign _T_657 = io_decode_csr == 12'hb8f; // @[CSR.scala 255:76:@1772.4]
  assign _T_659 = io_decode_csr == 12'hb10; // @[CSR.scala 255:76:@1773.4]
  assign _T_661 = io_decode_csr == 12'hb90; // @[CSR.scala 255:76:@1774.4]
  assign _T_663 = io_decode_csr == 12'hb11; // @[CSR.scala 255:76:@1775.4]
  assign _T_665 = io_decode_csr == 12'hb91; // @[CSR.scala 255:76:@1776.4]
  assign _T_667 = io_decode_csr == 12'hb12; // @[CSR.scala 255:76:@1777.4]
  assign _T_669 = io_decode_csr == 12'hb92; // @[CSR.scala 255:76:@1778.4]
  assign _T_671 = io_decode_csr == 12'hb13; // @[CSR.scala 255:76:@1779.4]
  assign _T_673 = io_decode_csr == 12'hb93; // @[CSR.scala 255:76:@1780.4]
  assign _T_675 = io_decode_csr == 12'hb14; // @[CSR.scala 255:76:@1781.4]
  assign _T_677 = io_decode_csr == 12'hb94; // @[CSR.scala 255:76:@1782.4]
  assign _T_679 = io_decode_csr == 12'hb15; // @[CSR.scala 255:76:@1783.4]
  assign _T_681 = io_decode_csr == 12'hb95; // @[CSR.scala 255:76:@1784.4]
  assign _T_683 = io_decode_csr == 12'hb16; // @[CSR.scala 255:76:@1785.4]
  assign _T_685 = io_decode_csr == 12'hb96; // @[CSR.scala 255:76:@1786.4]
  assign _T_687 = io_decode_csr == 12'hb17; // @[CSR.scala 255:76:@1787.4]
  assign _T_689 = io_decode_csr == 12'hb97; // @[CSR.scala 255:76:@1788.4]
  assign _T_691 = io_decode_csr == 12'hb18; // @[CSR.scala 255:76:@1789.4]
  assign _T_693 = io_decode_csr == 12'hb98; // @[CSR.scala 255:76:@1790.4]
  assign _T_695 = io_decode_csr == 12'hb19; // @[CSR.scala 255:76:@1791.4]
  assign _T_697 = io_decode_csr == 12'hb99; // @[CSR.scala 255:76:@1792.4]
  assign _T_699 = io_decode_csr == 12'hb1a; // @[CSR.scala 255:76:@1793.4]
  assign _T_701 = io_decode_csr == 12'hb9a; // @[CSR.scala 255:76:@1794.4]
  assign _T_703 = io_decode_csr == 12'hb1b; // @[CSR.scala 255:76:@1795.4]
  assign _T_705 = io_decode_csr == 12'hb9b; // @[CSR.scala 255:76:@1796.4]
  assign _T_707 = io_decode_csr == 12'hb1c; // @[CSR.scala 255:76:@1797.4]
  assign _T_709 = io_decode_csr == 12'hb9c; // @[CSR.scala 255:76:@1798.4]
  assign _T_711 = io_decode_csr == 12'hb1d; // @[CSR.scala 255:76:@1799.4]
  assign _T_713 = io_decode_csr == 12'hb9d; // @[CSR.scala 255:76:@1800.4]
  assign _T_715 = io_decode_csr == 12'hb1e; // @[CSR.scala 255:76:@1801.4]
  assign _T_717 = io_decode_csr == 12'hb9e; // @[CSR.scala 255:76:@1802.4]
  assign _T_719 = io_decode_csr == 12'hb1f; // @[CSR.scala 255:76:@1803.4]
  assign _T_721 = io_decode_csr == 12'hb9f; // @[CSR.scala 255:76:@1804.4]
  assign _T_723 = io_decode_csr == 12'hb20; // @[CSR.scala 255:76:@1805.4]
  assign _T_725 = io_decode_csr == 12'hba0; // @[CSR.scala 255:76:@1806.4]
  assign _T_727 = io_decode_csr == 12'hb21; // @[CSR.scala 255:76:@1807.4]
  assign _T_729 = io_decode_csr == 12'hba1; // @[CSR.scala 255:76:@1808.4]
  assign _T_731 = io_decode_csr == 12'hb22; // @[CSR.scala 255:76:@1809.4]
  assign _T_733 = io_decode_csr == 12'hba2; // @[CSR.scala 255:76:@1810.4]
  assign _T_735 = io_decode_csr == 12'hb80; // @[CSR.scala 255:76:@1811.4]
  assign _T_737 = io_decode_csr == 12'hb82; // @[CSR.scala 255:76:@1812.4]
  assign _T_738 = io_decode_csr[9:8]; // @[CSR.scala 257:57:@1813.4]
  assign priv_sufficient = reg_mstatus_prv >= _T_738; // @[CSR.scala 257:41:@1814.4]
  assign _T_739 = io_decode_csr[11:10]; // @[CSR.scala 258:32:@1815.4]
  assign _T_740 = ~ _T_739; // @[CSR.scala 258:40:@1816.4]
  assign read_only = _T_740 == 2'h0; // @[CSR.scala 258:40:@1817.4]
  assign _T_742 = io_rw_cmd != 3'h5; // @[CSR.scala 259:38:@1818.4]
  assign _T_743 = cpu_ren & _T_742; // @[CSR.scala 259:25:@1819.4]
  assign cpu_wen = _T_743 & priv_sufficient; // @[CSR.scala 259:48:@1820.4]
  assign _T_745 = read_only == 1'h0; // @[CSR.scala 260:24:@1821.4]
  assign wen = cpu_wen & _T_745; // @[CSR.scala 260:21:@1822.4]
  assign _T_746 = io_rw_cmd == 3'h2; // @[Util.scala 23:47:@1823.4]
  assign _T_747 = io_rw_cmd == 3'h3; // @[Util.scala 23:47:@1824.4]
  assign _T_748 = _T_746 | _T_747; // @[Util.scala 23:62:@1825.4]
  assign _T_750 = _T_748 ? io_rw_rdata : 32'h0; // @[CSR.scala 386:9:@1826.4]
  assign _T_751 = _T_750 | io_rw_wdata; // @[CSR.scala 386:49:@1827.4]
  assign _T_754 = _T_747 ? io_rw_wdata : 32'h0; // @[CSR.scala 386:64:@1829.4]
  assign _T_755 = ~ _T_754; // @[CSR.scala 386:60:@1830.4]
  assign wdata = _T_751 & _T_755; // @[CSR.scala 386:58:@1831.4]
  assign _T_757 = io_decode_csr[2:0]; // @[CSR.scala 263:36:@1832.4]
  assign opcode = 8'h1 << _T_757; // @[CSR.scala 263:20:@1833.4]
  assign _T_758 = opcode[0]; // @[CSR.scala 264:40:@1834.4]
  assign insn_call = system_insn & _T_758; // @[CSR.scala 264:31:@1835.4]
  assign _T_759 = opcode[1]; // @[CSR.scala 265:41:@1836.4]
  assign insn_break = system_insn & _T_759; // @[CSR.scala 265:32:@1837.4]
  assign _T_760 = opcode[2]; // @[CSR.scala 266:39:@1838.4]
  assign _T_761 = system_insn & _T_760; // @[CSR.scala 266:30:@1839.4]
  assign insn_ret = _T_761 & priv_sufficient; // @[CSR.scala 266:43:@1840.4]
  assign _T_1044 = insn_call | insn_break; // @[CSR.scala 278:24:@2058.4]
  assign _GEN_2 = io_exception ? 32'h2 : reg_mcause; // @[CSR.scala 281:23:@2061.4]
  assign _GEN_4 = io_exception ? io_pc : reg_mepc; // @[CSR.scala 281:23:@2061.4]
  assign _T_1048 = insn_ret + io_exception; // @[Bitwise.scala 48:55:@2066.4]
  assign _T_1050 = _T_1048 <= 2'h1; // @[CSR.scala 287:52:@2067.4]
  assign _T_1052 = _T_1050 | reset; // @[CSR.scala 287:9:@2069.4]
  assign _T_1054 = _T_1052 == 1'h0; // @[CSR.scala 287:9:@2070.4]
  assign _T_1057 = io_decode_csr[10]; // @[CSR.scala 294:33:@2079.4]
  assign _T_1058 = insn_ret & _T_1057; // @[CSR.scala 294:17:@2080.4]
  assign _GEN_6 = _T_1058 ? 2'h3 : reg_mstatus_prv; // @[CSR.scala 294:38:@2081.4]
  assign _GEN_8 = _T_1058 ? reg_dpc : 32'h80000004; // @[CSR.scala 294:38:@2081.4]
  assign _T_1062 = _T_1057 == 1'h0; // @[CSR.scala 301:21:@2087.4]
  assign _T_1063 = insn_ret & _T_1062; // @[CSR.scala 301:18:@2088.4]
  assign _GEN_9 = _T_1063 ? reg_mstatus_mpie : reg_mstatus_mie; // @[CSR.scala 301:41:@2089.4]
  assign _GEN_10 = _T_1063 ? 1'h1 : reg_mstatus_mpie; // @[CSR.scala 301:41:@2089.4]
  assign new_prv = _T_1063 ? 2'h3 : _GEN_6; // @[CSR.scala 301:41:@2089.4]
  assign _GEN_12 = _T_1063 ? reg_mepc : _GEN_8; // @[CSR.scala 301:41:@2089.4]
  assign _GEN_154 = {{2'd0}, reg_mstatus_prv}; // @[CSR.scala 311:35:@2097.6]
  assign _T_1067 = _GEN_154 + 4'h8; // @[CSR.scala 311:35:@2097.6]
  assign _T_1068 = _GEN_154 + 4'h8; // @[CSR.scala 311:35:@2098.6]
  assign _GEN_13 = insn_call ? 32'h80000004 : _GEN_12; // @[CSR.scala 309:18:@2095.4]
  assign _GEN_14 = insn_call ? {{28'd0}, _T_1068} : _GEN_2; // @[CSR.scala 309:18:@2095.4]
  assign _GEN_16 = insn_break ? 32'h3 : _GEN_14; // @[CSR.scala 315:19:@2101.4]
  assign _T_1073 = _T_569 ? _T_267 : 64'h0; // @[Mux.scala 19:72:@2107.4]
  assign _T_1075 = _T_571 ? _T_279 : 64'h0; // @[Mux.scala 19:72:@2108.4]
  assign _T_1077 = _T_573 ? 16'h8000 : 16'h0; // @[Mux.scala 19:72:@2109.4]
  assign _T_1083 = _T_579 ? 9'h100 : 9'h0; // @[Mux.scala 19:72:@2112.4]
  assign _T_1085 = _T_581 ? read_mstatus : 35'h0; // @[Mux.scala 19:72:@2113.4]
  assign _T_1087 = _T_583 ? 9'h100 : 9'h0; // @[Mux.scala 19:72:@2114.4]
  assign _T_1089 = _T_585 ? _T_536 : 16'h0; // @[Mux.scala 19:72:@2115.4]
  assign _T_1091 = _T_587 ? _T_551 : 16'h0; // @[Mux.scala 19:72:@2116.4]
  assign _T_1093 = _T_589 ? reg_mscratch : 32'h0; // @[Mux.scala 19:72:@2117.4]
  assign _T_1095 = _T_591 ? reg_mepc : 32'h0; // @[Mux.scala 19:72:@2118.4]
  assign _T_1097 = _T_593 ? reg_mtval : 32'h0; // @[Mux.scala 19:72:@2119.4]
  assign _T_1099 = _T_595 ? reg_mcause : 32'h0; // @[Mux.scala 19:72:@2120.4]
  assign _T_1103 = _T_599 ? _T_565 : 32'h0; // @[Mux.scala 19:72:@2122.4]
  assign _T_1105 = _T_601 ? reg_dpc : 32'h0; // @[Mux.scala 19:72:@2123.4]
  assign _T_1107 = _T_603 ? reg_dscratch : 32'h0; // @[Mux.scala 19:72:@2124.4]
  assign _T_1109 = _T_605 ? reg_medeleg : 32'h0; // @[Mux.scala 19:72:@2125.4]
  assign _T_1111 = _T_607 ? _T_282 : 40'h0; // @[Mux.scala 19:72:@2126.4]
  assign _T_1113 = _T_609 ? _T_282 : 40'h0; // @[Mux.scala 19:72:@2127.4]
  assign _T_1115 = _T_611 ? _T_285 : 40'h0; // @[Mux.scala 19:72:@2128.4]
  assign _T_1117 = _T_613 ? _T_285 : 40'h0; // @[Mux.scala 19:72:@2129.4]
  assign _T_1119 = _T_615 ? _T_288 : 40'h0; // @[Mux.scala 19:72:@2130.4]
  assign _T_1121 = _T_617 ? _T_288 : 40'h0; // @[Mux.scala 19:72:@2131.4]
  assign _T_1123 = _T_619 ? _T_291 : 40'h0; // @[Mux.scala 19:72:@2132.4]
  assign _T_1125 = _T_621 ? _T_291 : 40'h0; // @[Mux.scala 19:72:@2133.4]
  assign _T_1127 = _T_623 ? _T_294 : 40'h0; // @[Mux.scala 19:72:@2134.4]
  assign _T_1129 = _T_625 ? _T_294 : 40'h0; // @[Mux.scala 19:72:@2135.4]
  assign _T_1131 = _T_627 ? _T_297 : 40'h0; // @[Mux.scala 19:72:@2136.4]
  assign _T_1133 = _T_629 ? _T_297 : 40'h0; // @[Mux.scala 19:72:@2137.4]
  assign _T_1135 = _T_631 ? _T_300 : 40'h0; // @[Mux.scala 19:72:@2138.4]
  assign _T_1137 = _T_633 ? _T_300 : 40'h0; // @[Mux.scala 19:72:@2139.4]
  assign _T_1139 = _T_635 ? _T_303 : 40'h0; // @[Mux.scala 19:72:@2140.4]
  assign _T_1141 = _T_637 ? _T_303 : 40'h0; // @[Mux.scala 19:72:@2141.4]
  assign _T_1143 = _T_639 ? _T_306 : 40'h0; // @[Mux.scala 19:72:@2142.4]
  assign _T_1145 = _T_641 ? _T_306 : 40'h0; // @[Mux.scala 19:72:@2143.4]
  assign _T_1147 = _T_643 ? _T_309 : 40'h0; // @[Mux.scala 19:72:@2144.4]
  assign _T_1149 = _T_645 ? _T_309 : 40'h0; // @[Mux.scala 19:72:@2145.4]
  assign _T_1151 = _T_647 ? _T_312 : 40'h0; // @[Mux.scala 19:72:@2146.4]
  assign _T_1153 = _T_649 ? _T_312 : 40'h0; // @[Mux.scala 19:72:@2147.4]
  assign _T_1155 = _T_651 ? _T_315 : 40'h0; // @[Mux.scala 19:72:@2148.4]
  assign _T_1157 = _T_653 ? _T_315 : 40'h0; // @[Mux.scala 19:72:@2149.4]
  assign _T_1159 = _T_655 ? _T_318 : 40'h0; // @[Mux.scala 19:72:@2150.4]
  assign _T_1161 = _T_657 ? _T_318 : 40'h0; // @[Mux.scala 19:72:@2151.4]
  assign _T_1163 = _T_659 ? _T_321 : 40'h0; // @[Mux.scala 19:72:@2152.4]
  assign _T_1165 = _T_661 ? _T_321 : 40'h0; // @[Mux.scala 19:72:@2153.4]
  assign _T_1167 = _T_663 ? _T_324 : 40'h0; // @[Mux.scala 19:72:@2154.4]
  assign _T_1169 = _T_665 ? _T_324 : 40'h0; // @[Mux.scala 19:72:@2155.4]
  assign _T_1171 = _T_667 ? _T_327 : 40'h0; // @[Mux.scala 19:72:@2156.4]
  assign _T_1173 = _T_669 ? _T_327 : 40'h0; // @[Mux.scala 19:72:@2157.4]
  assign _T_1175 = _T_671 ? _T_330 : 40'h0; // @[Mux.scala 19:72:@2158.4]
  assign _T_1177 = _T_673 ? _T_330 : 40'h0; // @[Mux.scala 19:72:@2159.4]
  assign _T_1179 = _T_675 ? _T_333 : 40'h0; // @[Mux.scala 19:72:@2160.4]
  assign _T_1181 = _T_677 ? _T_333 : 40'h0; // @[Mux.scala 19:72:@2161.4]
  assign _T_1183 = _T_679 ? _T_336 : 40'h0; // @[Mux.scala 19:72:@2162.4]
  assign _T_1185 = _T_681 ? _T_336 : 40'h0; // @[Mux.scala 19:72:@2163.4]
  assign _T_1187 = _T_683 ? _T_339 : 40'h0; // @[Mux.scala 19:72:@2164.4]
  assign _T_1189 = _T_685 ? _T_339 : 40'h0; // @[Mux.scala 19:72:@2165.4]
  assign _T_1191 = _T_687 ? _T_342 : 40'h0; // @[Mux.scala 19:72:@2166.4]
  assign _T_1193 = _T_689 ? _T_342 : 40'h0; // @[Mux.scala 19:72:@2167.4]
  assign _T_1195 = _T_691 ? _T_345 : 40'h0; // @[Mux.scala 19:72:@2168.4]
  assign _T_1197 = _T_693 ? _T_345 : 40'h0; // @[Mux.scala 19:72:@2169.4]
  assign _T_1199 = _T_695 ? _T_348 : 40'h0; // @[Mux.scala 19:72:@2170.4]
  assign _T_1201 = _T_697 ? _T_348 : 40'h0; // @[Mux.scala 19:72:@2171.4]
  assign _T_1203 = _T_699 ? _T_351 : 40'h0; // @[Mux.scala 19:72:@2172.4]
  assign _T_1205 = _T_701 ? _T_351 : 40'h0; // @[Mux.scala 19:72:@2173.4]
  assign _T_1207 = _T_703 ? _T_354 : 40'h0; // @[Mux.scala 19:72:@2174.4]
  assign _T_1209 = _T_705 ? _T_354 : 40'h0; // @[Mux.scala 19:72:@2175.4]
  assign _T_1211 = _T_707 ? _T_357 : 40'h0; // @[Mux.scala 19:72:@2176.4]
  assign _T_1213 = _T_709 ? _T_357 : 40'h0; // @[Mux.scala 19:72:@2177.4]
  assign _T_1215 = _T_711 ? _T_360 : 40'h0; // @[Mux.scala 19:72:@2178.4]
  assign _T_1217 = _T_713 ? _T_360 : 40'h0; // @[Mux.scala 19:72:@2179.4]
  assign _T_1219 = _T_715 ? _T_363 : 40'h0; // @[Mux.scala 19:72:@2180.4]
  assign _T_1221 = _T_717 ? _T_363 : 40'h0; // @[Mux.scala 19:72:@2181.4]
  assign _T_1223 = _T_719 ? _T_366 : 40'h0; // @[Mux.scala 19:72:@2182.4]
  assign _T_1225 = _T_721 ? _T_366 : 40'h0; // @[Mux.scala 19:72:@2183.4]
  assign _T_1227 = _T_723 ? _T_369 : 40'h0; // @[Mux.scala 19:72:@2184.4]
  assign _T_1229 = _T_725 ? _T_369 : 40'h0; // @[Mux.scala 19:72:@2185.4]
  assign _T_1231 = _T_727 ? _T_372 : 40'h0; // @[Mux.scala 19:72:@2186.4]
  assign _T_1233 = _T_729 ? _T_372 : 40'h0; // @[Mux.scala 19:72:@2187.4]
  assign _T_1235 = _T_731 ? _T_375 : 40'h0; // @[Mux.scala 19:72:@2188.4]
  assign _T_1237 = _T_733 ? _T_375 : 40'h0; // @[Mux.scala 19:72:@2189.4]
  assign _T_1242 = _T_1073 | _T_1075; // @[Mux.scala 19:72:@2192.4]
  assign _GEN_155 = {{48'd0}, _T_1077}; // @[Mux.scala 19:72:@2193.4]
  assign _T_1243 = _T_1242 | _GEN_155; // @[Mux.scala 19:72:@2193.4]
  assign _GEN_156 = {{55'd0}, _T_1083}; // @[Mux.scala 19:72:@2196.4]
  assign _T_1246 = _T_1243 | _GEN_156; // @[Mux.scala 19:72:@2196.4]
  assign _GEN_157 = {{29'd0}, _T_1085}; // @[Mux.scala 19:72:@2197.4]
  assign _T_1247 = _T_1246 | _GEN_157; // @[Mux.scala 19:72:@2197.4]
  assign _GEN_158 = {{55'd0}, _T_1087}; // @[Mux.scala 19:72:@2198.4]
  assign _T_1248 = _T_1247 | _GEN_158; // @[Mux.scala 19:72:@2198.4]
  assign _GEN_159 = {{48'd0}, _T_1089}; // @[Mux.scala 19:72:@2199.4]
  assign _T_1249 = _T_1248 | _GEN_159; // @[Mux.scala 19:72:@2199.4]
  assign _GEN_160 = {{48'd0}, _T_1091}; // @[Mux.scala 19:72:@2200.4]
  assign _T_1250 = _T_1249 | _GEN_160; // @[Mux.scala 19:72:@2200.4]
  assign _GEN_161 = {{32'd0}, _T_1093}; // @[Mux.scala 19:72:@2201.4]
  assign _T_1251 = _T_1250 | _GEN_161; // @[Mux.scala 19:72:@2201.4]
  assign _GEN_162 = {{32'd0}, _T_1095}; // @[Mux.scala 19:72:@2202.4]
  assign _T_1252 = _T_1251 | _GEN_162; // @[Mux.scala 19:72:@2202.4]
  assign _GEN_163 = {{32'd0}, _T_1097}; // @[Mux.scala 19:72:@2203.4]
  assign _T_1253 = _T_1252 | _GEN_163; // @[Mux.scala 19:72:@2203.4]
  assign _GEN_164 = {{32'd0}, _T_1099}; // @[Mux.scala 19:72:@2204.4]
  assign _T_1254 = _T_1253 | _GEN_164; // @[Mux.scala 19:72:@2204.4]
  assign _GEN_165 = {{32'd0}, _T_1103}; // @[Mux.scala 19:72:@2206.4]
  assign _T_1256 = _T_1254 | _GEN_165; // @[Mux.scala 19:72:@2206.4]
  assign _GEN_166 = {{32'd0}, _T_1105}; // @[Mux.scala 19:72:@2207.4]
  assign _T_1257 = _T_1256 | _GEN_166; // @[Mux.scala 19:72:@2207.4]
  assign _GEN_167 = {{32'd0}, _T_1107}; // @[Mux.scala 19:72:@2208.4]
  assign _T_1258 = _T_1257 | _GEN_167; // @[Mux.scala 19:72:@2208.4]
  assign _GEN_168 = {{32'd0}, _T_1109}; // @[Mux.scala 19:72:@2209.4]
  assign _T_1259 = _T_1258 | _GEN_168; // @[Mux.scala 19:72:@2209.4]
  assign _GEN_169 = {{24'd0}, _T_1111}; // @[Mux.scala 19:72:@2210.4]
  assign _T_1260 = _T_1259 | _GEN_169; // @[Mux.scala 19:72:@2210.4]
  assign _GEN_170 = {{24'd0}, _T_1113}; // @[Mux.scala 19:72:@2211.4]
  assign _T_1261 = _T_1260 | _GEN_170; // @[Mux.scala 19:72:@2211.4]
  assign _GEN_171 = {{24'd0}, _T_1115}; // @[Mux.scala 19:72:@2212.4]
  assign _T_1262 = _T_1261 | _GEN_171; // @[Mux.scala 19:72:@2212.4]
  assign _GEN_172 = {{24'd0}, _T_1117}; // @[Mux.scala 19:72:@2213.4]
  assign _T_1263 = _T_1262 | _GEN_172; // @[Mux.scala 19:72:@2213.4]
  assign _GEN_173 = {{24'd0}, _T_1119}; // @[Mux.scala 19:72:@2214.4]
  assign _T_1264 = _T_1263 | _GEN_173; // @[Mux.scala 19:72:@2214.4]
  assign _GEN_174 = {{24'd0}, _T_1121}; // @[Mux.scala 19:72:@2215.4]
  assign _T_1265 = _T_1264 | _GEN_174; // @[Mux.scala 19:72:@2215.4]
  assign _GEN_175 = {{24'd0}, _T_1123}; // @[Mux.scala 19:72:@2216.4]
  assign _T_1266 = _T_1265 | _GEN_175; // @[Mux.scala 19:72:@2216.4]
  assign _GEN_176 = {{24'd0}, _T_1125}; // @[Mux.scala 19:72:@2217.4]
  assign _T_1267 = _T_1266 | _GEN_176; // @[Mux.scala 19:72:@2217.4]
  assign _GEN_177 = {{24'd0}, _T_1127}; // @[Mux.scala 19:72:@2218.4]
  assign _T_1268 = _T_1267 | _GEN_177; // @[Mux.scala 19:72:@2218.4]
  assign _GEN_178 = {{24'd0}, _T_1129}; // @[Mux.scala 19:72:@2219.4]
  assign _T_1269 = _T_1268 | _GEN_178; // @[Mux.scala 19:72:@2219.4]
  assign _GEN_179 = {{24'd0}, _T_1131}; // @[Mux.scala 19:72:@2220.4]
  assign _T_1270 = _T_1269 | _GEN_179; // @[Mux.scala 19:72:@2220.4]
  assign _GEN_180 = {{24'd0}, _T_1133}; // @[Mux.scala 19:72:@2221.4]
  assign _T_1271 = _T_1270 | _GEN_180; // @[Mux.scala 19:72:@2221.4]
  assign _GEN_181 = {{24'd0}, _T_1135}; // @[Mux.scala 19:72:@2222.4]
  assign _T_1272 = _T_1271 | _GEN_181; // @[Mux.scala 19:72:@2222.4]
  assign _GEN_182 = {{24'd0}, _T_1137}; // @[Mux.scala 19:72:@2223.4]
  assign _T_1273 = _T_1272 | _GEN_182; // @[Mux.scala 19:72:@2223.4]
  assign _GEN_183 = {{24'd0}, _T_1139}; // @[Mux.scala 19:72:@2224.4]
  assign _T_1274 = _T_1273 | _GEN_183; // @[Mux.scala 19:72:@2224.4]
  assign _GEN_184 = {{24'd0}, _T_1141}; // @[Mux.scala 19:72:@2225.4]
  assign _T_1275 = _T_1274 | _GEN_184; // @[Mux.scala 19:72:@2225.4]
  assign _GEN_185 = {{24'd0}, _T_1143}; // @[Mux.scala 19:72:@2226.4]
  assign _T_1276 = _T_1275 | _GEN_185; // @[Mux.scala 19:72:@2226.4]
  assign _GEN_186 = {{24'd0}, _T_1145}; // @[Mux.scala 19:72:@2227.4]
  assign _T_1277 = _T_1276 | _GEN_186; // @[Mux.scala 19:72:@2227.4]
  assign _GEN_187 = {{24'd0}, _T_1147}; // @[Mux.scala 19:72:@2228.4]
  assign _T_1278 = _T_1277 | _GEN_187; // @[Mux.scala 19:72:@2228.4]
  assign _GEN_188 = {{24'd0}, _T_1149}; // @[Mux.scala 19:72:@2229.4]
  assign _T_1279 = _T_1278 | _GEN_188; // @[Mux.scala 19:72:@2229.4]
  assign _GEN_189 = {{24'd0}, _T_1151}; // @[Mux.scala 19:72:@2230.4]
  assign _T_1280 = _T_1279 | _GEN_189; // @[Mux.scala 19:72:@2230.4]
  assign _GEN_190 = {{24'd0}, _T_1153}; // @[Mux.scala 19:72:@2231.4]
  assign _T_1281 = _T_1280 | _GEN_190; // @[Mux.scala 19:72:@2231.4]
  assign _GEN_191 = {{24'd0}, _T_1155}; // @[Mux.scala 19:72:@2232.4]
  assign _T_1282 = _T_1281 | _GEN_191; // @[Mux.scala 19:72:@2232.4]
  assign _GEN_192 = {{24'd0}, _T_1157}; // @[Mux.scala 19:72:@2233.4]
  assign _T_1283 = _T_1282 | _GEN_192; // @[Mux.scala 19:72:@2233.4]
  assign _GEN_193 = {{24'd0}, _T_1159}; // @[Mux.scala 19:72:@2234.4]
  assign _T_1284 = _T_1283 | _GEN_193; // @[Mux.scala 19:72:@2234.4]
  assign _GEN_194 = {{24'd0}, _T_1161}; // @[Mux.scala 19:72:@2235.4]
  assign _T_1285 = _T_1284 | _GEN_194; // @[Mux.scala 19:72:@2235.4]
  assign _GEN_195 = {{24'd0}, _T_1163}; // @[Mux.scala 19:72:@2236.4]
  assign _T_1286 = _T_1285 | _GEN_195; // @[Mux.scala 19:72:@2236.4]
  assign _GEN_196 = {{24'd0}, _T_1165}; // @[Mux.scala 19:72:@2237.4]
  assign _T_1287 = _T_1286 | _GEN_196; // @[Mux.scala 19:72:@2237.4]
  assign _GEN_197 = {{24'd0}, _T_1167}; // @[Mux.scala 19:72:@2238.4]
  assign _T_1288 = _T_1287 | _GEN_197; // @[Mux.scala 19:72:@2238.4]
  assign _GEN_198 = {{24'd0}, _T_1169}; // @[Mux.scala 19:72:@2239.4]
  assign _T_1289 = _T_1288 | _GEN_198; // @[Mux.scala 19:72:@2239.4]
  assign _GEN_199 = {{24'd0}, _T_1171}; // @[Mux.scala 19:72:@2240.4]
  assign _T_1290 = _T_1289 | _GEN_199; // @[Mux.scala 19:72:@2240.4]
  assign _GEN_200 = {{24'd0}, _T_1173}; // @[Mux.scala 19:72:@2241.4]
  assign _T_1291 = _T_1290 | _GEN_200; // @[Mux.scala 19:72:@2241.4]
  assign _GEN_201 = {{24'd0}, _T_1175}; // @[Mux.scala 19:72:@2242.4]
  assign _T_1292 = _T_1291 | _GEN_201; // @[Mux.scala 19:72:@2242.4]
  assign _GEN_202 = {{24'd0}, _T_1177}; // @[Mux.scala 19:72:@2243.4]
  assign _T_1293 = _T_1292 | _GEN_202; // @[Mux.scala 19:72:@2243.4]
  assign _GEN_203 = {{24'd0}, _T_1179}; // @[Mux.scala 19:72:@2244.4]
  assign _T_1294 = _T_1293 | _GEN_203; // @[Mux.scala 19:72:@2244.4]
  assign _GEN_204 = {{24'd0}, _T_1181}; // @[Mux.scala 19:72:@2245.4]
  assign _T_1295 = _T_1294 | _GEN_204; // @[Mux.scala 19:72:@2245.4]
  assign _GEN_205 = {{24'd0}, _T_1183}; // @[Mux.scala 19:72:@2246.4]
  assign _T_1296 = _T_1295 | _GEN_205; // @[Mux.scala 19:72:@2246.4]
  assign _GEN_206 = {{24'd0}, _T_1185}; // @[Mux.scala 19:72:@2247.4]
  assign _T_1297 = _T_1296 | _GEN_206; // @[Mux.scala 19:72:@2247.4]
  assign _GEN_207 = {{24'd0}, _T_1187}; // @[Mux.scala 19:72:@2248.4]
  assign _T_1298 = _T_1297 | _GEN_207; // @[Mux.scala 19:72:@2248.4]
  assign _GEN_208 = {{24'd0}, _T_1189}; // @[Mux.scala 19:72:@2249.4]
  assign _T_1299 = _T_1298 | _GEN_208; // @[Mux.scala 19:72:@2249.4]
  assign _GEN_209 = {{24'd0}, _T_1191}; // @[Mux.scala 19:72:@2250.4]
  assign _T_1300 = _T_1299 | _GEN_209; // @[Mux.scala 19:72:@2250.4]
  assign _GEN_210 = {{24'd0}, _T_1193}; // @[Mux.scala 19:72:@2251.4]
  assign _T_1301 = _T_1300 | _GEN_210; // @[Mux.scala 19:72:@2251.4]
  assign _GEN_211 = {{24'd0}, _T_1195}; // @[Mux.scala 19:72:@2252.4]
  assign _T_1302 = _T_1301 | _GEN_211; // @[Mux.scala 19:72:@2252.4]
  assign _GEN_212 = {{24'd0}, _T_1197}; // @[Mux.scala 19:72:@2253.4]
  assign _T_1303 = _T_1302 | _GEN_212; // @[Mux.scala 19:72:@2253.4]
  assign _GEN_213 = {{24'd0}, _T_1199}; // @[Mux.scala 19:72:@2254.4]
  assign _T_1304 = _T_1303 | _GEN_213; // @[Mux.scala 19:72:@2254.4]
  assign _GEN_214 = {{24'd0}, _T_1201}; // @[Mux.scala 19:72:@2255.4]
  assign _T_1305 = _T_1304 | _GEN_214; // @[Mux.scala 19:72:@2255.4]
  assign _GEN_215 = {{24'd0}, _T_1203}; // @[Mux.scala 19:72:@2256.4]
  assign _T_1306 = _T_1305 | _GEN_215; // @[Mux.scala 19:72:@2256.4]
  assign _GEN_216 = {{24'd0}, _T_1205}; // @[Mux.scala 19:72:@2257.4]
  assign _T_1307 = _T_1306 | _GEN_216; // @[Mux.scala 19:72:@2257.4]
  assign _GEN_217 = {{24'd0}, _T_1207}; // @[Mux.scala 19:72:@2258.4]
  assign _T_1308 = _T_1307 | _GEN_217; // @[Mux.scala 19:72:@2258.4]
  assign _GEN_218 = {{24'd0}, _T_1209}; // @[Mux.scala 19:72:@2259.4]
  assign _T_1309 = _T_1308 | _GEN_218; // @[Mux.scala 19:72:@2259.4]
  assign _GEN_219 = {{24'd0}, _T_1211}; // @[Mux.scala 19:72:@2260.4]
  assign _T_1310 = _T_1309 | _GEN_219; // @[Mux.scala 19:72:@2260.4]
  assign _GEN_220 = {{24'd0}, _T_1213}; // @[Mux.scala 19:72:@2261.4]
  assign _T_1311 = _T_1310 | _GEN_220; // @[Mux.scala 19:72:@2261.4]
  assign _GEN_221 = {{24'd0}, _T_1215}; // @[Mux.scala 19:72:@2262.4]
  assign _T_1312 = _T_1311 | _GEN_221; // @[Mux.scala 19:72:@2262.4]
  assign _GEN_222 = {{24'd0}, _T_1217}; // @[Mux.scala 19:72:@2263.4]
  assign _T_1313 = _T_1312 | _GEN_222; // @[Mux.scala 19:72:@2263.4]
  assign _GEN_223 = {{24'd0}, _T_1219}; // @[Mux.scala 19:72:@2264.4]
  assign _T_1314 = _T_1313 | _GEN_223; // @[Mux.scala 19:72:@2264.4]
  assign _GEN_224 = {{24'd0}, _T_1221}; // @[Mux.scala 19:72:@2265.4]
  assign _T_1315 = _T_1314 | _GEN_224; // @[Mux.scala 19:72:@2265.4]
  assign _GEN_225 = {{24'd0}, _T_1223}; // @[Mux.scala 19:72:@2266.4]
  assign _T_1316 = _T_1315 | _GEN_225; // @[Mux.scala 19:72:@2266.4]
  assign _GEN_226 = {{24'd0}, _T_1225}; // @[Mux.scala 19:72:@2267.4]
  assign _T_1317 = _T_1316 | _GEN_226; // @[Mux.scala 19:72:@2267.4]
  assign _GEN_227 = {{24'd0}, _T_1227}; // @[Mux.scala 19:72:@2268.4]
  assign _T_1318 = _T_1317 | _GEN_227; // @[Mux.scala 19:72:@2268.4]
  assign _GEN_228 = {{24'd0}, _T_1229}; // @[Mux.scala 19:72:@2269.4]
  assign _T_1319 = _T_1318 | _GEN_228; // @[Mux.scala 19:72:@2269.4]
  assign _GEN_229 = {{24'd0}, _T_1231}; // @[Mux.scala 19:72:@2270.4]
  assign _T_1320 = _T_1319 | _GEN_229; // @[Mux.scala 19:72:@2270.4]
  assign _GEN_230 = {{24'd0}, _T_1233}; // @[Mux.scala 19:72:@2271.4]
  assign _T_1321 = _T_1320 | _GEN_230; // @[Mux.scala 19:72:@2271.4]
  assign _GEN_231 = {{24'd0}, _T_1235}; // @[Mux.scala 19:72:@2272.4]
  assign _T_1322 = _T_1321 | _GEN_231; // @[Mux.scala 19:72:@2272.4]
  assign _GEN_232 = {{24'd0}, _T_1237}; // @[Mux.scala 19:72:@2273.4]
  assign _T_1323 = _T_1322 | _GEN_232; // @[Mux.scala 19:72:@2273.4]
  assign _T_1334 = wdata[2]; // @[CSR.scala 330:38:@2286.8]
  assign _T_1344 = wdata[15]; // @[CSR.scala 330:38:@2306.8]
  assign _GEN_17 = _T_599 ? _T_1334 : reg_dcsr_step; // @[CSR.scala 329:36:@2280.6]
  assign _GEN_18 = _T_599 ? _T_1344 : reg_dcsr_ebreakm; // @[CSR.scala 329:36:@2280.6]
  assign _T_1352 = {{3'd0}, wdata}; // @[:@2319.8 :@2320.8]
  assign _T_1356 = _T_1352[3]; // @[CSR.scala 337:39:@2327.8]
  assign _T_1360 = _T_1352[7]; // @[CSR.scala 337:39:@2335.8]
  assign _GEN_19 = _T_581 ? _T_1356 : _GEN_9; // @[CSR.scala 336:39:@2317.6]
  assign _GEN_20 = _T_581 ? _T_1360 : _GEN_10; // @[CSR.scala 336:39:@2317.6]
  assign _T_1380 = wdata[15:0]; // @[:@2372.8 :@2373.8]
  assign _T_1384 = _T_1380[3]; // @[CSR.scala 342:35:@2380.8]
  assign _T_1388 = _T_1380[7]; // @[CSR.scala 342:35:@2388.8]
  assign _GEN_21 = _T_585 ? _T_1384 : reg_mip_msip; // @[CSR.scala 341:35:@2370.6]
  assign _GEN_22 = _T_587 ? _T_1384 : reg_mie_msip; // @[CSR.scala 345:35:@2408.6]
  assign _GEN_23 = _T_587 ? _T_1388 : reg_mie_mtip; // @[CSR.scala 345:35:@2408.6]
  assign _T_1418 = wdata[7:0]; // @[CSR.scala 382:47:@2448.8]
  assign _T_1419 = _T_282[31:0]; // @[CSR.scala 382:72:@2449.8]
  assign _T_1420 = {_T_1418,_T_1419}; // @[Cat.scala 30:58:@2450.8]
  assign _GEN_24 = _T_609 ? {{1'd0}, _T_1420} : _T_283; // @[CSR.scala 382:29:@2447.6]
  assign _T_1421 = _T_282[39:32]; // @[CSR.scala 383:45:@2454.8]
  assign _T_1422 = {_T_1421,wdata}; // @[Cat.scala 30:58:@2455.8]
  assign _GEN_25 = _T_607 ? {{1'd0}, _T_1422} : _GEN_24; // @[CSR.scala 383:29:@2453.6]
  assign _T_1424 = _T_285[31:0]; // @[CSR.scala 382:72:@2460.8]
  assign _T_1425 = {_T_1418,_T_1424}; // @[Cat.scala 30:58:@2461.8]
  assign _GEN_26 = _T_613 ? {{1'd0}, _T_1425} : _T_286; // @[CSR.scala 382:29:@2458.6]
  assign _T_1426 = _T_285[39:32]; // @[CSR.scala 383:45:@2465.8]
  assign _T_1427 = {_T_1426,wdata}; // @[Cat.scala 30:58:@2466.8]
  assign _GEN_27 = _T_611 ? {{1'd0}, _T_1427} : _GEN_26; // @[CSR.scala 383:29:@2464.6]
  assign _T_1429 = _T_288[31:0]; // @[CSR.scala 382:72:@2471.8]
  assign _T_1430 = {_T_1418,_T_1429}; // @[Cat.scala 30:58:@2472.8]
  assign _GEN_28 = _T_617 ? {{1'd0}, _T_1430} : _T_289; // @[CSR.scala 382:29:@2469.6]
  assign _T_1431 = _T_288[39:32]; // @[CSR.scala 383:45:@2476.8]
  assign _T_1432 = {_T_1431,wdata}; // @[Cat.scala 30:58:@2477.8]
  assign _GEN_29 = _T_615 ? {{1'd0}, _T_1432} : _GEN_28; // @[CSR.scala 383:29:@2475.6]
  assign _T_1434 = _T_291[31:0]; // @[CSR.scala 382:72:@2482.8]
  assign _T_1435 = {_T_1418,_T_1434}; // @[Cat.scala 30:58:@2483.8]
  assign _GEN_30 = _T_621 ? {{1'd0}, _T_1435} : _T_292; // @[CSR.scala 382:29:@2480.6]
  assign _T_1436 = _T_291[39:32]; // @[CSR.scala 383:45:@2487.8]
  assign _T_1437 = {_T_1436,wdata}; // @[Cat.scala 30:58:@2488.8]
  assign _GEN_31 = _T_619 ? {{1'd0}, _T_1437} : _GEN_30; // @[CSR.scala 383:29:@2486.6]
  assign _T_1439 = _T_294[31:0]; // @[CSR.scala 382:72:@2493.8]
  assign _T_1440 = {_T_1418,_T_1439}; // @[Cat.scala 30:58:@2494.8]
  assign _GEN_32 = _T_625 ? {{1'd0}, _T_1440} : _T_295; // @[CSR.scala 382:29:@2491.6]
  assign _T_1441 = _T_294[39:32]; // @[CSR.scala 383:45:@2498.8]
  assign _T_1442 = {_T_1441,wdata}; // @[Cat.scala 30:58:@2499.8]
  assign _GEN_33 = _T_623 ? {{1'd0}, _T_1442} : _GEN_32; // @[CSR.scala 383:29:@2497.6]
  assign _T_1444 = _T_297[31:0]; // @[CSR.scala 382:72:@2504.8]
  assign _T_1445 = {_T_1418,_T_1444}; // @[Cat.scala 30:58:@2505.8]
  assign _GEN_34 = _T_629 ? {{1'd0}, _T_1445} : _T_298; // @[CSR.scala 382:29:@2502.6]
  assign _T_1446 = _T_297[39:32]; // @[CSR.scala 383:45:@2509.8]
  assign _T_1447 = {_T_1446,wdata}; // @[Cat.scala 30:58:@2510.8]
  assign _GEN_35 = _T_627 ? {{1'd0}, _T_1447} : _GEN_34; // @[CSR.scala 383:29:@2508.6]
  assign _T_1449 = _T_300[31:0]; // @[CSR.scala 382:72:@2515.8]
  assign _T_1450 = {_T_1418,_T_1449}; // @[Cat.scala 30:58:@2516.8]
  assign _GEN_36 = _T_633 ? {{1'd0}, _T_1450} : _T_301; // @[CSR.scala 382:29:@2513.6]
  assign _T_1451 = _T_300[39:32]; // @[CSR.scala 383:45:@2520.8]
  assign _T_1452 = {_T_1451,wdata}; // @[Cat.scala 30:58:@2521.8]
  assign _GEN_37 = _T_631 ? {{1'd0}, _T_1452} : _GEN_36; // @[CSR.scala 383:29:@2519.6]
  assign _T_1454 = _T_303[31:0]; // @[CSR.scala 382:72:@2526.8]
  assign _T_1455 = {_T_1418,_T_1454}; // @[Cat.scala 30:58:@2527.8]
  assign _GEN_38 = _T_637 ? {{1'd0}, _T_1455} : _T_304; // @[CSR.scala 382:29:@2524.6]
  assign _T_1456 = _T_303[39:32]; // @[CSR.scala 383:45:@2531.8]
  assign _T_1457 = {_T_1456,wdata}; // @[Cat.scala 30:58:@2532.8]
  assign _GEN_39 = _T_635 ? {{1'd0}, _T_1457} : _GEN_38; // @[CSR.scala 383:29:@2530.6]
  assign _T_1459 = _T_306[31:0]; // @[CSR.scala 382:72:@2537.8]
  assign _T_1460 = {_T_1418,_T_1459}; // @[Cat.scala 30:58:@2538.8]
  assign _GEN_40 = _T_641 ? {{1'd0}, _T_1460} : _T_307; // @[CSR.scala 382:29:@2535.6]
  assign _T_1461 = _T_306[39:32]; // @[CSR.scala 383:45:@2542.8]
  assign _T_1462 = {_T_1461,wdata}; // @[Cat.scala 30:58:@2543.8]
  assign _GEN_41 = _T_639 ? {{1'd0}, _T_1462} : _GEN_40; // @[CSR.scala 383:29:@2541.6]
  assign _T_1464 = _T_309[31:0]; // @[CSR.scala 382:72:@2548.8]
  assign _T_1465 = {_T_1418,_T_1464}; // @[Cat.scala 30:58:@2549.8]
  assign _GEN_42 = _T_645 ? {{1'd0}, _T_1465} : _T_310; // @[CSR.scala 382:29:@2546.6]
  assign _T_1466 = _T_309[39:32]; // @[CSR.scala 383:45:@2553.8]
  assign _T_1467 = {_T_1466,wdata}; // @[Cat.scala 30:58:@2554.8]
  assign _GEN_43 = _T_643 ? {{1'd0}, _T_1467} : _GEN_42; // @[CSR.scala 383:29:@2552.6]
  assign _T_1469 = _T_312[31:0]; // @[CSR.scala 382:72:@2559.8]
  assign _T_1470 = {_T_1418,_T_1469}; // @[Cat.scala 30:58:@2560.8]
  assign _GEN_44 = _T_649 ? {{1'd0}, _T_1470} : _T_313; // @[CSR.scala 382:29:@2557.6]
  assign _T_1471 = _T_312[39:32]; // @[CSR.scala 383:45:@2564.8]
  assign _T_1472 = {_T_1471,wdata}; // @[Cat.scala 30:58:@2565.8]
  assign _GEN_45 = _T_647 ? {{1'd0}, _T_1472} : _GEN_44; // @[CSR.scala 383:29:@2563.6]
  assign _T_1474 = _T_315[31:0]; // @[CSR.scala 382:72:@2570.8]
  assign _T_1475 = {_T_1418,_T_1474}; // @[Cat.scala 30:58:@2571.8]
  assign _GEN_46 = _T_653 ? {{1'd0}, _T_1475} : _T_316; // @[CSR.scala 382:29:@2568.6]
  assign _T_1476 = _T_315[39:32]; // @[CSR.scala 383:45:@2575.8]
  assign _T_1477 = {_T_1476,wdata}; // @[Cat.scala 30:58:@2576.8]
  assign _GEN_47 = _T_651 ? {{1'd0}, _T_1477} : _GEN_46; // @[CSR.scala 383:29:@2574.6]
  assign _T_1479 = _T_318[31:0]; // @[CSR.scala 382:72:@2581.8]
  assign _T_1480 = {_T_1418,_T_1479}; // @[Cat.scala 30:58:@2582.8]
  assign _GEN_48 = _T_657 ? {{1'd0}, _T_1480} : _T_319; // @[CSR.scala 382:29:@2579.6]
  assign _T_1481 = _T_318[39:32]; // @[CSR.scala 383:45:@2586.8]
  assign _T_1482 = {_T_1481,wdata}; // @[Cat.scala 30:58:@2587.8]
  assign _GEN_49 = _T_655 ? {{1'd0}, _T_1482} : _GEN_48; // @[CSR.scala 383:29:@2585.6]
  assign _T_1484 = _T_321[31:0]; // @[CSR.scala 382:72:@2592.8]
  assign _T_1485 = {_T_1418,_T_1484}; // @[Cat.scala 30:58:@2593.8]
  assign _GEN_50 = _T_661 ? {{1'd0}, _T_1485} : _T_322; // @[CSR.scala 382:29:@2590.6]
  assign _T_1486 = _T_321[39:32]; // @[CSR.scala 383:45:@2597.8]
  assign _T_1487 = {_T_1486,wdata}; // @[Cat.scala 30:58:@2598.8]
  assign _GEN_51 = _T_659 ? {{1'd0}, _T_1487} : _GEN_50; // @[CSR.scala 383:29:@2596.6]
  assign _T_1489 = _T_324[31:0]; // @[CSR.scala 382:72:@2603.8]
  assign _T_1490 = {_T_1418,_T_1489}; // @[Cat.scala 30:58:@2604.8]
  assign _GEN_52 = _T_665 ? {{1'd0}, _T_1490} : _T_325; // @[CSR.scala 382:29:@2601.6]
  assign _T_1491 = _T_324[39:32]; // @[CSR.scala 383:45:@2608.8]
  assign _T_1492 = {_T_1491,wdata}; // @[Cat.scala 30:58:@2609.8]
  assign _GEN_53 = _T_663 ? {{1'd0}, _T_1492} : _GEN_52; // @[CSR.scala 383:29:@2607.6]
  assign _T_1494 = _T_327[31:0]; // @[CSR.scala 382:72:@2614.8]
  assign _T_1495 = {_T_1418,_T_1494}; // @[Cat.scala 30:58:@2615.8]
  assign _GEN_54 = _T_669 ? {{1'd0}, _T_1495} : _T_328; // @[CSR.scala 382:29:@2612.6]
  assign _T_1496 = _T_327[39:32]; // @[CSR.scala 383:45:@2619.8]
  assign _T_1497 = {_T_1496,wdata}; // @[Cat.scala 30:58:@2620.8]
  assign _GEN_55 = _T_667 ? {{1'd0}, _T_1497} : _GEN_54; // @[CSR.scala 383:29:@2618.6]
  assign _T_1499 = _T_330[31:0]; // @[CSR.scala 382:72:@2625.8]
  assign _T_1500 = {_T_1418,_T_1499}; // @[Cat.scala 30:58:@2626.8]
  assign _GEN_56 = _T_673 ? {{1'd0}, _T_1500} : _T_331; // @[CSR.scala 382:29:@2623.6]
  assign _T_1501 = _T_330[39:32]; // @[CSR.scala 383:45:@2630.8]
  assign _T_1502 = {_T_1501,wdata}; // @[Cat.scala 30:58:@2631.8]
  assign _GEN_57 = _T_671 ? {{1'd0}, _T_1502} : _GEN_56; // @[CSR.scala 383:29:@2629.6]
  assign _T_1504 = _T_333[31:0]; // @[CSR.scala 382:72:@2636.8]
  assign _T_1505 = {_T_1418,_T_1504}; // @[Cat.scala 30:58:@2637.8]
  assign _GEN_58 = _T_677 ? {{1'd0}, _T_1505} : _T_334; // @[CSR.scala 382:29:@2634.6]
  assign _T_1506 = _T_333[39:32]; // @[CSR.scala 383:45:@2641.8]
  assign _T_1507 = {_T_1506,wdata}; // @[Cat.scala 30:58:@2642.8]
  assign _GEN_59 = _T_675 ? {{1'd0}, _T_1507} : _GEN_58; // @[CSR.scala 383:29:@2640.6]
  assign _T_1509 = _T_336[31:0]; // @[CSR.scala 382:72:@2647.8]
  assign _T_1510 = {_T_1418,_T_1509}; // @[Cat.scala 30:58:@2648.8]
  assign _GEN_60 = _T_681 ? {{1'd0}, _T_1510} : _T_337; // @[CSR.scala 382:29:@2645.6]
  assign _T_1511 = _T_336[39:32]; // @[CSR.scala 383:45:@2652.8]
  assign _T_1512 = {_T_1511,wdata}; // @[Cat.scala 30:58:@2653.8]
  assign _GEN_61 = _T_679 ? {{1'd0}, _T_1512} : _GEN_60; // @[CSR.scala 383:29:@2651.6]
  assign _T_1514 = _T_339[31:0]; // @[CSR.scala 382:72:@2658.8]
  assign _T_1515 = {_T_1418,_T_1514}; // @[Cat.scala 30:58:@2659.8]
  assign _GEN_62 = _T_685 ? {{1'd0}, _T_1515} : _T_340; // @[CSR.scala 382:29:@2656.6]
  assign _T_1516 = _T_339[39:32]; // @[CSR.scala 383:45:@2663.8]
  assign _T_1517 = {_T_1516,wdata}; // @[Cat.scala 30:58:@2664.8]
  assign _GEN_63 = _T_683 ? {{1'd0}, _T_1517} : _GEN_62; // @[CSR.scala 383:29:@2662.6]
  assign _T_1519 = _T_342[31:0]; // @[CSR.scala 382:72:@2669.8]
  assign _T_1520 = {_T_1418,_T_1519}; // @[Cat.scala 30:58:@2670.8]
  assign _GEN_64 = _T_689 ? {{1'd0}, _T_1520} : _T_343; // @[CSR.scala 382:29:@2667.6]
  assign _T_1521 = _T_342[39:32]; // @[CSR.scala 383:45:@2674.8]
  assign _T_1522 = {_T_1521,wdata}; // @[Cat.scala 30:58:@2675.8]
  assign _GEN_65 = _T_687 ? {{1'd0}, _T_1522} : _GEN_64; // @[CSR.scala 383:29:@2673.6]
  assign _T_1524 = _T_345[31:0]; // @[CSR.scala 382:72:@2680.8]
  assign _T_1525 = {_T_1418,_T_1524}; // @[Cat.scala 30:58:@2681.8]
  assign _GEN_66 = _T_693 ? {{1'd0}, _T_1525} : _T_346; // @[CSR.scala 382:29:@2678.6]
  assign _T_1526 = _T_345[39:32]; // @[CSR.scala 383:45:@2685.8]
  assign _T_1527 = {_T_1526,wdata}; // @[Cat.scala 30:58:@2686.8]
  assign _GEN_67 = _T_691 ? {{1'd0}, _T_1527} : _GEN_66; // @[CSR.scala 383:29:@2684.6]
  assign _T_1529 = _T_348[31:0]; // @[CSR.scala 382:72:@2691.8]
  assign _T_1530 = {_T_1418,_T_1529}; // @[Cat.scala 30:58:@2692.8]
  assign _GEN_68 = _T_697 ? {{1'd0}, _T_1530} : _T_349; // @[CSR.scala 382:29:@2689.6]
  assign _T_1531 = _T_348[39:32]; // @[CSR.scala 383:45:@2696.8]
  assign _T_1532 = {_T_1531,wdata}; // @[Cat.scala 30:58:@2697.8]
  assign _GEN_69 = _T_695 ? {{1'd0}, _T_1532} : _GEN_68; // @[CSR.scala 383:29:@2695.6]
  assign _T_1534 = _T_351[31:0]; // @[CSR.scala 382:72:@2702.8]
  assign _T_1535 = {_T_1418,_T_1534}; // @[Cat.scala 30:58:@2703.8]
  assign _GEN_70 = _T_701 ? {{1'd0}, _T_1535} : _T_352; // @[CSR.scala 382:29:@2700.6]
  assign _T_1536 = _T_351[39:32]; // @[CSR.scala 383:45:@2707.8]
  assign _T_1537 = {_T_1536,wdata}; // @[Cat.scala 30:58:@2708.8]
  assign _GEN_71 = _T_699 ? {{1'd0}, _T_1537} : _GEN_70; // @[CSR.scala 383:29:@2706.6]
  assign _T_1539 = _T_354[31:0]; // @[CSR.scala 382:72:@2713.8]
  assign _T_1540 = {_T_1418,_T_1539}; // @[Cat.scala 30:58:@2714.8]
  assign _GEN_72 = _T_705 ? {{1'd0}, _T_1540} : _T_355; // @[CSR.scala 382:29:@2711.6]
  assign _T_1541 = _T_354[39:32]; // @[CSR.scala 383:45:@2718.8]
  assign _T_1542 = {_T_1541,wdata}; // @[Cat.scala 30:58:@2719.8]
  assign _GEN_73 = _T_703 ? {{1'd0}, _T_1542} : _GEN_72; // @[CSR.scala 383:29:@2717.6]
  assign _T_1544 = _T_357[31:0]; // @[CSR.scala 382:72:@2724.8]
  assign _T_1545 = {_T_1418,_T_1544}; // @[Cat.scala 30:58:@2725.8]
  assign _GEN_74 = _T_709 ? {{1'd0}, _T_1545} : _T_358; // @[CSR.scala 382:29:@2722.6]
  assign _T_1546 = _T_357[39:32]; // @[CSR.scala 383:45:@2729.8]
  assign _T_1547 = {_T_1546,wdata}; // @[Cat.scala 30:58:@2730.8]
  assign _GEN_75 = _T_707 ? {{1'd0}, _T_1547} : _GEN_74; // @[CSR.scala 383:29:@2728.6]
  assign _T_1549 = _T_360[31:0]; // @[CSR.scala 382:72:@2735.8]
  assign _T_1550 = {_T_1418,_T_1549}; // @[Cat.scala 30:58:@2736.8]
  assign _GEN_76 = _T_713 ? {{1'd0}, _T_1550} : _T_361; // @[CSR.scala 382:29:@2733.6]
  assign _T_1551 = _T_360[39:32]; // @[CSR.scala 383:45:@2740.8]
  assign _T_1552 = {_T_1551,wdata}; // @[Cat.scala 30:58:@2741.8]
  assign _GEN_77 = _T_711 ? {{1'd0}, _T_1552} : _GEN_76; // @[CSR.scala 383:29:@2739.6]
  assign _T_1554 = _T_363[31:0]; // @[CSR.scala 382:72:@2746.8]
  assign _T_1555 = {_T_1418,_T_1554}; // @[Cat.scala 30:58:@2747.8]
  assign _GEN_78 = _T_717 ? {{1'd0}, _T_1555} : _T_364; // @[CSR.scala 382:29:@2744.6]
  assign _T_1556 = _T_363[39:32]; // @[CSR.scala 383:45:@2751.8]
  assign _T_1557 = {_T_1556,wdata}; // @[Cat.scala 30:58:@2752.8]
  assign _GEN_79 = _T_715 ? {{1'd0}, _T_1557} : _GEN_78; // @[CSR.scala 383:29:@2750.6]
  assign _T_1559 = _T_366[31:0]; // @[CSR.scala 382:72:@2757.8]
  assign _T_1560 = {_T_1418,_T_1559}; // @[Cat.scala 30:58:@2758.8]
  assign _GEN_80 = _T_721 ? {{1'd0}, _T_1560} : _T_367; // @[CSR.scala 382:29:@2755.6]
  assign _T_1561 = _T_366[39:32]; // @[CSR.scala 383:45:@2762.8]
  assign _T_1562 = {_T_1561,wdata}; // @[Cat.scala 30:58:@2763.8]
  assign _GEN_81 = _T_719 ? {{1'd0}, _T_1562} : _GEN_80; // @[CSR.scala 383:29:@2761.6]
  assign _T_1564 = _T_369[31:0]; // @[CSR.scala 382:72:@2768.8]
  assign _T_1565 = {_T_1418,_T_1564}; // @[Cat.scala 30:58:@2769.8]
  assign _GEN_82 = _T_725 ? {{1'd0}, _T_1565} : _T_370; // @[CSR.scala 382:29:@2766.6]
  assign _T_1566 = _T_369[39:32]; // @[CSR.scala 383:45:@2773.8]
  assign _T_1567 = {_T_1566,wdata}; // @[Cat.scala 30:58:@2774.8]
  assign _GEN_83 = _T_723 ? {{1'd0}, _T_1567} : _GEN_82; // @[CSR.scala 383:29:@2772.6]
  assign _T_1569 = _T_372[31:0]; // @[CSR.scala 382:72:@2779.8]
  assign _T_1570 = {_T_1418,_T_1569}; // @[Cat.scala 30:58:@2780.8]
  assign _GEN_84 = _T_729 ? {{1'd0}, _T_1570} : _T_373; // @[CSR.scala 382:29:@2777.6]
  assign _T_1571 = _T_372[39:32]; // @[CSR.scala 383:45:@2784.8]
  assign _T_1572 = {_T_1571,wdata}; // @[Cat.scala 30:58:@2785.8]
  assign _GEN_85 = _T_727 ? {{1'd0}, _T_1572} : _GEN_84; // @[CSR.scala 383:29:@2783.6]
  assign _T_1574 = _T_375[31:0]; // @[CSR.scala 382:72:@2790.8]
  assign _T_1575 = {_T_1418,_T_1574}; // @[Cat.scala 30:58:@2791.8]
  assign _GEN_86 = _T_733 ? {{1'd0}, _T_1575} : _T_376; // @[CSR.scala 382:29:@2788.6]
  assign _T_1576 = _T_375[39:32]; // @[CSR.scala 383:45:@2795.8]
  assign _T_1577 = {_T_1576,wdata}; // @[Cat.scala 30:58:@2796.8]
  assign _GEN_87 = _T_731 ? {{1'd0}, _T_1577} : _GEN_86; // @[CSR.scala 383:29:@2794.6]
  assign _T_1579 = _T_267[31:0]; // @[CSR.scala 382:72:@2801.8]
  assign _T_1580 = {wdata,_T_1579}; // @[Cat.scala 30:58:@2802.8]
  assign _T_1581 = _T_1580[63:6]; // @[Util.scala 133:28:@2804.8]
  assign _GEN_88 = _T_735 ? _T_1580 : {{57'd0}, _T_259}; // @[CSR.scala 382:29:@2799.6]
  assign _GEN_89 = _T_735 ? _T_1581 : _GEN_0; // @[CSR.scala 382:29:@2799.6]
  assign _T_1582 = _T_267[63:32]; // @[CSR.scala 383:45:@2808.8]
  assign _T_1583 = {_T_1582,wdata}; // @[Cat.scala 30:58:@2809.8]
  assign _T_1584 = _T_1583[63:6]; // @[Util.scala 133:28:@2811.8]
  assign _GEN_90 = _T_569 ? _T_1583 : _GEN_88; // @[CSR.scala 383:29:@2807.6]
  assign _GEN_91 = _T_569 ? _T_1584 : _GEN_89; // @[CSR.scala 383:29:@2807.6]
  assign _T_1586 = _T_279[31:0]; // @[CSR.scala 382:72:@2816.8]
  assign _T_1587 = {wdata,_T_1586}; // @[Cat.scala 30:58:@2817.8]
  assign _T_1588 = _T_1587[63:6]; // @[Util.scala 133:28:@2819.8]
  assign _GEN_92 = _T_737 ? _T_1587 : {{57'd0}, _T_271}; // @[CSR.scala 382:29:@2814.6]
  assign _GEN_93 = _T_737 ? _T_1588 : _GEN_1; // @[CSR.scala 382:29:@2814.6]
  assign _T_1589 = _T_279[63:32]; // @[CSR.scala 383:45:@2823.8]
  assign _T_1590 = {_T_1589,wdata}; // @[Cat.scala 30:58:@2824.8]
  assign _T_1591 = _T_1590[63:6]; // @[Util.scala 133:28:@2826.8]
  assign _GEN_94 = _T_571 ? _T_1590 : _GEN_92; // @[CSR.scala 383:29:@2822.6]
  assign _GEN_95 = _T_571 ? _T_1591 : _GEN_93; // @[CSR.scala 383:29:@2822.6]
  assign _GEN_96 = _T_601 ? wdata : reg_dpc; // @[CSR.scala 361:40:@2829.6]
  assign _GEN_97 = _T_603 ? wdata : reg_dscratch; // @[CSR.scala 362:40:@2832.6]
  assign _T_1594 = wdata >> 2'h2; // @[CSR.scala 364:78:@2837.8]
  assign _GEN_233 = {{3'd0}, _T_1594}; // @[CSR.scala 364:86:@2838.8]
  assign _T_1596 = _GEN_233 << 2'h2; // @[CSR.scala 364:86:@2838.8]
  assign _GEN_98 = _T_591 ? _T_1596 : {{3'd0}, _GEN_4}; // @[CSR.scala 364:40:@2835.6]
  assign _GEN_99 = _T_589 ? wdata : reg_mscratch; // @[CSR.scala 365:40:@2841.6]
  assign _T_1598 = wdata & 32'h8000001f; // @[CSR.scala 366:62:@2845.8]
  assign _GEN_100 = _T_595 ? _T_1598 : _GEN_16; // @[CSR.scala 366:40:@2844.6]
  assign _GEN_101 = _T_593 ? wdata : reg_mtval; // @[CSR.scala 367:40:@2848.6]
  assign _GEN_102 = _T_605 ? wdata : reg_medeleg; // @[CSR.scala 368:42:@2852.6]
  assign _GEN_103 = wen ? _GEN_17 : reg_dcsr_step; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_104 = wen ? _GEN_18 : reg_dcsr_ebreakm; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_105 = wen ? _GEN_19 : _GEN_9; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_106 = wen ? _GEN_20 : _GEN_10; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_107 = wen ? _GEN_21 : reg_mip_msip; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_108 = wen ? _GEN_22 : reg_mie_msip; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_109 = wen ? _GEN_23 : reg_mie_mtip; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_110 = wen ? _GEN_25 : _T_283; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_111 = wen ? _GEN_27 : _T_286; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_112 = wen ? _GEN_29 : _T_289; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_113 = wen ? _GEN_31 : _T_292; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_114 = wen ? _GEN_33 : _T_295; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_115 = wen ? _GEN_35 : _T_298; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_116 = wen ? _GEN_37 : _T_301; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_117 = wen ? _GEN_39 : _T_304; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_118 = wen ? _GEN_41 : _T_307; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_119 = wen ? _GEN_43 : _T_310; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_120 = wen ? _GEN_45 : _T_313; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_121 = wen ? _GEN_47 : _T_316; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_122 = wen ? _GEN_49 : _T_319; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_123 = wen ? _GEN_51 : _T_322; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_124 = wen ? _GEN_53 : _T_325; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_125 = wen ? _GEN_55 : _T_328; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_126 = wen ? _GEN_57 : _T_331; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_127 = wen ? _GEN_59 : _T_334; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_128 = wen ? _GEN_61 : _T_337; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_129 = wen ? _GEN_63 : _T_340; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_130 = wen ? _GEN_65 : _T_343; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_131 = wen ? _GEN_67 : _T_346; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_132 = wen ? _GEN_69 : _T_349; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_133 = wen ? _GEN_71 : _T_352; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_134 = wen ? _GEN_73 : _T_355; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_135 = wen ? _GEN_75 : _T_358; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_136 = wen ? _GEN_77 : _T_361; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_137 = wen ? _GEN_79 : _T_364; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_138 = wen ? _GEN_81 : _T_367; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_139 = wen ? _GEN_83 : _T_370; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_140 = wen ? _GEN_85 : _T_373; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_141 = wen ? _GEN_87 : _T_376; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_142 = wen ? _GEN_90 : {{57'd0}, _T_259}; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_143 = wen ? _GEN_91 : _GEN_0; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_144 = wen ? _GEN_94 : {{57'd0}, _T_271}; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_145 = wen ? _GEN_95 : _GEN_1; // @[CSR.scala 327:14:@2279.4]
  assign _GEN_148 = wen ? _GEN_98 : {{3'd0}, _GEN_4}; // @[CSR.scala 327:14:@2279.4]
  assign io_rw_rdata = _T_1323[31:0]; // @[CSR.scala 325:15:@2278.4]
  assign io_eret = _T_1044 | insn_ret; // @[CSR.scala 278:11:@2060.4]
  assign io_status_debug = 1'h0; // @[CSR.scala 276:13:@2057.4]
  assign io_status_prv = reg_mstatus_prv; // @[CSR.scala 276:13:@2056.4]
  assign io_status_sd = 1'h0; // @[CSR.scala 276:13:@2055.4]
  assign io_status_zero1 = 8'h0; // @[CSR.scala 276:13:@2054.4]
  assign io_status_tsr = 1'h0; // @[CSR.scala 276:13:@2053.4]
  assign io_status_tw = 1'h0; // @[CSR.scala 276:13:@2052.4]
  assign io_status_tvm = 1'h0; // @[CSR.scala 276:13:@2051.4]
  assign io_status_mxr = 1'h0; // @[CSR.scala 276:13:@2050.4]
  assign io_status_sum = 1'h0; // @[CSR.scala 276:13:@2049.4]
  assign io_status_mprv = 1'h0; // @[CSR.scala 276:13:@2048.4]
  assign io_status_xs = 2'h0; // @[CSR.scala 276:13:@2047.4]
  assign io_status_fs = 2'h0; // @[CSR.scala 276:13:@2046.4]
  assign io_status_mpp = 2'h3; // @[CSR.scala 276:13:@2045.4]
  assign io_status_hpp = 2'h0; // @[CSR.scala 276:13:@2044.4]
  assign io_status_spp = 1'h0; // @[CSR.scala 276:13:@2043.4]
  assign io_status_mpie = reg_mstatus_mpie; // @[CSR.scala 276:13:@2042.4]
  assign io_status_hpie = 1'h0; // @[CSR.scala 276:13:@2041.4]
  assign io_status_spie = 1'h0; // @[CSR.scala 276:13:@2040.4]
  assign io_status_upie = 1'h0; // @[CSR.scala 276:13:@2039.4]
  assign io_status_mie = reg_mstatus_mie; // @[CSR.scala 276:13:@2038.4]
  assign io_status_hie = 1'h0; // @[CSR.scala 276:13:@2037.4]
  assign io_status_sie = 1'h0; // @[CSR.scala 276:13:@2036.4]
  assign io_status_uie = 1'h0; // @[CSR.scala 276:13:@2035.4]
  assign io_evec = insn_break ? 32'h80000004 : _GEN_13; // @[CSR.scala 283:13:@2063.6 CSR.scala 297:13:@2084.6 CSR.scala 305:13:@2093.6 CSR.scala 310:13:@2096.6 CSR.scala 316:13:@2102.6]
  assign io_time = _T_267[31:0]; // @[CSR.scala 321:11:@2105.4]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  reg_mstatus_prv = _RAND_0[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  reg_mstatus_mpie = _RAND_1[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  reg_mstatus_mie = _RAND_2[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  reg_mepc = _RAND_3[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  reg_mcause = _RAND_4[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  reg_mtval = _RAND_5[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  reg_mscratch = _RAND_6[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  reg_medeleg = _RAND_7[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  reg_mip_mtip = _RAND_8[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_9 = {1{`RANDOM}};
  reg_mip_msip = _RAND_9[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_10 = {1{`RANDOM}};
  reg_mie_mtip = _RAND_10[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_11 = {1{`RANDOM}};
  reg_mie_msip = _RAND_11[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_12 = {1{`RANDOM}};
  _T_258 = _RAND_12[5:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_13 = {2{`RANDOM}};
  _T_262 = _RAND_13[57:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_14 = {1{`RANDOM}};
  _T_270 = _RAND_14[5:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_15 = {2{`RANDOM}};
  _T_274 = _RAND_15[57:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_16 = {2{`RANDOM}};
  _T_282 = _RAND_16[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_17 = {2{`RANDOM}};
  _T_285 = _RAND_17[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_18 = {2{`RANDOM}};
  _T_288 = _RAND_18[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_19 = {2{`RANDOM}};
  _T_291 = _RAND_19[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_20 = {2{`RANDOM}};
  _T_294 = _RAND_20[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_21 = {2{`RANDOM}};
  _T_297 = _RAND_21[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_22 = {2{`RANDOM}};
  _T_300 = _RAND_22[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_23 = {2{`RANDOM}};
  _T_303 = _RAND_23[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_24 = {2{`RANDOM}};
  _T_306 = _RAND_24[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_25 = {2{`RANDOM}};
  _T_309 = _RAND_25[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_26 = {2{`RANDOM}};
  _T_312 = _RAND_26[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_27 = {2{`RANDOM}};
  _T_315 = _RAND_27[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_28 = {2{`RANDOM}};
  _T_318 = _RAND_28[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_29 = {2{`RANDOM}};
  _T_321 = _RAND_29[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_30 = {2{`RANDOM}};
  _T_324 = _RAND_30[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_31 = {2{`RANDOM}};
  _T_327 = _RAND_31[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_32 = {2{`RANDOM}};
  _T_330 = _RAND_32[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_33 = {2{`RANDOM}};
  _T_333 = _RAND_33[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_34 = {2{`RANDOM}};
  _T_336 = _RAND_34[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_35 = {2{`RANDOM}};
  _T_339 = _RAND_35[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_36 = {2{`RANDOM}};
  _T_342 = _RAND_36[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_37 = {2{`RANDOM}};
  _T_345 = _RAND_37[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_38 = {2{`RANDOM}};
  _T_348 = _RAND_38[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_39 = {2{`RANDOM}};
  _T_351 = _RAND_39[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_40 = {2{`RANDOM}};
  _T_354 = _RAND_40[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_41 = {2{`RANDOM}};
  _T_357 = _RAND_41[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_42 = {2{`RANDOM}};
  _T_360 = _RAND_42[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_43 = {2{`RANDOM}};
  _T_363 = _RAND_43[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_44 = {2{`RANDOM}};
  _T_366 = _RAND_44[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_45 = {2{`RANDOM}};
  _T_369 = _RAND_45[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_46 = {2{`RANDOM}};
  _T_372 = _RAND_46[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_47 = {2{`RANDOM}};
  _T_375 = _RAND_47[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_48 = {1{`RANDOM}};
  reg_dpc = _RAND_48[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_49 = {1{`RANDOM}};
  reg_dscratch = _RAND_49[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_50 = {1{`RANDOM}};
  reg_dcsr_ebreakm = _RAND_50[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_51 = {1{`RANDOM}};
  reg_dcsr_step = _RAND_51[0:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      reg_mstatus_prv <= 2'h3;
    end else begin
      if (_T_1063) begin
        reg_mstatus_prv <= 2'h3;
      end else begin
        if (_T_1058) begin
          reg_mstatus_prv <= 2'h3;
        end
      end
    end
    if (reset) begin
      reg_mstatus_mpie <= 1'h0;
    end else begin
      if (wen) begin
        if (_T_581) begin
          reg_mstatus_mpie <= _T_1360;
        end else begin
          if (_T_1063) begin
            reg_mstatus_mpie <= 1'h1;
          end
        end
      end else begin
        if (_T_1063) begin
          reg_mstatus_mpie <= 1'h1;
        end
      end
    end
    if (reset) begin
      reg_mstatus_mie <= 1'h0;
    end else begin
      if (wen) begin
        if (_T_581) begin
          reg_mstatus_mie <= _T_1356;
        end else begin
          if (_T_1063) begin
            reg_mstatus_mie <= reg_mstatus_mpie;
          end
        end
      end else begin
        if (_T_1063) begin
          reg_mstatus_mie <= reg_mstatus_mpie;
        end
      end
    end
    reg_mepc <= _GEN_148[31:0];
    if (wen) begin
      if (_T_595) begin
        reg_mcause <= _T_1598;
      end else begin
        if (insn_break) begin
          reg_mcause <= 32'h3;
        end else begin
          if (insn_call) begin
            reg_mcause <= {{28'd0}, _T_1068};
          end else begin
            if (io_exception) begin
              reg_mcause <= 32'h2;
            end
          end
        end
      end
    end else begin
      if (insn_break) begin
        reg_mcause <= 32'h3;
      end else begin
        if (insn_call) begin
          reg_mcause <= {{28'd0}, _T_1068};
        end else begin
          if (io_exception) begin
            reg_mcause <= 32'h2;
          end
        end
      end
    end
    if (wen) begin
      if (_T_593) begin
        reg_mtval <= wdata;
      end
    end
    if (wen) begin
      if (_T_589) begin
        reg_mscratch <= wdata;
      end
    end
    if (wen) begin
      if (_T_605) begin
        reg_medeleg <= wdata;
      end
    end
    if (reset) begin
      reg_mip_mtip <= 1'h0;
    end else begin
      reg_mip_mtip <= 1'h1;
    end
    if (reset) begin
      reg_mip_msip <= 1'h0;
    end else begin
      if (wen) begin
        if (_T_585) begin
          reg_mip_msip <= _T_1384;
        end
      end
    end
    if (reset) begin
      reg_mie_mtip <= 1'h0;
    end else begin
      if (wen) begin
        if (_T_587) begin
          reg_mie_mtip <= _T_1388;
        end
      end
    end
    if (reset) begin
      reg_mie_msip <= 1'h0;
    end else begin
      if (wen) begin
        if (_T_587) begin
          reg_mie_msip <= _T_1384;
        end
      end
    end
    if (reset) begin
      _T_258 <= 6'h0;
    end else begin
      _T_258 <= _GEN_142[5:0];
    end
    if (reset) begin
      _T_262 <= 58'h0;
    end else begin
      if (wen) begin
        if (_T_569) begin
          _T_262 <= _T_1584;
        end else begin
          if (_T_735) begin
            _T_262 <= _T_1581;
          end else begin
            if (_T_263) begin
              _T_262 <= _T_266;
            end
          end
        end
      end else begin
        if (_T_263) begin
          _T_262 <= _T_266;
        end
      end
    end
    if (reset) begin
      _T_270 <= 6'h0;
    end else begin
      _T_270 <= _GEN_144[5:0];
    end
    if (reset) begin
      _T_274 <= 58'h0;
    end else begin
      if (wen) begin
        if (_T_571) begin
          _T_274 <= _T_1591;
        end else begin
          if (_T_737) begin
            _T_274 <= _T_1588;
          end else begin
            if (_T_275) begin
              _T_274 <= _T_278;
            end
          end
        end
      end else begin
        if (_T_275) begin
          _T_274 <= _T_278;
        end
      end
    end
    _T_282 <= _GEN_110[39:0];
    _T_285 <= _GEN_111[39:0];
    _T_288 <= _GEN_112[39:0];
    _T_291 <= _GEN_113[39:0];
    _T_294 <= _GEN_114[39:0];
    _T_297 <= _GEN_115[39:0];
    _T_300 <= _GEN_116[39:0];
    _T_303 <= _GEN_117[39:0];
    _T_306 <= _GEN_118[39:0];
    _T_309 <= _GEN_119[39:0];
    _T_312 <= _GEN_120[39:0];
    _T_315 <= _GEN_121[39:0];
    _T_318 <= _GEN_122[39:0];
    _T_321 <= _GEN_123[39:0];
    _T_324 <= _GEN_124[39:0];
    _T_327 <= _GEN_125[39:0];
    _T_330 <= _GEN_126[39:0];
    _T_333 <= _GEN_127[39:0];
    _T_336 <= _GEN_128[39:0];
    _T_339 <= _GEN_129[39:0];
    _T_342 <= _GEN_130[39:0];
    _T_345 <= _GEN_131[39:0];
    _T_348 <= _GEN_132[39:0];
    _T_351 <= _GEN_133[39:0];
    _T_354 <= _GEN_134[39:0];
    _T_357 <= _GEN_135[39:0];
    _T_360 <= _GEN_136[39:0];
    _T_363 <= _GEN_137[39:0];
    _T_366 <= _GEN_138[39:0];
    _T_369 <= _GEN_139[39:0];
    _T_372 <= _GEN_140[39:0];
    _T_375 <= _GEN_141[39:0];
    if (wen) begin
      if (_T_601) begin
        reg_dpc <= wdata;
      end
    end
    if (wen) begin
      if (_T_603) begin
        reg_dscratch <= wdata;
      end
    end
    if (reset) begin
      reg_dcsr_ebreakm <= 1'h0;
    end else begin
      if (wen) begin
        if (_T_599) begin
          reg_dcsr_ebreakm <= _T_1344;
        end
      end
    end
    if (reset) begin
      reg_dcsr_step <= 1'h0;
    end else begin
      if (wen) begin
        if (_T_599) begin
          reg_dcsr_step <= _T_1334;
        end
      end
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1054) begin
          $fwrite(32'h80000002,"Assertion failed: these conditions must be mutually exclusive\n    at CSR.scala:287 assert(PopCount(insn_ret :: io.exception :: Nil) <= 1, \"these conditions must be mutually exclusive\")\n"); // @[CSR.scala 287:9:@2072.6]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_1054) begin
          $fatal; // @[CSR.scala 287:9:@2073.6]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
module DatPath( // @[:@2859.2]
  input         clock, // @[:@2860.4]
  input         reset, // @[:@2861.4]
  input  [4:0]  io_ddpath_addr, // @[:@2862.4]
  input  [31:0] io_ddpath_wdata, // @[:@2862.4]
  output [31:0] io_ddpath_rdata, // @[:@2862.4]
  output [31:0] io_imem_req_bits_pc, // @[:@2862.4]
  output        io_imem_resp_ready, // @[:@2862.4]
  input         io_imem_resp_valid, // @[:@2862.4]
  input  [31:0] io_imem_resp_bits_pc, // @[:@2862.4]
  input  [31:0] io_imem_resp_bits_inst, // @[:@2862.4]
  input  [31:0] io_imem_debug_if_pc, // @[:@2862.4]
  input  [31:0] io_imem_debug_if_inst, // @[:@2862.4]
  output [31:0] io_dmem_req_bits_addr, // @[:@2862.4]
  output [31:0] io_dmem_req_bits_data, // @[:@2862.4]
  output        io_dmem_req_bits_fcn, // @[:@2862.4]
  output [2:0]  io_dmem_req_bits_typ, // @[:@2862.4]
  input  [31:0] io_dmem_resp_bits_data, // @[:@2862.4]
  input         io_ctl_exe_kill, // @[:@2862.4]
  input  [2:0]  io_ctl_pc_sel, // @[:@2862.4]
  input         io_ctl_brjmp_sel, // @[:@2862.4]
  input  [1:0]  io_ctl_op1_sel, // @[:@2862.4]
  input  [1:0]  io_ctl_op2_sel, // @[:@2862.4]
  input  [3:0]  io_ctl_alu_fun, // @[:@2862.4]
  input  [1:0]  io_ctl_wb_sel, // @[:@2862.4]
  input         io_ctl_rf_wen, // @[:@2862.4]
  input         io_ctl_bypassable, // @[:@2862.4]
  input  [2:0]  io_ctl_csr_cmd, // @[:@2862.4]
  input         io_ctl_dmem_fcn, // @[:@2862.4]
  input  [2:0]  io_ctl_dmem_typ, // @[:@2862.4]
  input         io_ctl_exception, // @[:@2862.4]
  output        io_dat_br_eq, // @[:@2862.4]
  output        io_dat_br_lt, // @[:@2862.4]
  output        io_dat_br_ltu, // @[:@2862.4]
  output        io_dat_csr_eret // @[:@2862.4]
);
  reg [31:0] regfile [0:31]; // @[Dpath.scala 105:20:@2937.4]
  reg [31:0] _RAND_0;
  wire [31:0] regfile__T_230_data; // @[Dpath.scala 105:20:@2937.4]
  wire [4:0] regfile__T_230_addr; // @[Dpath.scala 105:20:@2937.4]
  wire [31:0] regfile__T_238_data; // @[Dpath.scala 105:20:@2937.4]
  wire [4:0] regfile__T_238_addr; // @[Dpath.scala 105:20:@2937.4]
  wire [31:0] regfile__T_242_data; // @[Dpath.scala 105:20:@2937.4]
  wire [4:0] regfile__T_242_addr; // @[Dpath.scala 105:20:@2937.4]
  wire [31:0] regfile__T_231_data; // @[Dpath.scala 105:20:@2937.4]
  wire [4:0] regfile__T_231_addr; // @[Dpath.scala 105:20:@2937.4]
  wire  regfile__T_231_mask; // @[Dpath.scala 105:20:@2937.4]
  wire  regfile__T_231_en; // @[Dpath.scala 105:20:@2937.4]
  wire [31:0] regfile__T_235_data; // @[Dpath.scala 105:20:@2937.4]
  wire [4:0] regfile__T_235_addr; // @[Dpath.scala 105:20:@2937.4]
  wire  regfile__T_235_mask; // @[Dpath.scala 105:20:@2937.4]
  wire  regfile__T_235_en; // @[Dpath.scala 105:20:@2937.4]
  wire [3:0] alu_io_fn; // @[Dpath.scala 159:19:@3018.4]
  wire [31:0] alu_io_in2; // @[Dpath.scala 159:19:@3018.4]
  wire [31:0] alu_io_in1; // @[Dpath.scala 159:19:@3018.4]
  wire [31:0] alu_io_out; // @[Dpath.scala 159:19:@3018.4]
  wire [31:0] alu_io_adder_out; // @[Dpath.scala 159:19:@3018.4]
  wire  csr_clock; // @[Dpath.scala 207:19:@3073.4]
  wire  csr_reset; // @[Dpath.scala 207:19:@3073.4]
  wire [2:0] csr_io_rw_cmd; // @[Dpath.scala 207:19:@3073.4]
  wire [31:0] csr_io_rw_rdata; // @[Dpath.scala 207:19:@3073.4]
  wire [31:0] csr_io_rw_wdata; // @[Dpath.scala 207:19:@3073.4]
  wire  csr_io_eret; // @[Dpath.scala 207:19:@3073.4]
  wire [11:0] csr_io_decode_csr; // @[Dpath.scala 207:19:@3073.4]
  wire  csr_io_status_debug; // @[Dpath.scala 207:19:@3073.4]
  wire [1:0] csr_io_status_prv; // @[Dpath.scala 207:19:@3073.4]
  wire  csr_io_status_sd; // @[Dpath.scala 207:19:@3073.4]
  wire [7:0] csr_io_status_zero1; // @[Dpath.scala 207:19:@3073.4]
  wire  csr_io_status_tsr; // @[Dpath.scala 207:19:@3073.4]
  wire  csr_io_status_tw; // @[Dpath.scala 207:19:@3073.4]
  wire  csr_io_status_tvm; // @[Dpath.scala 207:19:@3073.4]
  wire  csr_io_status_mxr; // @[Dpath.scala 207:19:@3073.4]
  wire  csr_io_status_sum; // @[Dpath.scala 207:19:@3073.4]
  wire  csr_io_status_mprv; // @[Dpath.scala 207:19:@3073.4]
  wire [1:0] csr_io_status_xs; // @[Dpath.scala 207:19:@3073.4]
  wire [1:0] csr_io_status_fs; // @[Dpath.scala 207:19:@3073.4]
  wire [1:0] csr_io_status_mpp; // @[Dpath.scala 207:19:@3073.4]
  wire [1:0] csr_io_status_hpp; // @[Dpath.scala 207:19:@3073.4]
  wire  csr_io_status_spp; // @[Dpath.scala 207:19:@3073.4]
  wire  csr_io_status_mpie; // @[Dpath.scala 207:19:@3073.4]
  wire  csr_io_status_hpie; // @[Dpath.scala 207:19:@3073.4]
  wire  csr_io_status_spie; // @[Dpath.scala 207:19:@3073.4]
  wire  csr_io_status_upie; // @[Dpath.scala 207:19:@3073.4]
  wire  csr_io_status_mie; // @[Dpath.scala 207:19:@3073.4]
  wire  csr_io_status_hie; // @[Dpath.scala 207:19:@3073.4]
  wire  csr_io_status_sie; // @[Dpath.scala 207:19:@3073.4]
  wire  csr_io_status_uie; // @[Dpath.scala 207:19:@3073.4]
  wire [31:0] csr_io_evec; // @[Dpath.scala 207:19:@3073.4]
  wire  csr_io_exception; // @[Dpath.scala 207:19:@3073.4]
  wire  csr_io_retire; // @[Dpath.scala 207:19:@3073.4]
  wire [31:0] csr_io_pc; // @[Dpath.scala 207:19:@3073.4]
  wire [31:0] csr_io_time; // @[Dpath.scala 207:19:@3073.4]
  reg  wb_reg_valid; // @[Dpath.scala 47:29:@2903.4]
  reg [31:0] _RAND_1;
  reg [1:0] wb_reg_ctrl_wb_sel; // @[Dpath.scala 48:24:@2904.4]
  reg [31:0] _RAND_2;
  reg  wb_reg_ctrl_rf_wen; // @[Dpath.scala 48:24:@2904.4]
  reg [31:0] _RAND_3;
  reg  wb_reg_ctrl_bypassable; // @[Dpath.scala 48:24:@2904.4]
  reg [31:0] _RAND_4;
  reg [2:0] wb_reg_ctrl_csr_cmd; // @[Dpath.scala 48:24:@2904.4]
  reg [31:0] _RAND_5;
  reg [31:0] wb_reg_alu; // @[Dpath.scala 49:23:@2905.4]
  reg [31:0] _RAND_6;
  reg [11:0] wb_reg_csr_addr; // @[Dpath.scala 50:28:@2906.4]
  reg [31:0] _RAND_7;
  reg [4:0] wb_reg_wbaddr; // @[Dpath.scala 51:26:@2907.4]
  reg [31:0] _RAND_8;
  wire [4:0] exe_rs1_addr; // @[Dpath.scala 78:30:@2919.4]
  wire  _T_211; // @[Dpath.scala 99:40:@2923.4]
  wire  _T_213; // @[Dpath.scala 99:75:@2924.4]
  wire  _T_214; // @[Dpath.scala 99:58:@2925.4]
  wire  _T_215; // @[Dpath.scala 99:84:@2926.4]
  wire  _T_217; // @[Dpath.scala 99:109:@2927.4]
  wire  _T_218; // @[Dpath.scala 99:106:@2928.4]
  wire [4:0] exe_rs2_addr; // @[Dpath.scala 79:30:@2920.4]
  wire  _T_219; // @[Dpath.scala 100:23:@2929.4]
  wire  _T_221; // @[Dpath.scala 100:58:@2930.4]
  wire  _T_222; // @[Dpath.scala 100:41:@2931.4]
  wire  _T_223; // @[Dpath.scala 100:67:@2932.4]
  wire  _T_226; // @[Dpath.scala 100:89:@2934.4]
  wire  wb_hazard_stall; // @[Dpath.scala 99:134:@2935.4]
  wire  _T_206; // @[Dpath.scala 61:25:@2912.4]
  wire  _T_207; // @[Dpath.scala 64:35:@2914.4]
  wire  _T_208; // @[Dpath.scala 65:23:@2915.4]
  wire [31:0] exe_jump_reg_target; // @[Dpath.scala 58:33:@2910.4 Dpath.scala 170:23:@3028.4]
  wire  _T_258; // @[Dpath.scala 127:27:@2970.4]
  wire [7:0] _T_259; // @[Dpath.scala 127:41:@2971.4]
  wire  _T_260; // @[Dpath.scala 127:59:@2972.4]
  wire [9:0] _T_261; // @[Dpath.scala 127:73:@2973.4]
  wire [19:0] imm_j; // @[Cat.scala 30:58:@2976.4]
  wire  _T_281; // @[Dpath.scala 134:38:@2991.4]
  wire [10:0] _T_285; // @[Bitwise.scala 72:12:@2993.4]
  wire [31:0] imm_j_sext; // @[Cat.scala 30:58:@2995.4]
  wire  _T_247; // @[Dpath.scala 125:41:@2961.4]
  wire [5:0] _T_248; // @[Dpath.scala 125:54:@2962.4]
  wire [3:0] _T_249; // @[Dpath.scala 125:72:@2963.4]
  wire [11:0] imm_b; // @[Cat.scala 30:58:@2966.4]
  wire  _T_274; // @[Dpath.scala 133:38:@2986.4]
  wire [18:0] _T_278; // @[Bitwise.scala 72:12:@2988.4]
  wire [31:0] imm_b_sext; // @[Cat.scala 30:58:@2990.4]
  wire [31:0] imm_brjmp; // @[Dpath.scala 168:22:@3024.4]
  wire [32:0] _T_308; // @[Dpath.scala 169:30:@3025.4]
  wire [31:0] exe_brjmp_target; // @[Dpath.scala 169:30:@3026.4]
  wire [31:0] _T_209; // @[Dpath.scala 65:8:@2916.4]
  wire [31:0] exception_target; // @[Dpath.scala 59:30:@2911.4 Dpath.scala 217:20:@3186.4]
  wire [4:0] exe_wbaddr; // @[Dpath.scala 80:28:@2921.4]
  wire  _T_233; // @[Dpath.scala 114:45:@2944.4]
  wire  _T_393; // @[Dpath.scala 229:25:@3248.4]
  wire  _T_394; // @[Dpath.scala 230:25:@3249.4]
  wire  _T_395; // @[Dpath.scala 231:25:@3250.4]
  wire  _T_396; // @[Dpath.scala 232:25:@3251.4]
  wire [31:0] _T_397; // @[Mux.scala 61:16:@3252.4]
  wire [31:0] _T_398; // @[Mux.scala 61:16:@3253.4]
  wire [31:0] _T_399; // @[Mux.scala 61:16:@3254.4]
  wire [31:0] wb_wbdata; // @[Mux.scala 61:16:@3255.4]
  wire [31:0] rf_rs1_data; // @[Dpath.scala 118:24:@2952.4]
  wire [31:0] rf_rs2_data; // @[Dpath.scala 119:24:@2955.4]
  wire [11:0] imm_i; // @[Dpath.scala 123:23:@2956.4]
  wire [6:0] _T_244; // @[Dpath.scala 124:27:@2957.4]
  wire [11:0] imm_s; // @[Cat.scala 30:58:@2959.4]
  wire [19:0] _T_252; // @[Dpath.scala 126:27:@2967.4]
  wire [31:0] imm_u; // @[Cat.scala 30:58:@2969.4]
  wire  _T_264; // @[Dpath.scala 131:38:@2978.4]
  wire [19:0] _T_268; // @[Bitwise.scala 72:12:@2980.4]
  wire [31:0] imm_i_sext; // @[Cat.scala 30:58:@2981.4]
  wire  _T_269; // @[Dpath.scala 132:38:@2982.4]
  wire [19:0] _T_273; // @[Bitwise.scala 72:12:@2984.4]
  wire [31:0] imm_s_sext; // @[Cat.scala 30:58:@2985.4]
  wire  _T_293; // @[Dpath.scala 140:87:@3000.4]
  wire [31:0] exe_rs1_data; // @[Mux.scala 61:16:@3001.4]
  wire  _T_299; // @[Dpath.scala 143:87:@3006.4]
  wire [31:0] exe_rs2_data; // @[Mux.scala 61:16:@3007.4]
  wire  _T_300; // @[Dpath.scala 148:40:@3008.4]
  wire  _T_301; // @[Dpath.scala 149:24:@3009.4]
  wire [31:0] _T_302; // @[Dpath.scala 149:8:@3010.4]
  wire [31:0] exe_alu_op1; // @[Dpath.scala 148:24:@3011.4]
  wire  _T_303; // @[Dpath.scala 152:40:@3012.4]
  wire  _T_304; // @[Dpath.scala 153:24:@3013.4]
  wire  _T_305; // @[Dpath.scala 154:26:@3014.4]
  wire [31:0] _T_306; // @[Dpath.scala 154:10:@3015.4]
  wire [31:0] _T_307; // @[Dpath.scala 153:8:@3016.4]
  wire [31:0] exe_alu_op2; // @[Dpath.scala 152:24:@3017.4]
  wire [31:0] _T_311; // @[Dpath.scala 175:39:@3031.4]
  wire [31:0] _T_312; // @[Dpath.scala 175:63:@3032.4]
  wire  _T_317; // @[Dpath.scala 183:45:@3039.4]
  wire  _T_319; // @[Dpath.scala 191:24:@3059.4]
  wire  _T_326; // @[Dpath.scala 204:29:@3071.4]
  reg  _T_328; // @[Dpath.scala 215:30:@3179.4]
  reg [31:0] _RAND_9;
  wire [32:0] _T_330; // @[Dpath.scala 216:23:@3182.4]
  wire [32:0] _T_331; // @[Dpath.scala 216:23:@3183.4]
  reg [31:0] irt_reg; // @[Dpath.scala 238:24:@3257.4]
  reg [31:0] _RAND_10;
  wire [32:0] _T_404; // @[Dpath.scala 240:24:@3259.6]
  wire [31:0] _T_405; // @[Dpath.scala 240:24:@3260.6]
  wire [31:0] _GEN_14; // @[Dpath.scala 239:22:@3258.4]
  wire  _T_415; // @[Dpath.scala 245:74:@3271.4]
  wire  _T_416; // @[Dpath.scala 245:71:@3272.4]
  reg [31:0] debug_wb_inst; // @[Dpath.scala 245:30:@3274.4]
  reg [31:0] _RAND_11;
  wire [31:0] _T_419; // @[Dpath.scala 247:18:@3276.4]
  wire [7:0] _T_422; // @[Dpath.scala 250:10:@3277.4]
  wire [7:0] _T_425; // @[Dpath.scala 253:10:@3278.4]
  wire [11:0] _T_426; // @[Dpath.scala 255:14:@3279.4]
  wire [7:0] _T_429; // @[Dpath.scala 256:10:@3280.4]
  wire  _T_431; // @[Dpath.scala 257:25:@3281.4]
  wire  _T_434; // @[Dpath.scala 258:25:@3282.4]
  wire  _T_443; // @[Dpath.scala 261:31:@3285.4]
  wire [7:0] _T_446; // @[Dpath.scala 261:16:@3286.4]
  wire [7:0] _T_447; // @[Dpath.scala 260:14:@3287.4]
  wire [7:0] _T_448; // @[Dpath.scala 259:12:@3288.4]
  wire [7:0] _T_449; // @[Dpath.scala 258:10:@3289.4]
  wire [7:0] _T_450; // @[Dpath.scala 257:10:@3290.4]
  reg  _T_454; // @[Dpath.scala 264:18:@3293.4]
  reg [31:0] _RAND_12;
  reg [31:0] _T_458; // @[Dpath.scala 264:49:@3296.4]
  reg [31:0] _RAND_13;
  wire [31:0] _T_459; // @[Dpath.scala 264:10:@3298.4]
  wire [6:0] _T_460; // @[Dpath.scala 265:28:@3299.4]
  wire [31:0] _T_461; // @[Dpath.scala 266:10:@3300.4]
  wire [6:0] _T_462; // @[Dpath.scala 266:39:@3301.4]
  wire [6:0] _T_463; // @[Dpath.scala 267:20:@3302.4]
  wire  _T_466; // @[Dpath.scala 246:9:@3304.4]
  ALU alu ( // @[Dpath.scala 159:19:@3018.4]
    .io_fn(alu_io_fn),
    .io_in2(alu_io_in2),
    .io_in1(alu_io_in1),
    .io_out(alu_io_out),
    .io_adder_out(alu_io_adder_out)
  );
  CSRFile csr ( // @[Dpath.scala 207:19:@3073.4]
    .clock(csr_clock),
    .reset(csr_reset),
    .io_rw_cmd(csr_io_rw_cmd),
    .io_rw_rdata(csr_io_rw_rdata),
    .io_rw_wdata(csr_io_rw_wdata),
    .io_eret(csr_io_eret),
    .io_decode_csr(csr_io_decode_csr),
    .io_status_debug(csr_io_status_debug),
    .io_status_prv(csr_io_status_prv),
    .io_status_sd(csr_io_status_sd),
    .io_status_zero1(csr_io_status_zero1),
    .io_status_tsr(csr_io_status_tsr),
    .io_status_tw(csr_io_status_tw),
    .io_status_tvm(csr_io_status_tvm),
    .io_status_mxr(csr_io_status_mxr),
    .io_status_sum(csr_io_status_sum),
    .io_status_mprv(csr_io_status_mprv),
    .io_status_xs(csr_io_status_xs),
    .io_status_fs(csr_io_status_fs),
    .io_status_mpp(csr_io_status_mpp),
    .io_status_hpp(csr_io_status_hpp),
    .io_status_spp(csr_io_status_spp),
    .io_status_mpie(csr_io_status_mpie),
    .io_status_hpie(csr_io_status_hpie),
    .io_status_spie(csr_io_status_spie),
    .io_status_upie(csr_io_status_upie),
    .io_status_mie(csr_io_status_mie),
    .io_status_hie(csr_io_status_hie),
    .io_status_sie(csr_io_status_sie),
    .io_status_uie(csr_io_status_uie),
    .io_evec(csr_io_evec),
    .io_exception(csr_io_exception),
    .io_retire(csr_io_retire),
    .io_pc(csr_io_pc),
    .io_time(csr_io_time)
  );
  assign regfile__T_230_addr = io_ddpath_addr;
  assign regfile__T_230_data = regfile[regfile__T_230_addr]; // @[Dpath.scala 105:20:@2937.4]
  assign regfile__T_238_addr = io_imem_resp_bits_inst[19:15];
  assign regfile__T_238_data = regfile[regfile__T_238_addr]; // @[Dpath.scala 105:20:@2937.4]
  assign regfile__T_242_addr = io_imem_resp_bits_inst[24:20];
  assign regfile__T_242_data = regfile[regfile__T_242_addr]; // @[Dpath.scala 105:20:@2937.4]
  assign regfile__T_231_data = io_ddpath_wdata;
  assign regfile__T_231_addr = io_ddpath_addr;
  assign regfile__T_231_mask = 1'h1;
  assign regfile__T_231_en = 1'h1;
  assign regfile__T_235_data = _T_393 ? wb_reg_alu : _T_399;
  assign regfile__T_235_addr = wb_reg_wbaddr;
  assign regfile__T_235_mask = 1'h1;
  assign regfile__T_235_en = wb_reg_ctrl_rf_wen & _T_233;
  assign exe_rs1_addr = io_imem_resp_bits_inst[19:15]; // @[Dpath.scala 78:30:@2919.4]
  assign _T_211 = wb_reg_wbaddr == exe_rs1_addr; // @[Dpath.scala 99:40:@2923.4]
  assign _T_213 = exe_rs1_addr != 5'h0; // @[Dpath.scala 99:75:@2924.4]
  assign _T_214 = _T_211 & _T_213; // @[Dpath.scala 99:58:@2925.4]
  assign _T_215 = _T_214 & wb_reg_ctrl_rf_wen; // @[Dpath.scala 99:84:@2926.4]
  assign _T_217 = wb_reg_ctrl_bypassable == 1'h0; // @[Dpath.scala 99:109:@2927.4]
  assign _T_218 = _T_215 & _T_217; // @[Dpath.scala 99:106:@2928.4]
  assign exe_rs2_addr = io_imem_resp_bits_inst[24:20]; // @[Dpath.scala 79:30:@2920.4]
  assign _T_219 = wb_reg_wbaddr == exe_rs2_addr; // @[Dpath.scala 100:23:@2929.4]
  assign _T_221 = exe_rs2_addr != 5'h0; // @[Dpath.scala 100:58:@2930.4]
  assign _T_222 = _T_219 & _T_221; // @[Dpath.scala 100:41:@2931.4]
  assign _T_223 = _T_222 & wb_reg_ctrl_rf_wen; // @[Dpath.scala 100:67:@2932.4]
  assign _T_226 = _T_223 & _T_217; // @[Dpath.scala 100:89:@2934.4]
  assign wb_hazard_stall = _T_218 | _T_226; // @[Dpath.scala 99:134:@2935.4]
  assign _T_206 = wb_hazard_stall == 1'h0; // @[Dpath.scala 61:25:@2912.4]
  assign _T_207 = io_ctl_pc_sel == 3'h4; // @[Dpath.scala 64:35:@2914.4]
  assign _T_208 = io_ctl_pc_sel == 3'h3; // @[Dpath.scala 65:23:@2915.4]
  assign exe_jump_reg_target = alu_io_adder_out; // @[Dpath.scala 58:33:@2910.4 Dpath.scala 170:23:@3028.4]
  assign _T_258 = io_imem_resp_bits_inst[31]; // @[Dpath.scala 127:27:@2970.4]
  assign _T_259 = io_imem_resp_bits_inst[19:12]; // @[Dpath.scala 127:41:@2971.4]
  assign _T_260 = io_imem_resp_bits_inst[20]; // @[Dpath.scala 127:59:@2972.4]
  assign _T_261 = io_imem_resp_bits_inst[30:21]; // @[Dpath.scala 127:73:@2973.4]
  assign imm_j = {_T_258,_T_259,_T_260,_T_261}; // @[Cat.scala 30:58:@2976.4]
  assign _T_281 = imm_j[19]; // @[Dpath.scala 134:38:@2991.4]
  assign _T_285 = _T_281 ? 11'h7ff : 11'h0; // @[Bitwise.scala 72:12:@2993.4]
  assign imm_j_sext = {_T_285,_T_258,_T_259,_T_260,_T_261,1'h0}; // @[Cat.scala 30:58:@2995.4]
  assign _T_247 = io_imem_resp_bits_inst[7]; // @[Dpath.scala 125:41:@2961.4]
  assign _T_248 = io_imem_resp_bits_inst[30:25]; // @[Dpath.scala 125:54:@2962.4]
  assign _T_249 = io_imem_resp_bits_inst[11:8]; // @[Dpath.scala 125:72:@2963.4]
  assign imm_b = {_T_258,_T_247,_T_248,_T_249}; // @[Cat.scala 30:58:@2966.4]
  assign _T_274 = imm_b[11]; // @[Dpath.scala 133:38:@2986.4]
  assign _T_278 = _T_274 ? 19'h7ffff : 19'h0; // @[Bitwise.scala 72:12:@2988.4]
  assign imm_b_sext = {_T_278,_T_258,_T_247,_T_248,_T_249,1'h0}; // @[Cat.scala 30:58:@2990.4]
  assign imm_brjmp = io_ctl_brjmp_sel ? imm_j_sext : imm_b_sext; // @[Dpath.scala 168:22:@3024.4]
  assign _T_308 = io_imem_resp_bits_pc + imm_brjmp; // @[Dpath.scala 169:30:@3025.4]
  assign exe_brjmp_target = io_imem_resp_bits_pc + imm_brjmp; // @[Dpath.scala 169:30:@3026.4]
  assign _T_209 = _T_208 ? exe_jump_reg_target : exe_brjmp_target; // @[Dpath.scala 65:8:@2916.4]
  assign exception_target = csr_io_evec; // @[Dpath.scala 59:30:@2911.4 Dpath.scala 217:20:@3186.4]
  assign exe_wbaddr = io_imem_resp_bits_inst[11:7]; // @[Dpath.scala 80:28:@2921.4]
  assign _T_233 = wb_reg_wbaddr != 5'h0; // @[Dpath.scala 114:45:@2944.4]
  assign _T_393 = wb_reg_ctrl_wb_sel == 2'h0; // @[Dpath.scala 229:25:@3248.4]
  assign _T_394 = wb_reg_ctrl_wb_sel == 2'h1; // @[Dpath.scala 230:25:@3249.4]
  assign _T_395 = wb_reg_ctrl_wb_sel == 2'h2; // @[Dpath.scala 231:25:@3250.4]
  assign _T_396 = wb_reg_ctrl_wb_sel == 2'h3; // @[Dpath.scala 232:25:@3251.4]
  assign _T_397 = _T_396 ? csr_io_rw_rdata : wb_reg_alu; // @[Mux.scala 61:16:@3252.4]
  assign _T_398 = _T_395 ? io_imem_resp_bits_pc : _T_397; // @[Mux.scala 61:16:@3253.4]
  assign _T_399 = _T_394 ? io_dmem_resp_bits_data : _T_398; // @[Mux.scala 61:16:@3254.4]
  assign wb_wbdata = _T_393 ? wb_reg_alu : _T_399; // @[Mux.scala 61:16:@3255.4]
  assign rf_rs1_data = _T_213 ? regfile__T_238_data : 32'h0; // @[Dpath.scala 118:24:@2952.4]
  assign rf_rs2_data = _T_221 ? regfile__T_242_data : 32'h0; // @[Dpath.scala 119:24:@2955.4]
  assign imm_i = io_imem_resp_bits_inst[31:20]; // @[Dpath.scala 123:23:@2956.4]
  assign _T_244 = io_imem_resp_bits_inst[31:25]; // @[Dpath.scala 124:27:@2957.4]
  assign imm_s = {_T_244,exe_wbaddr}; // @[Cat.scala 30:58:@2959.4]
  assign _T_252 = io_imem_resp_bits_inst[31:12]; // @[Dpath.scala 126:27:@2967.4]
  assign imm_u = {_T_252,12'h0}; // @[Cat.scala 30:58:@2969.4]
  assign _T_264 = imm_i[11]; // @[Dpath.scala 131:38:@2978.4]
  assign _T_268 = _T_264 ? 20'hfffff : 20'h0; // @[Bitwise.scala 72:12:@2980.4]
  assign imm_i_sext = {_T_268,imm_i}; // @[Cat.scala 30:58:@2981.4]
  assign _T_269 = imm_s[11]; // @[Dpath.scala 132:38:@2982.4]
  assign _T_273 = _T_269 ? 20'hfffff : 20'h0; // @[Bitwise.scala 72:12:@2984.4]
  assign imm_s_sext = {_T_273,_T_244,exe_wbaddr}; // @[Cat.scala 30:58:@2985.4]
  assign _T_293 = _T_215 & wb_reg_ctrl_bypassable; // @[Dpath.scala 140:87:@3000.4]
  assign exe_rs1_data = _T_293 ? wb_reg_alu : rf_rs1_data; // @[Mux.scala 61:16:@3001.4]
  assign _T_299 = _T_223 & wb_reg_ctrl_bypassable; // @[Dpath.scala 143:87:@3006.4]
  assign exe_rs2_data = _T_299 ? wb_reg_alu : rf_rs2_data; // @[Mux.scala 61:16:@3007.4]
  assign _T_300 = io_ctl_op1_sel == 2'h2; // @[Dpath.scala 148:40:@3008.4]
  assign _T_301 = io_ctl_op1_sel == 2'h1; // @[Dpath.scala 149:24:@3009.4]
  assign _T_302 = _T_301 ? imm_u : exe_rs1_data; // @[Dpath.scala 149:8:@3010.4]
  assign exe_alu_op1 = _T_300 ? {{27'd0}, exe_rs1_addr} : _T_302; // @[Dpath.scala 148:24:@3011.4]
  assign _T_303 = io_ctl_op2_sel == 2'h1; // @[Dpath.scala 152:40:@3012.4]
  assign _T_304 = io_ctl_op2_sel == 2'h3; // @[Dpath.scala 153:24:@3013.4]
  assign _T_305 = io_ctl_op2_sel == 2'h2; // @[Dpath.scala 154:26:@3014.4]
  assign _T_306 = _T_305 ? imm_s_sext : exe_rs2_data; // @[Dpath.scala 154:10:@3015.4]
  assign _T_307 = _T_304 ? io_imem_resp_bits_pc : _T_306; // @[Dpath.scala 153:8:@3016.4]
  assign exe_alu_op2 = _T_303 ? imm_i_sext : _T_307; // @[Dpath.scala 152:24:@3017.4]
  assign _T_311 = $signed(exe_rs1_data); // @[Dpath.scala 175:39:@3031.4]
  assign _T_312 = $signed(exe_rs2_data); // @[Dpath.scala 175:63:@3032.4]
  assign _T_317 = io_ctl_dmem_fcn & _T_206; // @[Dpath.scala 183:45:@3039.4]
  assign _T_319 = wb_hazard_stall | io_ctl_exe_kill; // @[Dpath.scala 191:24:@3059.4]
  assign _T_326 = io_imem_resp_valid & _T_206; // @[Dpath.scala 204:29:@3071.4]
  assign _T_330 = io_imem_resp_bits_pc - 32'h4; // @[Dpath.scala 216:23:@3182.4]
  assign _T_331 = $unsigned(_T_330); // @[Dpath.scala 216:23:@3183.4]
  assign _T_404 = irt_reg + 32'h1; // @[Dpath.scala 240:24:@3259.6]
  assign _T_405 = irt_reg + 32'h1; // @[Dpath.scala 240:24:@3260.6]
  assign _GEN_14 = wb_reg_valid ? _T_405 : irt_reg; // @[Dpath.scala 239:22:@3258.4]
  assign _T_415 = io_imem_resp_valid == 1'h0; // @[Dpath.scala 245:74:@3271.4]
  assign _T_416 = _T_319 | _T_415; // @[Dpath.scala 245:71:@3272.4]
  assign _T_419 = csr_io_time; // @[Dpath.scala 247:18:@3276.4]
  assign _T_422 = wb_reg_ctrl_rf_wen ? 8'h57 : 8'h5f; // @[Dpath.scala 250:10:@3277.4]
  assign _T_425 = io_ctl_exception ? 8'h45 : 8'h5f; // @[Dpath.scala 253:10:@3278.4]
  assign _T_426 = irt_reg[11:0]; // @[Dpath.scala 255:14:@3279.4]
  assign _T_429 = wb_hazard_stall ? 8'h48 : 8'h20; // @[Dpath.scala 256:10:@3280.4]
  assign _T_431 = io_ctl_pc_sel == 3'h1; // @[Dpath.scala 257:25:@3281.4]
  assign _T_434 = io_ctl_pc_sel == 3'h2; // @[Dpath.scala 258:25:@3282.4]
  assign _T_443 = io_ctl_pc_sel == 3'h0; // @[Dpath.scala 261:31:@3285.4]
  assign _T_446 = _T_443 ? 8'h20 : 8'h3f; // @[Dpath.scala 261:16:@3286.4]
  assign _T_447 = _T_207 ? 8'h58 : _T_446; // @[Dpath.scala 260:14:@3287.4]
  assign _T_448 = _T_208 ? 8'h52 : _T_447; // @[Dpath.scala 259:12:@3288.4]
  assign _T_449 = _T_434 ? 8'h4a : _T_448; // @[Dpath.scala 258:10:@3289.4]
  assign _T_450 = _T_431 ? 8'h42 : _T_449; // @[Dpath.scala 257:10:@3290.4]
  assign _T_459 = _T_454 ? 32'h0 : _T_458; // @[Dpath.scala 264:10:@3298.4]
  assign _T_460 = io_imem_debug_if_inst[6:0]; // @[Dpath.scala 265:28:@3299.4]
  assign _T_461 = io_imem_resp_valid ? io_imem_resp_bits_inst : 32'h4033; // @[Dpath.scala 266:10:@3300.4]
  assign _T_462 = _T_461[6:0]; // @[Dpath.scala 266:39:@3301.4]
  assign _T_463 = debug_wb_inst[6:0]; // @[Dpath.scala 267:20:@3302.4]
  assign _T_466 = reset == 1'h0; // @[Dpath.scala 246:9:@3304.4]
  assign io_ddpath_rdata = regfile__T_230_data; // @[Dpath.scala 108:19:@2939.4]
  assign io_imem_req_bits_pc = _T_207 ? exception_target : _T_209; // @[Dpath.scala 68:23:@2918.4]
  assign io_imem_resp_ready = wb_hazard_stall == 1'h0; // @[Dpath.scala 61:22:@2913.4]
  assign io_dmem_req_bits_addr = alu_io_out; // @[Dpath.scala 185:25:@3043.4]
  assign io_dmem_req_bits_data = _T_299 ? wb_reg_alu : rf_rs2_data; // @[Dpath.scala 186:25:@3044.4]
  assign io_dmem_req_bits_fcn = _T_317 & io_imem_resp_valid; // @[Dpath.scala 183:26:@3041.4]
  assign io_dmem_req_bits_typ = io_ctl_dmem_typ; // @[Dpath.scala 184:24:@3042.4]
  assign io_dat_br_eq = exe_rs1_data == exe_rs2_data; // @[Dpath.scala 174:16:@3030.4]
  assign io_dat_br_lt = $signed(_T_311) < $signed(_T_312); // @[Dpath.scala 175:16:@3034.4]
  assign io_dat_br_ltu = exe_rs1_data < exe_rs2_data; // @[Dpath.scala 176:17:@3036.4]
  assign io_dat_csr_eret = csr_io_eret; // @[Dpath.scala 218:19:@3187.4]
  assign alu_io_fn = io_ctl_alu_fun; // @[Dpath.scala 163:13:@3023.4]
  assign alu_io_in2 = _T_303 ? imm_i_sext : _T_307; // @[Dpath.scala 162:14:@3022.4]
  assign alu_io_in1 = _T_300 ? {{27'd0}, exe_rs1_addr} : _T_302; // @[Dpath.scala 161:14:@3021.4]
  assign csr_clock = clock; // @[:@3074.4]
  assign csr_reset = reset; // @[:@3075.4]
  assign csr_io_rw_cmd = wb_reg_ctrl_csr_cmd; // @[Dpath.scala 211:17:@3177.4]
  assign csr_io_rw_wdata = wb_reg_alu; // @[Dpath.scala 210:19:@3176.4]
  assign csr_io_decode_csr = wb_reg_csr_addr; // @[Dpath.scala 209:21:@3175.4]
  assign csr_io_exception = _T_328; // @[Dpath.scala 215:20:@3181.4]
  assign csr_io_retire = wb_reg_valid; // @[Dpath.scala 214:17:@3178.4]
  assign csr_io_pc = _T_331[31:0]; // @[Dpath.scala 216:13:@3185.4]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  _RAND_0 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 32; initvar = initvar+1)
    regfile[initvar] = _RAND_0[31:0];
  `endif // RANDOMIZE_MEM_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  wb_reg_valid = _RAND_1[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  wb_reg_ctrl_wb_sel = _RAND_2[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  wb_reg_ctrl_rf_wen = _RAND_3[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  wb_reg_ctrl_bypassable = _RAND_4[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  wb_reg_ctrl_csr_cmd = _RAND_5[2:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  wb_reg_alu = _RAND_6[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  wb_reg_csr_addr = _RAND_7[11:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  wb_reg_wbaddr = _RAND_8[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_9 = {1{`RANDOM}};
  _T_328 = _RAND_9[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_10 = {1{`RANDOM}};
  irt_reg = _RAND_10[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_11 = {1{`RANDOM}};
  debug_wb_inst = _RAND_11[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_12 = {1{`RANDOM}};
  _T_454 = _RAND_12[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_13 = {1{`RANDOM}};
  _T_458 = _RAND_13[31:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if(regfile__T_231_en & regfile__T_231_mask) begin
      regfile[regfile__T_231_addr] <= regfile__T_231_data; // @[Dpath.scala 105:20:@2937.4]
    end
    if(regfile__T_235_en & regfile__T_235_mask) begin
      regfile[regfile__T_235_addr] <= regfile__T_235_data; // @[Dpath.scala 105:20:@2937.4]
    end
    if (reset) begin
      wb_reg_valid <= 1'h0;
    end else begin
      wb_reg_valid <= _T_326;
    end
    wb_reg_ctrl_wb_sel <= io_ctl_wb_sel;
    if (_T_319) begin
      wb_reg_ctrl_rf_wen <= 1'h0;
    end else begin
      wb_reg_ctrl_rf_wen <= io_ctl_rf_wen;
    end
    wb_reg_ctrl_bypassable <= io_ctl_bypassable;
    if (_T_319) begin
      wb_reg_ctrl_csr_cmd <= 3'h0;
    end else begin
      wb_reg_ctrl_csr_cmd <= io_ctl_csr_cmd;
    end
    wb_reg_alu <= alu_io_out;
    wb_reg_csr_addr <= io_imem_resp_bits_inst[31:20];
    wb_reg_wbaddr <= io_imem_resp_bits_inst[11:7];
    _T_328 <= io_ctl_exception;
    if (reset) begin
      irt_reg <= 32'h0;
    end else begin
      if (wb_reg_valid) begin
        irt_reg <= _T_405;
      end
    end
    if (_T_416) begin
      debug_wb_inst <= 32'h4033;
    end else begin
      debug_wb_inst <= io_imem_resp_bits_inst;
    end
    _T_454 <= _T_218 | _T_226;
    _T_458 <= io_imem_resp_bits_pc;
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_466) begin
          $fwrite(32'h80000002,"Cyc=%d Op1=[0x%x] Op2=[0x%x] W[%c,%d= 0x%x] [%c,0x%x] %d %c %c PC=(0x%x,0x%x,0x%x) [%x,%d,%d], WB: DASM(%x)\n",_T_419,exe_alu_op1,exe_alu_op2,_T_422,wb_reg_wbaddr,wb_wbdata,_T_425,io_imem_resp_bits_inst,_T_426,_T_429,_T_450,io_imem_debug_if_pc,io_imem_resp_bits_pc,_T_459,_T_460,_T_462,_T_463,debug_wb_inst); // @[Dpath.scala 246:9:@3306.6]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
module Core( // @[:@3309.2]
  input         clock, // @[:@3310.4]
  input         reset, // @[:@3311.4]
  input  [4:0]  io_ddpath_addr, // @[:@3312.4]
  input  [31:0] io_ddpath_wdata, // @[:@3312.4]
  output [31:0] io_ddpath_rdata, // @[:@3312.4]
  output [31:0] io_imem_req_bits_addr, // @[:@3312.4]
  input  [31:0] io_imem_resp_bits_data, // @[:@3312.4]
  output [31:0] io_dmem_req_bits_addr, // @[:@3312.4]
  output [31:0] io_dmem_req_bits_data, // @[:@3312.4]
  output        io_dmem_req_bits_fcn, // @[:@3312.4]
  output [2:0]  io_dmem_req_bits_typ, // @[:@3312.4]
  input  [31:0] io_dmem_resp_bits_data // @[:@3312.4]
);
  wire  frontend_clock; // @[Core.scala 21:24:@3314.4]
  wire  frontend_reset; // @[Core.scala 21:24:@3314.4]
  wire  frontend_io_cpu_req_valid; // @[Core.scala 21:24:@3314.4]
  wire [31:0] frontend_io_cpu_req_bits_pc; // @[Core.scala 21:24:@3314.4]
  wire  frontend_io_cpu_resp_ready; // @[Core.scala 21:24:@3314.4]
  wire  frontend_io_cpu_resp_valid; // @[Core.scala 21:24:@3314.4]
  wire [31:0] frontend_io_cpu_resp_bits_pc; // @[Core.scala 21:24:@3314.4]
  wire [31:0] frontend_io_cpu_resp_bits_inst; // @[Core.scala 21:24:@3314.4]
  wire [31:0] frontend_io_cpu_debug_if_pc; // @[Core.scala 21:24:@3314.4]
  wire [31:0] frontend_io_cpu_debug_if_inst; // @[Core.scala 21:24:@3314.4]
  wire [31:0] frontend_io_imem_req_bits_addr; // @[Core.scala 21:24:@3314.4]
  wire [31:0] frontend_io_imem_resp_bits_data; // @[Core.scala 21:24:@3314.4]
  wire  cpath_clock; // @[Core.scala 22:21:@3317.4]
  wire  cpath_io_imem_req_valid; // @[Core.scala 22:21:@3317.4]
  wire  cpath_io_imem_resp_valid; // @[Core.scala 22:21:@3317.4]
  wire [31:0] cpath_io_imem_resp_bits_inst; // @[Core.scala 22:21:@3317.4]
  wire  cpath_io_dat_br_eq; // @[Core.scala 22:21:@3317.4]
  wire  cpath_io_dat_br_lt; // @[Core.scala 22:21:@3317.4]
  wire  cpath_io_dat_br_ltu; // @[Core.scala 22:21:@3317.4]
  wire  cpath_io_dat_csr_eret; // @[Core.scala 22:21:@3317.4]
  wire  cpath_io_ctl_exe_kill; // @[Core.scala 22:21:@3317.4]
  wire [2:0] cpath_io_ctl_pc_sel; // @[Core.scala 22:21:@3317.4]
  wire  cpath_io_ctl_brjmp_sel; // @[Core.scala 22:21:@3317.4]
  wire [1:0] cpath_io_ctl_op1_sel; // @[Core.scala 22:21:@3317.4]
  wire [1:0] cpath_io_ctl_op2_sel; // @[Core.scala 22:21:@3317.4]
  wire [3:0] cpath_io_ctl_alu_fun; // @[Core.scala 22:21:@3317.4]
  wire [1:0] cpath_io_ctl_wb_sel; // @[Core.scala 22:21:@3317.4]
  wire  cpath_io_ctl_rf_wen; // @[Core.scala 22:21:@3317.4]
  wire  cpath_io_ctl_bypassable; // @[Core.scala 22:21:@3317.4]
  wire [2:0] cpath_io_ctl_csr_cmd; // @[Core.scala 22:21:@3317.4]
  wire  cpath_io_ctl_dmem_fcn; // @[Core.scala 22:21:@3317.4]
  wire [2:0] cpath_io_ctl_dmem_typ; // @[Core.scala 22:21:@3317.4]
  wire  cpath_io_ctl_exception; // @[Core.scala 22:21:@3317.4]
  wire  dpath_clock; // @[Core.scala 23:21:@3320.4]
  wire  dpath_reset; // @[Core.scala 23:21:@3320.4]
  wire [4:0] dpath_io_ddpath_addr; // @[Core.scala 23:21:@3320.4]
  wire [31:0] dpath_io_ddpath_wdata; // @[Core.scala 23:21:@3320.4]
  wire [31:0] dpath_io_ddpath_rdata; // @[Core.scala 23:21:@3320.4]
  wire [31:0] dpath_io_imem_req_bits_pc; // @[Core.scala 23:21:@3320.4]
  wire  dpath_io_imem_resp_ready; // @[Core.scala 23:21:@3320.4]
  wire  dpath_io_imem_resp_valid; // @[Core.scala 23:21:@3320.4]
  wire [31:0] dpath_io_imem_resp_bits_pc; // @[Core.scala 23:21:@3320.4]
  wire [31:0] dpath_io_imem_resp_bits_inst; // @[Core.scala 23:21:@3320.4]
  wire [31:0] dpath_io_imem_debug_if_pc; // @[Core.scala 23:21:@3320.4]
  wire [31:0] dpath_io_imem_debug_if_inst; // @[Core.scala 23:21:@3320.4]
  wire [31:0] dpath_io_dmem_req_bits_addr; // @[Core.scala 23:21:@3320.4]
  wire [31:0] dpath_io_dmem_req_bits_data; // @[Core.scala 23:21:@3320.4]
  wire  dpath_io_dmem_req_bits_fcn; // @[Core.scala 23:21:@3320.4]
  wire [2:0] dpath_io_dmem_req_bits_typ; // @[Core.scala 23:21:@3320.4]
  wire [31:0] dpath_io_dmem_resp_bits_data; // @[Core.scala 23:21:@3320.4]
  wire  dpath_io_ctl_exe_kill; // @[Core.scala 23:21:@3320.4]
  wire [2:0] dpath_io_ctl_pc_sel; // @[Core.scala 23:21:@3320.4]
  wire  dpath_io_ctl_brjmp_sel; // @[Core.scala 23:21:@3320.4]
  wire [1:0] dpath_io_ctl_op1_sel; // @[Core.scala 23:21:@3320.4]
  wire [1:0] dpath_io_ctl_op2_sel; // @[Core.scala 23:21:@3320.4]
  wire [3:0] dpath_io_ctl_alu_fun; // @[Core.scala 23:21:@3320.4]
  wire [1:0] dpath_io_ctl_wb_sel; // @[Core.scala 23:21:@3320.4]
  wire  dpath_io_ctl_rf_wen; // @[Core.scala 23:21:@3320.4]
  wire  dpath_io_ctl_bypassable; // @[Core.scala 23:21:@3320.4]
  wire [2:0] dpath_io_ctl_csr_cmd; // @[Core.scala 23:21:@3320.4]
  wire  dpath_io_ctl_dmem_fcn; // @[Core.scala 23:21:@3320.4]
  wire [2:0] dpath_io_ctl_dmem_typ; // @[Core.scala 23:21:@3320.4]
  wire  dpath_io_ctl_exception; // @[Core.scala 23:21:@3320.4]
  wire  dpath_io_dat_br_eq; // @[Core.scala 23:21:@3320.4]
  wire  dpath_io_dat_br_lt; // @[Core.scala 23:21:@3320.4]
  wire  dpath_io_dat_br_ltu; // @[Core.scala 23:21:@3320.4]
  wire  dpath_io_dat_csr_eret; // @[Core.scala 23:21:@3320.4]
  FrontEnd frontend ( // @[Core.scala 21:24:@3314.4]
    .clock(frontend_clock),
    .reset(frontend_reset),
    .io_cpu_req_valid(frontend_io_cpu_req_valid),
    .io_cpu_req_bits_pc(frontend_io_cpu_req_bits_pc),
    .io_cpu_resp_ready(frontend_io_cpu_resp_ready),
    .io_cpu_resp_valid(frontend_io_cpu_resp_valid),
    .io_cpu_resp_bits_pc(frontend_io_cpu_resp_bits_pc),
    .io_cpu_resp_bits_inst(frontend_io_cpu_resp_bits_inst),
    .io_cpu_debug_if_pc(frontend_io_cpu_debug_if_pc),
    .io_cpu_debug_if_inst(frontend_io_cpu_debug_if_inst),
    .io_imem_req_bits_addr(frontend_io_imem_req_bits_addr),
    .io_imem_resp_bits_data(frontend_io_imem_resp_bits_data)
  );
  CtlPath cpath ( // @[Core.scala 22:21:@3317.4]
    .clock(cpath_clock),
    .io_imem_req_valid(cpath_io_imem_req_valid),
    .io_imem_resp_valid(cpath_io_imem_resp_valid),
    .io_imem_resp_bits_inst(cpath_io_imem_resp_bits_inst),
    .io_dat_br_eq(cpath_io_dat_br_eq),
    .io_dat_br_lt(cpath_io_dat_br_lt),
    .io_dat_br_ltu(cpath_io_dat_br_ltu),
    .io_dat_csr_eret(cpath_io_dat_csr_eret),
    .io_ctl_exe_kill(cpath_io_ctl_exe_kill),
    .io_ctl_pc_sel(cpath_io_ctl_pc_sel),
    .io_ctl_brjmp_sel(cpath_io_ctl_brjmp_sel),
    .io_ctl_op1_sel(cpath_io_ctl_op1_sel),
    .io_ctl_op2_sel(cpath_io_ctl_op2_sel),
    .io_ctl_alu_fun(cpath_io_ctl_alu_fun),
    .io_ctl_wb_sel(cpath_io_ctl_wb_sel),
    .io_ctl_rf_wen(cpath_io_ctl_rf_wen),
    .io_ctl_bypassable(cpath_io_ctl_bypassable),
    .io_ctl_csr_cmd(cpath_io_ctl_csr_cmd),
    .io_ctl_dmem_fcn(cpath_io_ctl_dmem_fcn),
    .io_ctl_dmem_typ(cpath_io_ctl_dmem_typ),
    .io_ctl_exception(cpath_io_ctl_exception)
  );
  DatPath dpath ( // @[Core.scala 23:21:@3320.4]
    .clock(dpath_clock),
    .reset(dpath_reset),
    .io_ddpath_addr(dpath_io_ddpath_addr),
    .io_ddpath_wdata(dpath_io_ddpath_wdata),
    .io_ddpath_rdata(dpath_io_ddpath_rdata),
    .io_imem_req_bits_pc(dpath_io_imem_req_bits_pc),
    .io_imem_resp_ready(dpath_io_imem_resp_ready),
    .io_imem_resp_valid(dpath_io_imem_resp_valid),
    .io_imem_resp_bits_pc(dpath_io_imem_resp_bits_pc),
    .io_imem_resp_bits_inst(dpath_io_imem_resp_bits_inst),
    .io_imem_debug_if_pc(dpath_io_imem_debug_if_pc),
    .io_imem_debug_if_inst(dpath_io_imem_debug_if_inst),
    .io_dmem_req_bits_addr(dpath_io_dmem_req_bits_addr),
    .io_dmem_req_bits_data(dpath_io_dmem_req_bits_data),
    .io_dmem_req_bits_fcn(dpath_io_dmem_req_bits_fcn),
    .io_dmem_req_bits_typ(dpath_io_dmem_req_bits_typ),
    .io_dmem_resp_bits_data(dpath_io_dmem_resp_bits_data),
    .io_ctl_exe_kill(dpath_io_ctl_exe_kill),
    .io_ctl_pc_sel(dpath_io_ctl_pc_sel),
    .io_ctl_brjmp_sel(dpath_io_ctl_brjmp_sel),
    .io_ctl_op1_sel(dpath_io_ctl_op1_sel),
    .io_ctl_op2_sel(dpath_io_ctl_op2_sel),
    .io_ctl_alu_fun(dpath_io_ctl_alu_fun),
    .io_ctl_wb_sel(dpath_io_ctl_wb_sel),
    .io_ctl_rf_wen(dpath_io_ctl_rf_wen),
    .io_ctl_bypassable(dpath_io_ctl_bypassable),
    .io_ctl_csr_cmd(dpath_io_ctl_csr_cmd),
    .io_ctl_dmem_fcn(dpath_io_ctl_dmem_fcn),
    .io_ctl_dmem_typ(dpath_io_ctl_dmem_typ),
    .io_ctl_exception(dpath_io_ctl_exception),
    .io_dat_br_eq(dpath_io_dat_br_eq),
    .io_dat_br_lt(dpath_io_dat_br_lt),
    .io_dat_br_ltu(dpath_io_dat_br_ltu),
    .io_dat_csr_eret(dpath_io_dat_csr_eret)
  );
  assign io_ddpath_rdata = dpath_io_ddpath_rdata; // @[Core.scala 36:19:@3383.4]
  assign io_imem_req_bits_addr = frontend_io_imem_req_bits_addr; // @[Core.scala 25:20:@3328.4]
  assign io_dmem_req_bits_addr = dpath_io_dmem_req_bits_addr; // @[Core.scala 33:17:@3371.4 Core.scala 34:17:@3379.4]
  assign io_dmem_req_bits_data = dpath_io_dmem_req_bits_data; // @[Core.scala 33:17:@3370.4 Core.scala 34:17:@3378.4]
  assign io_dmem_req_bits_fcn = dpath_io_dmem_req_bits_fcn; // @[Core.scala 33:17:@3369.4 Core.scala 34:17:@3377.4]
  assign io_dmem_req_bits_typ = dpath_io_dmem_req_bits_typ; // @[Core.scala 33:17:@3368.4 Core.scala 34:17:@3376.4]
  assign frontend_clock = clock; // @[:@3315.4]
  assign frontend_reset = reset; // @[:@3316.4]
  assign frontend_io_cpu_req_valid = cpath_io_imem_req_valid; // @[Core.scala 26:19:@3338.4 Core.scala 27:19:@3346.4 Core.scala 28:29:@3347.4]
  assign frontend_io_cpu_req_bits_pc = dpath_io_imem_req_bits_pc; // @[Core.scala 26:19:@3337.4 Core.scala 27:19:@3345.4]
  assign frontend_io_cpu_resp_ready = dpath_io_imem_resp_ready; // @[Core.scala 26:19:@3336.4 Core.scala 27:19:@3344.4]
  assign frontend_io_imem_resp_bits_data = io_imem_resp_bits_data; // @[Core.scala 25:20:@3323.4]
  assign cpath_clock = clock; // @[:@3318.4]
  assign cpath_io_imem_resp_valid = frontend_io_cpu_resp_valid; // @[Core.scala 26:19:@3335.4]
  assign cpath_io_imem_resp_bits_inst = frontend_io_cpu_resp_bits_inst; // @[Core.scala 26:19:@3333.4]
  assign cpath_io_dat_br_eq = dpath_io_dat_br_eq; // @[Core.scala 31:16:@3365.4]
  assign cpath_io_dat_br_lt = dpath_io_dat_br_lt; // @[Core.scala 31:16:@3364.4]
  assign cpath_io_dat_br_ltu = dpath_io_dat_br_ltu; // @[Core.scala 31:16:@3363.4]
  assign cpath_io_dat_csr_eret = dpath_io_dat_csr_eret; // @[Core.scala 31:16:@3362.4]
  assign dpath_clock = clock; // @[:@3321.4]
  assign dpath_reset = reset; // @[:@3322.4]
  assign dpath_io_ddpath_addr = io_ddpath_addr; // @[Core.scala 36:19:@3386.4]
  assign dpath_io_ddpath_wdata = io_ddpath_wdata; // @[Core.scala 36:19:@3385.4]
  assign dpath_io_imem_resp_valid = frontend_io_cpu_resp_valid; // @[Core.scala 27:19:@3343.4]
  assign dpath_io_imem_resp_bits_pc = frontend_io_cpu_resp_bits_pc; // @[Core.scala 27:19:@3342.4]
  assign dpath_io_imem_resp_bits_inst = frontend_io_cpu_resp_bits_inst; // @[Core.scala 27:19:@3341.4]
  assign dpath_io_imem_debug_if_pc = frontend_io_cpu_debug_if_pc; // @[Core.scala 27:19:@3340.4]
  assign dpath_io_imem_debug_if_inst = frontend_io_cpu_debug_if_inst; // @[Core.scala 27:19:@3339.4]
  assign dpath_io_dmem_resp_bits_data = io_dmem_resp_bits_data; // @[Core.scala 34:17:@3374.4]
  assign dpath_io_ctl_exe_kill = cpath_io_ctl_exe_kill; // @[Core.scala 30:16:@3361.4]
  assign dpath_io_ctl_pc_sel = cpath_io_ctl_pc_sel; // @[Core.scala 30:16:@3360.4]
  assign dpath_io_ctl_brjmp_sel = cpath_io_ctl_brjmp_sel; // @[Core.scala 30:16:@3359.4]
  assign dpath_io_ctl_op1_sel = cpath_io_ctl_op1_sel; // @[Core.scala 30:16:@3358.4]
  assign dpath_io_ctl_op2_sel = cpath_io_ctl_op2_sel; // @[Core.scala 30:16:@3357.4]
  assign dpath_io_ctl_alu_fun = cpath_io_ctl_alu_fun; // @[Core.scala 30:16:@3356.4]
  assign dpath_io_ctl_wb_sel = cpath_io_ctl_wb_sel; // @[Core.scala 30:16:@3355.4]
  assign dpath_io_ctl_rf_wen = cpath_io_ctl_rf_wen; // @[Core.scala 30:16:@3354.4]
  assign dpath_io_ctl_bypassable = cpath_io_ctl_bypassable; // @[Core.scala 30:16:@3353.4]
  assign dpath_io_ctl_csr_cmd = cpath_io_ctl_csr_cmd; // @[Core.scala 30:16:@3352.4]
  assign dpath_io_ctl_dmem_fcn = cpath_io_ctl_dmem_fcn; // @[Core.scala 30:16:@3350.4]
  assign dpath_io_ctl_dmem_typ = cpath_io_ctl_dmem_typ; // @[Core.scala 30:16:@3349.4]
  assign dpath_io_ctl_exception = cpath_io_ctl_exception; // @[Core.scala 30:16:@3348.4]
endmodule
module SyncScratchPadMemory( // @[:@3399.2]
  input         clock, // @[:@3400.4]
  input  [31:0] io_core_ports_0_req_bits_addr, // @[:@3402.4]
  input  [31:0] io_core_ports_0_req_bits_data, // @[:@3402.4]
  input         io_core_ports_0_req_bits_fcn, // @[:@3402.4]
  input  [2:0]  io_core_ports_0_req_bits_typ, // @[:@3402.4]
  output [31:0] io_core_ports_0_resp_bits_data, // @[:@3402.4]
  input  [31:0] io_core_ports_1_req_bits_addr, // @[:@3402.4]
  output [31:0] io_core_ports_1_resp_bits_data, // @[:@3402.4]
  input         io_debug_port_req_valid, // @[:@3402.4]
  input  [31:0] io_debug_port_req_bits_addr, // @[:@3402.4]
  input  [31:0] io_debug_port_req_bits_data, // @[:@3402.4]
  input         io_debug_port_req_bits_fcn, // @[:@3402.4]
  output        io_debug_port_resp_valid, // @[:@3402.4]
  output [31:0] io_debug_port_resp_bits_data // @[:@3402.4]
);
  wire  sync_data_clk; // @[Memory.scala 171:26:@3404.4]
  wire [20:0] sync_data_hr_addr; // @[Memory.scala 171:26:@3404.4]
  wire [31:0] sync_data_hr_data; // @[Memory.scala 171:26:@3404.4]
  wire [20:0] sync_data_dw_addr; // @[Memory.scala 171:26:@3404.4]
  wire [31:0] sync_data_dw_data; // @[Memory.scala 171:26:@3404.4]
  wire [3:0] sync_data_dw_mask; // @[Memory.scala 171:26:@3404.4]
  wire  sync_data_dw_en; // @[Memory.scala 171:26:@3404.4]
  wire [20:0] sync_data_hw_addr; // @[Memory.scala 171:26:@3404.4]
  wire [31:0] sync_data_hw_data; // @[Memory.scala 171:26:@3404.4]
  wire [3:0] sync_data_hw_mask; // @[Memory.scala 171:26:@3404.4]
  wire  sync_data_hw_en; // @[Memory.scala 171:26:@3404.4]
  wire [20:0] sync_data_dataInstr_0_addr; // @[Memory.scala 171:26:@3404.4]
  wire [31:0] sync_data_dataInstr_0_data; // @[Memory.scala 171:26:@3404.4]
  wire [20:0] sync_data_dataInstr_1_addr; // @[Memory.scala 171:26:@3404.4]
  wire [31:0] sync_data_dataInstr_1_data; // @[Memory.scala 171:26:@3404.4]
  reg [2:0] req_typi; // @[Memory.scala 184:22:@3421.4]
  reg [31:0] _RAND_0;
  wire  _T_272; // @[Memory.scala 189:17:@3423.4]
  wire  _T_273; // @[Memory.scala 189:52:@3424.4]
  wire [23:0] _T_277; // @[Bitwise.scala 72:12:@3426.4]
  wire [7:0] _T_278; // @[Memory.scala 189:67:@3427.4]
  wire [31:0] _T_279; // @[Cat.scala 30:58:@3428.4]
  wire  _T_280; // @[Memory.scala 190:17:@3429.4]
  wire  _T_281; // @[Memory.scala 190:52:@3430.4]
  wire [15:0] _T_285; // @[Bitwise.scala 72:12:@3432.4]
  wire [15:0] _T_286; // @[Memory.scala 190:68:@3433.4]
  wire [31:0] _T_287; // @[Cat.scala 30:58:@3434.4]
  wire  _T_288; // @[Memory.scala 191:17:@3435.4]
  wire [31:0] _T_295; // @[Cat.scala 30:58:@3438.4]
  wire  _T_296; // @[Memory.scala 192:17:@3439.4]
  wire [31:0] _T_303; // @[Cat.scala 30:58:@3442.4]
  wire [31:0] _T_304; // @[Mux.scala 61:16:@3443.4]
  wire [31:0] _T_305; // @[Mux.scala 61:16:@3444.4]
  wire [31:0] _T_306; // @[Mux.scala 61:16:@3445.4]
  wire [1:0] _T_311; // @[Memory.scala 198:79:@3453.6]
  wire [4:0] _GEN_6; // @[Memory.scala 198:85:@3454.6]
  wire [4:0] _T_312; // @[Memory.scala 198:85:@3454.6]
  wire [62:0] _GEN_7; // @[Memory.scala 198:66:@3455.6]
  wire [62:0] _T_313; // @[Memory.scala 198:66:@3455.6]
  wire [29:0] _T_314; // @[Memory.scala 199:44:@3457.6]
  wire [31:0] _T_316; // @[Cat.scala 30:58:@3458.6]
  wire  _T_317; // @[Memory.scala 200:69:@3460.6]
  wire [3:0] _T_320; // @[Memory.scala 200:82:@3462.6]
  wire  _T_321; // @[Memory.scala 201:69:@3463.6]
  wire [4:0] _T_324; // @[Memory.scala 201:82:@3465.6]
  wire [4:0] _T_326; // @[Memory.scala 201:34:@3466.6]
  wire [4:0] _T_327; // @[Memory.scala 200:34:@3467.6]
  wire  _T_329; // @[Memory.scala 212:94:@3472.4]
  reg  _T_332; // @[Memory.scala 212:39:@3474.4]
  reg [31:0] _RAND_1;
  SyncMem sync_data ( // @[Memory.scala 171:26:@3404.4]
    .clk(sync_data_clk),
    .hr_addr(sync_data_hr_addr),
    .hr_data(sync_data_hr_data),
    .dw_addr(sync_data_dw_addr),
    .dw_data(sync_data_dw_data),
    .dw_mask(sync_data_dw_mask),
    .dw_en(sync_data_dw_en),
    .hw_addr(sync_data_hw_addr),
    .hw_data(sync_data_hw_data),
    .hw_mask(sync_data_hw_mask),
    .hw_en(sync_data_hw_en),
    .dataInstr_0_addr(sync_data_dataInstr_0_addr),
    .dataInstr_0_data(sync_data_dataInstr_0_data),
    .dataInstr_1_addr(sync_data_dataInstr_1_addr),
    .dataInstr_1_data(sync_data_dataInstr_1_data)
  );
  assign _T_272 = req_typi == 3'h1; // @[Memory.scala 189:17:@3423.4]
  assign _T_273 = sync_data_dataInstr_0_data[7]; // @[Memory.scala 189:52:@3424.4]
  assign _T_277 = _T_273 ? 24'hffffff : 24'h0; // @[Bitwise.scala 72:12:@3426.4]
  assign _T_278 = sync_data_dataInstr_0_data[7:0]; // @[Memory.scala 189:67:@3427.4]
  assign _T_279 = {_T_277,_T_278}; // @[Cat.scala 30:58:@3428.4]
  assign _T_280 = req_typi == 3'h2; // @[Memory.scala 190:17:@3429.4]
  assign _T_281 = sync_data_dataInstr_0_data[15]; // @[Memory.scala 190:52:@3430.4]
  assign _T_285 = _T_281 ? 16'hffff : 16'h0; // @[Bitwise.scala 72:12:@3432.4]
  assign _T_286 = sync_data_dataInstr_0_data[15:0]; // @[Memory.scala 190:68:@3433.4]
  assign _T_287 = {_T_285,_T_286}; // @[Cat.scala 30:58:@3434.4]
  assign _T_288 = req_typi == 3'h5; // @[Memory.scala 191:17:@3435.4]
  assign _T_295 = {24'h0,_T_278}; // @[Cat.scala 30:58:@3438.4]
  assign _T_296 = req_typi == 3'h6; // @[Memory.scala 192:17:@3439.4]
  assign _T_303 = {16'h0,_T_286}; // @[Cat.scala 30:58:@3442.4]
  assign _T_304 = _T_296 ? _T_303 : sync_data_dataInstr_0_data; // @[Mux.scala 61:16:@3443.4]
  assign _T_305 = _T_288 ? _T_295 : _T_304; // @[Mux.scala 61:16:@3444.4]
  assign _T_306 = _T_280 ? _T_287 : _T_305; // @[Mux.scala 61:16:@3445.4]
  assign _T_311 = io_core_ports_0_req_bits_addr[1:0]; // @[Memory.scala 198:79:@3453.6]
  assign _GEN_6 = {{3'd0}, _T_311}; // @[Memory.scala 198:85:@3454.6]
  assign _T_312 = _GEN_6 << 3; // @[Memory.scala 198:85:@3454.6]
  assign _GEN_7 = {{31'd0}, io_core_ports_0_req_bits_data}; // @[Memory.scala 198:66:@3455.6]
  assign _T_313 = _GEN_7 << _T_312; // @[Memory.scala 198:66:@3455.6]
  assign _T_314 = io_core_ports_0_req_bits_addr[31:2]; // @[Memory.scala 199:44:@3457.6]
  assign _T_316 = {_T_314,2'h0}; // @[Cat.scala 30:58:@3458.6]
  assign _T_317 = io_core_ports_0_req_bits_typ == 3'h1; // @[Memory.scala 200:69:@3460.6]
  assign _T_320 = 4'h1 << _T_311; // @[Memory.scala 200:82:@3462.6]
  assign _T_321 = io_core_ports_0_req_bits_typ == 3'h2; // @[Memory.scala 201:69:@3463.6]
  assign _T_324 = 5'h3 << _T_311; // @[Memory.scala 201:82:@3465.6]
  assign _T_326 = _T_321 ? _T_324 : 5'hf; // @[Memory.scala 201:34:@3466.6]
  assign _T_327 = _T_317 ? {{1'd0}, _T_320} : _T_326; // @[Memory.scala 200:34:@3467.6]
  assign _T_329 = io_debug_port_req_bits_fcn == 1'h0; // @[Memory.scala 212:94:@3472.4]
  assign io_core_ports_0_resp_bits_data = _T_272 ? _T_279 : _T_306; // @[Memory.scala 188:40:@3447.4]
  assign io_core_ports_1_resp_bits_data = sync_data_dataInstr_1_data; // @[Memory.scala 207:43:@3470.4]
  assign io_debug_port_resp_valid = _T_332; // @[Memory.scala 212:29:@3476.4]
  assign io_debug_port_resp_bits_data = sync_data_hr_data; // @[Memory.scala 215:33:@3478.4]
  assign sync_data_clk = clock; // @[Memory.scala 172:21:@3410.4]
  assign sync_data_hr_addr = io_debug_port_req_bits_addr[20:0]; // @[Memory.scala 214:25:@3477.4]
  assign sync_data_dw_addr = _T_316[20:0]; // @[Memory.scala 199:28:@3459.6]
  assign sync_data_dw_data = _T_313[31:0]; // @[Memory.scala 198:28:@3456.6]
  assign sync_data_dw_mask = _T_327[3:0]; // @[Memory.scala 200:28:@3468.6]
  assign sync_data_dw_en = io_core_ports_0_req_bits_fcn; // @[Memory.scala 195:23:@3449.4]
  assign sync_data_hw_addr = io_debug_port_req_bits_addr[20:0]; // @[Memory.scala 219:28:@3484.6]
  assign sync_data_hw_data = io_debug_port_req_bits_data; // @[Memory.scala 220:28:@3485.6]
  assign sync_data_hw_mask = 4'hf; // @[Memory.scala 221:28:@3486.6]
  assign sync_data_hw_en = io_debug_port_req_bits_fcn; // @[Memory.scala 216:23:@3480.4]
  assign sync_data_dataInstr_0_addr = io_core_ports_0_req_bits_addr[20:0]; // @[Memory.scala 177:38:@3415.4]
  assign sync_data_dataInstr_1_addr = io_core_ports_1_req_bits_addr[20:0]; // @[Memory.scala 177:38:@3420.4]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  req_typi = _RAND_0[2:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  _T_332 = _RAND_1[0:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    req_typi <= io_core_ports_0_req_bits_typ;
    _T_332 <= io_debug_port_req_valid & _T_329;
  end
endmodule
module DebugModule( // @[:@3489.2]
  input         clock, // @[:@3490.4]
  input         reset, // @[:@3491.4]
  output        io_dmi_req_ready, // @[:@3492.4]
  input         io_dmi_req_valid, // @[:@3492.4]
  input  [1:0]  io_dmi_req_bits_op, // @[:@3492.4]
  input  [6:0]  io_dmi_req_bits_addr, // @[:@3492.4]
  input  [31:0] io_dmi_req_bits_data, // @[:@3492.4]
  output        io_dmi_resp_valid, // @[:@3492.4]
  output [31:0] io_dmi_resp_bits_data, // @[:@3492.4]
  output [4:0]  io_ddpath_addr, // @[:@3492.4]
  output [31:0] io_ddpath_wdata, // @[:@3492.4]
  input  [31:0] io_ddpath_rdata, // @[:@3492.4]
  output        io_debugmem_req_valid, // @[:@3492.4]
  output [31:0] io_debugmem_req_bits_addr, // @[:@3492.4]
  output [31:0] io_debugmem_req_bits_data, // @[:@3492.4]
  output        io_debugmem_req_bits_fcn, // @[:@3492.4]
  input         io_debugmem_resp_valid, // @[:@3492.4]
  input  [31:0] io_debugmem_resp_bits_data, // @[:@3492.4]
  output        io_resetcore // @[:@3492.4]
);
  reg  dmstatus_allrunning; // @[Debug.scala 117:25:@3540.4]
  reg [31:0] _RAND_0;
  reg  dmstatus_allhalted; // @[Debug.scala 117:25:@3540.4]
  reg [31:0] _RAND_1;
  reg  sbcs_sbsingleread; // @[Debug.scala 125:21:@3559.4]
  reg [31:0] _RAND_2;
  reg [2:0] sbcs_sbaccess; // @[Debug.scala 125:21:@3559.4]
  reg [31:0] _RAND_3;
  reg  sbcs_sbautoincrement; // @[Debug.scala 125:21:@3559.4]
  reg [31:0] _RAND_4;
  reg  sbcs_sbautoread; // @[Debug.scala 125:21:@3559.4]
  reg [31:0] _RAND_5;
  reg [2:0] sbcs_sberror; // @[Debug.scala 125:21:@3559.4]
  reg [31:0] _RAND_6;
  reg [2:0] abstractcs_cmderr; // @[Debug.scala 130:27:@3571.4]
  reg [31:0] _RAND_7;
  reg  command_postexec; // @[Debug.scala 131:20:@3572.4]
  reg [31:0] _RAND_8;
  reg  command_transfer; // @[Debug.scala 131:20:@3572.4]
  reg [31:0] _RAND_9;
  reg  command_write; // @[Debug.scala 131:20:@3572.4]
  reg [31:0] _RAND_10;
  reg [15:0] command_regno; // @[Debug.scala 131:20:@3572.4]
  reg [31:0] _RAND_11;
  reg  dmcontrol_haltreq; // @[Debug.scala 132:22:@3573.4]
  reg [31:0] _RAND_12;
  reg  dmcontrol_resumereq; // @[Debug.scala 132:22:@3573.4]
  reg [31:0] _RAND_13;
  reg  dmcontrol_hartreset; // @[Debug.scala 132:22:@3573.4]
  reg [31:0] _RAND_14;
  reg  dmcontrol_ndmreset; // @[Debug.scala 132:22:@3573.4]
  reg [31:0] _RAND_15;
  reg  dmcontrol_dmactive; // @[Debug.scala 132:22:@3573.4]
  reg [31:0] _RAND_16;
  reg [31:0] data0; // @[Debug.scala 134:18:@3575.4]
  reg [31:0] _RAND_17;
  reg [31:0] data1; // @[Debug.scala 135:18:@3576.4]
  reg [31:0] _RAND_18;
  reg [31:0] data2; // @[Debug.scala 136:18:@3577.4]
  reg [31:0] _RAND_19;
  reg [31:0] sbaddr; // @[Debug.scala 137:19:@3578.4]
  reg [31:0] _RAND_20;
  reg [31:0] sbdata; // @[Debug.scala 138:19:@3579.4]
  reg [31:0] _RAND_21;
  reg  memreadfire; // @[Debug.scala 139:28:@3580.4]
  reg [31:0] _RAND_22;
  reg  coreresetval; // @[Debug.scala 140:29:@3581.4]
  reg [31:0] _RAND_23;
  wire [31:0] _T_183; // @[Debug.scala 143:47:@3588.4]
  wire [31:0] _T_191; // @[Debug.scala 144:45:@3596.4]
  wire [31:0] _T_207; // @[Debug.scala 145:44:@3612.4]
  wire [31:0] _T_214; // @[Debug.scala 146:41:@3619.4]
  wire [31:0] _T_230; // @[Debug.scala 159:35:@3630.4]
  wire  _T_232; // @[Debug.scala 162:79:@3631.4]
  wire  _T_234; // @[Debug.scala 162:79:@3632.4]
  wire  _T_236; // @[Debug.scala 162:79:@3633.4]
  wire  _T_238; // @[Debug.scala 162:79:@3634.4]
  wire  _T_240; // @[Debug.scala 162:79:@3635.4]
  wire  _T_246; // @[Debug.scala 162:79:@3638.4]
  wire  _T_248; // @[Debug.scala 162:79:@3639.4]
  wire  _T_250; // @[Debug.scala 162:79:@3640.4]
  wire  _T_264; // @[Debug.scala 162:79:@3647.4]
  wire  _T_266; // @[Debug.scala 162:79:@3648.4]
  wire  _T_268; // @[Debug.scala 162:79:@3649.4]
  wire [31:0] _T_271; // @[Mux.scala 19:72:@3650.4]
  wire [31:0] _T_273; // @[Mux.scala 19:72:@3651.4]
  wire [31:0] _T_275; // @[Mux.scala 19:72:@3652.4]
  wire [31:0] _T_277; // @[Mux.scala 19:72:@3653.4]
  wire [20:0] _T_279; // @[Mux.scala 19:72:@3654.4]
  wire [31:0] _T_285; // @[Mux.scala 19:72:@3657.4]
  wire [31:0] _T_287; // @[Mux.scala 19:72:@3658.4]
  wire [31:0] _T_289; // @[Mux.scala 19:72:@3659.4]
  wire [31:0] _T_303; // @[Mux.scala 19:72:@3666.4]
  wire [31:0] _T_305; // @[Mux.scala 19:72:@3667.4]
  wire [31:0] _T_307; // @[Mux.scala 19:72:@3668.4]
  wire [31:0] _T_308; // @[Mux.scala 19:72:@3669.4]
  wire [31:0] _T_309; // @[Mux.scala 19:72:@3670.4]
  wire [31:0] _T_310; // @[Mux.scala 19:72:@3671.4]
  wire [31:0] _GEN_77; // @[Mux.scala 19:72:@3672.4]
  wire [31:0] _T_311; // @[Mux.scala 19:72:@3672.4]
  wire [31:0] _T_314; // @[Mux.scala 19:72:@3675.4]
  wire [31:0] _T_315; // @[Mux.scala 19:72:@3676.4]
  wire [31:0] _T_316; // @[Mux.scala 19:72:@3677.4]
  wire [31:0] _T_323; // @[Mux.scala 19:72:@3684.4]
  wire [31:0] _T_324; // @[Mux.scala 19:72:@3685.4]
  wire  _T_332; // @[Debug.scala 168:28:@3695.4]
  wire  _T_333; // @[Debug.scala 169:54:@3697.6]
  wire [2:0] _T_341; // @[Debug.scala 170:42:@3706.8]
  wire [2:0] _GEN_0; // @[Debug.scala 169:75:@3698.6]
  wire [15:0] _T_352; // @[Debug.scala 174:39:@3724.8]
  wire  _T_353; // @[Debug.scala 174:39:@3726.8]
  wire  _T_354; // @[Debug.scala 174:39:@3728.8]
  wire  _T_355; // @[Debug.scala 174:39:@3730.8]
  wire [2:0] _T_357; // @[Debug.scala 174:39:@3734.8]
  wire  _T_361; // @[Debug.scala 175:29:@3740.8]
  wire  _GEN_1; // @[Debug.scala 175:37:@3741.8]
  wire [15:0] _GEN_2; // @[Debug.scala 175:37:@3741.8]
  wire  _GEN_3; // @[Debug.scala 175:37:@3741.8]
  wire  _GEN_4; // @[Debug.scala 175:37:@3741.8]
  wire [1:0] _GEN_5; // @[Debug.scala 175:37:@3741.8]
  wire  _GEN_6; // @[Debug.scala 173:50:@3720.6]
  wire [15:0] _GEN_7; // @[Debug.scala 173:50:@3720.6]
  wire  _GEN_8; // @[Debug.scala 173:50:@3720.6]
  wire  _GEN_9; // @[Debug.scala 173:50:@3720.6]
  wire [2:0] _GEN_10; // @[Debug.scala 173:50:@3720.6]
  wire  _T_369; // @[Debug.scala 186:39:@3756.8]
  wire  _T_370; // @[Debug.scala 186:39:@3758.8]
  wire  _T_375; // @[Debug.scala 186:39:@3768.8]
  wire  _T_376; // @[Debug.scala 186:39:@3770.8]
  wire  _T_377; // @[Debug.scala 186:39:@3772.8]
  wire  _GEN_11; // @[Debug.scala 185:52:@3752.6]
  wire  _GEN_12; // @[Debug.scala 185:52:@3752.6]
  wire  _GEN_13; // @[Debug.scala 185:52:@3752.6]
  wire  _GEN_14; // @[Debug.scala 185:52:@3752.6]
  wire  _GEN_15; // @[Debug.scala 185:52:@3752.6]
  wire [2:0] _T_389; // @[Debug.scala 194:36:@3796.8]
  wire  _T_390; // @[Debug.scala 194:36:@3798.8]
  wire [2:0] _T_392; // @[Debug.scala 194:36:@3802.8]
  wire  _T_393; // @[Debug.scala 194:36:@3804.8]
  wire  _GEN_16; // @[Debug.scala 193:46:@3780.6]
  wire [2:0] _GEN_17; // @[Debug.scala 193:46:@3780.6]
  wire  _GEN_18; // @[Debug.scala 193:46:@3780.6]
  wire  _GEN_19; // @[Debug.scala 193:46:@3780.6]
  wire [2:0] _GEN_20; // @[Debug.scala 193:46:@3780.6]
  wire [31:0] _GEN_21; // @[Debug.scala 201:53:@3814.6]
  wire  _T_395; // @[Debug.scala 208:33:@3823.8]
  wire [32:0] _T_397; // @[Debug.scala 210:26:@3825.10]
  wire [31:0] _T_398; // @[Debug.scala 210:26:@3826.10]
  wire [31:0] _GEN_22; // @[Debug.scala 209:7:@3824.8]
  wire [31:0] _GEN_23; // @[Debug.scala 202:50:@3817.6]
  wire [31:0] _GEN_28; // @[Debug.scala 202:50:@3817.6]
  wire [31:0] _GEN_29; // @[Debug.scala 213:48:@3830.6]
  wire [31:0] _GEN_30; // @[Debug.scala 214:50:@3833.6]
  wire [31:0] _GEN_31; // @[Debug.scala 215:50:@3836.6]
  wire [2:0] _GEN_32; // @[Debug.scala 168:54:@3696.4]
  wire  _GEN_42; // @[Debug.scala 168:54:@3696.4]
  wire [2:0] _GEN_43; // @[Debug.scala 168:54:@3696.4]
  wire  _GEN_44; // @[Debug.scala 168:54:@3696.4]
  wire  _GEN_45; // @[Debug.scala 168:54:@3696.4]
  wire [2:0] _GEN_46; // @[Debug.scala 168:54:@3696.4]
  wire [31:0] _GEN_47; // @[Debug.scala 168:54:@3696.4]
  wire [31:0] _GEN_48; // @[Debug.scala 168:54:@3696.4]
  wire [31:0] _GEN_53; // @[Debug.scala 168:54:@3696.4]
  wire [15:0] _T_400; // @[Debug.scala 219:35:@3840.4]
  wire  _T_402; // @[Debug.scala 220:46:@3842.4]
  wire  _T_403; // @[Debug.scala 220:25:@3843.4]
  wire [31:0] _GEN_58; // @[Debug.scala 221:24:@3845.6]
  wire [2:0] _GEN_62; // @[Debug.scala 220:54:@3844.4]
  wire  _T_408; // @[Debug.scala 230:49:@3855.4]
  wire  _T_410; // @[Debug.scala 230:8:@3856.4]
  wire  _GEN_63; // @[Debug.scala 230:98:@3857.4]
  reg  firstreaddone; // @[Debug.scala 235:26:@3860.4]
  reg [31:0] _RAND_24;
  reg  _T_414; // @[Debug.scala 237:50:@3861.4]
  reg [31:0] _RAND_25;
  wire  _T_417; // @[Debug.scala 239:72:@3865.4]
  wire  _T_418; // @[Debug.scala 239:49:@3866.4]
  wire  _T_419; // @[Debug.scala 239:119:@3867.4]
  wire  _T_420; // @[Debug.scala 239:99:@3868.4]
  wire [31:0] _GEN_64; // @[Debug.scala 245:33:@3873.6]
  wire [31:0] _GEN_68; // @[Debug.scala 239:137:@3869.4]
  wire  _GEN_69; // @[Debug.scala 239:137:@3869.4]
  wire  _GEN_70; // @[Debug.scala 239:137:@3869.4]
  wire  _T_423; // @[Debug.scala 252:20:@3879.4]
  wire [31:0] _GEN_71; // @[Debug.scala 259:5:@3883.6]
  wire  _GEN_73; // @[Debug.scala 253:3:@3880.4]
  wire  _T_429; // @[Debug.scala 264:8:@3889.4]
  wire  _T_432; // @[Debug.scala 270:30:@3894.4]
  wire  _T_433; // @[Debug.scala 270:43:@3895.4]
  wire  _GEN_76; // @[Debug.scala 270:63:@3896.4]
  assign _T_183 = {20'h4000,1'h0,abstractcs_cmderr,8'h1}; // @[Debug.scala 143:47:@3588.4]
  assign _T_191 = {dmcontrol_haltreq,dmcontrol_resumereq,dmcontrol_hartreset,3'h0,24'h0,dmcontrol_ndmreset,dmcontrol_dmactive}; // @[Debug.scala 144:45:@3596.4]
  assign _T_207 = {18'h0,2'h0,dmstatus_allrunning,1'h0,dmstatus_allhalted,1'h0,2'h2,6'h2}; // @[Debug.scala 145:44:@3612.4]
  assign _T_214 = {13'h0,command_postexec,command_transfer,command_write,command_regno}; // @[Debug.scala 146:41:@3619.4]
  assign _T_230 = {11'h0,sbcs_sbsingleread,sbcs_sbaccess,sbcs_sbautoincrement,sbcs_sbautoread,sbcs_sberror,12'h404}; // @[Debug.scala 159:35:@3630.4]
  assign _T_232 = io_dmi_req_bits_addr == 7'h16; // @[Debug.scala 162:79:@3631.4]
  assign _T_234 = io_dmi_req_bits_addr == 7'h10; // @[Debug.scala 162:79:@3632.4]
  assign _T_236 = io_dmi_req_bits_addr == 7'h11; // @[Debug.scala 162:79:@3633.4]
  assign _T_238 = io_dmi_req_bits_addr == 7'h17; // @[Debug.scala 162:79:@3634.4]
  assign _T_240 = io_dmi_req_bits_addr == 7'h12; // @[Debug.scala 162:79:@3635.4]
  assign _T_246 = io_dmi_req_bits_addr == 7'h4; // @[Debug.scala 162:79:@3638.4]
  assign _T_248 = io_dmi_req_bits_addr == 7'h5; // @[Debug.scala 162:79:@3639.4]
  assign _T_250 = io_dmi_req_bits_addr == 7'h6; // @[Debug.scala 162:79:@3640.4]
  assign _T_264 = io_dmi_req_bits_addr == 7'h38; // @[Debug.scala 162:79:@3647.4]
  assign _T_266 = io_dmi_req_bits_addr == 7'h39; // @[Debug.scala 162:79:@3648.4]
  assign _T_268 = io_dmi_req_bits_addr == 7'h3c; // @[Debug.scala 162:79:@3649.4]
  assign _T_271 = _T_232 ? _T_183 : 32'h0; // @[Mux.scala 19:72:@3650.4]
  assign _T_273 = _T_234 ? _T_191 : 32'h0; // @[Mux.scala 19:72:@3651.4]
  assign _T_275 = _T_236 ? _T_207 : 32'h0; // @[Mux.scala 19:72:@3652.4]
  assign _T_277 = _T_238 ? _T_214 : 32'h0; // @[Mux.scala 19:72:@3653.4]
  assign _T_279 = _T_240 ? 21'h111bc0 : 21'h0; // @[Mux.scala 19:72:@3654.4]
  assign _T_285 = _T_246 ? data0 : 32'h0; // @[Mux.scala 19:72:@3657.4]
  assign _T_287 = _T_248 ? data1 : 32'h0; // @[Mux.scala 19:72:@3658.4]
  assign _T_289 = _T_250 ? data2 : 32'h0; // @[Mux.scala 19:72:@3659.4]
  assign _T_303 = _T_264 ? _T_230 : 32'h0; // @[Mux.scala 19:72:@3666.4]
  assign _T_305 = _T_266 ? sbaddr : 32'h0; // @[Mux.scala 19:72:@3667.4]
  assign _T_307 = _T_268 ? sbdata : 32'h0; // @[Mux.scala 19:72:@3668.4]
  assign _T_308 = _T_271 | _T_273; // @[Mux.scala 19:72:@3669.4]
  assign _T_309 = _T_308 | _T_275; // @[Mux.scala 19:72:@3670.4]
  assign _T_310 = _T_309 | _T_277; // @[Mux.scala 19:72:@3671.4]
  assign _GEN_77 = {{11'd0}, _T_279}; // @[Mux.scala 19:72:@3672.4]
  assign _T_311 = _T_310 | _GEN_77; // @[Mux.scala 19:72:@3672.4]
  assign _T_314 = _T_311 | _T_285; // @[Mux.scala 19:72:@3675.4]
  assign _T_315 = _T_314 | _T_287; // @[Mux.scala 19:72:@3676.4]
  assign _T_316 = _T_315 | _T_289; // @[Mux.scala 19:72:@3677.4]
  assign _T_323 = _T_316 | _T_303; // @[Mux.scala 19:72:@3684.4]
  assign _T_324 = _T_323 | _T_305; // @[Mux.scala 19:72:@3685.4]
  assign _T_332 = io_dmi_req_bits_op == 2'h2; // @[Debug.scala 168:28:@3695.4]
  assign _T_333 = _T_232 & io_dmi_req_valid; // @[Debug.scala 169:54:@3697.6]
  assign _T_341 = io_dmi_req_bits_data[10:8]; // @[Debug.scala 170:42:@3706.8]
  assign _GEN_0 = _T_333 ? _T_341 : abstractcs_cmderr; // @[Debug.scala 169:75:@3698.6]
  assign _T_352 = io_dmi_req_bits_data[15:0]; // @[Debug.scala 174:39:@3724.8]
  assign _T_353 = io_dmi_req_bits_data[16]; // @[Debug.scala 174:39:@3726.8]
  assign _T_354 = io_dmi_req_bits_data[17]; // @[Debug.scala 174:39:@3728.8]
  assign _T_355 = io_dmi_req_bits_data[18]; // @[Debug.scala 174:39:@3730.8]
  assign _T_357 = io_dmi_req_bits_data[22:20]; // @[Debug.scala 174:39:@3734.8]
  assign _T_361 = _T_357 == 3'h2; // @[Debug.scala 175:29:@3740.8]
  assign _GEN_1 = _T_361 ? _T_355 : command_postexec; // @[Debug.scala 175:37:@3741.8]
  assign _GEN_2 = _T_361 ? _T_352 : command_regno; // @[Debug.scala 175:37:@3741.8]
  assign _GEN_3 = _T_361 ? _T_354 : command_transfer; // @[Debug.scala 175:37:@3741.8]
  assign _GEN_4 = _T_361 ? _T_353 : command_write; // @[Debug.scala 175:37:@3741.8]
  assign _GEN_5 = _T_361 ? 2'h1 : 2'h2; // @[Debug.scala 175:37:@3741.8]
  assign _GEN_6 = _T_238 ? _GEN_1 : command_postexec; // @[Debug.scala 173:50:@3720.6]
  assign _GEN_7 = _T_238 ? _GEN_2 : command_regno; // @[Debug.scala 173:50:@3720.6]
  assign _GEN_8 = _T_238 ? _GEN_3 : command_transfer; // @[Debug.scala 173:50:@3720.6]
  assign _GEN_9 = _T_238 ? _GEN_4 : command_write; // @[Debug.scala 173:50:@3720.6]
  assign _GEN_10 = _T_238 ? {{1'd0}, _GEN_5} : _GEN_0; // @[Debug.scala 173:50:@3720.6]
  assign _T_369 = io_dmi_req_bits_data[0]; // @[Debug.scala 186:39:@3756.8]
  assign _T_370 = io_dmi_req_bits_data[1]; // @[Debug.scala 186:39:@3758.8]
  assign _T_375 = io_dmi_req_bits_data[29]; // @[Debug.scala 186:39:@3768.8]
  assign _T_376 = io_dmi_req_bits_data[30]; // @[Debug.scala 186:39:@3770.8]
  assign _T_377 = io_dmi_req_bits_data[31]; // @[Debug.scala 186:39:@3772.8]
  assign _GEN_11 = _T_234 ? _T_377 : dmcontrol_haltreq; // @[Debug.scala 185:52:@3752.6]
  assign _GEN_12 = _T_234 ? _T_376 : dmcontrol_resumereq; // @[Debug.scala 185:52:@3752.6]
  assign _GEN_13 = _T_234 ? _T_375 : dmcontrol_hartreset; // @[Debug.scala 185:52:@3752.6]
  assign _GEN_14 = _T_234 ? _T_370 : dmcontrol_ndmreset; // @[Debug.scala 185:52:@3752.6]
  assign _GEN_15 = _T_234 ? _T_369 : dmcontrol_dmactive; // @[Debug.scala 185:52:@3752.6]
  assign _T_389 = io_dmi_req_bits_data[14:12]; // @[Debug.scala 194:36:@3796.8]
  assign _T_390 = io_dmi_req_bits_data[15]; // @[Debug.scala 194:36:@3798.8]
  assign _T_392 = io_dmi_req_bits_data[19:17]; // @[Debug.scala 194:36:@3802.8]
  assign _T_393 = io_dmi_req_bits_data[20]; // @[Debug.scala 194:36:@3804.8]
  assign _GEN_16 = _T_264 ? _T_393 : sbcs_sbsingleread; // @[Debug.scala 193:46:@3780.6]
  assign _GEN_17 = _T_264 ? _T_392 : sbcs_sbaccess; // @[Debug.scala 193:46:@3780.6]
  assign _GEN_18 = _T_264 ? _T_353 : sbcs_sbautoincrement; // @[Debug.scala 193:46:@3780.6]
  assign _GEN_19 = _T_264 ? _T_390 : sbcs_sbautoread; // @[Debug.scala 193:46:@3780.6]
  assign _GEN_20 = _T_264 ? _T_389 : sbcs_sberror; // @[Debug.scala 193:46:@3780.6]
  assign _GEN_21 = _T_266 ? io_dmi_req_bits_data : sbaddr; // @[Debug.scala 201:53:@3814.6]
  assign _T_395 = sbcs_sbautoincrement & io_dmi_req_valid; // @[Debug.scala 208:33:@3823.8]
  assign _T_397 = sbaddr + 32'h4; // @[Debug.scala 210:26:@3825.10]
  assign _T_398 = sbaddr + 32'h4; // @[Debug.scala 210:26:@3826.10]
  assign _GEN_22 = _T_395 ? _T_398 : _GEN_21; // @[Debug.scala 209:7:@3824.8]
  assign _GEN_23 = _T_268 ? io_dmi_req_bits_data : sbdata; // @[Debug.scala 202:50:@3817.6]
  assign _GEN_28 = _T_268 ? _GEN_22 : _GEN_21; // @[Debug.scala 202:50:@3817.6]
  assign _GEN_29 = _T_246 ? io_dmi_req_bits_data : data0; // @[Debug.scala 213:48:@3830.6]
  assign _GEN_30 = _T_248 ? io_dmi_req_bits_data : data1; // @[Debug.scala 214:50:@3833.6]
  assign _GEN_31 = _T_250 ? io_dmi_req_bits_data : data2; // @[Debug.scala 215:50:@3836.6]
  assign _GEN_32 = _T_332 ? _GEN_10 : abstractcs_cmderr; // @[Debug.scala 168:54:@3696.4]
  assign _GEN_42 = _T_332 ? _GEN_16 : sbcs_sbsingleread; // @[Debug.scala 168:54:@3696.4]
  assign _GEN_43 = _T_332 ? _GEN_17 : sbcs_sbaccess; // @[Debug.scala 168:54:@3696.4]
  assign _GEN_44 = _T_332 ? _GEN_18 : sbcs_sbautoincrement; // @[Debug.scala 168:54:@3696.4]
  assign _GEN_45 = _T_332 ? _GEN_19 : sbcs_sbautoread; // @[Debug.scala 168:54:@3696.4]
  assign _GEN_46 = _T_332 ? _GEN_20 : sbcs_sberror; // @[Debug.scala 168:54:@3696.4]
  assign _GEN_47 = _T_332 ? _GEN_28 : sbaddr; // @[Debug.scala 168:54:@3696.4]
  assign _GEN_48 = _T_332 ? _GEN_23 : sbdata; // @[Debug.scala 168:54:@3696.4]
  assign _GEN_53 = _T_332 ? _GEN_29 : data0; // @[Debug.scala 168:54:@3696.4]
  assign _T_400 = command_regno & 16'hfff; // @[Debug.scala 219:35:@3840.4]
  assign _T_402 = abstractcs_cmderr != 3'h0; // @[Debug.scala 220:46:@3842.4]
  assign _T_403 = command_transfer & _T_402; // @[Debug.scala 220:25:@3843.4]
  assign _GEN_58 = command_write ? _GEN_53 : io_ddpath_rdata; // @[Debug.scala 221:24:@3845.6]
  assign _GEN_62 = _T_403 ? 3'h0 : _GEN_32; // @[Debug.scala 220:54:@3844.4]
  assign _T_408 = _T_268 & _T_332; // @[Debug.scala 230:49:@3855.4]
  assign _T_410 = _T_408 == 1'h0; // @[Debug.scala 230:8:@3856.4]
  assign _GEN_63 = _T_410 ? 1'h0 : 1'h1; // @[Debug.scala 230:98:@3857.4]
  assign _T_417 = io_dmi_req_bits_op == 2'h1; // @[Debug.scala 239:72:@3865.4]
  assign _T_418 = _T_268 & _T_417; // @[Debug.scala 239:49:@3866.4]
  assign _T_419 = sbcs_sbautoread & firstreaddone; // @[Debug.scala 239:119:@3867.4]
  assign _T_420 = _T_418 | _T_419; // @[Debug.scala 239:99:@3868.4]
  assign _GEN_64 = io_debugmem_resp_valid ? io_debugmem_resp_bits_data : _GEN_48; // @[Debug.scala 245:33:@3873.6]
  assign _GEN_68 = _T_420 ? _GEN_64 : _GEN_48; // @[Debug.scala 239:137:@3869.4]
  assign _GEN_69 = _T_420 ? 1'h1 : memreadfire; // @[Debug.scala 239:137:@3869.4]
  assign _GEN_70 = _T_420 ? 1'h1 : firstreaddone; // @[Debug.scala 239:137:@3869.4]
  assign _T_423 = memreadfire & io_debugmem_resp_valid; // @[Debug.scala 252:20:@3879.4]
  assign _GEN_71 = sbcs_sbautoincrement ? _T_398 : _GEN_47; // @[Debug.scala 259:5:@3883.6]
  assign _GEN_73 = _T_423 ? 1'h0 : _GEN_69; // @[Debug.scala 253:3:@3880.4]
  assign _T_429 = _T_268 == 1'h0; // @[Debug.scala 264:8:@3889.4]
  assign _T_432 = io_dmi_req_bits_addr == 7'h44; // @[Debug.scala 270:30:@3894.4]
  assign _T_433 = _T_432 & io_dmi_req_valid; // @[Debug.scala 270:43:@3895.4]
  assign _GEN_76 = _T_433 ? 1'h0 : coreresetval; // @[Debug.scala 270:63:@3896.4]
  assign io_dmi_req_ready = io_dmi_req_valid; // @[Debug.scala 110:20:@3518.4]
  assign io_dmi_resp_valid = firstreaddone ? _T_414 : io_dmi_req_valid; // @[Debug.scala 237:21:@3864.4]
  assign io_dmi_resp_bits_data = _T_324 | _T_307; // @[Debug.scala 163:25:@3689.4]
  assign io_ddpath_addr = _T_400[4:0]; // @[Debug.scala 219:18:@3841.4]
  assign io_ddpath_wdata = data0; // @[Debug.scala 222:23:@3846.8]
  assign io_debugmem_req_valid = io_dmi_req_valid; // @[Debug.scala 207:29:@3822.8 Debug.scala 242:27:@3872.6]
  assign io_debugmem_req_bits_addr = sbaddr; // @[Debug.scala 204:33:@3819.8 Debug.scala 240:31:@3870.6]
  assign io_debugmem_req_bits_data = sbdata; // @[Debug.scala 205:33:@3820.8]
  assign io_debugmem_req_bits_fcn = _T_420 ? 1'h0 : _GEN_63; // @[Debug.scala 206:32:@3821.8 Debug.scala 231:30:@3858.6 Debug.scala 241:30:@3871.6]
  assign io_resetcore = coreresetval; // @[Debug.scala 268:16:@3893.4]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  dmstatus_allrunning = _RAND_0[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  dmstatus_allhalted = _RAND_1[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  sbcs_sbsingleread = _RAND_2[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  sbcs_sbaccess = _RAND_3[2:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  sbcs_sbautoincrement = _RAND_4[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  sbcs_sbautoread = _RAND_5[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  sbcs_sberror = _RAND_6[2:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  abstractcs_cmderr = _RAND_7[2:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  command_postexec = _RAND_8[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_9 = {1{`RANDOM}};
  command_transfer = _RAND_9[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_10 = {1{`RANDOM}};
  command_write = _RAND_10[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_11 = {1{`RANDOM}};
  command_regno = _RAND_11[15:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_12 = {1{`RANDOM}};
  dmcontrol_haltreq = _RAND_12[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_13 = {1{`RANDOM}};
  dmcontrol_resumereq = _RAND_13[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_14 = {1{`RANDOM}};
  dmcontrol_hartreset = _RAND_14[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_15 = {1{`RANDOM}};
  dmcontrol_ndmreset = _RAND_15[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_16 = {1{`RANDOM}};
  dmcontrol_dmactive = _RAND_16[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_17 = {1{`RANDOM}};
  data0 = _RAND_17[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_18 = {1{`RANDOM}};
  data1 = _RAND_18[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_19 = {1{`RANDOM}};
  data2 = _RAND_19[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_20 = {1{`RANDOM}};
  sbaddr = _RAND_20[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_21 = {1{`RANDOM}};
  sbdata = _RAND_21[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_22 = {1{`RANDOM}};
  memreadfire = _RAND_22[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_23 = {1{`RANDOM}};
  coreresetval = _RAND_23[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_24 = {1{`RANDOM}};
  firstreaddone = _RAND_24[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_25 = {1{`RANDOM}};
  _T_414 = _RAND_25[0:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      dmstatus_allrunning <= 1'h0;
    end else begin
      dmstatus_allrunning <= dmcontrol_resumereq;
    end
    if (reset) begin
      dmstatus_allhalted <= 1'h0;
    end else begin
      dmstatus_allhalted <= dmcontrol_haltreq;
    end
    if (reset) begin
      sbcs_sbsingleread <= 1'h0;
    end else begin
      if (_T_332) begin
        if (_T_264) begin
          sbcs_sbsingleread <= _T_393;
        end
      end
    end
    if (reset) begin
      sbcs_sbaccess <= 3'h2;
    end else begin
      if (_T_332) begin
        if (_T_264) begin
          sbcs_sbaccess <= _T_392;
        end
      end
    end
    if (reset) begin
      sbcs_sbautoincrement <= 1'h0;
    end else begin
      if (_T_332) begin
        if (_T_264) begin
          sbcs_sbautoincrement <= _T_353;
        end
      end
    end
    if (reset) begin
      sbcs_sbautoread <= 1'h0;
    end else begin
      if (_T_332) begin
        if (_T_264) begin
          sbcs_sbautoread <= _T_390;
        end
      end
    end
    if (reset) begin
      sbcs_sberror <= 3'h0;
    end else begin
      if (_T_332) begin
        if (_T_264) begin
          sbcs_sberror <= _T_389;
        end
      end
    end
    if (reset) begin
      abstractcs_cmderr <= 3'h0;
    end else begin
      if (_T_403) begin
        abstractcs_cmderr <= 3'h0;
      end else begin
        if (_T_332) begin
          if (_T_238) begin
            abstractcs_cmderr <= {{1'd0}, _GEN_5};
          end else begin
            if (_T_333) begin
              abstractcs_cmderr <= _T_341;
            end
          end
        end
      end
    end
    if (_T_332) begin
      if (_T_238) begin
        if (_T_361) begin
          command_postexec <= _T_355;
        end
      end
    end
    if (_T_332) begin
      if (_T_238) begin
        if (_T_361) begin
          command_transfer <= _T_354;
        end
      end
    end
    if (_T_332) begin
      if (_T_238) begin
        if (_T_361) begin
          command_write <= _T_353;
        end
      end
    end
    if (_T_332) begin
      if (_T_238) begin
        if (_T_361) begin
          command_regno <= _T_352;
        end
      end
    end
    if (_T_332) begin
      if (_T_234) begin
        dmcontrol_haltreq <= _T_377;
      end
    end
    if (_T_332) begin
      if (_T_234) begin
        dmcontrol_resumereq <= _T_376;
      end
    end
    if (_T_332) begin
      if (_T_234) begin
        dmcontrol_hartreset <= _T_375;
      end
    end
    if (_T_332) begin
      if (_T_234) begin
        dmcontrol_ndmreset <= _T_370;
      end
    end
    if (_T_332) begin
      if (_T_234) begin
        dmcontrol_dmactive <= _T_369;
      end
    end
    if (_T_403) begin
      if (command_write) begin
        if (_T_332) begin
          if (_T_246) begin
            data0 <= io_dmi_req_bits_data;
          end
        end
      end else begin
        data0 <= io_ddpath_rdata;
      end
    end else begin
      if (_T_332) begin
        if (_T_246) begin
          data0 <= io_dmi_req_bits_data;
        end
      end
    end
    if (_T_332) begin
      if (_T_248) begin
        data1 <= io_dmi_req_bits_data;
      end
    end
    if (_T_332) begin
      if (_T_250) begin
        data2 <= io_dmi_req_bits_data;
      end
    end
    if (_T_423) begin
      if (sbcs_sbautoincrement) begin
        sbaddr <= _T_398;
      end else begin
        if (_T_332) begin
          if (_T_268) begin
            if (_T_395) begin
              sbaddr <= _T_398;
            end else begin
              if (_T_266) begin
                sbaddr <= io_dmi_req_bits_data;
              end
            end
          end else begin
            if (_T_266) begin
              sbaddr <= io_dmi_req_bits_data;
            end
          end
        end
      end
    end else begin
      if (_T_332) begin
        if (_T_268) begin
          if (_T_395) begin
            sbaddr <= _T_398;
          end else begin
            if (_T_266) begin
              sbaddr <= io_dmi_req_bits_data;
            end
          end
        end else begin
          if (_T_266) begin
            sbaddr <= io_dmi_req_bits_data;
          end
        end
      end
    end
    if (_T_423) begin
      sbdata <= io_debugmem_resp_bits_data;
    end else begin
      if (_T_420) begin
        if (io_debugmem_resp_valid) begin
          sbdata <= io_debugmem_resp_bits_data;
        end else begin
          if (_T_332) begin
            if (_T_268) begin
              sbdata <= io_dmi_req_bits_data;
            end
          end
        end
      end else begin
        if (_T_332) begin
          if (_T_268) begin
            sbdata <= io_dmi_req_bits_data;
          end
        end
      end
    end
    if (reset) begin
      memreadfire <= 1'h0;
    end else begin
      if (_T_423) begin
        memreadfire <= 1'h0;
      end else begin
        if (_T_420) begin
          memreadfire <= 1'h1;
        end
      end
    end
    if (reset) begin
      coreresetval <= 1'h1;
    end else begin
      if (_T_433) begin
        coreresetval <= 1'h0;
      end
    end
    if (_T_429) begin
      firstreaddone <= 1'h0;
    end else begin
      if (_T_420) begin
        firstreaddone <= 1'h1;
      end
    end
    _T_414 <= io_debugmem_resp_valid;
  end
endmodule
module Tile( // @[:@3900.2]
  input         clock, // @[:@3901.4]
  input         reset, // @[:@3902.4]
  output        io_dmi_req_ready, // @[:@3903.4]
  input         io_dmi_req_valid, // @[:@3903.4]
  input  [1:0]  io_dmi_req_bits_op, // @[:@3903.4]
  input  [6:0]  io_dmi_req_bits_addr, // @[:@3903.4]
  input  [31:0] io_dmi_req_bits_data, // @[:@3903.4]
  output        io_dmi_resp_valid, // @[:@3903.4]
  output [31:0] io_dmi_resp_bits_data // @[:@3903.4]
);
  wire  core_clock; // @[Tile.scala 30:23:@3905.4]
  wire  core_reset; // @[Tile.scala 30:23:@3905.4]
  wire [4:0] core_io_ddpath_addr; // @[Tile.scala 30:23:@3905.4]
  wire [31:0] core_io_ddpath_wdata; // @[Tile.scala 30:23:@3905.4]
  wire [31:0] core_io_ddpath_rdata; // @[Tile.scala 30:23:@3905.4]
  wire [31:0] core_io_imem_req_bits_addr; // @[Tile.scala 30:23:@3905.4]
  wire [31:0] core_io_imem_resp_bits_data; // @[Tile.scala 30:23:@3905.4]
  wire [31:0] core_io_dmem_req_bits_addr; // @[Tile.scala 30:23:@3905.4]
  wire [31:0] core_io_dmem_req_bits_data; // @[Tile.scala 30:23:@3905.4]
  wire  core_io_dmem_req_bits_fcn; // @[Tile.scala 30:23:@3905.4]
  wire [2:0] core_io_dmem_req_bits_typ; // @[Tile.scala 30:23:@3905.4]
  wire [31:0] core_io_dmem_resp_bits_data; // @[Tile.scala 30:23:@3905.4]
  wire  memory_clock; // @[Tile.scala 32:23:@3930.4]
  wire [31:0] memory_io_core_ports_0_req_bits_addr; // @[Tile.scala 32:23:@3930.4]
  wire [31:0] memory_io_core_ports_0_req_bits_data; // @[Tile.scala 32:23:@3930.4]
  wire  memory_io_core_ports_0_req_bits_fcn; // @[Tile.scala 32:23:@3930.4]
  wire [2:0] memory_io_core_ports_0_req_bits_typ; // @[Tile.scala 32:23:@3930.4]
  wire [31:0] memory_io_core_ports_0_resp_bits_data; // @[Tile.scala 32:23:@3930.4]
  wire [31:0] memory_io_core_ports_1_req_bits_addr; // @[Tile.scala 32:23:@3930.4]
  wire [31:0] memory_io_core_ports_1_resp_bits_data; // @[Tile.scala 32:23:@3930.4]
  wire  memory_io_debug_port_req_valid; // @[Tile.scala 32:23:@3930.4]
  wire [31:0] memory_io_debug_port_req_bits_addr; // @[Tile.scala 32:23:@3930.4]
  wire [31:0] memory_io_debug_port_req_bits_data; // @[Tile.scala 32:23:@3930.4]
  wire  memory_io_debug_port_req_bits_fcn; // @[Tile.scala 32:23:@3930.4]
  wire  memory_io_debug_port_resp_valid; // @[Tile.scala 32:23:@3930.4]
  wire [31:0] memory_io_debug_port_resp_bits_data; // @[Tile.scala 32:23:@3930.4]
  wire  debug_clock; // @[Tile.scala 33:22:@3933.4]
  wire  debug_reset; // @[Tile.scala 33:22:@3933.4]
  wire  debug_io_dmi_req_ready; // @[Tile.scala 33:22:@3933.4]
  wire  debug_io_dmi_req_valid; // @[Tile.scala 33:22:@3933.4]
  wire [1:0] debug_io_dmi_req_bits_op; // @[Tile.scala 33:22:@3933.4]
  wire [6:0] debug_io_dmi_req_bits_addr; // @[Tile.scala 33:22:@3933.4]
  wire [31:0] debug_io_dmi_req_bits_data; // @[Tile.scala 33:22:@3933.4]
  wire  debug_io_dmi_resp_valid; // @[Tile.scala 33:22:@3933.4]
  wire [31:0] debug_io_dmi_resp_bits_data; // @[Tile.scala 33:22:@3933.4]
  wire [4:0] debug_io_ddpath_addr; // @[Tile.scala 33:22:@3933.4]
  wire [31:0] debug_io_ddpath_wdata; // @[Tile.scala 33:22:@3933.4]
  wire [31:0] debug_io_ddpath_rdata; // @[Tile.scala 33:22:@3933.4]
  wire  debug_io_debugmem_req_valid; // @[Tile.scala 33:22:@3933.4]
  wire [31:0] debug_io_debugmem_req_bits_addr; // @[Tile.scala 33:22:@3933.4]
  wire [31:0] debug_io_debugmem_req_bits_data; // @[Tile.scala 33:22:@3933.4]
  wire  debug_io_debugmem_req_bits_fcn; // @[Tile.scala 33:22:@3933.4]
  wire  debug_io_debugmem_resp_valid; // @[Tile.scala 33:22:@3933.4]
  wire [31:0] debug_io_debugmem_resp_bits_data; // @[Tile.scala 33:22:@3933.4]
  wire  debug_io_resetcore; // @[Tile.scala 33:22:@3933.4]
  Core core ( // @[Tile.scala 30:23:@3905.4]
    .clock(core_clock),
    .reset(core_reset),
    .io_ddpath_addr(core_io_ddpath_addr),
    .io_ddpath_wdata(core_io_ddpath_wdata),
    .io_ddpath_rdata(core_io_ddpath_rdata),
    .io_imem_req_bits_addr(core_io_imem_req_bits_addr),
    .io_imem_resp_bits_data(core_io_imem_resp_bits_data),
    .io_dmem_req_bits_addr(core_io_dmem_req_bits_addr),
    .io_dmem_req_bits_data(core_io_dmem_req_bits_data),
    .io_dmem_req_bits_fcn(core_io_dmem_req_bits_fcn),
    .io_dmem_req_bits_typ(core_io_dmem_req_bits_typ),
    .io_dmem_resp_bits_data(core_io_dmem_resp_bits_data)
  );
  SyncScratchPadMemory memory ( // @[Tile.scala 32:23:@3930.4]
    .clock(memory_clock),
    .io_core_ports_0_req_bits_addr(memory_io_core_ports_0_req_bits_addr),
    .io_core_ports_0_req_bits_data(memory_io_core_ports_0_req_bits_data),
    .io_core_ports_0_req_bits_fcn(memory_io_core_ports_0_req_bits_fcn),
    .io_core_ports_0_req_bits_typ(memory_io_core_ports_0_req_bits_typ),
    .io_core_ports_0_resp_bits_data(memory_io_core_ports_0_resp_bits_data),
    .io_core_ports_1_req_bits_addr(memory_io_core_ports_1_req_bits_addr),
    .io_core_ports_1_resp_bits_data(memory_io_core_ports_1_resp_bits_data),
    .io_debug_port_req_valid(memory_io_debug_port_req_valid),
    .io_debug_port_req_bits_addr(memory_io_debug_port_req_bits_addr),
    .io_debug_port_req_bits_data(memory_io_debug_port_req_bits_data),
    .io_debug_port_req_bits_fcn(memory_io_debug_port_req_bits_fcn),
    .io_debug_port_resp_valid(memory_io_debug_port_resp_valid),
    .io_debug_port_resp_bits_data(memory_io_debug_port_resp_bits_data)
  );
  DebugModule debug ( // @[Tile.scala 33:22:@3933.4]
    .clock(debug_clock),
    .reset(debug_reset),
    .io_dmi_req_ready(debug_io_dmi_req_ready),
    .io_dmi_req_valid(debug_io_dmi_req_valid),
    .io_dmi_req_bits_op(debug_io_dmi_req_bits_op),
    .io_dmi_req_bits_addr(debug_io_dmi_req_bits_addr),
    .io_dmi_req_bits_data(debug_io_dmi_req_bits_data),
    .io_dmi_resp_valid(debug_io_dmi_resp_valid),
    .io_dmi_resp_bits_data(debug_io_dmi_resp_bits_data),
    .io_ddpath_addr(debug_io_ddpath_addr),
    .io_ddpath_wdata(debug_io_ddpath_wdata),
    .io_ddpath_rdata(debug_io_ddpath_rdata),
    .io_debugmem_req_valid(debug_io_debugmem_req_valid),
    .io_debugmem_req_bits_addr(debug_io_debugmem_req_bits_addr),
    .io_debugmem_req_bits_data(debug_io_debugmem_req_bits_data),
    .io_debugmem_req_bits_fcn(debug_io_debugmem_req_bits_fcn),
    .io_debugmem_resp_valid(debug_io_debugmem_resp_valid),
    .io_debugmem_resp_bits_data(debug_io_debugmem_resp_bits_data),
    .io_resetcore(debug_io_resetcore)
  );
  assign io_dmi_req_ready = debug_io_dmi_req_ready; // @[Tile.scala 53:17:@3977.4]
  assign io_dmi_resp_valid = debug_io_dmi_resp_valid; // @[Tile.scala 53:17:@3971.4]
  assign io_dmi_resp_bits_data = debug_io_dmi_resp_bits_data; // @[Tile.scala 53:17:@3970.4]
  assign core_clock = clock; // @[:@3906.4]
  assign core_reset = debug_io_resetcore | reset; // @[:@3907.4 Tile.scala 34:15:@3938.4]
  assign core_io_ddpath_addr = debug_io_ddpath_addr; // @[Tile.scala 51:20:@3967.4]
  assign core_io_ddpath_wdata = debug_io_ddpath_wdata; // @[Tile.scala 51:20:@3966.4]
  assign core_io_imem_resp_bits_data = memory_io_core_ports_1_resp_bits_data; // @[Tile.scala 45:20:@3939.4]
  assign core_io_dmem_resp_bits_data = memory_io_core_ports_0_resp_bits_data; // @[Tile.scala 46:20:@3947.4]
  assign memory_clock = clock; // @[:@3931.4]
  assign memory_io_core_ports_0_req_bits_addr = core_io_dmem_req_bits_addr; // @[Tile.scala 46:20:@3952.4]
  assign memory_io_core_ports_0_req_bits_data = core_io_dmem_req_bits_data; // @[Tile.scala 46:20:@3951.4]
  assign memory_io_core_ports_0_req_bits_fcn = core_io_dmem_req_bits_fcn; // @[Tile.scala 46:20:@3950.4]
  assign memory_io_core_ports_0_req_bits_typ = core_io_dmem_req_bits_typ; // @[Tile.scala 46:20:@3949.4]
  assign memory_io_core_ports_1_req_bits_addr = core_io_imem_req_bits_addr; // @[Tile.scala 45:20:@3944.4]
  assign memory_io_debug_port_req_valid = debug_io_debugmem_req_valid; // @[Tile.scala 50:22:@3961.4]
  assign memory_io_debug_port_req_bits_addr = debug_io_debugmem_req_bits_addr; // @[Tile.scala 50:22:@3960.4]
  assign memory_io_debug_port_req_bits_data = debug_io_debugmem_req_bits_data; // @[Tile.scala 50:22:@3959.4]
  assign memory_io_debug_port_req_bits_fcn = debug_io_debugmem_req_bits_fcn; // @[Tile.scala 50:22:@3958.4]
  assign debug_clock = clock; // @[:@3934.4]
  assign debug_reset = reset; // @[:@3935.4]
  assign debug_io_dmi_req_valid = io_dmi_req_valid; // @[Tile.scala 53:17:@3976.4]
  assign debug_io_dmi_req_bits_op = io_dmi_req_bits_op; // @[Tile.scala 53:17:@3975.4]
  assign debug_io_dmi_req_bits_addr = io_dmi_req_bits_addr; // @[Tile.scala 53:17:@3974.4]
  assign debug_io_dmi_req_bits_data = io_dmi_req_bits_data; // @[Tile.scala 53:17:@3973.4]
  assign debug_io_ddpath_rdata = core_io_ddpath_rdata; // @[Tile.scala 51:20:@3964.4]
  assign debug_io_debugmem_resp_valid = memory_io_debug_port_resp_valid; // @[Tile.scala 50:22:@3956.4]
  assign debug_io_debugmem_resp_bits_data = memory_io_debug_port_resp_bits_data; // @[Tile.scala 50:22:@3955.4]
endmodule
module Top( // @[:@3988.2]
  input   clock, // @[:@3989.4]
  input   reset, // @[:@3990.4]
  output  io_success // @[:@3991.4]
);
  wire  tile_clock; // @[Top.scala 13:21:@3993.4]
  wire  tile_reset; // @[Top.scala 13:21:@3993.4]
  wire  tile_io_dmi_req_ready; // @[Top.scala 13:21:@3993.4]
  wire  tile_io_dmi_req_valid; // @[Top.scala 13:21:@3993.4]
  wire [1:0] tile_io_dmi_req_bits_op; // @[Top.scala 13:21:@3993.4]
  wire [6:0] tile_io_dmi_req_bits_addr; // @[Top.scala 13:21:@3993.4]
  wire [31:0] tile_io_dmi_req_bits_data; // @[Top.scala 13:21:@3993.4]
  wire  tile_io_dmi_resp_valid; // @[Top.scala 13:21:@3993.4]
  wire [31:0] tile_io_dmi_resp_bits_data; // @[Top.scala 13:21:@3993.4]
  wire [31:0] SimDTM_exit; // @[Top.scala 14:20:@3996.4]
  wire  SimDTM_debug_req_ready; // @[Top.scala 14:20:@3996.4]
  wire  SimDTM_debug_req_valid; // @[Top.scala 14:20:@3996.4]
  wire [1:0] SimDTM_debug_req_bits_op; // @[Top.scala 14:20:@3996.4]
  wire [6:0] SimDTM_debug_req_bits_addr; // @[Top.scala 14:20:@3996.4]
  wire [31:0] SimDTM_debug_req_bits_data; // @[Top.scala 14:20:@3996.4]
  wire  SimDTM_debug_resp_ready; // @[Top.scala 14:20:@3996.4]
  wire  SimDTM_debug_resp_valid; // @[Top.scala 14:20:@3996.4]
  wire [31:0] SimDTM_debug_resp_bits_data; // @[Top.scala 14:20:@3996.4]
  wire [1:0] SimDTM_debug_resp_bits_resp; // @[Top.scala 14:20:@3996.4]
  wire  SimDTM_reset; // @[Top.scala 14:20:@3996.4]
  wire  SimDTM_clk; // @[Top.scala 14:20:@3996.4]
  wire  _T_11; // @[Debug.scala 75:19:@4015.4]
  wire [31:0] _T_13; // @[Debug.scala 76:59:@4017.6]
  wire  _T_16; // @[Debug.scala 76:13:@4019.6]
  Tile tile ( // @[Top.scala 13:21:@3993.4]
    .clock(tile_clock),
    .reset(tile_reset),
    .io_dmi_req_ready(tile_io_dmi_req_ready),
    .io_dmi_req_valid(tile_io_dmi_req_valid),
    .io_dmi_req_bits_op(tile_io_dmi_req_bits_op),
    .io_dmi_req_bits_addr(tile_io_dmi_req_bits_addr),
    .io_dmi_req_bits_data(tile_io_dmi_req_bits_data),
    .io_dmi_resp_valid(tile_io_dmi_resp_valid),
    .io_dmi_resp_bits_data(tile_io_dmi_resp_bits_data)
  );
  SimDTM SimDTM ( // @[Top.scala 14:20:@3996.4]
    .exit(SimDTM_exit),
    .debug_req_ready(SimDTM_debug_req_ready),
    .debug_req_valid(SimDTM_debug_req_valid),
    .debug_req_bits_op(SimDTM_debug_req_bits_op),
    .debug_req_bits_addr(SimDTM_debug_req_bits_addr),
    .debug_req_bits_data(SimDTM_debug_req_bits_data),
    .debug_resp_ready(SimDTM_debug_resp_ready),
    .debug_resp_valid(SimDTM_debug_resp_valid),
    .debug_resp_bits_data(SimDTM_debug_resp_bits_data),
    .debug_resp_bits_resp(SimDTM_debug_resp_bits_resp),
    .reset(SimDTM_reset),
    .clk(SimDTM_clk)
  );
  assign _T_11 = SimDTM_exit >= 32'h2; // @[Debug.scala 75:19:@4015.4]
  assign _T_13 = SimDTM_exit >> 1'h1; // @[Debug.scala 76:59:@4017.6]
  assign _T_16 = reset == 1'h0; // @[Debug.scala 76:13:@4019.6]
  assign io_success = SimDTM_exit == 32'h1; // @[Debug.scala 74:15:@4014.4]
  assign tile_clock = clock; // @[:@3994.4]
  assign tile_reset = reset; // @[:@3995.4]
  assign tile_io_dmi_req_valid = SimDTM_debug_req_valid; // @[Debug.scala 72:11:@4011.4]
  assign tile_io_dmi_req_bits_op = SimDTM_debug_req_bits_op; // @[Debug.scala 72:11:@4010.4]
  assign tile_io_dmi_req_bits_addr = SimDTM_debug_req_bits_addr; // @[Debug.scala 72:11:@4009.4]
  assign tile_io_dmi_req_bits_data = SimDTM_debug_req_bits_data; // @[Debug.scala 72:11:@4008.4]
  assign SimDTM_debug_req_ready = tile_io_dmi_req_ready; // @[Debug.scala 72:11:@4012.4]
  assign SimDTM_debug_resp_valid = tile_io_dmi_resp_valid; // @[Debug.scala 72:11:@4006.4]
  assign SimDTM_debug_resp_bits_data = tile_io_dmi_resp_bits_data; // @[Debug.scala 72:11:@4005.4]
  assign SimDTM_debug_resp_bits_resp = 2'h0; // @[Debug.scala 72:11:@4004.4]
  assign SimDTM_reset = reset; // @[Debug.scala 71:14:@4003.4]
  assign SimDTM_clk = clock; // @[Debug.scala 70:12:@4002.4]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_11 & _T_16) begin
          $fwrite(32'h80000002,"*** FAILED *** (exit code = %d)\n",_T_13); // @[Debug.scala 76:13:@4021.8]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
