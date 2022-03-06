cmake_minimum_required(VERSION 3.21)
project(Gameboy)

set(CMAKE_CXX_STANDARD 14)

add_executable(Gameboy src/main.cpp src/Core.cpp src/Core.h src/Constants.h src/MemoryManagementUnit.cpp src/MemoryManagementUnit.h src/Register.h src/RegisterPair.h src/Cartridge.cpp src/Cartridge.h)
