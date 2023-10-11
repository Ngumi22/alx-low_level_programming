#include <unistd.h>
/**
 * _putchar - Writes character to stdout
 * @c: Character to be printed
 * Return: 1 (Success)
 * On error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
