#include "lists.h"

/**
 * add_node - this adds a new noe at the beginning
 * @head: head of the node
 * @str: the string to store
 * Return: address of new element, NULL IF FAILED
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node_new;
	unsigned int k, count = 0;

	node_new = malloc(sizeof(list_t));
	if (node_new == NULL)
		return (NULL);
	node_new->str = strdup(str);
	for (k = 0; str[k] != '\0'; k++)
		count++;
	node_new->len = count;
	node_new->next = *head;
	*head = node_new;

	return (*head);
}
