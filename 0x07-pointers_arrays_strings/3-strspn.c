#include "main.h"
/**
 *  _strspn - gets the length of a prefix substring
 *  @s: String to be searched
 *  @accept: Prefix to be measured
 *  Return: Number of bytes in s which
 *  consist only bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i] = '\0'; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
		}
		if (!accept[i])
		{
			break;
		}
		s++;
	}
	return (bytes);
}
