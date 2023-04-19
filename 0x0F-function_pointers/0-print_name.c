#include "function_pointers.h"

/**
  * print_name - prints a name
  * @name: pointer to the name
  * @f: pointer to the function
  */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
