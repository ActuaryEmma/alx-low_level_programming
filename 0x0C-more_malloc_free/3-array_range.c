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
	for (i = min; i <= max; i++)
	{
		/**
		  * increment the value min
		  * eg if min = 0 , p[0] = 0 + 0; p[1] = 0 + 1; p[2] = 0 + 2
		  */
		p[i] = min + i;
	}
	return (p);
}
