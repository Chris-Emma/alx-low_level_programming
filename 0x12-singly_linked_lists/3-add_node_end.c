#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list
 *@head: pointer to the head of the list
 *@str: string to be added to the list
 *
 *Return: NULL or address or the element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *newNode, *lastNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	newNode->str = dup;
	newNode->len = len;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		lastNode = *head;
		while (lastNode->next != NULL)
			lastNode = lastNode->next;
		lastNode->next = newNode;
	}
	return (*head);
}
