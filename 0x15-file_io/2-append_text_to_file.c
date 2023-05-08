#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
/**
  * append_text_to_file - append texts at the end of the file
  * @filename: name of the file
  * @text_content: text to append at end of file
  * Return: 1 on success and -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL)
	{
		return (-1);
	}

	file = fopen(filename, "a");
	if (file == NULL)
	{
		return (-1);
	}

	if (fputs(text_content, file) == EOF)
	{
		fclose(file);
		return (-1);
	}
	fclose(file);
	if (chmod(filename, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH) == -1)
		return (-1);
	return (1);
}


