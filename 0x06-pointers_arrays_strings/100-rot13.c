#include "main.h"
/**
 * rot13 - Encodes a string using ROT13.
 * @str: The string to be encoded
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;

	for (i = 0; str[i]; i++)
	{
		char *p = input;
		char *q = output;
		int found = 0;

		while (*p)
		{
			if (str[i] == *p)
			{
				str[i] = *q;
				found = 1;
				break;
			}
			p++;
			q++;
		}
		if (found == 0)
		{
			str[i] = str[i];
		}
	}
	return (str);
}
