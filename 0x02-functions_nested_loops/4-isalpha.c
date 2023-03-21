#include "main.h"

/**
  * _isalpha - check for alphabet character
  * @c: argument
  * Return: 1 if c is lowercase otherwise 0
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
