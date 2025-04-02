; I've stored a secret number at memory address 133700
; You must retrieve this secret number and use it as the exit code for your program. To do this, you must read it into rdi, whose value, if you recall, is the first parameter to exit and is used as the exit code. Good luck!

.intel_syntax noprefix  ; specifies the assembly dialect 
.global _start  
_start:                 ; defines the beginning of the program
mov rax, 60             ; moves the value 60 into rax. Tells syscall to exit code
mov rdi, [31337]        ; exit code will be the value found at address 31337
syscall
