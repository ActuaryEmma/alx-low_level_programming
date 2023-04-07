#include "main.h"
/**
  * _strspn - gets the length of a prefix substring
  * @s: initial string to be searched
  * @accept: strint with characters to be searched for
  * Return: 0
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (!accept[j])
		{
			break;
		}
	}
	return (count);
}

