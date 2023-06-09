#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
  * *_calloc - allocates memory for an array
  * @nmemb: elements of array
  * @size: size of the array
  * Return: void
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *p;

	/*unsigned int i;*/

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	/* allocate memory */
	p = malloc(nmemb * size);
	/* check if allocation was successful */
	if (p == NULL)
	{
		return (NULL);
	}
	/**
	  * for (i = 0; i < nmemb * size; i++)
	  * *((char*)p + i) = 0;
	  */
       /* memset sets block of memory(array of intgers) to value 0 */
	memset(p, 0, nmemb * size);
	return (p);
}


