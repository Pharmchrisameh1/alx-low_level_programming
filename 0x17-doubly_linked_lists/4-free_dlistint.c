#include "lists.h"

/**
 * free_dlistint - Free a dlistint_t list
 *
 * @head: head of the list
 */

void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			free_dlistint(head->next);
		free(head);
	}
}
