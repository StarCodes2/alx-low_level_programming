#include "lists.h"

/**
 * free_listint2 - free the memory allocated to a list and set the pointer
 * to the first node to null
 * @head: points to address that contains the address of the first node
 */

void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	if (*head)
	{
		if ((*head)->next)
			free_listint2(&(*head)->next);

		free(*head);
		*head = NULL;
	}
}
