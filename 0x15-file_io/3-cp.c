#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
* error_exit - Checks if files can be opened
* @exit_code: Exit code to use when terminating the program
* @format: A format string
* Return: Nothing
*/
void error_exit(int exit_code, const char *format, ...)
{
	va_list args;

	va_start(args, format);

	dprintf(STDERR_FILENO, "Error: ");
	vdprintf(STDERR_FILENO, format, args);
	va_end(args);
	exit(exit_code);
}
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: Always 0 (Success)
 */
#define BUFFER_SIZE 1024
int main(int argc, char *argv[])
{
	const char *file_from;
	const char *file_to;
	int fd_from;
	int fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytesRead, bytesWritten;

	if (argc != 3)
	{
		error_exit(97, "Usage: %s file_from file_to\n", argv[0]);
	}
	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
	{
		error_exit(98, "Can't read from file %s\n", file_from);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);

	if (fd_to == -1)
	{
		close(fd_from);
		error_exit(99, "Can't write to file %s\n", file_to);
	}

	while ((bytesRead = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytesWritten = write(fd_to, buffer, bytesRead);

		if (bytesWritten != bytesRead)
		{
			close(fd_from);
			close(fd_to);
			error_exit(99, "Can't write to file %s\n", file_to);
		}
	}
	if (bytesRead == -1)
	{
		close(fd_from);
		close(fd_to);
		error_exit(98, "Can't read from file %s\n", file_from);
	}
	if (close(fd_from) == -1)
	{
		error_exit(100, "Can't close fd %d\n", fd_from);
	}
	if (close(fd_to) == -1)
	{
		error_exit(100, "Can't close fd %d\n", fd_to);
	}
	return (0);
}
