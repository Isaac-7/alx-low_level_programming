#include "list.h"

/**
 * list_len - finds elements  number
 * @h: the linked
 *
 * Return: The number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while(h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
