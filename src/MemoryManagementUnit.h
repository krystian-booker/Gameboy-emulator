//
// Created by Krystian Booker on 2022-03-01.
//

#ifndef GAMEBOY_MEMORYMANAGEMENTUNIT_H
#define GAMEBOY_MEMORYMANAGEMENTUNIT_H


#include <vector>

class MemoryManagementUnit {
public:
    MemoryManagementUnit();
    std::vector<uint8_t> wram; // Work RAM (8KB) Accessed exclusively by the CPU
    std::vector<uint8_t> vram; // Display RAM (8KB) Accessed by either the PPU or CPU exclusively
};


#endif //GAMEBOY_MEMORYMANAGEMENTUNIT_H
