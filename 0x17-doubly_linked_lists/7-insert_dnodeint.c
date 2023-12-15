#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the beginning of the linked list
 * @idx: index at which to insert the new node
 * @n: data to enter into new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_n, *next, *current_n;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		current_n = *h;
		for (i = 0; i < idx - 1 && current_n != NULL; i++)
			current_n = current_n->next;
		if (current_n == NULL)
			return (NULL);
	}
	new_n = malloc(sizeof(dlistint_t));
	if (new_n == NULL)
		return (NULL);
	new_n->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = new_n;
		new_n->prev = NULL;
	}
	else
	{
		new_n->prev = current_n;
		next = current_n->next;
		current_n->next = new_n;
	}
	new_n->next = next;
	if (new_n->next != NULL)
		new_n->next->prev = new_n;
	return (new_n);
}
