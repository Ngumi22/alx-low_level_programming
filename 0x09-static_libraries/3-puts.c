#include "main.h"
/**
 * _puts - Prints a string to stdout
 * followed by a new line
 * @str: string to be printed
 * Return: String followed by new line
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
