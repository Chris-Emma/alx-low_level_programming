#include "lists.h"

/**
 * add_node - adds new node at the beginning of list
 * @head: double pointer to head
 * @str: string to be saved in new node, must be duplicated
 * Return: Address of new node || NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(newNode);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	newNode->str = dup;
	newNode->len = len;
	newNode->next = *head;

	*head = newNode;

	return (newNode);

}
