#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * *argstostr - concateates all the arguments of your program
  * @ac: parameter
  * @av: parameter
  * Return: 0
  */
char *argstostr(int ac, char **av)
{
	int i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	

	av = malloc(sizeof(int) * ac); 
	if (av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		printf("%d\n, atoi(av[i])");
	}
	return (*av);
}

