#include "main.h"
/**
  * *cap_string - capitalizes word
  * @str: parameter
  * Return: 0
  */
char *cap_string(char *str)
{
	int i;
/*	char *a = "32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125";*/

	for (i = 0; str[i] != '\0'; i++)
	{
		/*  space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }*/
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0 ||
					str[i - 1] == ' ' ||
					str[i - 1] == '\t' ||
					str[i - 1] == '\n' ||
					str[i - 1] == ',' ||
					str[i - 1] == ';' ||
					str[i - 1] == '.' ||
					str[i - 1] == '!' ||
					str[i - 1] == '?' ||
					str[i - 1] == '"' ||
					str[i - 1] == '(' ||
					str[i - 1] == ')' ||
					str[i - 1] == '{' ||
					str[i - 1] == '}')
			{
				str[i] = (str[i] - 32);
			}
		}
	}
	return (str);
}
