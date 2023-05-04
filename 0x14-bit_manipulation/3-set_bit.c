#include "main.h"
/**
  * set_bit - sets the value of a bit to 1 ata agiven index
  * @n: pointer
  * @index: is the index starting from 0 of the bit you want to set
  * Return: 1 if it worked or -1 if an error occured
  */
int set_bit(unsigned long int *n, unsigned int index)
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
	/**
	  * f<<index : shift the binary representation of a number to the left
	  * f = f << index = f = 1 << index
	  * eg index 1 , f = 1 << 1 = 00000010
	  * *n = 10001001 f=00000010
	  * *n | (f) = 10001011
	  */
	*n = *n | (f << index);
	return (1);
}
