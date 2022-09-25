`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// ECE369 - Computer Architecture
// 
// Module - ALU32Bit_tb.v
// Description - Test the 'ALU32Bit.v' module.
////////////////////////////////////////////////////////////////////////////////

module ALU32Bit_tb(); 

	reg [3:0] ALUControl;   // control bits for ALU operation
	reg [31:0] A, B;	        // inputs

	wire [31:0] ALUResult;	// answer
	wire Zero;	        // Zero=1 if ALUResult == 0

    ALU32Bit u0(
        .ALUControl(ALUControl), 
        .A(A), 
        .B(B), 
        .ALUResult(ALUResult), 
        .Zero(Zero)
    );

	initial begin
	
    /* Please fill in the implementation here... */
        A <= 32'b111; B <= 32'b101; 
        ALUControl <= 4'b0000;
        #100
        ALUControl <= 4'b0001;
        #100
        ALUControl <= 4'b0010;
        #100
        ALUControl <= 4'b0011;
        #100
        ALUControl <= 4'b0100;
        #100
        ALUControl <= 4'b0101;
        #100
        ALUControl <= 4'b0110;
        #100
        ALUControl <= 4'b0111;
        #100
        ALUControl <= 4'b1000;
        #100
        ALUControl <= 4'b1100;
	end

endmodule

