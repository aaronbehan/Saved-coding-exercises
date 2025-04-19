;Please compute the following:

;speed = distance / time, where:
;distance = rdi
;time = rsi
;speed = rax

.intel_syntax noprefix
.global _start
_start:
mov rdx, 0     ; rdx must be zero'd out because it contains the upper 64 bits of the 128-bit dividend 
mov rax, rdi   ; rax contains the lower 64 bits of the 128-bit dividend. Both rdx and rax registers (rdx:rax) are fed into the div instruction hence why the following instruction only has the divisor (rsi containing speed value)
div rsi        ; calculates rdx:rax / rsi 
