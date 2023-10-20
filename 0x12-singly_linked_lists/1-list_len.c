#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked  list
 * @h: head of linked list
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	const list_t *current_list;
	size_t elements = 0;

	current_list = h;
	while (current_list != NULL)
	{
		current_list = current_list->next;
		elements++;
	}

	return (elements);
}
