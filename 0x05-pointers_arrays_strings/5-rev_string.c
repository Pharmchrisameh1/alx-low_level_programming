#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string
 *
 */

void rev_string(char *s)
{
	char tmp;
	int len = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	for (; len > i / 2; len--)
	{
		tmp = s[i - len];
		s[i - len] = s[len - 1];
		s[len - 1] = tmp;
	}
}
