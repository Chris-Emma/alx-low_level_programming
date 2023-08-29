#include "lists.h"

/**
 * listint_len - returns lenght of list
 * @h: type of linked list
 * Return: Returns number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;
	const listint_t *node = h;

	while (node != NULL)
	{
		num++;
		node = node->next;
	}
	return (num);
}

