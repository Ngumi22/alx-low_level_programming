#include "main.h"
#include <stddef.h>
/**
 * print_rev - Prints string in reverse
 * @s: string to reverse
 * Return: Reversed string
 */
void print_rev(char *s)
{
	if (s == NULL)
	{
		return;
	}

	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (int i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar ('\n');
}
