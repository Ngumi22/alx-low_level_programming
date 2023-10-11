#include "main.h"
#include <unistd.h>
/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 1; i <= 10)
	{
		for (c = 'a'; c <= 'z')
		{
			_putchar(c);
		}
		_putchar('\n')
	}
}
