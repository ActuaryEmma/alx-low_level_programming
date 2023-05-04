#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 * checks the endianness of the machine it is running on. 
 * Endianness refers to the order in which bytes are stored in memory.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *b = (char *) &i;

	return (*b);
}

