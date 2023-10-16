#include "main.h"
#include <stddef.h>
/**
 * print_rev - Prints string in reverse
 * @s: string to reverse
 * Return: Reversed string
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	if (s == NULL)
	{
		return;
	}
	while (s[length] != '\0')
	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar ('\n');
}
