#include "main.h"
#include <string.h>
/**
 * rev_string - Reverses a string
 * @s: String to reverse
 * Return: A reversed string
 */
void rev_string(char *s)
{
	int i;
	int length;
	int temp;

	length = strlen(s);

	for (i = 0; i < length / 2; i++)
	{
		temp = s[1];
		s[i] = s[length - i - 1];
		s[len - i - 1] = temp;
	}
}
