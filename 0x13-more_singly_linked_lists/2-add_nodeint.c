#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of list
 * @head: pointer to a list_t pointer pointing to the head
 * @n: int value for new node
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
