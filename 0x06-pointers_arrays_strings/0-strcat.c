#include "main.h"
/**
 * *_strcat - Concatenates two strings
 * and adds terminatinng null byte
 * @dest - First string
 * @src - Second string
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
