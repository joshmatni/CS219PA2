#ifndef RESULTWITHFLAGS_H
#define RESULTWITHFLAGS_H

#include <cstdint>

class ResultWithFlags 
{
    public:
        uint32_t result;
        bool N, Z; // negative and zero flags
};
#endif 
