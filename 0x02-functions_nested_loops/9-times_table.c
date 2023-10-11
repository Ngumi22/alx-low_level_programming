#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * Return: 9 times table
 */
void times_table(void)
{
	int j;
	int i;
	int result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			if (j != 0)
			{
				_putchar(' ');
				if (result < 10)
				_putchar(' ');
			}
			if (result >= 10)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else
			{
				_putchar(result + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
