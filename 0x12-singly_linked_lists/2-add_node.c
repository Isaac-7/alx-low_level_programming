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

list_t *add_node(list_t **head, const char *str)
{
	int len;
	list_t *new;
	char *dup

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return(NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->len = len;
	new->next = *head;
	new->str = dup;

	*head = new;

	return (new);
 }
