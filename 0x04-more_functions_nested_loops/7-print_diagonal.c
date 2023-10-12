#include "main.h"
/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: Number of times to print diagonal line
 * Return: Diagonal line on the terminal
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(32);
			}
			_putchar('\n');
		}
	}
}

