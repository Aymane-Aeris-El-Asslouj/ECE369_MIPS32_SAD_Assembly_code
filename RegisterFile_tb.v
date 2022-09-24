`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// ECE369 - Computer Architecture
// 
// Module - RegisterFile.v
// Description - Test the register_file
// Suggested test case - First write arbitrary values into 
// the saved and temporary registers (i.e., register 8 through 25). Then, 2-by-2, 
// read values from these registers.
////////////////////////////////////////////////////////////////////////////////


module RegisterFile_tb();

	reg [4:0] ReadRegister1;
	reg [4:0] ReadRegister2;
	reg	[4:0] WriteRegister;
	reg [31:0] WriteData;
	reg RegWrite;
	reg [31:0] regFile [31:0]; 
	reg Clk;

	wire [31:0] ReadData1;
	wire [31:0] ReadData2; 

	RegisterFile u0(
		.ReadRegister1(ReadRegister1), 
		.ReadRegister2(ReadRegister2), 
		.WriteRegister(WriteRegister), 
		.WriteData(WriteData), 
		.RegWrite(RegWrite), 
		.Clk(Clk), 
		.ReadData1(ReadData1), 
		.ReadData2(ReadData2)
	);
	
	integer i; 

	initial begin
		Clk <= 1'b0;
		forever #10 Clk <= ~Clk;
	end

	initial begin
    /* Please fill in the implementation here... */
       for (i=5'b00000; i<5'b01000; i=i+1) begin
	       regFile[i] <= 5'b0; 
	   end
	   for (i=5'b01000; i<5'b11010; i=i+1) begin
	       regFile[i] <= i; 
	   end
	   for (i=5'b11010; i<=5'b11111; i=i+1) begin
	       regFile[i] <= 5'b0; 
	   end
	   #20
	   
	    ReadRegister1 <= 5'b01011; ReadRegister2 <= 5'b11001; RegWrite <= 'b0; 
        WriteData <= 32'b11111; WriteRegister <= 5'b01111;
        #100
        RegWrite <= 'b1; 
        #100 
        ReadRegister1 <= 5'b01100; ReadRegister2 <= 5'b11101; RegWrite <= 'b0; 
        WriteData <= 32'b0; WriteRegister <= 5'b10000;
        #100 
        RegWrite <= 'b1; 
	end

endmodule
