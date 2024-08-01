#include "lists.h"

/**
 * list_len - check the length of the list
 * @h: pointer to the first element of the list
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);
	return (1 + list_len(h->next));
}
