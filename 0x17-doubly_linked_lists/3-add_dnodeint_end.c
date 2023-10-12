#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a doubly linked list
 * @head: points to an address that holds a pointer to the first/nth nodes
 *	or empty list
 * @n: holds the value to be stored in the new node
 *
 * Return: address to the new node on success or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (temp != NULL)
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
	else
	{
		*head = new;
	}
	new->prev = temp;
	new->next = NULL;

	return (new);
}
