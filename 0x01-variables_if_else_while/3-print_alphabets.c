#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Prints lowercase and uppercase alphabet'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97;
	int m = 65;
	
	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (n <= 90)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
