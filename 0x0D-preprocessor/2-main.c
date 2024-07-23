#include "main.h"

/**
 * main - print the name of the file that
 * program was compiled from
 *
 * Return: 0
 */
int main(void)
{
	int i;
	char *s;

	s = __FILE__;
	for (i = 0; s[i]; i++)
		_putchar(s[i]);
	_putchar('\n');
	return (0);
}
