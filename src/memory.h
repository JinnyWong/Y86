#ifndef MEMORY_H
#define MEMORY_H

// Memory
extern uint8_t memory[1 << 20];

// Reads a byte from memory at the given address
uint8_t readByte(uint64_t address);

// Reads a quadword (8 bytes) from memory at the given address
uint64_t readQuad(uint64_t address);

// Writes a byte to memory at the given address
void writeByte(uint64_t address, uint8_t value);

// Writes a quadword (8 bytes) to memory at the given address
void writeQuad(uint64_t address, uint64_t value);

#endif // MEMORY_H
