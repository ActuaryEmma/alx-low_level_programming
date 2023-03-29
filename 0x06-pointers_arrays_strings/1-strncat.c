#include "main.h"
/**
  * *_strncat - concatenate two strings
  * @dest: parameter
  * @src: parameter
  * @n: parameter
  * Return: pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int destcount = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		destcount++;
	}
	for (i = 0 ; i < n ; i++)
	{
		dest[destcount + i] = src[i];
	}
	return (dest);
}
