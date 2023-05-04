#include "main.h"
/**
  * clear_bit - sets the value of a bit to 0 at a given index
  * @n: pointer
  * @index: is the index starting from 0 of the bit you want to set
  * Return: 1 if it worked or -1 if an error occured
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int f = 1;

	/* checks if n is NULL*/
	if (n == NULL)
	{
		return (-1);
	}

	/* unsigned long int has 64 bits */
	if (index > 63)
	{
		return (-1);
	}
	/* f<<index : shift the binary representation of a number to the left*/
	*n = *n & ~(f << index);
	return (1);
}

