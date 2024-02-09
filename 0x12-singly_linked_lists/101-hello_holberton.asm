section .data
	format db "Hello, Holberton", 10, 0

section .text
	extern printf
	global main

main:
	push format
	call printf
	add rsp, 8
	;

	mov rdi, 0
	mov rax, 60
	syscall


