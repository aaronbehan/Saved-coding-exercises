.intel_syntax noprefix
.global _start
_start:
mov rdi, 1        ; unsigned int fd is the file descriptor specifying the kind of output required by the syscall
mov rsi, 1337000  ; const char *buf specifies the memory address storing the first character in the string
mov rdx, 14       ; size_t count which specifies the number of bytes used to store the string
mov rax, 1        ; syscall: write
syscall
mov rax, 60       ; syscall: exit program
mov rdi, 42       ; assign exit code
syscall
