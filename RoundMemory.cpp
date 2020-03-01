#include "RoundMemory.h"

RoundMemory::RoundMemory() { samples = size = cptr = 0; }

RoundMemory::RoundMemory(unsigned short _size, T initValue) {
    samples = new T[size = _size];
    for (cptr = 0; cptr < size; ++cptr)
        samples[cptr] = initValue;
    cptr = 0;
}

T RoundMemory::avg() {
    T sum = T(0);
    for (unsigned short i = 0; i < size; ++i)
        sum += samples[i];
    return (sum / T(size));
}

T RoundMemory::append(T sample) {
    T u_avg = avg();
    samples[(cptr %= size)++] = sample;
    return u_avg - avg();
}

RoundMemory::~RoundMemory() { if (samples) delete[] samples; }