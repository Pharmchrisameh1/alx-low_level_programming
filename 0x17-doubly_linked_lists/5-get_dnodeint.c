#include "lists.h"

/**
 * get_dnodeint_at_index - Get the nth node of
 * a dlistint_t list
 *
 * @head: head of the list
 * @index: n
 *
 * Return: address of the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;
	while (count < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		count++;
	}

	return (head);
}
