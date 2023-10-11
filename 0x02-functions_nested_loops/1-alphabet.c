#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * print_alphabet - Entry point
 * Description: 'function that prints the alphabet (c) in lowercase'
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
