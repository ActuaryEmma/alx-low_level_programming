#include "main.h"
/**
  * *_strcat - concatenates two strings
  * @dest: parameter
  * @src: parameter
  * Return: pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src)
{
	int i;
	int destcount = 0;
/*find the length of dest */
	for (i = 0; dest[i] != '\0'; i++)
	{
		destcount++;
	}
	/* concatenate */
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[destcount + i] = src[i];
	}
	return (dest);
}
