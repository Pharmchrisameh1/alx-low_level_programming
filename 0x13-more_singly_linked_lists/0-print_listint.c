#include "lists.h"

/**
 * print_listint - print the elements of a listint_t list
 * @h: a pointer to a listint_t node
 *
 * Return: the number of elements
 */
size_t print_listint(const listint_t *h)
{
	if (h == NULL)
		return (0);
	printf("%d\n", h->n);

	return (1 + print_listint(h->next));
}
