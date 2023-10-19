#include "main.h"
#include <stdio.h>
/**
 * rot13 - Encodes a string using ROT13.
 * @str: Pointer to the string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	int i;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == data1[j])
			{
				str[i] = datarot[j];
				break;
			}
		}
	}
	return (str);
}
