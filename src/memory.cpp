
#include <cstring>
#include <iostream>
#include <cstdlib>

#include "memory.h"

uint8_t read_byte(uint64_t address)
{
    return MEM[address];
}

uint64_t read_quad(uint64_t address)
{
    uint64_t ret = 0;
    for (int i = 0; i < 8; i++) {
        ret <<= 8;
        ret |= read_byte(address + i);
    }
    return ret;
}

void write_byte(uint64_t address, uint8_t value)
{
    MEM[address] = value;
}

void write_quad(uint64_t address, uint64_t value)
{
    for (int i = 0; i < 8; i++) {
        write_byte(address, value & 255);
        value >>= 8;
    }
}

void print_MEM() {
    for (int i = 0; i < 1 << 20; i += 8) {
        auto quad = read_quad(i);
        std::cout << i << ' ' << quad << std::endl;
    }
}