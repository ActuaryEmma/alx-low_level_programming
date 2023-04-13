#include "main.h"
#include <stdlib.h>
/**
  * *_realloc - allow change of size of a previously allocated block by + or -
  * +(increasing) or -(decreasing) its size
  * reallocates memory using malloc
  * @ptr: pointer to the memory previously allocated
  * @old_size: size in bytes
  * @new_size: new size of the new memory block
  * Return: void
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	/*if new == old,, no need for allocating new_size*/
	if (new_size == old_size)
	{
		return (ptr);
	}
	/* if ptr is null return new_size for all values of old and new_size */
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	/* */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* allocate memory for new_size */
	p = malloc(new_size);
	if (p == NULL)
	{
		return (NULL);
	}

	free(ptr);
	return (p);
}



