#include "main.h"

/**
 * _strcpy - copy string src into string dest
 * @dest: the destination
 * @src: the source
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int src_len;

	for (src_len = 0; src[src_len] != '\0'; src_len++)
	{
		dest[src_len] = src[src_len];
	}

	dest[src_len] = '\0';

	return (dest);
}
