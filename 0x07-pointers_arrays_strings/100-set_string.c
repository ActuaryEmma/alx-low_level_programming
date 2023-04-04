#include "main.h"
/**
  * set_string - sets the value of a pointer to a char
  * @s: double pointer
  * @to: parameter
  * Return: void
  */
void set_string(char **s, char *to)
{
	int i;

	for (i = 0; to[i] != '\0'; i++)
	{
		*s = to;
	}
}
