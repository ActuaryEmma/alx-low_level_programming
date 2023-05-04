#include "main.h"
#include <stdio.h>

/**
  * print_binary - print the binary representation of a number
  * @n: number to be converted to binary
  * Return: void
  */
void print_binary(unsigned long int n)
{
	/* checks if the number given is greater than 1 */
	if (n > 1)
		/* if you right shift by 1 its like dividing the number by 2*/
		print_binary(n >> 1);
	/* if n = 1 result = 1 else result = 0 */
	/*printf("%ld", n & 1);*/
	_putchar((n & 1) + '0');
}

