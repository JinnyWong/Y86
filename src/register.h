#ifndef REGISTER_H
#define REGISTER_H
#include "instructions.h"


// Y86 registers
extern uint64_t registers[15];

// Condition code register
extern uint64_t cc;


//Instruction pointer, EFLAGS, condition codes
int EIP;
int EFL; 
int CC;

int memory[10000];

void set_eip(int new_eip){EIP=new_eip;}
void set_efl(int new_efl){EFL=new_efl;}
void set_cc(int new cc){CC=new_ccc;}

int get_eip(){return EIP;}
int get_efl(){return EFL;}
int get_cc(){return CC;}


//Y86 memory access functions
void load(int address, int& value){value=memory[address];}
void store(int address, int value){memory[address]=value;}

//Y86 memory allocation and deallocation functions
void malloc(int size, int& address){
	address=find_free_memory(size);
	allocate_memory(address,size);
}

void free(int address){
	deallocate_memory(address);
}

//helper functions for managing the Y86 memory
int find_free_memory(int size){
	//implement a search algorithmm to find a free block of memory of the specified size
}

void allocate_memory(int address, int size){
	//implement a function to mark the specified block of memory as allocated
}

void deallocate_memory(int address){
	//implement a function to mark the specified block of memory as free
}

#endif REGISTER_H
