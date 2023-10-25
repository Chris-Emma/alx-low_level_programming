#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at index of a list
 * @head: double header to head of linked list
 * @index: index of node to delete, starting at 0
 * Return: 1 if success, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr_node = *head;
	listint_t *hold;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	while (i < index)
	{
		i++;
		hold = curr_node;
		if (curr_node->next)
			curr_node = curr_node->next;
		else
			return (-1);
	}

	if (index == 0)
		*head = curr_node->next;
	else if (curr_node->next)
		hold->next = curr_node->next;
	else
		hold->next = NULL;

	free(curr_node);
	return (1);
}
