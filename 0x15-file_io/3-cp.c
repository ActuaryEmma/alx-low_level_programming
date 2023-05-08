#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - prints an error message and exits with the given code
 * @message: error message to print
 * @exit_code: exit code
 */
void error_exit(const char *message, int exit_code)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(exit_code);
}

/**
 * main - entry point
 * @argc: number of arguments on the command line
 * @argv: array of on the command line
 * Return: 0 on success, 97, 98, 99, 100 on failure
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, r, w;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_exit("Usage: cp file_from file_to", 97);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error_exit("Error: Can't read from file", 98);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		error_exit("Error: Can't write to file", 99);

	while ((r = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		w = write(file_to, buffer, r);
		if (w == -1 || w != r)
			error_exit("Error: Can't write to file", 99);
	}

	if (r == -1)
		error_exit("Error: Can't read from file", 98);

	if (close(file_from) == -1)
		error_exit("Error: Can't close fd", 100);

	if (close(file_to) == -1)
		error_exit("Error: Can't close fd", 100);

	return (0);
}
