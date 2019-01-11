module OneHotDecoder(
  input         clock,
  input         reset,
  input  [4:0]  io_in,
  output [31:0] io_out
);
  wire  bools_0; // @[OneHotDecoder.scala 14:46]
  wire  bools_1; // @[OneHotDecoder.scala 14:46]
  wire  bools_2; // @[OneHotDecoder.scala 14:46]
  wire  bools_3; // @[OneHotDecoder.scala 14:46]
  wire  bools_4; // @[OneHotDecoder.scala 14:46]
  wire  bools_5; // @[OneHotDecoder.scala 14:46]
  wire  bools_6; // @[OneHotDecoder.scala 14:46]
  wire  bools_7; // @[OneHotDecoder.scala 14:46]
  wire  bools_8; // @[OneHotDecoder.scala 14:46]
  wire  bools_9; // @[OneHotDecoder.scala 14:46]
  wire  bools_10; // @[OneHotDecoder.scala 14:46]
  wire  bools_11; // @[OneHotDecoder.scala 14:46]
  wire  bools_12; // @[OneHotDecoder.scala 14:46]
  wire  bools_13; // @[OneHotDecoder.scala 14:46]
  wire  bools_14; // @[OneHotDecoder.scala 14:46]
  wire  bools_15; // @[OneHotDecoder.scala 14:46]
  wire  bools_16; // @[OneHotDecoder.scala 14:46]
  wire  bools_17; // @[OneHotDecoder.scala 14:46]
  wire  bools_18; // @[OneHotDecoder.scala 14:46]
  wire  bools_19; // @[OneHotDecoder.scala 14:46]
  wire  bools_20; // @[OneHotDecoder.scala 14:46]
  wire  bools_21; // @[OneHotDecoder.scala 14:46]
  wire  bools_22; // @[OneHotDecoder.scala 14:46]
  wire  bools_23; // @[OneHotDecoder.scala 14:46]
  wire  bools_24; // @[OneHotDecoder.scala 14:46]
  wire  bools_25; // @[OneHotDecoder.scala 14:46]
  wire  bools_26; // @[OneHotDecoder.scala 14:46]
  wire  bools_27; // @[OneHotDecoder.scala 14:46]
  wire  bools_28; // @[OneHotDecoder.scala 14:46]
  wire  bools_29; // @[OneHotDecoder.scala 14:46]
  wire  bools_30; // @[OneHotDecoder.scala 14:46]
  wire  bools_31; // @[OneHotDecoder.scala 14:46]
  wire [7:0] _T_116; // @[OneHotDecoder.scala 16:25]
  wire [15:0] _T_124; // @[OneHotDecoder.scala 16:25]
  wire [7:0] _T_131; // @[OneHotDecoder.scala 16:25]
  wire [15:0] _T_139; // @[OneHotDecoder.scala 16:25]
  wire  _T_143; // @[OneHotDecoder.scala 17:9]
  assign bools_0 = io_in == 5'h0; // @[OneHotDecoder.scala 14:46]
  assign bools_1 = io_in == 5'h1; // @[OneHotDecoder.scala 14:46]
  assign bools_2 = io_in == 5'h2; // @[OneHotDecoder.scala 14:46]
  assign bools_3 = io_in == 5'h3; // @[OneHotDecoder.scala 14:46]
  assign bools_4 = io_in == 5'h4; // @[OneHotDecoder.scala 14:46]
  assign bools_5 = io_in == 5'h5; // @[OneHotDecoder.scala 14:46]
  assign bools_6 = io_in == 5'h6; // @[OneHotDecoder.scala 14:46]
  assign bools_7 = io_in == 5'h7; // @[OneHotDecoder.scala 14:46]
  assign bools_8 = io_in == 5'h8; // @[OneHotDecoder.scala 14:46]
  assign bools_9 = io_in == 5'h9; // @[OneHotDecoder.scala 14:46]
  assign bools_10 = io_in == 5'ha; // @[OneHotDecoder.scala 14:46]
  assign bools_11 = io_in == 5'hb; // @[OneHotDecoder.scala 14:46]
  assign bools_12 = io_in == 5'hc; // @[OneHotDecoder.scala 14:46]
  assign bools_13 = io_in == 5'hd; // @[OneHotDecoder.scala 14:46]
  assign bools_14 = io_in == 5'he; // @[OneHotDecoder.scala 14:46]
  assign bools_15 = io_in == 5'hf; // @[OneHotDecoder.scala 14:46]
  assign bools_16 = io_in == 5'h10; // @[OneHotDecoder.scala 14:46]
  assign bools_17 = io_in == 5'h11; // @[OneHotDecoder.scala 14:46]
  assign bools_18 = io_in == 5'h12; // @[OneHotDecoder.scala 14:46]
  assign bools_19 = io_in == 5'h13; // @[OneHotDecoder.scala 14:46]
  assign bools_20 = io_in == 5'h14; // @[OneHotDecoder.scala 14:46]
  assign bools_21 = io_in == 5'h15; // @[OneHotDecoder.scala 14:46]
  assign bools_22 = io_in == 5'h16; // @[OneHotDecoder.scala 14:46]
  assign bools_23 = io_in == 5'h17; // @[OneHotDecoder.scala 14:46]
  assign bools_24 = io_in == 5'h18; // @[OneHotDecoder.scala 14:46]
  assign bools_25 = io_in == 5'h19; // @[OneHotDecoder.scala 14:46]
  assign bools_26 = io_in == 5'h1a; // @[OneHotDecoder.scala 14:46]
  assign bools_27 = io_in == 5'h1b; // @[OneHotDecoder.scala 14:46]
  assign bools_28 = io_in == 5'h1c; // @[OneHotDecoder.scala 14:46]
  assign bools_29 = io_in == 5'h1d; // @[OneHotDecoder.scala 14:46]
  assign bools_30 = io_in == 5'h1e; // @[OneHotDecoder.scala 14:46]
  assign bools_31 = io_in == 5'h1f; // @[OneHotDecoder.scala 14:46]
  assign _T_116 = {bools_7,bools_6,bools_5,bools_4,bools_3,bools_2,bools_1,bools_0}; // @[OneHotDecoder.scala 16:25]
  assign _T_124 = {bools_15,bools_14,bools_13,bools_12,bools_11,bools_10,bools_9,bools_8,_T_116}; // @[OneHotDecoder.scala 16:25]
  assign _T_131 = {bools_23,bools_22,bools_21,bools_20,bools_19,bools_18,bools_17,bools_16}; // @[OneHotDecoder.scala 16:25]
  assign _T_139 = {bools_31,bools_30,bools_29,bools_28,bools_27,bools_26,bools_25,bools_24,_T_131}; // @[OneHotDecoder.scala 16:25]
  assign _T_143 = reset == 1'h0; // @[OneHotDecoder.scala 17:9]
  assign io_out = {_T_139,_T_124}; // @[OneHotDecoder.scala 16:10]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_143) begin
          $fwrite(32'h80000002,"myUInt = 0x%x\n",io_out); // @[OneHotDecoder.scala 17:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
