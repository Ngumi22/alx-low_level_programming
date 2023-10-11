#include "main.h"
#include <unistd.h>
/**
 * print_alphabet - Entry point
 * Description: 'Prints alphabet in lowercase followed by newline'
 * Return: 0
 */
void print_alphabet(void)
{
	char c;

	for (char c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
