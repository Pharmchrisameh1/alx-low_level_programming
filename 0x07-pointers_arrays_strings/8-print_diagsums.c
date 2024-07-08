#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of the two diagonals of
 * a square matrix of integers
 * @a: 2D array of integers
 * @size: size of array
 *
 */

void print_diagsums(int *a, int size)
{
	int right_sum = 0, i, left_sum = 0;

	for (i = 0; i < size; i++)
	{
		left_sum += a[i];

		if (i == size - 1)
			break;
		a += size;
	}

	for (i = 0; i < size; i++)
	{
		right_sum += a[i];
		a -= size;
	}

	printf("%d, %d\n", left_sum, right_sum);
}
