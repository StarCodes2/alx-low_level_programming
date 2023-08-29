#include "lists.h"


void free_listint(listint_t *head)
{
	if (head->next)
		free_listint(head->next);

	if (head)
		free(head);
}
