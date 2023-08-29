#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at index
 * @head: pointer to the first node
 * @idx: index where new node is added
 * @n: data at new node
 * Return: new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node_new = malloc(sizeof(listint_t));

	if (new_node_new == NULL)
	{
		return (NULL);
	}
	new_node_new->n = n;

	if (idx == 0)
	{
		new_node_new->next = *head;
		*head = new_node_new;
	}
	else
	{
		listint_t *now_node = *head;

		unsigned int r = 0;

		while (now_node != NULL && r < idx - 1)
		{
			now_node = now_node->next;
			r++;
		}
		if (now_node == NULL)
		{
			free(new_node_new);
			return (NULL);
		}
		new_node_new->next = now_node->next;
		now_node->next = new_node_new;
	}
	return (new_node_new);
}

