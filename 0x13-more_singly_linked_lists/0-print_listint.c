#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: head of linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t list_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		list_count += 1;
	}
	return (list_count);
}
