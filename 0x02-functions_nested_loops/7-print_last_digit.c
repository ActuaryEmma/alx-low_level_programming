#include "main.h"

/**
  * print_last_digit - print the last digit of a number (n % 10)
  * @num: parameter
  * Return: value of the last digit
  */
int print_last_digit(int num)
{
	int last_digit = (num % 10);

	_putchar(last_digit);
	return (last_digit);
}


