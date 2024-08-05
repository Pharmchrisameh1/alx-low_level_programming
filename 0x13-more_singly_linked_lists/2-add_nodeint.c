#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of the list
 * @head: pointer to the pointer of the first node
 * @n: value of the new node
 *
 * Return: pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	int a = n;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = a;
	new->next = *head;

	*head = new;

	return (new);
}
