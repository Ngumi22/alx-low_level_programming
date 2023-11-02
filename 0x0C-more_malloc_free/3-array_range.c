#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* array_range - creates an array of integers
* @min: Input
* @max: Input
* Return: the pointer to the newly created array
*/
int *array_range(int min, int max)
{
	int i;
	int *arr;
	int size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	arr = (int *)malloc(size * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
