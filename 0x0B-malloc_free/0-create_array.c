#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
  * *create_array - create an array of chars and initializes it with specific\
  char
  * @size: size of array
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
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}


