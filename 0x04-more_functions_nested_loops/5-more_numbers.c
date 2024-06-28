#include "main.h"

/**
 * more_numbers - print digits 0 to 14 ten times
 */

void more_numbers(void)
{
	int count;
	int number;

	for (count = 0; count <= 9; count++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number / 10 != 0)
				_putchar((number / 10) + '0');

			_putchar((number % 10) + '0');
		}

		_putchar('\n');
	}
}
