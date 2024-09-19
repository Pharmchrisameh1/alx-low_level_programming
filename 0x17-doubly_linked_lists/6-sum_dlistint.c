#include "lists.h"

/**
 * sum_dlistint - Sum all the data(n) of
 * a dlistint_t list
 *
 * @head: head of the list
 *
 * Return: the sum, or 0 if it's empty.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
