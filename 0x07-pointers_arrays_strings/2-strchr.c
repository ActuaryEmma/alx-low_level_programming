#include "main.h"
#include <stddef.h>
/**
  * *_strchr - locates a charater in string
  * @s: pointer to te string where the character will be searched
  * @c: character to be searched for in a string
  * Return: 0
  */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
