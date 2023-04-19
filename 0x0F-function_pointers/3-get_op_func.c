#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * get_op_func - pointer to the function that corresponds to the operator
  * @s: operator
  * Return: 0
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i = 0;

	/* iterate over array oops */

	while (ops[i].op != NULL && (*(ops[i].op) != *s))
	{
	/* if (*s != *(ops[i].op))return (NULL); */
		i++;
	}
	return (ops[i].f);
}

