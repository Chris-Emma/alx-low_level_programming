#include "lists.h"

/**
 * free_listint2 - free list
 * @head: pointer to list to be freed
 * Return: pointer to freed list
 */

void free_listint2(listint_t **head)
{
	listint_t *the_current_node, *next_node;

	if (head == NULL || *head == NULL)
	{
		return;
	}

	the_current_node = *head;

	while (the_current_node != NULL)
	{
		next_node = the_current_node->next;
		free(the_current_node);
		the_current_node = next_node;
	}
	*head = NULL;
}
