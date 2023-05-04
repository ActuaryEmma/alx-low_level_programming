#include "main.h"
/**
  * set_bit - sets the value of a bit to 1 ata agiven index
  * @n: pointer
  * @index: is the index starting from 0 of the bit you want to set
  * Return: 1 if it worked or -1 if an error occured
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int f = 1, i;


	if (n == NULL)
	{
		return (-1);
	}

	if (index > 63)
	{
		return (-1);
	}
	for (i = 0; i < index; i++)
	{
		*n = *n << 1;
	}
	*n = *n | (f << index);
	return (1);
}
