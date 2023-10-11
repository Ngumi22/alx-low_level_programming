#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Fibonacci sequence'
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long fib[2] = {1, 2};
	unsigned long sum = 0;
	unsigned long next;

	while (fib[1] <= 4000000)
	{
		next = fib[0] + fib[1];
		if (fib[1] % 2 == 0)
		{
			sum += fib[1];
		}
		fib[0] = fib[1];
		fib[1] = next;
	}
	printf("%lu\n", sum);
	return (0);
}
