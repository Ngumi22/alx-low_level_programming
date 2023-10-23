#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: String to search
 * @c: Character to locate
 * Return: Pointer to first occurrence if c is found
 * NULL if c is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'\; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
