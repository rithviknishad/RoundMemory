/*
 *  Name:           ROUND MEMORY
 *  Header:         RoundMemory.h
 *  
 *  Description:    
 *      Round Memory Averaging for Realtime Datasampling and processing 
 * 
 *  Author:         Rithvik Nishad (https://github.com/rithviknishad)
 * 
 */

template<typename T>
class RoundMemory {
    
    T * samples;
    uint8_t size, cptr;

    public:

    RoundMemory();
    RoundMemory(uint8_t _size, T initValue);

    T avg();
    T append(T sample);

    ~RoundMemory();
};
