#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_strings - Prints strings followed by a new line
* @separator: String to be printed between strings
* @n: Number of strings passed to the function
* @...: A varying number of strings to be printed
* Description: If separator is NULL, it is not printed,
* If one of the strings if NULL, (nil) is printed instead
*/


void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		const char *str = va_arg(args, const char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);
}
