#include <stdlib.h>
#include "lists.h"
/*
 * list_len - returns the number of elements in list_t
 * @h: pointer to the list_t
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (current)
	{
		count++;
		current = current->next;
	}
	return (count);
}
