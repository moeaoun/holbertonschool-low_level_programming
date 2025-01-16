section .data
    msg db 'Hello, World', 0xA  ; Define the message and new line (0xA is ASCII for newline)

section .text
    global _start  ; Entry point for the program

_start:
    ; Write the message to stdout (file descriptor 1)
    mov rax, 1         ; syscall number for write
    mov rdi, 1         ; file descriptor (1 for stdout)
    mov rsi, msg       ; address of the message to print
    mov rdx, 14        ; length of the message including newline (13 + 1 for newline)
    syscall            ; make the syscall

    ; Exit the program
    mov rax, 60        ; syscall number for exit
    xor rdi, rdi       ; exit status 0
    syscall            ; make the syscall

