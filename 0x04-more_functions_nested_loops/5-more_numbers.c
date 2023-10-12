#include "main.h"
/**
 * more_numbers - Prints numbers 0 to 14 (10 times)
 * Return: Numbers 0 upto 14 10 times
 */
void more_numbers(void)
{
	int i;
	int j;
	
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar('1');
			}
			_putchar('0' + (j % 10));
		}
	}
	_putchar('\n');
}
