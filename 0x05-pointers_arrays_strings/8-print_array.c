#include "main.h"
#include <stdio.h>

/**
 * print_array - print a number of elements of an array in order
 * @a: the array to be examined
 * @n: the number of elements to print
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
