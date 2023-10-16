#include "main.h"
/**
 * _strlen - Returns length of a string
 * @s: Points to the string
 * Return: Length of a string s
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
