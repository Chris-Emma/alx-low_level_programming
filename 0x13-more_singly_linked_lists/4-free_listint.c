#include "lists.h"

/**
 * free_listint - frees list
 * @head: pointer to first element
 * Return: freed list
 */

void free_listint(listint_t *head)
{
	listint_t *the_current_node;

	while (head != NULL)
	{
		the_current_node = head;
		head = head->next;
		free(the_current_node);
	}
}
