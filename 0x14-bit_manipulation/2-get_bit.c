#include "main.h"

/**
  * get_bit - returns the value of a given index
  * @n: the value to check
  * @index: index of the binary of value n starting from 0
  * Return: value of bit at index x or -1 if an error occured
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int f = 1, i, bit_value;

	if (index > 63)
		return (-1);
	for (i = 0; i < index; i++)
		n = n >> 1;
	bit_value = n & f;

	return (bit_value);
}
