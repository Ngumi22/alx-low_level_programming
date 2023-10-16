#include "main.h"
#include <string.h>
/**
 * puts_half - Prints second half of a string
 * @str: String to be halfed
 * Return: Second half of a string
 */
void puts_half(char *str)
{
	int length, mid, i;

	length = strlen(str);
	mid = length / 2;

	if (length % 2 == 0)
	{
		for (i = mid; i < length; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = mid + 1; i < length; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
