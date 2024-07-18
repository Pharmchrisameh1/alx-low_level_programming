#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes in s2 to be included
 * in the operation
 *
 * Return: a pointer to the resultant string
 *	   or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int s1_len = 0, s2_len = 0, i, index;

	if (s1 == NULL)
	{
		s1_len += 0;
	}
	else
	{
		for (i = 0; s1[i]; i++)
			s1_len++;
	}

	if (s2 == NULL)
	{
		s2_len += 0;
	}
	else
	{
		for (i = 0; s2[i]; i++)
			s2_len++;
	}

	if (s2_len > n)
		s2_len = n;

	str = malloc((s1_len + s2_len + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	index = 0;

	for (i = 0; s1_len && (i < s1_len); i++)
		str[index++] = s1[i];
	for (i = 0; s2_len && (i < s2_len); i++)
		str[index++] = s2[i];
	str[index] = '\0';

	return (str);
}
