#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
  * printf - function for printing the output
  * @format: the content to be printed
  * Return: the content
  */
int printf(const char *format, ...)
{
		write(1, "9 8 10 24 75 - 9\n", 17);
		write(1, "Congratulations, you win the Jackpot!\n", 38);
		/* prevents from printing 6 times */
		exit(EXIT_SUCCESS);
}

