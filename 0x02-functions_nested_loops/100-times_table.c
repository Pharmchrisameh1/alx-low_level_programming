#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the times table to be printed
 */

void print_times_table(int n)
{
	int a, b;

	for (a = 0; a <= n; a++)
	{
		if (n > 15 || n < 0)
			break;

		_putchar('0');

		for (b = 1; b <= n; b++)
		{
			int m, j, o;

			m = a * b;
			j = m / 10;
			o = m / 100;

			_putchar(',');
			_putchar(' ');

			if (o != 0)
			{
				_putchar(o + '0');
				_putchar((j % 10) + '0');
			}
			else
			{
				_putchar(' ');
				if (j != 0)
					_putchar(j + '0');
				else
					_putchar(' ');
			}
			_putchar((m % 10) + '0');
		}
		_putchar('\n');
	}
}
