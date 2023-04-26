#include "variadic_functions.h"
/**
  * print_all - print all formats followed by a separator
  * @format: list of types of argument
  */
void print_all(const char * const format, ...)
{
	char *var_str;
	va_list mylist;
	const char *f_ptr;

	f_ptr = format;
	va_start(mylist, format);
	while (*f_ptr != '\0')
	{
		switch (*f_ptr)
		{
			case 'c':
				printf("%c", (char)va_arg(mylist, int));
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
			default:
				f_ptr++;
				continue;
		}
		if (*(f_ptr + 1) != '\0')
			printf(" ");
		f_ptr++;
	}
	printf("\n");
	va_end(mylist);
}

