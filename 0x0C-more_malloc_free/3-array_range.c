#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of integers
 * @min: the least integer
 * @max: the highest integer
 *
 * Return: a pointer to the array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}
