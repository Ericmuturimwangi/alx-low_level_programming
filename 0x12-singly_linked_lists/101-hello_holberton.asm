section .data
    hello db "Hello, Holberton",0x0A ; Null-terminated string with a newline character

section .text
    global main
    extern printf

main:
    ; Save callee-saved registers if necessary (optional)
    ; ...

    ; Call printf with the address of the hello string as an argument
    lea rdi, [hello] ; Load the address of the hello string into rdi (1st argument)
    xor rax, rax     ; Clear rax register to indicate no floating-point arguments
    call printf

    ; Restore callee-saved registers if necessary (optional)
    ; ...

    ; Return 0 from main (optional)
    xor rax, rax
    ret
