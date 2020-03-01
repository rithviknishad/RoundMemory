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

class RoundMemory {
    uint8_t size;

    public:

    float average;

    RoundMemory();
    RoundMemory(uint8_t _size, float initValue);

    float avg();
    float append(float sample);

    ~RoundMemory();
};
