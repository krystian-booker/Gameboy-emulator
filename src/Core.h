#ifndef GAMEBOY_CORE_H
#define GAMEBOY_CORE_H

#include <iostream>
#include <vector>
#include "Constants.h"
#include "Register.h"
#include "RegisterPair.h"
#include "Cartridge.h"

class Core {
public:
    Core();
private:
    Register<uint8_t> a = Register<uint8_t>(0);
    Register<uint8_t> f = Register<uint8_t>(0);
    Register<uint8_t> b = Register<uint8_t>(0);
    Register<uint8_t> c = Register<uint8_t>(0);
    Register<uint8_t> d = Register<uint8_t>(0);
    Register<uint8_t> e = Register<uint8_t>(0);
    Register<uint8_t> h = Register<uint8_t>(0);
    Register<uint8_t> l = Register<uint8_t>(0);

    RegisterPair af = RegisterPair(a, f); // Accumulator & Flags
    RegisterPair bc = RegisterPair(b, c);
    RegisterPair de = RegisterPair(d, e);
    RegisterPair hl = RegisterPair(h, l);

    Register<uint16_t> pc = Register<uint16_t>(0x0100); // Program Counter/Pointer
    Register<uint16_t> sp = Register<uint16_t>(0); // Stack Pointer

    void JPnn();
};


#endif //GAMEBOY_CORE_H
