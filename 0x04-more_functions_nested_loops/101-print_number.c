#include "main.h"
#include <stdio.h>
/**
  * print_number - print an integer
  * @n: parameter
  * Return: void
  */
void print_number(int n)
{
	int digits = 0;

	int divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n / divisor > 9)
	{
		divisor *= 10;
	}
	while (divisor != 0)
	{
		digits = n / divisor;
		_putchar(digits + '0');
		n %= divisor;
		divisor /= 10;
	}
}
