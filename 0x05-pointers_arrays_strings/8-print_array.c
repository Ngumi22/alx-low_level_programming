#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints n elements of an
 * array of integers
 * @a: Array to be printed
 * @n: Number of elements of array to be printed
 * Return: A number of elements of an array
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
}
