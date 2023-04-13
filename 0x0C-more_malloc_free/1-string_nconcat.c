#include "main.h"
#include <stdlib.h>
/**
  * *string_nconcat - concatenates two strings
  * @s1: parameter
  * @s2: parameter
  * @n: parameter
  * Return: pointer
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j;

	unsigned int count = 0;
	unsigned int count2 = 0;

	/* check if string is NULL */
	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}

	/* length of s1 */
	for (i = 0; s1[i] != '\0'; i++)
	{
		count++;
	}
	/* length of s2 */
	for (i = 0; s2[i] != '\0'; i++)
	{
		count2++;
	}
	/* memory allocation if n >= length of s2 */
	if (n >= count2)
	{
		p = malloc(count + count2 + 1);
		if (p == NULL)
		{
			return (NULL);
		}
	}
	/* memory allocation if n < length of s2 */
	else if (n < count2)
	{
		p = malloc(count + n + 1);
		if (p == NULL)
		{
			return (NULL);
		}
	}

	/* combine s1 and s2 strings */
	for (i = 0; i < count; i++)
	{
		p[i] = s1[i];
	}
	if (n >= count2)
	{
		for (j = 0; j < count2; j++, i++)
		{
			p[i] = s2[j];
		}
	}
	else
	{
		for (j = 0; j < n; j++, i++)
		{
			p[i] = s2[j];
		}
	}
	return (p);
}
