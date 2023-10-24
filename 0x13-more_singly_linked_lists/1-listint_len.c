#include "lists.h"

/**
 * listint_len - finds number of elements in a linked list
 * @h: head of a linked list
 * Return: number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t list_len = 0;

	while (h != NULL)
	{
		list_len += 1;
		h = h->next;
	}
	return (list_len);
}
