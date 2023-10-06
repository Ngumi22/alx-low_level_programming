#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Prints lowercase and uppercase alphabet'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z') {
	putchar(letter);
	putchar(letter - 32);
	letter++;
	}
	putchar('\n');
	return (0);
}
