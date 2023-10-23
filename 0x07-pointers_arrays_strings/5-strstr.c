#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: String to locate the substring
 * @needle: Substring to locate
 * Return:  pointer to the beginning of
 * substring, or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack)
	{
		int index = 0;
		int *start = haystack;

		while (haystack[index] == needle[index] && needle[index] != '\0')
		{
			index++;
		}
		if (needle == '\0')
		{
			return (start);
		}
	haystack++;
	}
	return ('\0');
}
