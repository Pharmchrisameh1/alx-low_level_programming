#include "main.h"

/**
 * puts_half - print the last half of a string
 * @str: the string
 *
 */

void puts_half(char *str)
{
	int len = 0, i, half;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	if (len % 2 == 0)
		half = len / 2;
	else
		half = ((len - 1) / 2);

	for (i = (len - half); i <= len - 1; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
