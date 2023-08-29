#include "lists.h"

/**
 * get_nodeint_at_index - gets node at a particular index
 * @head: first node in a linked list
 * @index: index to node to return
 * Return: pointer to node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int t = 0;

	listint_t *the_current_node = head;

	while (the_current_node != NULL && t < index)
	{
		the_current_node = the_current_node->next;
		t++;
	}
	if (t == index && the_current_node != NULL)
	{
		return (the_current_node);
	}
	else
	{
		return (NULL);
	}
}
