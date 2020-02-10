#include "RoundMemory.h"

RoundMemory::RoundMemory() { samples = size = cptr = 0; }

RoundMemory::RoundMemory(unsigned char _size, T initValue) {
    samples = new T[size = _size];
    for (cptr = 0; cptr < size; ++cptr)
        samples[cptr] = initValue;
    cptr = 0;
}

T RoundMemory::avg() {
    T sum = T(0);
    for (unsigned char i = 0; i < size; ++i)
        sum += samples[i];
    return (sum / T(size));
}

T RoundMemory::append(T sample) {
    samples[(cptr %= size)++] = sample;
    return avg();
}

RoundMemory::~RoundMemory() { if (samples) delete[] samples; }