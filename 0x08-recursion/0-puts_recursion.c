#include "main.h"
/**
  * _puts_recursion - prints a string followed by new line
  * @s: the string to be printed
  * Return: void
  */
void _puts_recursion(char *s)
{
	/* base line */
	/* if it reaches the end of the string,, print a new line*/
	if (*s == '\0')
	{
		_putchar('\n');
	}
	/* if its not null print using _putchar function*/
	/* use *s to access the value being pointed to */
	else
	{
		_putchar(*s);
		/**
		  * the function call itself until the end of the string
		  * when a character is printed the function increment to the\
		   next character
		  */
		_puts_recursion(s + 1);
	}
}
