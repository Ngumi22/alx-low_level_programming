#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: Pointer to filename
 * @letters: Numbers of letters printed
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDescriptor;
	ssize_t nrd, nwr;
	char *buffer;

	if (!filename)
		return (0);

	fileDescriptor = open(filename, O_RDONLY);

	if (fileDescriptor == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
	{
		return (0);
	}

	nrd = read(fileDescriptor, buffer, letters);
	nwr = write(STDOUT_FILENO, buffer, nrd);

	close(fileDescriptor);

	free(buffer);

	return (nwr);
}
