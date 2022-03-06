#include "Core.h"
#include "MemoryManagementUnit.h"

Cartridge cartridge;
MemoryManagementUnit memoryManagementUnit;

Core::Core(){
    cartridge.LoadBootRom("/Users/krystianbooker/Documents/GitHub/roms/_bootrom.gb");
    cartridge.LoadRom("/Users/krystianbooker/Documents/GitHub/roms/_tetris.gb");


    //Boot rom is $0000 (0) - $0100 (256)
    memoryManagementUnit.wram = std::vector<uint8_t>(0x2000, 0); //8192 bytes (8 KiB)
    for(int i = 0; i < 0x0FF; ++i){ //255
        memoryManagementUnit.wram[i] = cartridge.bootRom[i];
    }

    //Game rom is $0100 (256) - 0x2000 (8192)
    for(int i = 0x0100; i < 0x2000; ++i){
        memoryManagementUnit.wram[i] = cartridge.cartridgeRom[i - 256];
    }

    uint8_t byte = memoryManagementUnit.wram[pc.Read()];
    //TODO: TEMP
    std::cout << "Core initialized" << std::endl;
}

void Core::JPnn(){

}