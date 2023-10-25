#include "lists.h"

/**
 * pop_listint - Delete the head node of a `listint_t` linked list
 * @head: double pointer to head node of linked list
 * Return: head nodes data `n`
 */
int pop_listint(listint_t **head)
{
	int numb;
	listint_t *curr_node;

	if (*head == NULL)
		return (0);

	curr_node = *head;
	numb = curr_node->n;
	*head = curr_node->next;
	free(curr_node);

	return (numb);
}
