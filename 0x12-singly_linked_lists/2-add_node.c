#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a node
 * @head: A pointer to head
 * @str: string to add
 *
 * Return: if fils NULL
 *
 */

list_t *add_node(list_t **head, const char *str);
{
	size_t n;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	for (n = 0; str[n]; n++)
		;

	new->len = n;
	new->next = *head;
	*head = new;

	return (*head);
 }
