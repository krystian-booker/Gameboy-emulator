#include <iostream>
#include "Core.h"
Core core;

int main() {

    bool gameActive = true;
    while(gameActive){
        core.EmulateCycle();
    }
    return 0;

}
