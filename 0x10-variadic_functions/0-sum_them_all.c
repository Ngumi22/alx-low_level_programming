#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums all its parameters
 * @n: Number of integers
 * @...: A variable number of paramaters
 * Return: Sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		int value = va_arg(args, int);

		sum += value;
	}
	va_end(args);
	return (sum);
}
