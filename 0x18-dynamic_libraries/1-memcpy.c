#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: memory area copied to
 * @src: memory area copied from
 * @n: Number of bytes
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *destination = dest;
	const char *source = src;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		destination[i] = source[i];
	}
	return (destination);
}
