#include "lists.h"

/**
 * print_list - print the elements of a list_t list
 * @h: a pointer to a list_t node
 *
 * Return: the number of elements
 */
size_t print_list(const list_t *h)
{
	if (h == NULL)
		return (0);

	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);

	return (1 + print_list(h->next));
}
