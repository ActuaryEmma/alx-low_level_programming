#include "main.h"
#include <stddef.h>
/**
  * *_strstr - locates a substring
  * @haystack: pointer to the string that have the string to be search for
  * @needle: pointer with the substring to be searched for
  * Return: substring or NULL
  */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}
