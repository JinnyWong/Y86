// Define the Y86 registers
extern int EIP; // Instruction Pointer
extern int EFL; // EFLAGS
extern int CC; // Condition Codes

// Define the Y86 memory
extern int memory[10000];

// Define the Y86 register access functions
void set_eip(int new_eip);
void set_efl(int new_efl);
void set_cc(int new_cc);

int get_eip();
int get_efl();
int get_cc();

// Define the Y86 memory access functions
void load(int address, int& value);
void store(int address, int value);

// Define the Y86 memory allocation and deallocation functions
void malloc(int size, int& address);
void free(int address);

// Define the Y86 instruction set
void mov(int& destination, int& source);
void add(int& destination, int& operand1, int& operand2);
void sub(int& destination, int& operand1, int& operand2);
void jmp(int& instruction_pointer, int& target_address);
void cmov(int& destination, int& source, int& condition_code);
void call(int& instruction_pointer, int& stack_pointer, int& target_address);
void ret(int& instruction_pointer, int& stack_pointer);
void push(int& stack_pointer,




