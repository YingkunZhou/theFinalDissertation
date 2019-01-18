module OneHotEncoder(
  input        clock,
  input        reset,
  input        io_in_0,
  input        io_in_1,
  input        io_in_2,
  input        io_in_3,
  input        io_in_4,
  input        io_in_5,
  input        io_in_6,
  input        io_in_7,
  input        io_in_8,
  input        io_in_9,
  input        io_in_10,
  input        io_in_11,
  input        io_in_12,
  input        io_in_13,
  input        io_in_14,
  input        io_in_15,
  output [3:0] io_out
);
  wire [3:0] _T_76; // @[OneHotEncoder.scala 12:94]
  wire [3:0] _T_78; // @[OneHotEncoder.scala 12:97]
  wire [3:0] _T_91; // @[OneHotEncoder.scala 12:94]
  wire [3:0] _T_93; // @[OneHotEncoder.scala 12:97]
  wire [3:0] _T_106; // @[OneHotEncoder.scala 12:94]
  wire [3:0] _T_108; // @[OneHotEncoder.scala 12:97]
  wire [3:0] _T_121; // @[OneHotEncoder.scala 12:94]
  wire [3:0] _T_123; // @[OneHotEncoder.scala 12:97]
  wire [3:0] _T_136; // @[OneHotEncoder.scala 12:94]
  wire [3:0] _T_138; // @[OneHotEncoder.scala 12:97]
  wire [3:0] _T_151; // @[OneHotEncoder.scala 12:94]
  wire [3:0] _T_153; // @[OneHotEncoder.scala 12:97]
  wire [3:0] _T_166; // @[OneHotEncoder.scala 12:94]
  wire [3:0] _T_168; // @[OneHotEncoder.scala 12:97]
  wire [3:0] _T_181; // @[OneHotEncoder.scala 12:94]
  wire [3:0] _T_183; // @[OneHotEncoder.scala 12:97]
  wire [3:0] _T_196; // @[OneHotEncoder.scala 12:94]
  wire [3:0] _T_198; // @[OneHotEncoder.scala 12:97]
  wire [3:0] _T_211; // @[OneHotEncoder.scala 12:94]
  wire [3:0] _T_213; // @[OneHotEncoder.scala 12:97]
  wire [3:0] _T_226; // @[OneHotEncoder.scala 12:94]
  wire [3:0] _T_228; // @[OneHotEncoder.scala 12:97]
  wire [3:0] _T_241; // @[OneHotEncoder.scala 12:94]
  wire [3:0] _T_243; // @[OneHotEncoder.scala 12:97]
  wire [3:0] _T_256; // @[OneHotEncoder.scala 12:94]
  wire [3:0] _T_258; // @[OneHotEncoder.scala 12:97]
  wire [3:0] _T_271; // @[OneHotEncoder.scala 12:94]
  wire [3:0] _T_273; // @[OneHotEncoder.scala 12:97]
  wire [3:0] _T_286; // @[OneHotEncoder.scala 12:94]
  wire [3:0] _T_290; // @[OneHotEncoder.scala 12:113]
  wire [3:0] _T_291; // @[OneHotEncoder.scala 12:113]
  wire [3:0] _T_292; // @[OneHotEncoder.scala 12:113]
  wire [3:0] _T_293; // @[OneHotEncoder.scala 12:113]
  wire [3:0] _T_294; // @[OneHotEncoder.scala 12:113]
  wire [3:0] _T_295; // @[OneHotEncoder.scala 12:113]
  wire [3:0] _T_296; // @[OneHotEncoder.scala 12:113]
  wire [3:0] _T_297; // @[OneHotEncoder.scala 12:113]
  wire [3:0] _T_298; // @[OneHotEncoder.scala 12:113]
  wire [3:0] _T_299; // @[OneHotEncoder.scala 12:113]
  wire [3:0] _T_300; // @[OneHotEncoder.scala 12:113]
  wire [3:0] _T_301; // @[OneHotEncoder.scala 12:113]
  wire [3:0] _T_302; // @[OneHotEncoder.scala 12:113]
  assign _T_76 = {io_in_1,io_in_1,io_in_1,io_in_1}; // @[OneHotEncoder.scala 12:94]
  assign _T_78 = _T_76 & 4'h1; // @[OneHotEncoder.scala 12:97]
  assign _T_91 = {io_in_2,io_in_2,io_in_2,io_in_2}; // @[OneHotEncoder.scala 12:94]
  assign _T_93 = _T_91 & 4'h2; // @[OneHotEncoder.scala 12:97]
  assign _T_106 = {io_in_3,io_in_3,io_in_3,io_in_3}; // @[OneHotEncoder.scala 12:94]
  assign _T_108 = _T_106 & 4'h3; // @[OneHotEncoder.scala 12:97]
  assign _T_121 = {io_in_4,io_in_4,io_in_4,io_in_4}; // @[OneHotEncoder.scala 12:94]
  assign _T_123 = _T_121 & 4'h4; // @[OneHotEncoder.scala 12:97]
  assign _T_136 = {io_in_5,io_in_5,io_in_5,io_in_5}; // @[OneHotEncoder.scala 12:94]
  assign _T_138 = _T_136 & 4'h5; // @[OneHotEncoder.scala 12:97]
  assign _T_151 = {io_in_6,io_in_6,io_in_6,io_in_6}; // @[OneHotEncoder.scala 12:94]
  assign _T_153 = _T_151 & 4'h6; // @[OneHotEncoder.scala 12:97]
  assign _T_166 = {io_in_7,io_in_7,io_in_7,io_in_7}; // @[OneHotEncoder.scala 12:94]
  assign _T_168 = _T_166 & 4'h7; // @[OneHotEncoder.scala 12:97]
  assign _T_181 = {io_in_8,io_in_8,io_in_8,io_in_8}; // @[OneHotEncoder.scala 12:94]
  assign _T_183 = _T_181 & 4'h8; // @[OneHotEncoder.scala 12:97]
  assign _T_196 = {io_in_9,io_in_9,io_in_9,io_in_9}; // @[OneHotEncoder.scala 12:94]
  assign _T_198 = _T_196 & 4'h9; // @[OneHotEncoder.scala 12:97]
  assign _T_211 = {io_in_10,io_in_10,io_in_10,io_in_10}; // @[OneHotEncoder.scala 12:94]
  assign _T_213 = _T_211 & 4'ha; // @[OneHotEncoder.scala 12:97]
  assign _T_226 = {io_in_11,io_in_11,io_in_11,io_in_11}; // @[OneHotEncoder.scala 12:94]
  assign _T_228 = _T_226 & 4'hb; // @[OneHotEncoder.scala 12:97]
  assign _T_241 = {io_in_12,io_in_12,io_in_12,io_in_12}; // @[OneHotEncoder.scala 12:94]
  assign _T_243 = _T_241 & 4'hc; // @[OneHotEncoder.scala 12:97]
  assign _T_256 = {io_in_13,io_in_13,io_in_13,io_in_13}; // @[OneHotEncoder.scala 12:94]
  assign _T_258 = _T_256 & 4'hd; // @[OneHotEncoder.scala 12:97]
  assign _T_271 = {io_in_14,io_in_14,io_in_14,io_in_14}; // @[OneHotEncoder.scala 12:94]
  assign _T_273 = _T_271 & 4'he; // @[OneHotEncoder.scala 12:97]
  assign _T_286 = {io_in_15,io_in_15,io_in_15,io_in_15}; // @[OneHotEncoder.scala 12:94]
  assign _T_290 = _T_78 | _T_93; // @[OneHotEncoder.scala 12:113]
  assign _T_291 = _T_290 | _T_108; // @[OneHotEncoder.scala 12:113]
  assign _T_292 = _T_291 | _T_123; // @[OneHotEncoder.scala 12:113]
  assign _T_293 = _T_292 | _T_138; // @[OneHotEncoder.scala 12:113]
  assign _T_294 = _T_293 | _T_153; // @[OneHotEncoder.scala 12:113]
  assign _T_295 = _T_294 | _T_168; // @[OneHotEncoder.scala 12:113]
  assign _T_296 = _T_295 | _T_183; // @[OneHotEncoder.scala 12:113]
  assign _T_297 = _T_296 | _T_198; // @[OneHotEncoder.scala 12:113]
  assign _T_298 = _T_297 | _T_213; // @[OneHotEncoder.scala 12:113]
  assign _T_299 = _T_298 | _T_228; // @[OneHotEncoder.scala 12:113]
  assign _T_300 = _T_299 | _T_243; // @[OneHotEncoder.scala 12:113]
  assign _T_301 = _T_300 | _T_258; // @[OneHotEncoder.scala 12:113]
  assign _T_302 = _T_301 | _T_273; // @[OneHotEncoder.scala 12:113]
  assign io_out = _T_302 | _T_286; // @[OneHotEncoder.scala 12:10]
endmodule
