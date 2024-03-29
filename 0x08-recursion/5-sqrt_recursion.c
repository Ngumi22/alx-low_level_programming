#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: Input value
 * @x: Input value
 * Return: Natural square root
 */
int _sqrt(int n, int x);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt(n, 1));
}
/**
 * _sqrt - Returns the square root
 * @x: Input value
 * @n: Input value
 * Return: Square root
 */
int _sqrt(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	if (x * x > n)
	{
		return (-1);
	}
	return (_sqrt(n, x + 1));
}
