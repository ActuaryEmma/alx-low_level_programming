#include "main.h"

/**
  * print_last_digit - print the last digit of a number (n % 10)
  * @num: parameter
  * Return: value of the last digit
  */
int print_last_digit(int num)
{
	int last_digit = num % 10;

	if (last_digit < 0)
	{
		/* multiply the value by -1  to change from - to + */
		last_digit *= -1;
	}
	/* 0 convert numeric digit to character in ascii table */
	_putchar(last_digit + '0');
	return (last_digit);
}


