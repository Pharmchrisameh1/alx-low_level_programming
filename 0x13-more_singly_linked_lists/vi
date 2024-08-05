#include "lists.h"

/**
 * pop_listint - delete the head node of a listint_t list
 * @head: pointer to the pointer pointing to the head node
 *
 * Return: the value of the head node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
