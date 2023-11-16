section .data
	hello_message db "Hello, Holberton", 0
	format db "%s", 0

section .text
    extern printf
    global main

main:
    mov rdi, format
    mov rsi, hello_message
    call printf

    ; Exit the program
    mov rax, 60         ; syscall: exit
    xor rdi, rdi        ; status: 0
    syscall
