#include "lists.h"

/**
 * sum_listint - sums items in a list
 * @head: head of node
 * Return: 0 is list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *curr_node = head;

	while (curr_node != NULL)
	{
		sum += curr_node->n;
		curr_node = curr_node->next;
	}
	return (sum);
}

