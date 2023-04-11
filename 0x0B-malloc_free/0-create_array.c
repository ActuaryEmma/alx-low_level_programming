#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
  * *create_array - create an array of chars and initializes it with specific\
  char
  * @size: size of array
  * @c: parameter
  * Return: 0
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *p;

	/* allocates memory for the array */
	p = malloc(size * sizeof(char));

	/* first checks the size of array o avoid creating empty array */
	if (size == 0)
	{
		return (NULL);
	}
	/* else checks if memory allocation failed and returns NULL if failed */
	if (p == NULL)
	{
		return (NULL);
	}
	/**
	  * if allocation was successful,
	  * the function intializes the array with character c .
	  * c is assigned to each element in the array
	  */
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	/* returns a pointer to the array */
	return (p);
}


