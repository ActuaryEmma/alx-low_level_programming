#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * *malloc_checked - allocates memory
  * @b: parameter
  * Return: void
  */
void *malloc_checked(unsigned int b)
{
	/* point to any datatype */
	void *p;

	p = malloc(b);

	/* terminate the program */
	/* check if memory allocation was successful else exit with value 98*/
	if (p == NULL)
	{
		exit(98);
	}
	/* returns pointer is malloc was successful */
	return (p);
}

