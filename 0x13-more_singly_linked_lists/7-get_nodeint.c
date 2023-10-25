#include "lists.h"

/**
 * get_nodeint_at_index - Get the nth node of a `listint_t` linked list
 * @head: this is pointer to head node
 * @index: index to find in linked list, starts at 0
 * Return: pointer to node or NULL if failed
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr_node = head;
	unsigned int count = 0;

	while (count < index)
	{
		if (curr_node)
			curr_node = curr_node->next;
		else
			return (NULL);
		count++;
	}

	if (curr_node)
		return (curr_node);
	else
		return (NULL);
}
