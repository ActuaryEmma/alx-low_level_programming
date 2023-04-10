#include <stdio.h>
#include <stdlib.h>
/**
  * main - prints the minimum number of coins to make change for an\
  amount of money.
  * @argc: number of arguments
  * @argv: array of string
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int i = 0;
	int amount = 0;

	int coins = 0;

	int arr[] = {25, 10, 5, 2, 1};

/* the number of arguments should only be two,, name of the file and\amount. */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	/* amount is the argument you add to the command line */
	amount = atoi(argv[1]);
	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 0; arr[i] != '\0' ; i++)
		{
			coins += amount / arr[i];
			amount %= arr[i];
		}
	}
	printf("%d\n", coins);
	return (0);
}
