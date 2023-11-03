// Author: Joshua Matni
// CS 219 PA 2
// Purpose: Implementing other operations in Assembly

#include <fstream>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <vector>
#include "command.h"
#include "operations.h"

vector<Command> readCommandsFromFile(const string&);
ResultWithFlags executeCommand(const Command&);

int main() 
{
    string filename = "problems.txt"; 
    vector<Command> commands = readCommandsFromFile(filename);

    for(const Command& cmd : commands)
    {
        ResultWithFlags result = executeCommand(cmd);
        cout << cmd.getOperation() << " 0x" << hex << uppercase << cmd.getOperand1();
        if (cmd.getOperation() != "NOT" && cmd.getOperation() != "NOTS")
        { 
            cout << " 0x" << cmd.getOperand2();
        }
        cout << ": 0x" << result.result << endl;
        cout << "N: " << result.N << " Z: " << result.Z << endl;
    }

    return 0;
}

ResultWithFlags executeCommand(const Command& cmd) 
{
    const string& operation = cmd.getOperation();
    uint32_t operand1 = cmd.getOperand1();
    uint32_t operand2 = cmd.getOperand2();

    if(operation == "ADD" || operation == "ADDS") 
    {
        return Operations::add(operand1, operand2);
    } 
    else if(operation == "AND" || operation == "ANDS") 
    {
        return Operations::andOp(operand1, operand2);
    } 
    else if(operation == "ASR" || operation == "ASRS") 
    {
        return Operations::asr(operand1);
    } 
    else if(operation == "LSR" || operation == "LSRS") 
    {
        return Operations::lsr(operand1);
    } 
    else if(operation == "LSL" || operation == "LSLS") 
    {
        return Operations::lsl(operand1);
    } 
    else if(operation == "NOT" || operation == "NOTS") 
    {
        return Operations::notOp(operand1);
    } 
    else if(operation == "ORR" || operation == "ORRS") 
    {
        return Operations::orr(operand1, operand2);
    } 
    else if(operation == "SUB" || operation == "SUBS") 
    {
        return Operations::sub(operand1, operand2);
    } 
    else if(operation == "XOR" || operation == "XORS") 
    {
        return Operations::xorOp(operand1, operand2);
    }

    return {0, false, false}; // return a default RWF
}

vector<Command> readCommandsFromFile(const string& filename)
{
    vector<Command> commands;
    ifstream file(filename);
    string line;
    
    while(getline(file, line)) 
    {
        istringstream iss(line);
        string operation;
        uint32_t operand1, operand2;
        iss >> operation >> hex >> operand1 >> operand2;
        commands.emplace_back(operation, operand1, operand2);
    }
    return commands;
}