#include "main.h"
/**
 * _atoi - Converts a string to an integer
 * @s: String to convert
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;
	int num = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-' && !num)
	{
		sign = -1;
	}
	else if (s[i] == '+' && !num)
	{
	}
	else if (s[i] >= '0' && s[i] <= '9')
	{
		num = 1;
		result - result * 10 + (s[i] - '0');
	}
	else if (num)
	{
		break
	}
	i++;
	}
	return (result * sign);
}
