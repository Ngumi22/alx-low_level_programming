#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list
 * @head: Double pointer to list_t
 * @str: New string to add to the node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	new_node->len = len;
	new_node->next = (*head);

	*head = new_node;

	return (*head);
}
