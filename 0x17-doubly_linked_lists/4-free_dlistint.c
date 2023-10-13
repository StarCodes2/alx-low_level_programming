#include "lists.h"

/**
 * free_dlistint - frees memory allocated to the nodes of a doubly linked list
 * @head: points to the first or nth node in the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;

	while (head->prev)
		head = head->prev;

	while (head->next)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
	head = NULL;
}
