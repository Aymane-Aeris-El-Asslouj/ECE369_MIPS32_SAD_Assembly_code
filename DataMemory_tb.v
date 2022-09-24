`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// ECE369 - Computer Architecture
// 
// Module - DataMemory_tb.v
// Description - Test the 'DataMemory.v' module.
////////////////////////////////////////////////////////////////////////////////

module DataMemory_tb(); 

    reg     [31:0]  Address;
    reg     [31:0]  WriteData;
    reg             Clk;
    reg             MemWrite;
    reg             MemRead;

    wire [31:0] ReadData;

    DataMemory u0(
        .Address(Address), 
        .WriteData(WriteData), 
        .Clk(Clk), 
        .MemWrite(MemWrite), 
        .MemRead(MemRead), 
        .ReadData(ReadData)
    ); 

	initial begin
		Clk <= 1'b0;
		forever #10 Clk <= ~Clk;
	end

	initial begin
	
    /* Please fill in the implementation here... */
	#100 Address <= 32'h00000001; WriteData <= 32'h00000002; MemRead <= 1'b1; MemWrite <= 1'b0;
	#100 Address <= 32'h00000001; WriteData <= 32'h00000002; MemRead <= 1'b0; MemWrite <= 1'b0;
    #100 Address <= 32'h00000001; WriteData <= 32'h00000002; MemRead <= 1'b0; MemWrite <= 1'b1;
    #100 Address <= 32'h00000001; WriteData <= 32'h00000002; MemRead <= 1'b0; MemWrite <= 1'b0;
    #100 Address <= 32'h00000001; WriteData <= 32'h00000002; MemRead <= 1'b1; MemWrite <= 1'b1;
    
    
	end

endmodule

