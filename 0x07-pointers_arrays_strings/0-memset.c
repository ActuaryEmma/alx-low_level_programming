#include "main.h"
/**
  * *_memset - fills the first n bytes of the memory pointed to by s with a \
  constant byte b
  * memset in c is used to set a block of memory to a specified value
  * @s: pointer tp block of memory to be filled
  * @b: constant byte- value to be set
  * @n: fills the first n bytes of memory
  * Return: 0
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
