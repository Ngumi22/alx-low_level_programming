#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: Input number of bits
 * @index: Index of bit
 * Return: value of the bit at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	 unsigned long int mask;
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;

	if ((n & mask) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
