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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		count++;
	for (i = 0; s2[i] != '\0'; i++)
		count2++;
	if (n >= count2)
	{
		n = count2;
	}
	p = malloc(count + n + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < count; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < n; j++, i++)
	{
		p[i] = s2[j];
	}
	p[i] = '\0';
	return (p);
}
