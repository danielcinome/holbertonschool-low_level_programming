Section.data
	str: db 'Hello, Holberton'

section.text


_main
	mov rax, 1
	mov rdi, 1
	mov rsi, str
	mov rdx,  17
	syscall

	mov rax, 60
	mov rdi, 0
	syscall
