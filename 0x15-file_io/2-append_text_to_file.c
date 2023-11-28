#include "main.h"
#include <string.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: Pointer to a filename
 * @text_content: content writed in the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileDescriptor;
	ssize_t bytesWritten;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	fileDescriptor = open(filename, O_WRONLY | O_APPEND);

	if (fileDescriptor == -1)
	{
		return (-1);
	}
	bytesWritten = write(fileDescriptor, text_content, strlen(text_content));

	if (bytesWritten == -1)
	{
		close(fileDescriptor);
		return (-1);
	}
	close(fileDescriptor);
	return (1);
}
