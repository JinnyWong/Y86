#ifndef INSTRUCTION_H
#define INSTRUCTION_H


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


enum Instructions {
    HALT = 0x00, 
    NOP = 0x10, 
    RRMOVQ=0x20,
    CMOVLE=0x21,
    CMOVL=0x22,
    CMOVE=0x23,
    CMOVNE=0x24,
    CMOVGE=0x25,
    CMOVG=0x26,
    IRMOVQ = 0x30, 
    RMMOVQ = 0x40, 
    MRMOVQ = 0x50, 
    OPQ = 0x60, 
    JMP = 0x70,
    JLE=0x71,
    JL=0x72,
    JE=0x73
    JNE=0x74,
    JGE=0x75,
    JG=0x76,
    CALL = 0x80, 
    RET = 0x90, 
    PUSHQ = 0xA0,
    POPQ = 0xB0 
};

enum ConditionCodes {
    NC = 0x0, 
    LE = 0x1, 
    L = 0x2, 
    E = 0x3, 
    NE = 0x4, 
    GE = 0x5, 
    G = 0x6 
};


enum CMOVFlags {
    RR = 0x0, 
    RM = 0x1, 
    MR = 0x2, 
    MM = 0x3 
};


enum OPCodes {
    ADDQ = 0x0, 
    SUBQ = 0x1, 
    ANDQ = 0x2, 
    XORQ = 0x3 
};

enum STATCodes{
    AOK=0x1,
    HLT=0x2,
    ADR=0x3,
    INS=0x4,
}

#endif INSTRUCTION_H
