#include "main.h"

/**
 * print_line - draw a straight line
 * @n: the number of '_' to be printed
 */

void print_line(int n)
{
	int count;

	for (count = 1; count <= n; count++)
	{
		if (n <= 0)
			break;

		_putchar('_');
	}

	_putchar('\n');
}
