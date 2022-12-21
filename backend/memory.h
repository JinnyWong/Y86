#ifndef MEMORY_H
#define MEMORY_H

static uint8_t MEM[1 << 20];

uint8_t read_byte(uint64_t address);
uint64_t read_quad(uint64_t address);
void write_byte(uint64_t address, uint8_t value);
void write_quad(uint64_t address, uint64_t value);
void print_MEM();

void load(uint64_t address, uint64_t& value){value=memory[address];}
void store(uint64_t address, uint64_t value){memory[address]=value;}

void malloc(uint64_t size, uint64_t& address){
	address=find_free_memory(size);
	allocate_memory(address,size);
}

void free(uint64_t address){
	deallocate_memory(address);
}

#endif 
