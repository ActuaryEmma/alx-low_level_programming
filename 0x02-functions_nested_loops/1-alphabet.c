#include "main.h"
#include <stdio.h>
/**
  * print_alphabet - make the alphabet
  * Return: void
  */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
