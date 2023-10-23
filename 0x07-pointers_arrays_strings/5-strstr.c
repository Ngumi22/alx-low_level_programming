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
	int len_haystack = strlen(haystack);
	int len_needle = strlen(needle);
	int i, j;

	for (int i = 0; i <= len_haystack - len_needle; i++)
	{
		for (j = 0; j < len_needle; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (j == len_needle)
		{
			return (haystack + i);
		}
	}
	return (0);
}
