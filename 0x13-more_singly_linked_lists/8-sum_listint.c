#include "lists.h"
/**
 * sum_listint - sums the n value of a linked list of listint_t
 * @head: head of list
 *
 * Return: integer for sum of all n values from list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp_head;

	if (!head)
		return (0);
	tmp_head = head;
	while (tmp_head)
	{
		sum += tmp_head->n;
		tmp_head = tmp_head->next;
	}
	return (sum);
}
