#include "main.h"
int _strlen(char *s);
int is_palindrome_recurssive(char *s, int b, int e);
/**
 * _strlen - Return length of the string
 * @s: Input value
 * Return: Length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen(s + 1));
	}
}

/**
 * is_palindrome_recurssive - Comparing each character of the string
 * @b: Start of string
 * @e: End of string
 * @s: Input
 * Return: Always 0 (Success)
 */
int is_palindrome_recurssive(char *s, int b, int e)
{
	if (*(s + b) == *(s + e))
	{
		if (b == e || b == e + 1)
		{
			return (1);
		}
		return (0 + is_palindrome_recurssive(s, b + 1, e - 1));
	}
	return (0);
}
/**
 * is_palindrome - returns 1 if a string is a
 * palindrome and 0 if not
 * @s: Input value
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (is_palindrome_recurssive(s, 0, _strlen(s) - 1));
}
