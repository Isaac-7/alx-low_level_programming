#include "lists.h"

/**
 * pop_listint - deletes the head
 * @head: pointer to the head
 * Return: head node
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;

	if (temp == NULL)
		return (0);

	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
