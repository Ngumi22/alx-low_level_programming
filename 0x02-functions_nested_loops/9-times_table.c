#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * Return: 9 times table
 */
void times_table(void)
{
	int n;
	int i;
	int result = 0;

	for (n =0; n <= 9; n++)
	{
		for (i = 0; i <= 9; i++)
		{
			result = i * n;
		}
	}
}
