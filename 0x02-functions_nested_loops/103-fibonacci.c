#include <stdio.h>

int main(void)
{
	unsigned long fib[2] = {1, 2};
	unsigned long sum = 0;

	while (fib[1] <= 4000000)
	{
		if (fib[1] % 2 == 0)
		{
			sum += fib[1];
		}
		unsigned long next = fib[0] + fib[1];
		fib[0] = fib[1];
		fib[1] = next;
	}
	printf("%lu\n", sum);
	return (0);
}
