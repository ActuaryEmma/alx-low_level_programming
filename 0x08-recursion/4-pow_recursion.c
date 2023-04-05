#include "main.h"
/**
  * _pow_recursion - function that returns value of x raised to power of y
  * @x: parameter
  * @y: power
  * Return: 0
  */
int _pow_recursion(int x, int y)
{
	int result = 0;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		result = (x * _pow_recursion(x, y - 1));
		return (result);
	}
}
