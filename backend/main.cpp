#include <algorithm>
#include <iostream>
#include <string>

#include "memory.h"
#include "cpu.h"
#include "instruction.h"
#include "json.hpp" 

using json=nlohmann::json;
 


static inline void ltrim(std::string &s) {
    s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](unsigned char ch) {
        return !std::isspace(ch);
    }));
}

static inline void rtrim(std::string &s) {
    s.erase(std::find_if(s.rbegin(), s.rend(), [](unsigned char ch) {
        return !std::isspace(ch);
    }).base(), s.end());
}

static inline void trim(std::string &s) {
    rtrim(s);
    ltrim(s);
}

void read_yo_file() {

    for (std::string line; std::getline(std::cin, line);) {
        trim(line);
        if (line.length() == 0) continue;
        auto idx0 = line.find('|');
        if ()
        
        if (bytecode.length() == 0) continue;
        trim(address);
        trim(bytecode);

        for (int i = 0; i < bytecode.length(); i += 2) {
            write_byte(std::stoi(address, 0, 16) + (i >> 1), std::stoi(bytecode.substr(i, i + 2)));
        }
    }
}


int main() {
    
    initCPU();
    while(true){   
        read_yo_file();
        for (int i = 0; i < 100; i++) {
            std::cout << MEM[i] << " ";
        }
        
        unit8_t opcode=MEM[pc];
        execute(opcode);
        pc++;
    }
    
    return 0;
}
