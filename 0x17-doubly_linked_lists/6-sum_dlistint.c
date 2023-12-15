#include "lists.h"

/**
 * sum_dlistint - sums everything in  a dlistint_t linked list
 * @head: pointer to the beginning of the linked list
 *
 * Return: sum of all data, or 0 
 */
int sum_dlistint(dlistint_t *head)
{
	int sums = 0;

	while (head != NULL)
	{
		sums += head->n;
		head = head->next;
	}
	return (sums);
}
