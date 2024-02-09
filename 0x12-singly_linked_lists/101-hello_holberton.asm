section .data
	format db "Hello, Holberton", 10, 0

section .text
	extern printf
	global main

main:
	mov rdi, format
	call printf

	; Exit the program
	mov rdi, 0
	mov rax, 60
	syscall

