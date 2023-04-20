#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  * 
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, result = 0;
	va_list(my_list);
	va_start(my_list, n);

	for (i = 0; i < n; i++)
	{
		result = result + va_arg(my_list, int);
	}
	va_end(my_list);
	return (result);
}
