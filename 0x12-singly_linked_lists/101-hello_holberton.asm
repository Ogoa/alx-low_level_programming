section .data
	hello db "Hello, Holberton", 0

section .text
	global main
	extern puts

main:
	mov rdi, hello
	call puts
	ret
