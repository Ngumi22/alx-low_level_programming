#include "main.h"
/**
 * _strncpy - Copies a string
 * @dest: First input value
 * @src: Input value
 * @n: Number of bytes
 * Return: Copied string to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
