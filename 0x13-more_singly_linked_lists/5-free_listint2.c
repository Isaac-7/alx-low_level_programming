#include "list.h"

/**
 * free_listint2 - free the link
 * @head: pointer
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

			while (*head)
			{
				temp = *head;
				*head = (*head)->next;
				free(temp);
			}
	head = NULL;
}
