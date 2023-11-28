#include "main.h"
#include <string.h>
/**
 * create_file - creates a file
 * @filename: Pointer to a filename
 * @text_content: content writed in the file
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fileDesc;
	ssize_t bytesWritten;

	if (filename == NULL)
	{
		return (-1);
	}

	fileDesc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fileDesc == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		bytesWritten = write(fileDesc, text_content, strlen(text_content));

		if (bytesWritten == -1)
		{
			close(fileDesc);
			return (-1);
		}
	}
	close(fileDesc);
	return (1);
}
