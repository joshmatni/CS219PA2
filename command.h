#ifndef COMMAND_H
#define COMMAND_H

#include <string>
using namespace std;

class Command 
{
    string operation;
    uint32_t operand1, operand2;

    public:
        Command(const string& op, uint32_t op1, uint32_t op2)
            : operation(op), operand1(op1), operand2(op2) {} // default constructor

        const string& getOperation() const {return operation;}
        uint32_t getOperand1() const {return operand1;}
        uint32_t getOperand2() const {return operand2;}
};
#endif
