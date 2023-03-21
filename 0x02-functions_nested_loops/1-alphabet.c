#include "main.h"
#include <stdio.h>
/**
  * main - Entry point
  * Return: Always (0) Success
  */
void print _alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
