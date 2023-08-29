#include "lists.h"

/**
 * pop_listint - deletes the node and replace head
 * @head: pointer to first item on list
 * Return: 0 if empty
 */

int pop_listint(listint_t **head)
{
	int node_data;

	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	temp = *head;
	node_data = temp->n;
	*head = (*head)->next;
	free(temp);

	return (node_data);
}
