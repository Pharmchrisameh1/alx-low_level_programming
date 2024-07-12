#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: the first string
 * @src: the second string
 *
 * Return: pointer to the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int destIndex, src_len, i;

	for (destIndex = 0; dest[destIndex] != '\0';)
	{
		destIndex++;
	}
	for (src_len = 0; src[src_len] != '\0';)
	{
		src_len++;
	}

	if (src_len > 0)
	{
		for (i = 0; i < src_len; i++)
		{
			dest[destIndex] = src[i];
			destIndex++;
		}

		dest[destIndex] = '\0';
	}

	return (dest);
}
