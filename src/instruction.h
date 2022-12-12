#ifndef INSTRUCTION_H
#define INSTRUCTION_H

// Register names
enum Registers {
    %rax = 0,
    %rcx = 1,
    %rdx = 2,
    %rbx = 3,
    %rsp = 4,
    %rbp = 5,
    %rsi = 6,
    %rdi = 7,
    %r8 = 8,
    %r9 = 9,
    %r10 = 10,
    %r11 = 11,
    %r12 = 12,
    %r13 = 13,
    %r14 = 14
};

// Y86 instruction set
enum Instructions {
    HALT = 0x00, // Halt the program
    NOP = 0x10, // No operation
    CMOV = 0x20, // Move if condition is met
    IRMOVQ = 0x30, // Move immediate value to register
    RMMOVQ = 0x40, // Move register value to memory
    MRMOVQ = 0x50, // Move memory value to register
    OPQ = 0x60, // Perform operation on registers
    JXX = 0x70, // Jump if condition is met
    CALL = 0x80, // Call subroutine
    RET = 0x90, // Return from subroutine
    PUSHQ = 0xA0, // Push value onto stack
    POPQ = 0xB0 // Pop value from stack
};

// Condition codes
enum ConditionCodes {
    NC = 0x0, // No condition
    LE = 0x1, // Less than or equal
    L = 0x2, // Less than
    E = 0x3, // Equal
    NE = 0x4, // Not equal
    GE = 0x5, // Greater than or equal
    G = 0x6 // Greater than
};

// Flags for conditional moves
enum CMOVFlags {
    RR = 0x0, // Move if register values are equal
    RM = 0x1, // Move if register equals memory value
    MR = 0x2, // Move if memory equals register value
    MM = 0x3 // Move if memory values are equal
};

// Operation codes
enum OPCodes {
    ADDQ = 0x0, // Add
    SUBQ = 0x1, // Subtract
    ANDQ = 0x2, // Bitwise AND
    XORQ = 0x3 // Bitwise XOR
};

#endif INSTRUCTION_H
