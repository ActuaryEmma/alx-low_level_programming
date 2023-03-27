#include "main.h"

/**
  * _strlen - returns the length of a string
  * @s: parameter
  * Return: return length of string
  */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\n')
	{
		len++;
		s++;
	}
	return (len);
}
