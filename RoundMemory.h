/*
 *  Name:           ROUND MEMORY
 *  Header:         RoundMemory.h
 *  
 *  Description:    
 *      Round Memory Management for Realtime Datasampling and processing 
 * 
 *  Author:         Rithvik Nishad (https://github.com/rithviknishad)
 * 
 */

template<typename T>
class RoundMemory {
    
    T * samples;
    unsigned char size, cptr;

    public:

    RoundMemory();
    RoundMemory(unsigned char _size);

    T avg();
    T write(T sample);

    ~RoundMemory();
}