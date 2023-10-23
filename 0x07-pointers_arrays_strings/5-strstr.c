#include "main.h"
#include <string.h>
/**
 * _strstr - locates a substring
 * @haystack: String to locate the substring
 * @needle: Substring to locate
 * Return:  pointer to the beginning of
 * substring, or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == 0)
	{
		return (haystack);
	}
	while (*haystack)
	{
		int index = 0;

		while (haystack[index + 1] == needle[index])
		{
			if (needle[index + 1] == '\0')
			{
				return (haystack);
			}
			index++;
		}
	haystack++;
	}
	return ('\0');
}
