#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: pointer to the list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *current_list;
	size_t elements;

	elements = 0;
	current_list = h;
	while (current_list != NULL)
	{
		printf("[%d] %s\n", current_list->len, current_list->str);
		current_list = current_list->next;
		elements++;
	}

	return (elements);
}
