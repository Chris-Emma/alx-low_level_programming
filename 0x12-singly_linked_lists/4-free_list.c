#include "lists.h"

/**
 * free_list - frees a list
 * @head: head
 * Return: head
 */

void free_list(list_t *head)
{
	list_t *first = head;

	while (first != NULL)
	{
		list_t *next = first->next;

		free(first->str);
		free(first);

		first = next;
	}
}
