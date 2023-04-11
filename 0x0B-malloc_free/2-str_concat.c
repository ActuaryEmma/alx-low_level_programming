#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * *str_concat - concatenate two string
  * @s1: first pointer to the first string
  * @s2: second pointer of the second string
  * Return: 0
  */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *p;

	int count = 0;
	int count2 = 0;
	/* checks if any of the string is null */
	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	/* length of first string s1 */
	for (i = 0; s1[i] != '\0'; i++)
	{
		count++;
	}
	/* length of second string s2 */
	for (i = 0; s2[i] != '\0'; i++)
	{
		count2++;
	}
	/* allocates the memory for new concatenated string */
	p = malloc(count + count2 + 1);
	/* if  allocation was not successful return null */
	if (p == NULL)
	{
		return (NULL);
	}
	/* copies s1 to p */
	for (i = 0; i < count; i++)
	{
		p[i] = s1[i];
	}
/* copies s2 to p from the last character of p(where the first loop ended */
	/* i keeps track of concatenated elements (current position) */
	for (j = 0; j <= count2; j++, i++)
	{
		p[i] = s2[j];
	}
	return (p);
}

