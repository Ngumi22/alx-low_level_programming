#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: String to reverse
 * Return: A reversed string
 */
void rev_string(char *s)
{
	int lenght = 0;
	int i;
	int start = 0;

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
		s[end] = temp;

		start++;
		end--;
	}
}
