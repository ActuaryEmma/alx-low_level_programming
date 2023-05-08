#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
  * create_file - creates a file
  * @filename: name of the file to create
  * @text_content: content to be added to the file
  * Return: 1 for success, -1 for failure
  */
int create_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL)
	{
		return (-1);
	}

	file = fopen(filename, "w+");
	if (file == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		fputs(text_content, file);
	}
	fclose(file);
	return (1);

}
