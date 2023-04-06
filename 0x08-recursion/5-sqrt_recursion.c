#include "main.h"
/**
  * _sqrt_recursion - returns the natural square root of a number
  * @n: the number that will find its square root
  * Return: 0
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (recursion(n, 0));
	}
}

/**
 * recursion - finds square root of a int
 * @n: parameter
 * @i: parameter
 * Return: 0
 */
int recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (recursion(n, i + 1));
	}
}

