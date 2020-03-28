/*
 *  Name:           Round Memory (CONSERVATIVE)
 *  Header:         RoundMemory.h
 *  
 *  Description:    
 *      Round Memory Averaging for Realtime Datasampling and processing 
 * 
 *  Author:         Rithvik Nishad (https://github.com/rithviknishad)
 * 
 */

#ifndef __ROUND_MEMORY_H
#define __ROUND_MEMORY_H

class RoundMemory {
    unsigned short size;

    public:

    float average;

    RoundMemory();
    RoundMemory(unsigned short _size, float initValue);

    float avg();
    float append(float sample);

    ~RoundMemory();
};

#endif