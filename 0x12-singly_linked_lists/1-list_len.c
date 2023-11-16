#include <stdio.h>
#include "lists.h"
/*
 * list_len - returns the number of elements
 * @h: Pointer to the list_t
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
