#include <fstream>
#include <iostream>
#include <vector>
#include "Cartridge.h"

Cartridge::Cartridge() {
    cartridgeRom = std::vector<uint8_t>(0x200000, 0);
}

//TODO: This will be removed, temporary for testing
void Cartridge::LoadBootRom(const char *romName) {
    //Open file stream, validate it can be read
    std::ifstream romFile(romName, std::ios::binary | std::ios::in);
    if (!romFile.is_open()) {
        std::cerr << "Problem opening file." << std::endl;
        exit(1);
    }

    //Get rom size, create memory accordingly
    romFile.seekg (0, std::ios::end);
    int romSize = romFile.tellg();
    romFile.seekg (0, std::ios::beg);
    bootRom = std::vector<uint8_t>(romSize, 0);

    //Loop data casting to uint8 store in memory
    char byte;
    std::size_t index = 0;
    while(romFile.get(byte)){
        bootRom[index++] = static_cast<uint8_t>(byte);
    }

    romFile.close();
}

void Cartridge::LoadRom(const char *romName) {
    //Open file stream, validate it can be read
    std::ifstream romFile(romName, std::ios::binary | std::ios::in);
    if (!romFile.is_open()) {
        std::cerr << "Problem opening file." << std::endl;
        exit(1);
    }

    //Get rom size, create memory accordingly
    romFile.seekg (0, std::ios::end);
    int romSize = romFile.tellg();
    romFile.seekg (0, std::ios::beg);
    cartridgeRom = std::vector<uint8_t>(romSize, 0);

    //Loop data casting to uint8 store in memory
    char byte;
    std::size_t index = 0;
    while(romFile.get(byte)){
        cartridgeRom[index++] = static_cast<uint8_t>(byte);
    }

    romFile.close();
}

uint8_t Cartridge::Read(uint16_t address){
    return cartridgeRom[address];
}