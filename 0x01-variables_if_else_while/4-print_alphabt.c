#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints the alphabet in lowercase, followed by a new line'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l = 97;

	while (l <= 122)
	{
		if (l == 101 || l == 113)
		{
			l++;
			continue;
		}
		putchar(l);
		l++;
	}
	putchar('\n')
	return (0)
}
