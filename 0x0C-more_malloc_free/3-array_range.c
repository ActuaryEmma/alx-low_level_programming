#include "main.h"
#include <stdlib.h>

/**
  * *array_range - creates an array of integers
  * @min: parameter
  * @max: parameter
  * Return: pointer
  */
int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
	{
		return (NULL);
	}

	p = malloc(sizeof(int) * ((max - min) + 1));

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		/**
		  * increment the value min
		  */
		p[i] = min++;
	}
	return (p);
}
