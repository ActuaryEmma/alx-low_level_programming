#include "main.h"
/**
  * *_memcpy - copy memory area
  * @dest: pointer where memory will be copied to
  * @src: pointer where memory will be copied from
  * @n: size of the bytes
  * Return: dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
