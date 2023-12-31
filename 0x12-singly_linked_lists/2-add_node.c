#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list
 * @head: points to a pointer that points to a list
 * @str: points to a string
 *
 * Return: returns an address to the first node in the list
 */

list_t *add_node(list_t **head, const char *str)
{
	char *s;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	s = strdup(str);

	if (s == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = s;
	new->len = len(s);
	new->next = *head;
	*head = new;


	return (new);
}

/**
 * len - counts the length of a string
 * @s: points to a string
 *
 * Return: returns the length of the string
 */

size_t len(char *s)
{
	int i;
	size_t len = 0;

	for (i = 0; s[i]; i++)
		len++;

	return (len);
}
