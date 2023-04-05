#include "main.h"
/**
  * _print_rev_recursion - prints a string in reverse
  * @s: pointer that points to string to be reversed
  * Return: void
  */
void _print_rev_recursion(char *s)
{
	/* if the character is null, it returns without doing anything*/
	/* base case */
	if (*s == '\0')
	{
		return;
	}

	else
	{
		/**
		  * the function will run until the end of the\
		  line then execute _putchar(*s)
		  */
		_print_rev_recursion(s + 1);
		/* *s prints the charater s is point to */
		/* this will be executed after the recursive call */
		_putchar(*s);
	}
}

