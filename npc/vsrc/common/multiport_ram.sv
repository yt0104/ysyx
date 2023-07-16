module  multiport_ram #(
  parameter ENTRY_CNT,  
  parameter ENTRY_WIDTH,
  parameter R_PORT
)(
  input wire clk,
  input wire wr,
  input wire [$clog2(ENTRY_CNT)-1:0]wadr,
  input wire [ENTRY_WIDTH-1:0]wdat,


  input wire [R_PORT-1:0] rd,
  input wire [R_PORT-1:0][$clog2(ENTRY_CNT)-1:0]radr,
  output reg [R_PORT-1:0][ENTRY_WIDTH-1:0]rdat
);

 reg [ENTRY_WIDTH-1:0] memory [ENTRY_CNT-1:0];

 always_ff@(posedge clk) begin
  if(wr)begin
    memory[wadr] <= wdat;
  end
 end

 always_ff @(posedge clk)begin
  for(int i = 0; i<R_PORT ; i=i+1)begin
    if(rd[i])begin
      rdat[i] <= memory[radr[i]];
    end
  end
 end

endmodule

