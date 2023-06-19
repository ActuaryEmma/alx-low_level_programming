#include "main.h"

/**
  * _isdigit - check for a digit (0 to 9)
  * @c: parameter
  * Return: 1 if a digit else return 0
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

