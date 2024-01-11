#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node
 * at a given position in dlistint_t
 * @h: Double pointer to the head of the doubly linked list
 * @idx: Index where the new node should be added
 * @n: Value to be stored in the new node
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *h;
	unsigned int count = 0;

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (temp != NULL && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}
	if (temp == NULL)
	{
		free(newNode);
		return (NULL);
	}
	if (temp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	newNode->next = temp->next;
	newNode->prev = temp;
	temp->next->prev = newNode;
	temp->next = newNode;

	return (newNode);
}
