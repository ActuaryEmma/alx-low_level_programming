#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer to the first element os the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: return first index where value is located
 */


int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, value);
		}
		return (i);
	}
	return (0);
}
