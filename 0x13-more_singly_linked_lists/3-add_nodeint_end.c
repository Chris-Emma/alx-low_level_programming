#include "lists.h"

/**
 * add_nodeint_end - adds node at end of new node
 * @head: pointer to beginning of new node
 * @n: data of new node
 * Return: new node pointer or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node_new = malloc(sizeof(listint_t));

	if (new_node_new == NULL)
	{
		return (NULL);
	}

	new_node_new->n = n;
	new_node_new->next = NULL;

	if (*head == NULL)
	{
		*head = new_node_new;
	}
	else
	{
		listint_t *last_node = *head;

		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node_new;
	}
	return (new_node_new);
}

