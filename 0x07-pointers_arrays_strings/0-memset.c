#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s:  memory area to fill
 * @b: Constant byte to fill memory
 * @n: Number of bytes
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (start);
}
