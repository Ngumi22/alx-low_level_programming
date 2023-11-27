#include "main.h"
/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output
 * @filename: Pointer to the file
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	ssize_t bytesRead;
	char *buffer;
	ssize_t bytesWritten;

	if (filename == NULL)
	{
		fprintf(stderr, "Error: filename is NULL\n");
		return (0);
	}

	file = fopen(filename, "r");

	if (file == NULL)
	{
		fprintf(stderr, "Error: Couldn't open file %s\n", filename);
		return (0);
	}

	buffer = (char *)malloc(letters + 1);

	if (buffer == NULL)
	{
		fprintf(stderr, "Error: Memory allocation failed\n");
		fclose(file);
		return (0);
	}

	bytesRead = fread(buffer, 1, letters, file);
	fclose(file);

	if (bytesRead == 0)
	{
		fprintf(stderr, "Error: Couldn't read from file\n");
		free(buffer);
		return (0);
	}
	buffer[bytesRead] = '\0';

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	free(buffer);

	if (bytesWritten != bytesRead) 
	{
		fprintf(stderr, "Error: Write failed or did not write expected amount of bytes\n");
		return (0);
	}
	return (bytesRead);
}
