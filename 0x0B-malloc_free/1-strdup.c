#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Returns a pointer to a
 * newly allocated space in memory
 * @str: Input string
 * Return: Pointer to a new string
 * which is a duplicate of the string
 */
char *_strdup(char *str)
{
	int length = 0;
	char *duplicate;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}

	duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		duplicate[i] = str[i];
	}
	duplicate[length] = '\0';

	return (duplicate);
}
