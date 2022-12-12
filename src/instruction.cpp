#include<iostream>
#include<cstdint>
#include "emulator.h"





// Memory
uint8_t memory[1 << 20];

// Program counter
uint64_t pc;

// Reads a byte from memory at the given address
uint8_t readByte(uint64_t address) {
    return memory[address];
}

// Reads a quadword (8 bytes) from memory at the given address
uint64_t readQuad(uint64_t address) {
    uint64_t value = 0;
    for (int i = 0; i < 8; i++) {
        value |= (uint64_t)readByte(address + i) << (8 * i);
    }

//move date from one location to another
void mov(int& destionation, int& source){
	destination=source;
} 


//add two numbers together
void add(int& destination, int& operand1, int& operand2){
	destination=operand1+operand2;
} 

//subtract one number from another
void sub(int& destination, int& operand1, int& operand2){
	destination=operand1-operand2;
}

//jump to a specified memory location
void jmp(int& instruction_pointer, int& target_address){
	instruction_pointer=target_address; 
}

//move data based on a condition code
void cmov(int& destination, int& source, int& condition_code){
	if(condition_code==0){
		destination=source;
	}	
} 

//call a subroutine
void call(int& instruction_pointer, int& stack_pointer, int& target_address){
	stack_pointer--;
	memory[stack_pointer]=instruction_pointer;
	instruction_pointer=target_address;
}

//return from a subroutine
void ret(int& instruction_pointer, int& stack_pointer){
	instruction_pointer=memory[stack_pointer];
	stack_pointer++;
}

//push a value onto the stack
void push(int& stack_pointer, int& value){
	stack_pointer--;
	memory[stack_pointer]=value;
}

//pop a value off the stack
void pop(int& stack_pointer, int& value){
	value=memory[stack_pointer];
	stack_pointer++;
}

//perform a bitwise and operation on two numbers
void and(int& destination, int& operand1, int& operand2){
	destination=operand1&operand2;
}

//perform a bitwise or operation on two numbers
void or(int& destination, int& operand1, int& operand2){
	destination=operand1|operand2;
}
