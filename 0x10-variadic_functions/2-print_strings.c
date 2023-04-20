#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
  * print_strings - print string followed by a separator
  * @separator: pointer that points to the separator
  * @n: number of strings
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *var_str;
	va_list mylist;

	va_start(mylist, n);

	for (i = 0; i < n; i++)
	{
		var_str = va_arg(mylist, char*);
		if (var_str == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", var_str);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s ", separator);
		}
	}
	printf("\n");
	va_end(mylist);
}

