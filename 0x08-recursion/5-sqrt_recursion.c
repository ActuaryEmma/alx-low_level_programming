#include "main.h"
/**
  * _sqrt_recursion - returns the natural square root of a number
  * @n: the number that will find its square root
  * Return: 0
  */
int _sqrt_recursion(int n)
{
	int result = 0;

	if (n % 2 != 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	else
	{
		result = (n * _sqrt_recursion(n);
		return (result);
	}
}
