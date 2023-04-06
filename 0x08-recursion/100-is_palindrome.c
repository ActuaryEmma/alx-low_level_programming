#include "main.h"
/**
  * is_palindrome - string that read the same backward and forward
  * @s: pointer to string
  * Return: 0
  */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (_palindrome_recursion(s, 0, _palindrome(s)));
}

/**
 * _palindrome - returns the length of a string
 * @s: pointer to the string
 * Return: length of the string
 */
int _palindrome(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _palindrome(s + 1));
}

/**
 * _palindrome_recursion - compare characters
 * @s: pointer to the  string
 * @i: parameter
 * @len: length of the string
 * Return: 1 if palindrome, 0 if not
 */
int _palindrome_recursion(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	{
		return (0);
	}
	if (i >= len)
	{
		return (1);
	}
	return (_palindrome_recursion(s, i + 1, len - 1));
}
