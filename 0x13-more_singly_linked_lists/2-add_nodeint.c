#include "lists.h"

/**
 * add_nodeint - adds new node at beginning
 * @head: this is the ponter to the first node
 * @n: number of nodes
 * Return: pointer or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node_new = malloc(sizeof(listint_t));

	if (node_new == NULL)
	{
		return (NULL);
	}

	node_new->n = n;
	node_new->next = *head;
	*head = node_new;

	return (node_new);
}

