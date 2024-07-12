#include "main.h"

/**
 * _strncpy - copy the first n bytes from src to dest
 * and add null bytes if length of src less than n
 * @dest: first string
 * @src: second string
 * @n: the number of bytes
 *
 * Return: the resultant dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
