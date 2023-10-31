#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings
 * @s1: Input one
 * @s2: Input two
 * Return: Return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int length1;
	int length2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	length1 = strlen(s1);
	length2 = strlen(s2);

	result = (char *)malloc(length1 + length2 + 1);

	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}
