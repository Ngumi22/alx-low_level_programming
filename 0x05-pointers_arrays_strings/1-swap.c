#include "main.h"
/**
 * swap_int - Swaps two integers
 * @a: One integer to swap
 * @b: Second integer to be swap
 * Return: Swapped integers
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
