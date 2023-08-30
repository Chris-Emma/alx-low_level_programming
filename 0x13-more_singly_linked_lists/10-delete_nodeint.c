#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: pointer to the first element
 * @index: index to be deleted
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int r;
	listint_t *current, *temp;

	if (!head || !*head)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	for (r = 0; r < (index - 1); r++)
	{
		current = current->next;
		if (current == NULL)
			return (-1);
	}
	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}
