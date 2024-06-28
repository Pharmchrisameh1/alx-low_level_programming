#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: the number of '\' to be printed
 */

void print_diagonal(int n)
{
	int count;
	int space;

	for (count = 1; count <= n; count++)
	{
		for (space = 1; space < count; space++)
			_putchar(' ');

		_putchar('\\');

		if (count == n)
			continue;

		_putchar('\n');
	}

	_putchar('\n');
}
