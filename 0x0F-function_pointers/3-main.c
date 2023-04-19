#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
  * main - returns either + || - || * || % ||/ of arguments in command line
  * @argc: number of arguments in command line
  * @argv: pointer of array
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int num1, num2, result = 0;
	char *operator;

	/* check the number of arguments */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* convert num1 and num2 from strings to int */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	/* if the operator is none*/
	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	/* if the user tries to / or % by 0*/
	if ((*operator == '/' && num2 == 0) || (*operator == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(operator)(num1, num2);
	printf("%d\n", result);
	return (0);
}
