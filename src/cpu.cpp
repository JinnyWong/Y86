#include "cpu.h"

// Program counter
uint64_t pc;

// Initializes the Y86 CPU
void initCPU() {
    // Initialize registers
    for (int i = 0; i < 15; i++) {
        registers[i] = 0;
    }

    // Initialize condition code register
    cc = NC;

    // Initialize program counter
    pc = 0;

    // Clear memory
    for (int i = 0; i < (1 << 20); i++) {
        memory[i] = 0;
    }
}

// Fetches the next instruction from memory
Instructions fetch() {
    // Read instruction byte from memory
    uint8_t instruction = readByte(pc);

    return (Instructions)instruction;
}

// Decodes and executes the given instruction
void execute(Instructions instruction) {
    switch (instruction) {
        case HALT:
            // TODO: implement HALT instruction
            break;
        case NOP:
            // TODO: implement NOP instruction
            break;
        case CMOV:
            // TODO: implement CMOV instruction
            break;
        case IRMOVQ:
            // TODO: implement IRMOVQ instruction
            break;
        case RMMOVQ:
            // TODO: implement RMMOVQ instruction
            break;
        case MRMOVQ:
            // TODO: implement MRMOVQ instruction
            break;
        case OPQ:
            // TODO: implement OPQ instruction
            break;
        case JXX:
            // TODO: implement JXX instruction
            break;
        case CALL:
            // TODO: implement CALL
