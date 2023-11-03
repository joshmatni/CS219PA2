#ifndef OPERATIONS_H
#define OPERATIONS_H

#include "command.h"
#include "resultWithFlags.h"
#include <cstdint>

class Operations 
{
    public:
        static ResultWithFlags add(uint32_t operand1, uint32_t operand2);
        static ResultWithFlags andOp(uint32_t operand1, uint32_t operand2);
        static ResultWithFlags asr(int32_t operand1);
        static ResultWithFlags lsr(uint32_t operand1);
        static ResultWithFlags lsl(uint32_t operand1);
        static ResultWithFlags notOp(uint32_t operand1);
        static ResultWithFlags orr(uint32_t operand1, uint32_t operand2);
        static ResultWithFlags sub(uint32_t operand1, uint32_t operand2);
        static ResultWithFlags xorOp(uint32_t operand1, uint32_t operand2);
};
#endif
