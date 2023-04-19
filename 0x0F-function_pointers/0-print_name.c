#include "function_pointers.h"
#include <stddef.h>
/**
  * print_name - prints a name
  * @name: pointer to the name
  * @f: pointer to the function
  */
void print_name(char *name, void (*f)(char *))
{
	/* check if name or f is null*/
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
