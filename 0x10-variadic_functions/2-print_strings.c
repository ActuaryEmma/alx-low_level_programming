#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
  * prints_strings - print string followed by a separator
  * @separator: pointer that points to the separator
  * @n: number of strings
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list mylist;
	va_start(mylist, n);
	for (i = 0; i < n; i++)
	{

		if ((va_arg(mylist, char*)) != NULL)
		{
			printf("%s", va_arg(mylist, char*));
		}
	
		if (separator != NULL && i < n-1)
		{
			printf("%s\n", separator);
		}
	}
	printf("\n");
	va_end(mylist);
}

