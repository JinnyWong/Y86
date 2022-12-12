#include<iostream>
#include<fstream>
#include<string>

#include "instruction.cpp"
#include "register.h"
#include "output.h"
	
int main(){
	//read the Y86 program from a file
	ifstream program_file("program.txt");
	string line;
	
	
	//parse and execute the Y86 instructions
	while(getline(program_file,line)){
		//decode instructions
		int opcode=line[0];
		int operand1=line[1];
		int operand2=line[2];	
	}
	
	// Initialize the CPU
    initCPU();

    // TODO: load program into memory

    // Fetch and execute instructions until HALT
    while (true) {
        // Fetch next instruction
        Instructions instruction = fetch();

        // Execute instruction
        execute(instruction);

        // Advance program counter
        advancePC(instruction);

        // Break if HALT instruction was executed
        if (instruction == HALT) {
            break;
        }
    }

    return 0;


	
	
	
}


