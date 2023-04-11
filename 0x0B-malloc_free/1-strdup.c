#include "main.h"
#include <stdlib.h>

/**
  * *_strdup - returns a pointer to a newly allocated space in memory ,\
  which contains a copy of the string given as a parameter
  * @str: pointer of the string
  * Return: 0
  */
char *_strdup(char *str)
{
	int i;

	int count = 0;

	char *p;


	/* if string is empty */
	if (str == NULL)
	{
		return (NULL);
	}

	/* find th length of the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	/* allocate the memory for the string */

	p = malloc(count + 1);

	/* if there is insufficent memory */
	if (p == NULL)
	{
		return (NULL);
	}

	/* else copy string to newly allocated space in memory */

	for (i = 0; i < count; i++)
	{
		p[i] = str[i];
	}

	/* return the pointerr */

	return (p);
}
