#include "main.h"
#include <stddef.h>
/**
 * rev_string - Reverses a string
 * @s: String to reverse
 * Return: A reversed string
 */
void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	int end;

	if (s == NULL)
	{
		return;
	}
	while (s[length] != '\0')
	{
		length++;
	}
	while (start < end)
	{
		char tmp = s[start];

		s[start] = s[end];
		s[end] = tmp;

		start++;
		end--;
	}
}
