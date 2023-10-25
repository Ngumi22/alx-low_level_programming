#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: Input value
 * @i: Input value
 * Return: Return 1 if prime number and
 * 0 if otherwise
 */
int prime_number(int n, int i);
int is_prime_number(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_number(n, n - 1));
}
/**
 * prime_number - Return a prime number
 * @n: Input
 * @i: Input
 * Return: Prime number
 */
int prime_number(int n, int i)
{
	if (n  <= 1)
	{
		return (0);
	}
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_number(n, i - 1));
}
