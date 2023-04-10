#include <stdio.h>
#include <stdlib.h>
/**
  * main - add two positive numbers
  * @argc: number of command line arguments
  * @argv: array of strings
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int i, j;

	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	/* if argc is > 0 it iterates over each argument from argc = 2 */
	else
	{
		for (i = 1; i < argc; i++)
		{
			/* iterates over aech argurment upto null character */
			/* argv[i][j] represent two dim array */
			/* ith row and jth column */
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				/* check if character is between 0 -9 */
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}

