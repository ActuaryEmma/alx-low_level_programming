#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
  * read_textfile - reads a text file and prints it to the POSIX std output.
  * @filename: pointer to the file
  * @letters: number of letters it should read and print
  * Return: the actual number of letters it could read and print else return 0
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	/* store @ character */
	int c;
	/* store the count of characters*/
	size_t count = 0;
	FILE *file;

	if (filename == NULL)
	{
		return (-1);
	}
	file = fopen(filename, "r");

	/* open and read the file */
	if (file == NULL)
	{
		return (-1);
	}
	/*EOF(End of file), getc: reads a single character from the file */
	while ((c = getc(file)) != EOF && count < letters)
	{
		/* print each character */
		putchar(c);
		count++;
	}
	fclose(file);
	return (count);

}
