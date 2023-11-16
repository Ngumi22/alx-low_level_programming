#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list
 * @h: Points to the list list_t
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", current->len, current->str);
		}

		current = current->next;
		count++;
	}
	return (count);
}
