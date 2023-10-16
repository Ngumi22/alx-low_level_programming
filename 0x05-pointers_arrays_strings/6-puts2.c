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
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
