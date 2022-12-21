#include<iostream>
#include<cstdint>
#include "instruction.h"
#include "json.hpp" 

using json=nlohmann::json;


void mov(int& destionation, int& source){
	destination=source;
} 


void add(int& destination, int& operand1, int& operand2){
	destination=operand1+operand2;
} 

void sub(int& destination, int& operand1, int& operand2){
	destination=operand1-operand2;
}

void jmp(int& instruction_pointer, int& target_address){
	instruction_pointer=target_address; 
}

void cmov(int& destination, int& source, int& condition_code){
	if(condition_code==0){
		destination=source;
	}	
} 

void call(int& instruction_pointer, int& stack_pointer, int& target_address){
	stack_pointer--;
	memory[stack_pointer]=instruction_pointer;
	instruction_pointer=target_address;
}

void ret(int& instruction_pointer, int& stack_pointer){
	instruction_pointer=memory[stack_pointer];
	stack_pointer++;
}

void push(int& stack_pointer, int& value){
	stack_pointer--;
	memory[stack_pointer]=value;
}

void pop(int& stack_pointer, int& value){
	value=memory[stack_pointer];
	stack_pointer++;
}

void and(int& destination, int& operand1, int& operand2){
	destination=operand1&operand2;
}

void or(int& destination, int& operand1, int& operand2){
	destination=operand1|operand2;
}
