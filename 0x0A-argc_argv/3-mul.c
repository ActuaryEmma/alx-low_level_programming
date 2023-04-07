#include <stdio.h>
#include <stdlib.h>
/**
  * main - multiplies two numbers
  * @argc: number of command line arguments
  * @argv: array of strings
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int i;

	int multi = 1;

	if (argc > 1)
	{
		for (i = 1; i <= 2; i++)
		{
			multi = (atoi(argv[i]) * multi);
		}
		printf("%d\n", multi);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
