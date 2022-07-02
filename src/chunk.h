#pragma once
#include "common.h"

typedef enum {
    OP_RETURN,
} OpCode;

typedef struct {
    int capacity;
    int count;
    uint8_t* code;
} Chunk;

void initChunk(Chunk* chunk);
void writeChunk(Chunk* chunk, uint8_t byte);