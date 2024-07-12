#include "main.h"

/**
 * _strncat - concatenate two strings, only adding
 * at most n bytes from the second string
 * @dest: the first string
 * @src: the second string
 * @n: the number of bytes
 *
 * Return: pointer to the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int destIndex, src_len, i, j;

	for (destIndex = 0; dest[destIndex] != '\0';)
	{
		destIndex++;
	}
	for (src_len = 0; src[src_len] != '\0';)
	{
		src_len++;
	}

	if (src_len > 0 && n >= src_len)
	{
		for (i = 0; i < src_len; i++)
		{
			dest[destIndex] = src[i];
			destIndex++;
		}

		dest[destIndex] = '\0';
	}
	else if (src_len > 0 && n < src_len)
	{
		for (j = 0; j < n; j++)
		{
			dest[destIndex] = src[j];
			destIndex++;
		}

		dest[destIndex] = '\0';
	}

	return (dest);
}
