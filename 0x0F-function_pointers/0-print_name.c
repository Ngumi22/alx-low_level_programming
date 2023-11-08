#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - prints a name using the specified formatting function
 * @name: name of the person
 * @f: pointer to a function for formatting the name
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
