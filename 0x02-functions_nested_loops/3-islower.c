#include "main.h"

/**
  * _islower - checks the lowercase character
  *
  *@c: The character to be checked
  *
  * Return: 1 if lowercase or 0 if anything else
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

