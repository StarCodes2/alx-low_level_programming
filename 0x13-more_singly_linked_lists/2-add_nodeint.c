#include "lists.h"

/**
 * add_nodeint - add a new node to the beginning of a list
 * @head: points to an address that contains the address of the first node
 * @n: contains an int
 *
 * Return: returns a pointer to the new node, which is the first node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
