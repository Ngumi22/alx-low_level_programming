#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * print_alphabet - Entry point
 * Return: Always 0 (Success)
 */
int _putchar(char c);
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	putchar('\n');
}
