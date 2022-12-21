#ifndef CPU_H
#define CPU_H

#include "instruction.h"
#include "memory.h"

void initCPU();

Instructions fetch();

void execute(Instructions instruction);


#endif 
