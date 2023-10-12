#include "main.h"
#include <unistd.h>
/**
 * print_numbers - Prints numbers 0 to 9.
 * @n: Numbers to be printed
 * Return: Numbers from 0 to 9.
 */
void print_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
