#include "lists.h"

/**
 * free_listint - free a `listint_t` list
 * @head: head of linked list
 */
void free_listint(listint_t *head)
{
	listint_t *curr_node;

	while (head != NULL)
	{
		curr_node = head;
		head = head->next;
		free(curr_node);
	}
}
