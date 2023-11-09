#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_numbers - Prints numbers followed by a new line
* @separator: String to be printed between numbers
* @n: Number of integers passed
* @...: A variable number of numbers to be printed
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int value = va_arg(args, int);

		printf("%d", value);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(args);
}
