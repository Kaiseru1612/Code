cmake_minimum_required(VERSION 3.17)
project(Assignment1922)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Assignment1922
        Assignment.pdf
        defs.h
        input.txt
        main.cpp
        sword.cpp)
