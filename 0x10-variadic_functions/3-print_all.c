#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
  * print_all - print all formats followed by a separator
  * @format: list of types of argument
  */
void print_all(const char * const format, ...)
{
	char *var_str;
	va_list mylist;

	va_start(mylist, format);
	while (*format != '\0')
	{
		switch(*format)
		{
			case 'c':
				printf("%c", va_arg(mylist, int));
				break;
			case 'i':
				printf("%d", va_arg(mylist, int));
				break;
			case 'f':
				printf("%f", va_arg(mylist, double));
				break;
			case 's':
				var_str = va_arg(mylist, char*);
				if (var_str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", var_str);
				break;
		}
		format++;
	}
	printf("\n");
	va_end(mylist);
}

