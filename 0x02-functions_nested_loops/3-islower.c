#include "main.h"
#include <unistd.h>
/**
 * int _islower - checks for lowercase character
 * @c - character to be checked
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
