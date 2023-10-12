#include "main.h"
/**
 * more_numbers - Prints numbers 0 to 14 (10 times)
 * Return: Numbers 0 upto 14 10 times
 */
void more_numbers(void)
{
	int i;
	int j;
	
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
	}
	_putchar('\n');
}
