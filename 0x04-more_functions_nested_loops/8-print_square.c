#include "main.h"

/**
 * print_square - draw a square
 * @size: the length of the square
 */

void print_square(int size)
{
	int breadth;
	int count;

	for (count = 1; count <= size; count++)
	{
		for (breadth = 1; breadth <= size; breadth++)
			_putchar('#');

		if (count == size)
			continue;

		_putchar('\n');
	}

	_putchar('\n');
}
