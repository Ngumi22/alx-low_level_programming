#include "main.h"
/**
 * print_rev - Prints string in reverse
 * @s: string to reverse
 * Return: Reversed string
 */
void print_rev(char *s)
{
	if (str == NULL)
	{
		return;
	}

	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	int start = 0;
	int end = length - 1;

	while (start < end)
	{
		char temp = str[start];

		str[start] = str[end];
		str[end] temp;

		start++;
		end--;
	}
}
