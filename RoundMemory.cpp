#include "RoundMemory.h"

RoundMemory::RoundMemory() { average = size = 0; }

RoundMemory::RoundMemory(uint8_t _size, float initValue) {
    size = _size;
    average = initValue;
}

float RoundMemory::avg() { return average; }

float RoundMemory::append(float sample) { 
    return average - (average = (((average * size) - average) + sample) / size);
}

RoundMemory::~RoundMemory() { }