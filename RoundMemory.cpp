#include "RoundMemory.h"

RoundMemory::RoundMemory()
{
    if (datas)
        delete[] datas;
    datas = ptr = alloc_size = 0x0;
}

RoundMemory::RoundMemory(ushort size)
{
    if (datas)
        delete[] datas;
    Initialize(size);
}



RoundMemory::Initialize(ushort size)
{
    datas = new datatype[alloc_size = size];
    for (ptr = 0; ptr < alloc_size; ++ptr)
        datas[ptr] = (datatype)0;
    ptr = 0;
}

datatype RoundMemory::avg()
{
    datatype sum = (datatype)0;
    for (int i = 0; i < alloc_size; ++i)
        sum += datas[i];
    return (sum / ((datatype)alloc_size));
}

datatype RoundMemory::write(datatype data)
{
    if (ptr == alloc_size && alloc_size)
        ptr = 0;
    datas[ptr++] = data;
    return avg();
}

RoundMemory::~RoundMemory()
{
    if (datas)
        delete[] datas;
}