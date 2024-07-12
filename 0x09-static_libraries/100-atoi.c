#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: the string
 *
 * Return: the integer
 */

int _atoi(char *s)
{
	unsigned int i, number = 0, minus = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			minus++;
		if (s[i] >= '0' && s[i] <= '9')
			break;
	}

	for (; s[i] >= '0' && s[i] <= '9'; i++)
	{
		number = number * 10 + (s[i] - '0');

	}

	if (number > 0 && minus % 2 != 0)
		return (-number);
	else if (number > 0 && minus % 2 == 0)
		return (number);
	else
		return (0);
}
