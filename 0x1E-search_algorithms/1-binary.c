#include <stdio.h>
#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: print the array being searched every time it changes
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, mid, left = 0, right = size - 1;

	if (array == NULL)
	{
		return (-1);
	}
	/* print the first element */
	printf("Searching in array: %d", array[left]);
	/* print the rest of the element */
	for (i = left + 1; i <= right; i++)
		printf(", %d", array[i]);
	printf("\n");
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
		if (left <= right)
		{
			printf("Searching in array: %d", array[left]);
			for (i = left + 1; i <= right; i++)
			{
				printf(", %d", array[i]);
			}
			printf("\n");
		}
	}
	return (-1);
}
