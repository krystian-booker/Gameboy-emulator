//
// Created by Krystian Booker on 2022-03-02.
//

#include <vector>
#include "Register.h"

#ifndef GAMEBOY_REGISTERPAIR_H
#define GAMEBOY_REGISTERPAIR_H

#endif //GAMEBOY_REGISTERPAIR_H

class RegisterPair{
public:
    RegisterPair(Register<uint8_t>& high, Register<uint8_t>& low) : high(high), low(low) { }
private:
    Register<uint8_t> high;
    Register<uint8_t> low;
};
