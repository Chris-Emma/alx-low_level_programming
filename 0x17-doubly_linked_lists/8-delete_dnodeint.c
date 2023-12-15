#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes a node at a specific index
 * @head: double pointer to the linked list
 * @index: index at which to delete node
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_n;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	current_n = *head;
	if (index == 0)
	{
		*head = current_n->next;
		if (current_n->next != NULL)
		{
			current_n->next->prev = NULL;
		}
		free(current_n);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (current_n->next == NULL)
			return (-1);
		current_n = current_n->next;
	}
	current_n->prev->next = current_n->next;
	if (current_n->next != NULL)
		current_n->next->prev = current_n->prev;
	free(current_n);
	return (1);
}
