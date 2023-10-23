#include "main.h"
/**
 * _strchr - Locates a character c in a string s
 * @s: String to locate character c
 * @c: Character to be located in string s
 * Return: NULL if c is not found and
 * pointer to first occurence if found
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
		{
			return (s + index);
		}
	}
	return (0);
}
