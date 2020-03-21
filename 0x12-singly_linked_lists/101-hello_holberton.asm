section	.text
global	main

main:
	
	mov edx,len
	mov ecx,msg
	mov ebx,1
	mov eax,4
	int 0x80

	mov eax,1
	mov ebx,0
	int 0x80


section	.data
	msg db 'Hello, Holberton', 0, 10
	len equ $ - msg