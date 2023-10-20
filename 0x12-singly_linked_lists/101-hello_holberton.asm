section .data
    hello db 'Hello, Holberton',10,0
    format db '%s',10,0

section .text
    global main

    extern printf

main:
    push rbp
    mov rdi, format
    mov rsi, hello
    call printf
    pop rbp

    ; Exit the program
    mov rax, 60                ; syscall number for exit
    xor rdi, rdi               ; Status code (0)
    syscall

