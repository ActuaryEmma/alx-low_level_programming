#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
  * *create_array - create an array of chars and initializes it with specific\
  char
  * @size: parameter
  * @c: parameter
  * Return: 0
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *p;

	p = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}


