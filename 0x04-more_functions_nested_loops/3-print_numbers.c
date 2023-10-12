#include "main.h"
/**
 * print_numbers - Prints numbers 0 to 9.
 * Return: Numbers from 0 upto 9
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
