#include "lists.h"

/**
 * list_len - prints len of singly linked list
 * @h: nodes head
 * Return: the length of the node
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}

