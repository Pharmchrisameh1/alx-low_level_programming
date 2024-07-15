#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array of chars
 * and initialize it with a specific char
 *
 * @size: size of array
 * @c: the initialization character
 *
 * Return: if successful - a pointer to the array
 *	   if size == 0 or it fails - NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
		return (NULL);

	str = malloc(size * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
