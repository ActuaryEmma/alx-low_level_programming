#include "main.h"
#include <stdlib.h>
/**
  * **alloc_grid - returns a pointer to a 2 dimensional array of integers
  * @width: number of columns
  * @height: number os rows
  * Return: 0
  */
int **alloc_grid(int width, int height)
{
	int i, j;
	/* represents two dimensional array */
	int **p;
	/* checks of width and height is <= 0 */
	if (width <= 0 || height <= 0)
		return (NULL);
	/* int * allocates memory for a 2 dimensional array of integers*/
/*when use int we will only allocate for height and not pointers to those int*/
	p = malloc(sizeof(int *) * height);
	/* checks if allocation is successful , if not return NULL */
	if (p == NULL)
		return (NULL);
/* allocates memory for width */
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
/* if allocation was not successful, free all the previous allocated memory */
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(p[j]);
		}
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	return (p);
}

