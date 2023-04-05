#include "main.h"
/**
  * factorial - returns factorial of a given number
  * @n: given number
  * Return: 0
  */
int factorial(int n)
{
	int result = 0;
/* if n is less than 0 return -1*/
	if (n < 0)
	{
		return (-1);
	}
	/* if n == 0 return 1 */
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		result = n * factorial(n - 1);
	}
	return (result);
}
