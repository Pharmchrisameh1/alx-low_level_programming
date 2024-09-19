#include "lists.h"

/**
 * add_dnodeint_end - Add a node to the end of a
 * dlistint_t list
 *
 * @head: head of the list
 * @n: the value of the node
 *
 * Return: address of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *iter;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->next = NULL;
	new->n = n;
	iter = *head;
	if (iter == NULL)
	{
		new->prev = NULL;
		*head = new;
	}

	while (iter != NULL)
	{
		if (iter->next == NULL)
		{
			iter->next = new;
			new->prev = iter;
			break;
		}
		iter = iter->next;
	}

	return (new);
}
