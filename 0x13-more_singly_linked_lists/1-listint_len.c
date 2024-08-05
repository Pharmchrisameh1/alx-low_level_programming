#include "lists.h"

/**
 * listint_len - check the length of the list
 * @h: pointer to the first element of the list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (0);
	return (1 + listint_len(h->next));
}
