#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - free nodes of double linked list
 * @head: pointer to head
 * Return: does not return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp, *auxi;

	tmp = head;
	while (tmp)
	{
		auxi = tmp->next;
		free(tmp);
		tmp = auxi;
	}
}
