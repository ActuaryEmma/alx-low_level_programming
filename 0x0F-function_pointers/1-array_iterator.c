#include "function_pointers.h"
#include <stddef.h>
/**
  * array_iterator - executes a funtion given as a parameter on each element
  * @array: pointer to array
  * @size: size of the array
  * @action: pointer to the function
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i;

	/* check if null for size and action pointer */
	if (array == NULL || action == NULL)
	{
		return;
	}
	/* iterate through the elements of array  */
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
