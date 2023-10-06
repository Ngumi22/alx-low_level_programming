#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Possible combination of two digits'
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			if (i != 0 || j != 0)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i != 9 || j != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n')
	return (0);
}
