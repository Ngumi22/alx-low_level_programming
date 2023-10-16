#include "main.h"
#include <string.h>
/**
 * puts2 - Prints every character of a string
 * starting with the first character
 * @str: String to prints characters of
 * Return: Characters of a string
 */
void puts2(char *str)
{
	size_t i;

	for (i = 0; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
