#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: head of linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t list_count = 0;
	const listint_t *curr_list = h;

	while (curr_list != NULL)
	{
		printf("%d\n", curr_list->n);
		curr_list = curr_list->next;
		list_count++;
	}
	return (list_count);
}
