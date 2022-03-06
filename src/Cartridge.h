#ifndef GAMEBOY_CARTRIDGE_H
#define GAMEBOY_CARTRIDGE_H

class Cartridge {
public:
    Cartridge();
    void LoadBootRom(const char *romName);
    void LoadRom(const char *romName);
    uint8_t Read(uint16_t address);

    std::vector<uint8_t> bootRom;
    std::vector<uint8_t> cartridgeRom;
};


#endif //GAMEBOY_CARTRIDGE_H
