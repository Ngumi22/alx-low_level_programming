#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: Input
 * @s2: Input
 * @n: Size of the memory block to be allocated
 * Return: A pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated;
	unsigned int len_s1, len_s2, total_length;

	if (s1 == NULL)
	{
		s2 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	if (n >= len_s2)
	{
		n = len_s2;
	}
	total_length = len_s1 + n;

	concatenated = (char *)malloc(total_length + 1);

	if (concatenated == NULL)
	{
		return (NULL);
	}
	strcpy(concatenated, s1);
	strncat(concatenated, s2, n);
	return (concatenated);
}
