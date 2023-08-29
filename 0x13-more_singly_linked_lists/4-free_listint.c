#include "lists.h"

/**
 * free_listint - frees the memory spaces allocated to a list
 * @head: points to the first node in the list
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return (NULL);

	if (head->next)
		free_listint(head->next);

	if (head)
		free(head);
}
