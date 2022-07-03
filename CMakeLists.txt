cmake_minimum_required(VERSION 3.22)
project(lox C)

set(CMAKE_C_STANDARD 11)

include_directories(src)

add_executable(lox
        src/chunk.c
        src/chunk.h
        src/common.h
        src/main.c
        src/memory.c
        src/memory.h)
