#include "main.h"
/**
 * print_rev - Prints string in reverse
 * @s: string to reverse
 * Return: Reversed string
 */
void print_rev(char *s)
{
	if (s == NULL)
	{
		return;
	}

	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	int start = 0;
	int end = length - 1;

	while (start < end)
	{
		char temp = str[start];

		s[start] = str[end];
		s[end] temp;

		start++;
		end--;
	}
}
