#include "function_pointers.h"
/**
  * int_index - searches for an integer
  * @array: pointer to the array
  * @size: size of the array
  * @cmp: pointer of the function
  * Return: (-1) if value is not found , i if value is found
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/* check if array and cpm are null */
	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	/* check the size of array */
	if (size <= 0)
	{
		return (-1);
	}
	/* iterate over array elements and return index if element is found*/
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}

	}
	/* if element not found*/
	return (-1);
}
