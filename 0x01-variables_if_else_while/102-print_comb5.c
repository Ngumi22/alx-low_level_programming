#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints all possible combinations of two two-digit numbers'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;
	int n;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				for (n = 0; n <= 9; n++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(n + '0');
					if (i != 9 || j != 9 || k != 9 || n != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
