#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: The number to get last digit from
 * Return: Last digit of a number
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = labs(n) % 10;

	_putchar(last_digit + '0');

	return (last_digit);
}
