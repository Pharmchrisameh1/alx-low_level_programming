#include "main.h"

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: the string to be examined
 * @accept: the string consisting of the bytes to check for
 *
 * Return: the pointer to the first occurence of any of the bytes
 * or null if no byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return ('\0');
}
