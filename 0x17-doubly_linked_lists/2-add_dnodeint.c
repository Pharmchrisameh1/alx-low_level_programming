#include "lists.h"

/**
 * add_dnodeint - Add a node to the beginning of a
 * dlistint_t list
 *
 * @head: address the head of the dlistint_t list
 * @n: the contents(integer) of the node
 *
 * Return: address of the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;

	*head = new;

	return (new);
}
