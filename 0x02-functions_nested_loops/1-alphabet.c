#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * print_alphabet - Entry point
 * print_alphabet: Prints lowercase letter char c followed by newline
 * Return: 0
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
