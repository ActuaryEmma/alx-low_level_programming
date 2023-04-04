#include "main.h"
#include <stdio.h>
/**
  * print_diagsums - print sum of two diagonal square matrix
  * @a: array
  * @size: size of array
  * Return: void
  */
void print_diagsums(int *a, int size)
{
	int i;

	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		/* formula to access the elements */
		/**
		  * sum1 += *(a + (0 * 3) + 0) = 0 element
		  * sum1 += *(a + (1 * 3) + 1) = 4th element
		  * sum1 += *(a + (2 * 3) + 2) = 8th element
		  * sum2 += *(a + (0 * 3) + (3-0-1)) = 2nd element
		  * sum2 += *(a + (1 * 3) + (3-1-1)) = 4th element
		  * sum2 += *(a + (2 * 3) + (3-2-1) = 6th element
		  */
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - i - 1));
	}
	printf("%d, %d\n", sum1, sum2);
}
