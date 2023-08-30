#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: first element on list
 * Return: pointer to reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *new;

	prev = NULL;
	new = NULL;

	while (*head != NULL)
	{
		new = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = new;
	}

	*head = prev;
	return (*head);
}
