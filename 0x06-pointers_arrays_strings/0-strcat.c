#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest - First input
 * @src - Second input
 * Return: void
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
