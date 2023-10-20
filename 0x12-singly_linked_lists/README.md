# 101-hello_holberton Assembly Program

## Author: Babatunde Abubakar

### Project Description

This is a 64-bit assembly program written in x86-64 assembly language that prints "Hello, Holberton" followed by a newline to the standard output. The program utilizes the `printf` function from the C library to achieve this.

### Compilation and Execution

To compile and run the program, follow these steps:

1. Make sure you have NASM (the Netwide Assembler) and GCC (GNU Compiler Collection) installed on your system.

2. Save the assembly code to a file, e.g., `101-hello_holberton.asm`.

3. Assemble the code using NASM:
   
   ```bash
   nasm -f elf64 101-hello_holberton.asm -o hello_holberton.o


