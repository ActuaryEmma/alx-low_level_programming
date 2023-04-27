/* export the symbol main so that linker can find it*/
global main

/* declare printf function */
extern printf

/*entry point of the program */
main:
mov edi, format
xor eax, eax
call printf
mov eax, 0
ret

format: db `Hello, Holberton\n`,0

