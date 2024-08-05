#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at an index of a listint_t list
 * @head: pointer to the address of the head of the list
 * @index: the index of the node to be deleted
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *copy = *head;

	if (copy == NULL)
		return (-1);
	if (index == 0)
	{
		*head = copy->next;
		free(copy);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (copy == NULL || copy->next == NULL)
			return (-1);
		copy = copy->next;
	}

	if (copy->next == NULL)
		return (-1);

	temp = copy->next;
	copy->next = temp->next;
	free(temp);

	return (1);
}
