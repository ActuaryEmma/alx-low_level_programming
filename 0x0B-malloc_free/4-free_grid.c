#include "main.h"
#include <stdlib.h>
/**
  * free_grid - free a 2D grid
  * @grid: pointer
  * @height: number of rows
  * Return: 0
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		/* free @row in the array */
		free(grid[i]);
	}
	/* free entire array */
	free(grid);
}
