// See LICENSE.SiFive for license details.

import "DPI-C" function longint debug_tick
(
  output bit     debug_req_valid,
  input  bit     debug_req_ready,
  output longint     debug_req_bits_addr,
  output longint     debug_req_bits_op,
  output longint     debug_req_bits_data,

  input  bit        debug_resp_valid,
  output bit        debug_resp_ready,
  input  longint        debug_resp_bits_resp,
  input  longint        debug_resp_bits_data
);

module SimDTM #(parameter DATA_WIDTH = 64)
(
  input clk,
  input reset,

  output        debug_req_valid,
  input         debug_req_ready,
  output [ 6:0] debug_req_bits_addr,
  output [ 1:0] debug_req_bits_op,
  output [DATA_WIDTH-1:0] debug_req_bits_data,

  input         debug_resp_valid,
  output        debug_resp_ready,
  input  [ 1:0] debug_resp_bits_resp,
  input  [DATA_WIDTH-1:0] debug_resp_bits_data,

  output [DATA_WIDTH-1:0] exit
);

  bit r_reset;

  wire #0.1 __debug_req_ready = debug_req_ready;
  wire #0.1 __debug_resp_valid = debug_resp_valid;
  wire [DATA_WIDTH-1:0] #0.1 __debug_resp_bits_resp = {DATA_WIDTH-2'b0, debug_resp_bits_resp};
  wire [DATA_WIDTH-1:0] #0.1 __debug_resp_bits_data = debug_resp_bits_data;

  bit __debug_req_valid;
  int __debug_req_bits_addr;
  int __debug_req_bits_op;
  int __debug_req_bits_data;
  bit __debug_resp_ready;
  int __exit;

  assign #0.1 debug_req_valid = __debug_req_valid;
  assign #0.1 debug_req_bits_addr = __debug_req_bits_addr[6:0];
  assign #0.1 debug_req_bits_op = __debug_req_bits_op[1:0];
  assign #0.1 debug_req_bits_data = __debug_req_bits_data[DATA_WIDTH-1:0];
  assign #0.1 debug_resp_ready = __debug_resp_ready;
  assign #0.1 exit = __exit;

  always @(posedge clk)
  begin
    r_reset <= reset;
    if (reset || r_reset)
    begin
      __debug_req_valid = 0;
      __debug_resp_ready = 0;
      __exit = 0;
    end
    else
    begin
      __exit = debug_tick(
        __debug_req_valid,
        __debug_req_ready,
        __debug_req_bits_addr,
        __debug_req_bits_op,
        __debug_req_bits_data,
        __debug_resp_valid,
        __debug_resp_ready,
        __debug_resp_bits_resp,
        __debug_resp_bits_data
      );
    end
  end
endmodule
