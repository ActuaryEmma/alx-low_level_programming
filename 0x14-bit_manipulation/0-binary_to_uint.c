#include "main.h"
/**
  * binary_to_uint - converts a binary to an unsigned int
  * @b: pointing to a string of 0 and 1 char
  * Return: the converted number or 0 if there is one or more chars in the\
  string b that is not 0 or 1 or b = NULL
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, result = 0;

	if (b == NULL)
	{
		return (0);
	}
/* iterate over all characters of b */
	for (i = 0; b[i] != '\0'; i++)
	{
		/* if there is  char(s) in the string that are not 0 or 1 */
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		else
		{
			/* b[i] is converted to int */
			result = (result * 2) + (b[i] - '0');
		}
	}
	return (result);
}

