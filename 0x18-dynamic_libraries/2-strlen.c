#include "main.h"

/**
 * _strlen - computes the length of a string
 * @s: the string to be examined
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int len = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
