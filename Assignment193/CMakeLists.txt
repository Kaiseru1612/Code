cmake_minimum_required(VERSION 3.17)
project(Assignment193)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Assignment193
        defs.h
        input.txt
        main.cpp
        sword.cpp)
