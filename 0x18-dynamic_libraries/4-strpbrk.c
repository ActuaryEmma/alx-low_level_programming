#include "main.h"
#include <stddef.h>
/**
  * *_strpbrk - locates the first occurrence in the string s\
  eg accept = world and s = hello world; l is the first c=occurence in world\
  that is also in hello world ; so it returns llo world
  * @s: pointer with string to search
  * @accept: pointer with characters to be serached for
  * Return: s
  */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}


