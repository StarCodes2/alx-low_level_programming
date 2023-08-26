#include "lists.h"

/**
 * free_list - Free the memory spaces allocated to list nodes
 * @head: points to the first node in the list
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;

	while (head->next)
	{
		temp = head->next;
		free(head);
		head = temp;
	}

	if (head != NULL)
		free(head);
}
