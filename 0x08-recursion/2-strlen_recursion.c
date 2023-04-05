#include "main.h"
/**
  * _strlen_recursion - returns the length of a string
  * @s: pointer that points the string
  * Return: length of a string
  * len = 1 + (next character :element 2)_strlen_recursion(s + 1)
  * len = 1 + 1 +(next character :element 3)_strlen_recursion(s + 1)
  * len = 1 + 1 + 1 ...... + 1 + ('\0' element)_strlen_recursion(s + 1)
  */
int _strlen_recursion(char *s)
{
	int len = 0;
/* base case */
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		/* assigns the value overwriting its current value */
		len = 1 + _strlen_recursion(s + 1);
	}

	return (len);
}
