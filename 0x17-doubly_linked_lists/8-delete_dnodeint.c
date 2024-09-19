#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete node at specific index of
 * a dlistint_t list
 *
 * @head: address of the head of the list
 * @index: index
 *
 * Return: address of the node
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *iter;
	dlistint_t *before;
	unsigned int count;

	if (*head == NULL)
		return (-1);

	iter = *head;
	if (index == 0)
	{
		if (iter->next != NULL)
			iter->next->prev = NULL;
		*head = iter->next;
		free(iter);
		return (1);
	}

	count = 0;
	while (count < index)
	{
		if (iter == NULL)
			return (-1);
		before = iter;
		iter = iter->next;
		count++;
	}

	if (iter == NULL)
		return (-1);
	before->next = iter->next;
	if (iter->next != NULL)
		iter->next->prev = iter->prev;
	free(iter);
	return (1);
}
