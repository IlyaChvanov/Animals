cmake_minimum_required(VERSION 3.27)
project(Animals)

set(CMAKE_CXX_STANDARD 14)

add_executable(Animals
        src/main.cpp
        include/Animal.h
        src/Animal.cpp
)
