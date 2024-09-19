#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a new node at specific index of
 * a dlistint_t list
 *
 * @h: address of the head of the list
 * @idx: index
 * @n: value of the node
 *
 * Return: address of the node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *iter;
	dlistint_t *before;
	unsigned int count;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}

	count = 0;
	iter = *h;
	while (count < idx)
	{
		if (iter == NULL)
		{
			free(new);
			return (NULL);
		}
		before = iter;
		iter = iter->next;
		count++;
	}

	new->next = iter;
	new->prev = before;
	before->next = new;
	if (iter != NULL)
		iter->prev = new;
	return (new);
}
