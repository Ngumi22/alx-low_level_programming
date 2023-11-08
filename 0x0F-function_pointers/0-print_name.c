#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - prints a name using pointer to a function
 * @name: String to add
 * @f: pointer to a function for formatting the name
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL && f == NULL)
	{
		return;
	}
	f(name);
}
