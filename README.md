# CS219PA2

# Project 2: Bitwise and Arithmetic Operations Simulator

## Description
This project simulates a set of bitwise and arithmetic operations on 32-bit integers. It reads a series of commands from a file, executes the specified operations, and outputs the results along with the status of the Negative (N) and Zero (Z) flags. The operations supported include addition (ADD), bitwise AND (AND), arithmetic shift right (ASR), logical shift right (LSR), logical shift left (LSL), bitwise NOT (NOT), bitwise OR (ORR), subtraction (SUB), and bitwise XOR (XOR). Each operation can affect the N and Z flags, which indicate a negative result and a zero result, respectively.

## How to Run the Code
To compile and run the project, ensure that you have `g++` installed on your system and that it is available in your system's PATH.

1. Navigate to the project directory in the terminal.
2. Run `make` to compile the project. This will create an executable named `operating`.
3. To run the executable, use the command `./operating`.

## Results and Working Process
The program reads a list of commands from the `problems.txt` file. Each command specifies an operation and the operands. The program then executes these commands and prints the results in hexadecimal format. The N flag is set if the result is negative (in the case of signed integers), and the Z flag is set if the result is zero.

### Flags Explanation:
- **N (Negative Flag)**: Set if the result of the operation is negative when interpreted as a signed 32-bit integer. For unsigned operations, this flag is not relevant.
- **Z (Zero Flag)**: Set if the result of the operation is zero. This flag is used to indicate a zero result for both signed and unsigned operations.

### Example:
For the command `ADD 0x1 0xFFFFFFFF`, the result is `0x0`, and the Z flag is set to `1` indicating a zero result. The N flag is `0` since the result is not negative.

## Documentation
The code is documented with comments explaining the purpose of each function and the logic behind the operations. The `Command` class encapsulates the details of a command, and the `Operations` class contains static methods for each operation, which return a `ResultWithFlags` object containing the result and the status of the N and Z flags.

## Makefile
The provided Makefile has the following targets:
- `make`: Compiles the source code into the `operating` executable.
- `clean`: Removes object files and the executable for a clean build.
