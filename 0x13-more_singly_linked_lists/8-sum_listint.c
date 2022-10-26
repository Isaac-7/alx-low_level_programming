#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - calculate
 * @head: pointer
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int add;

	add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
