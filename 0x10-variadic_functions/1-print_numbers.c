#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
  * print_numbers - print numbers with a separator
  * @separator: pointer that points to separator
  * @n: number of integers passed in a function
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list mylist;
	va_start(mylist, n);

/*	if (separator == NULL)
	{
		return;
	}*/
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(mylist, int));
		if (separator != NULL && i != n - 1)
		{
			printf("%c ",  *separator);
		}
	}
	printf("\n");
	va_end(mylist);
}


