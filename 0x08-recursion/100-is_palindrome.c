#include "main.h"
/**
  * is_palindrome - string that read the same backward and forward
  * @s: pointer to string
  * Return: 0
  */

int is_palindrome(char *s)
{
	/* function from q3 */
	int len = _strlen_recursion(s);

	if (len == 0 || len == 1)
	{
		return (1);
	}
	return (_palindrome_recursion(s, 0, len - 1));
}
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

/**
 * _palindrome_recursion - compare characters
 * @s: pointer to the  string
 * @i: parameter
 * @j: parameter
 * Return: 1 if palindrome, 0 if not
 */
int _palindrome_recursion(char *s, int i, int j)
{
	if (i > j)
	{
		return (1);
	}
	else if (s[i] == s[j])
	{
		return (_palindrome_recursion(s, i + 1, j - 1));
	}
	else
	{
		return (0);
	}

}
