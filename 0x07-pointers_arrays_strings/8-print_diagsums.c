#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int a, b, c;

	a = 0;
	b = 0;

	for (c = 0; c < size; c++)
	{
		a = a + x[c * size + c];
	}
	for (c = size - 1; c >= 0; c--)
	{
		b += x[c * size + (size - c - 1)];
	}
	printf("%d, %d\n", a, b);
}
