cmake_minimum_required(VERSION 3.22)

project(lox C)

set(EXECUTABLE_NAME lox)

set(CMAKE_C_STANDARD 11)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/includes)

add_executable(${EXECUTABLE_NAME})

target_sources(${EXECUTABLE_NAME} PRIVATE main.c
        src/chunk.c
        src/memory.c
        src/debug.c
        src/value.c
        includes/chunk.h
        includes/common.h
        includes/memory.h
        includes/debug.h
        includes/value.h
)