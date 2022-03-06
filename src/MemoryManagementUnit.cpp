#include "MemoryManagementUnit.h"
#include "Constants.h"

MemoryManagementUnit::MemoryManagementUnit() {
    wram = std::vector<uint8_t>(MEMORY_SIZE, 0);
    vram = std::vector<uint8_t>(MEMORY_SIZE, 0);

    //remove
    wram.clear();
    vram.clear();
}