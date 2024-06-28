#include "main.h"

/**
 * print_triangle - draw a triangle
 * @size: base length
 */

void print_triangle(int size)
{
	int count;
	int space;
	int hash;

	for (count = 1; count <= size; count++)
	{
		for (space = count; space < size; space++)
			_putchar(' ');

		for (hash = 1; hash <= count; hash++)
			_putchar('#');

		if (count == size)
			continue;

		_putchar('\n');
	}

	_putchar('\n');
}
