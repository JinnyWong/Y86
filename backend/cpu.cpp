#include "cpu.h"
#include "json.hpp" 

using json=nlohmann::json;

uint64_t pc;

void initCPU() {
    for (int i = 0; i < 15; i++) {
        registers[i] = 0;
    }

    cc = NC;
    pc = 0;

    for (int i = 0; i < (1 << 20); i++) {
        MEM[i] = 0;
    }
}


Instructions fetch() {
    uint8_t instruction = read_byte(pc);
    return (Instructions)instruction;
}


void execute(Instructions instruction) {
    switch (instruction) {
        case HALT:
            std::exit(0);
            break;
        case NOP:
            break;
        case CMOV:
            break;
        case IRMOVQ:
            break;
        case RMMOVQ:
            break;
        case MRMOVQ:
            break;
        case OPQ:
            break;
        case JXX:
            break;
        case CALL:
    }
} 
