; start section
section	.text
	global _start
_start:
	mov edx,	len
	mov ecx,	msg
	mov ebx,	1
	mov eax,	4
	int 0x80	;calls kernel
	mov eax,	1
	int 0x080
; the data section - declares constants
section .data
	msg db "Hello, Holberton",0xa
	len equ $ -msg
