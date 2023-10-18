#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest - First string to concatenate
 * @src - Second string to concatenate
 * Return: Concatenated strings
 */
char *_strcat(char *dest, char *src)
{
	char *dest_end = dest;

	while (*dest_end != '\0')
	{
		dest_end++;
	}
	while (*src != '\0')
	{
		*dest_end = *src;
		dest_end++;
		src++;
	}
	*dest_end = '\0';

	return (dest);
}
