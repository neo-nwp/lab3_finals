cmake_minimum_required(VERSION 3.29)
project(lab3finals)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(prog1)
include_directories(prog2)
include_directories(prog3)

# Executable for prog1
add_executable(prog1
        prog1/coins.cpp
        prog1/main.cpp)

# Executable for prog2
add_executable(prog2
        prog2/main.cpp)

# Executable for prog3
add_executable(prog3
        prog3/main.cpp)
