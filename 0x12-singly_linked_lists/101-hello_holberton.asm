section .data
	hello: db "Hello, Holberton", 0x0A, 0x00 ; string to print with newline

section .text
	global main
	extern printf

main:
	push rbp        ; save the base pointer
	mov rbp, rsp    ; set the stack frame
	sub rsp, 16     ; allocate space for the argument list

	lea rdi, [hello]    ; load the address of the string into rdi
	xor eax, eax        ; clear eax
	call printf         ; call the printf function

	add rsp, 16     ; deallocate space for the argument list
	mov rsp, rbp    ; restore the stack pointer
	pop rbp         ; restore the base pointer

	xor eax, eax    ; return 0
	ret
