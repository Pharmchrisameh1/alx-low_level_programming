#include "main.h"

/**
 * print_rev - print a string, in reverse, followed
 * by a new line
 * @s: the string
 *
 */

void print_rev(char *s)
{
	int len = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	for (; len >= 1; len--)
	{
		_putchar(s[len - 1]);
	}
	_putchar('\n');
}
