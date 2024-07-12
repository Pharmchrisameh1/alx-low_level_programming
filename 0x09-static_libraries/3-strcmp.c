#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: the integer difference between the last compared bytes
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
	}

	if (!(*s1 && *s2))
		return (0);
	else
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
