#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 or 1
 */

int get_endianness(void)
{
	unsigned int test = 1;
	unsigned char *byte_ptr = (unsigned char *)&test;

	if (*byte_ptr == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
