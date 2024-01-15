#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: First input value
 * @src: Second input value
 * @n: Number of bytes
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + n] = '\0';
	return (dest);
}
