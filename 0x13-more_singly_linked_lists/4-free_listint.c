#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a listint_t list
 * @head: the pointer to the pointer pointing to the first node
 * @n: the value of the new node
 *
 * Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int a = n;
	listint_t *new;
	listint_t *traverse;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = a;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		traverse = *head;
		while (traverse->next != NULL)
			traverse = traverse->next;

		traverse->next = new;
	}

	return (new);
}
