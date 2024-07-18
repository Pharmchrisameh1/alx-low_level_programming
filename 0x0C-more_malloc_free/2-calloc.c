#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: the size of each element
 *
 * Return: a pointer to the memory block
 *	   or NULL if any unwanted behaviour
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *str;
	char *filler;
	unsigned int i;

	if (!(nmemb && size))
		return (NULL);

	str = malloc(nmemb * size);

	if (str == NULL)
		return (NULL);

	filler = str;

	for (i = 0; i < (nmemb * size); i++)
		filler[i] = '\0';

	return (str);
}
