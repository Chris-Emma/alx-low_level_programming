#include "lists.h"

/**
 * print_listint - prints all elements of list
 * @h: linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;
	const listint_t *node = h;

	while (node != NULL)
	{
		printf("%d\n", node->n);
		num++;
		node = node->next;
	}
	return (num);
}

