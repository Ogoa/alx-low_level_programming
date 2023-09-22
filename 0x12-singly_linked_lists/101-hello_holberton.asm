section .data
	format db "Hello, Holberton", 0
	newline db 10, 0

section .text
	global main
	extern printf, exit

main:
	mov rdi, format
	xor rax, rax
	call printf

	mov rdi, newline
	xor rax, rax
	call printf

	mov rdi, 0
	call exit
