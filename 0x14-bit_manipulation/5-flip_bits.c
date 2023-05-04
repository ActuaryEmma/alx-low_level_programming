#include "main.h"
/**
  * flip_bits - return the number of bits you need to flip to get from one\
  number to another
  * @n: the first number
  * @m: the second number
  * Return: number of bits
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int value;
	unsigned int count = 0;

	/* computes XOR and store the value in value */
	value = n ^ m;

	/* enters a loop as long there is a difference btwn n and m*/
	while (value > 0)
	{
		if (value & 1)
		{
			count++;
		}
		value = value >> 1;
	}
	return (count);
}
