#include <stdio.h>
#include <stdlib.h>
/**
  * main - prinst the number of arguments passed
  * @argc: number of command line arguments
  * @argv: array of strings
  * Return: 0
  */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
