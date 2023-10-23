#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: String to be searched
 * @accept: Set of bytes to be searched for
 * Return: A pointer to the matched byte if set
 * is matched and Null if no set is matched
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
			s++;
		}
	}
	return ('\0');
}
