module BJU(

    input clk,
    input rst_n,

    input  logic            IDU_vld,

    input  logic            jal,
    input  logic            jalr,
    input  logic            br,
    input  logic            syscall,
    input  logic [2:0]      func3,

    input  logic [63:0]     pc,
    input  logic [63:0]     src1,
    input  logic [63:0]     src2,
    input  logic [63:0]     imm,
    input  logic [63:0]     rCSR,

    output logic            ifetch_taken,
    output logic [63:0]     ifetch_taken_pc,
    output logic            bmu_vld

    );


logic ifetch_taken_pre;
logic [63:0] ifetch_taken_pc_pre;


logic [63:0] add_src1;
logic [63:0] add_src2;
logic [63:0] add_sum;

always_comb begin
    add_src1 = jalr? src1: pc;
    add_src2 = imm;
    add_sum = add_src1 + imm;

    if(jalr) ifetch_taken_pc_pre = add_sum &(~64'd1);
    else if(syscall) ifetch_taken_pc_pre = rCSR;
    else ifetch_taken_pc_pre = add_sum;

end


always_comb begin
  ifetch_taken_pre = 0;
  if(jalr | jal | syscall) ifetch_taken_pre = 1;
  else if(br) 
    case(func3)
      3'b000: ifetch_taken_pre = (src1 == src2);
      3'b001: ifetch_taken_pre = (src1 != src2);
      3'b101: ifetch_taken_pre = ($signed(src1) >= $signed(src2));
      3'b100: ifetch_taken_pre = ($signed(src1) <  $signed(src2));
      3'b110: ifetch_taken_pre = (src1 <  src2);
      3'b111: ifetch_taken_pre = (src1 >= src2);
      default: ifetch_taken_pre = 0;
    endcase
end
  

always_ff @( posedge clk ) begin
  if(~rst_n) begin
    ifetch_taken <= 0;
    ifetch_taken_pc <= 0;
  end
  else if(IDU_vld) begin
    ifetch_taken <= ifetch_taken_pre;
    ifetch_taken_pc <= ifetch_taken_pc_pre;
  end
end



always_ff @( posedge clk ) begin
  if(~rst_n) bmu_vld <= 0;
  else bmu_vld <= IDU_vld & (jal | jalr | br | syscall);
end



endmodule