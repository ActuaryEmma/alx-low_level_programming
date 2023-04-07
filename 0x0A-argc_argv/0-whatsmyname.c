#include <stdio.h>
#include <stdlib.h>

/** 
  * main - prints its name
  * Return: 0
  */
int main (int argc, char* argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
