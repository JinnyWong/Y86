#ifndef CPU_H
#define CPU_H

#include "instructions.h"
#include "registers.h"
#include "memory.h"

// Initializes the Y86 CPU
void initCPU();

// Fetches the next instruction from memory
Instructions fetch();

// Decodes and executes the given instruction
void execute(Instructions instruction);

// Advances the program counter by the size of the given instruction
void advancePC(Instructions instruction);

#endif // CPU_H
