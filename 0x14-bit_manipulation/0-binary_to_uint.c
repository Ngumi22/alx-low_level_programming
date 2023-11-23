#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: Pointer to a string
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	if (b == NULL)
	{
		return (0);
	}

	result = 0;

	while (*b != '\0')
	{
		if (*b == '0')
		{
			result = (result << 1);
		}
		else if (*b == '1')
		{
			result = (result << 1) | 1;
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (result);
}
