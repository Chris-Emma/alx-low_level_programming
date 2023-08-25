#include "lists.h"

/**
 * add_node_end - this adds node at the end of first
 * @head: this is the head if the node
 * @str: string
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_new, *tmp;
	unsigned int j, count = 0;

	node_new = malloc(sizeof(list_t));
	if (node_new == NULL)
		return (NULL);
	node_new->str = strdup(str);
	for (j = 0; str[j] != '\0'; j++)
		count++;
	node_new->len = count;
	node_new->next = NULL;
	tmp = *head;

	if (tmp == NULL)
		*head = node_new;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = node_new;
	}
	return (*head);
}
