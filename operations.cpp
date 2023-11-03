#include "operations.h"

// add
ResultWithFlags Operations::add(uint32_t operand1, uint32_t operand2) 
{
    uint64_t wide_result = static_cast<uint64_t>(operand1) + static_cast<uint64_t>(operand2);
    ResultWithFlags result;
    result.result = static_cast<uint32_t>(wide_result);
    result.N = (result.result >> 31) & 1;
    result.Z = (result.result == 0);
    return result;
}

// and
ResultWithFlags Operations::andOp(uint32_t operand1, uint32_t operand2) 
{
    ResultWithFlags result;
    result.result = operand1 & operand2;
    result.N = (result.result >> 31) & 1;
    result.Z = (result.result == 0);
    return result;
}

// arithmetic shift right
ResultWithFlags Operations::asr(int32_t operand1) 
{
    ResultWithFlags result;
    result.result = static_cast<uint32_t>(operand1) >> 1;
    result.N = (result.result >> 31) & 1;
    result.Z = (result.result == 0);
    return result;
}

// logical shift right
ResultWithFlags Operations::lsr(uint32_t operand1) 
{
    ResultWithFlags result;
    result.result = operand1 >> 1;
    result.N = (result.result >> 31) & 1;
    result.Z = (result.result == 0);
    return result;
}

// logical shift left
ResultWithFlags Operations::lsl(uint32_t operand1) 
{
    ResultWithFlags result;
    result.result = operand1 << 1;
    result.N = (result.result >> 31) & 1;
    result.Z = (result.result == 0);
    return result;
}

// bitwise NOT
ResultWithFlags Operations::notOp(uint32_t operand1) 
{
    ResultWithFlags result;
    result.result = ~operand1;
    result.N = (result.result >> 31) & 1;
    result.Z = (result.result == 0);
    return result;
}

// bitwise OR
ResultWithFlags Operations::orr(uint32_t operand1, uint32_t operand2) 
{
    ResultWithFlags result;
    result.result = operand1 | operand2;
    result.N = (result.result >> 31) & 1;
    result.Z = (result.result == 0);
    return result;
}

// subtraction
ResultWithFlags Operations::sub(uint32_t operand1, uint32_t operand2) 
{
    uint64_t wide_result = static_cast<uint64_t>(operand1) - static_cast<uint64_t>(operand2);
    ResultWithFlags result;
    result.result = static_cast<uint32_t>(wide_result);
    result.N = (result.result >> 31) & 1;
    result.Z = (result.result == 0);
    return result;
}

// bitwise XOR
ResultWithFlags Operations::xorOp(uint32_t operand1, uint32_t operand2) 
{
    ResultWithFlags result;
    result.result = operand1 ^ operand2;
    result.N = (result.result >> 31) & 1;
    result.Z = (result.result == 0);
    return result;
}
