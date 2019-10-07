/*
 *  Name:           ROUND MEMORY
 *  Header:         round_memory.h
 *  
 *  Description:    
 *      Round Memory Management for Realtime Datasampling and processing 
 * 
 *  Author:         Rithvik Nishad (https://github.com/rithviknishad)
 *  Created on:     October 7, 2019 [13:42 IST]
 *  Last Updated:   October 7, 2019 [14:18 IST]
 * 
 */

template<typename datatype>
class RoundMemory
{
    private:

    datatype * datas;
    ushort alloc_size, ptr;

    public:

    RoundMemory();
    RoundMemory(ushort size);
    RoundMemory(RoundMemory & roundMemory);

    void Initialize(ushort size);

    datatype avg();
    datatype write(datatype data);

    ~RoundMemory();
};