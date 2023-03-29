#include "main.h"
/**
  * _strcmp = compares two string
  * @s1: string 1 to compare
  * @s2: string2 to compare
  * Return: 0
  */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[1] == s2[i])
		{
			return (0);
		}
		else if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else
		{
			return (-(s2[i] - s1[i]));
		}
	}
	return (0);
}

