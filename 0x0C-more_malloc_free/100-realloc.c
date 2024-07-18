#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocate a memory block using malloc and free
 * @ptr: pointer to the old memory block
 * @old_size: size of ptr
 * @new_size: intended size of the reallocated memory block
 *
 * Return: a pointer to the new memory block
 *	   or NULL in unwanted circumstances
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;
	unsigned int i, size;
	char *filler, *source;

	if (ptr == NULL)
	{
		ptr2 = malloc(new_size);
		if (ptr2 == NULL)
			return (NULL);
		return (ptr2);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
		return (NULL);
	if (old_size > new_size)
		size = new_size;
	else
		size = old_size;

	filler = ptr2;
	source = ptr;

	for (i = 0; i < size; i++)
		filler[i] = source[i];

	free(ptr);
	return (ptr2);
}
