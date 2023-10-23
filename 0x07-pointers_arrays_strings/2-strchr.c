#include "main.n"
/**
 * _strchr - Locates a character in a string
 * @s: String where character is
 * @c: Character to locate
 * Return: NULL if c is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'\; i++)
	{
		if (s[i] == c)
		{
			return ((char *)(s + i));
		}
	}
	return (NULL);
}
