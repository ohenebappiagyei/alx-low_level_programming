section .data
	hello db "Hello, Holberton", 0
	format db "%s", 0
	newline db 10, 0

section .text
	global main
	extern printf

main:
	sub rsp, 8	; Align the stack

	mov rdi, format
	mov rsi, hello
	call printf

	mov rdi, format
	mov rsi, newline
	call printf

	add rsp, 8	; Restore the stack
	ret
