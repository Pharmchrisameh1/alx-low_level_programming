#include "main.h"

/**
 * _strcat - Concatenates the string pointed to by src to
 *           the end of the string pointed to by dest.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
    char *dest_start = dest;

    /* Find the end of the destination string */
    while (*dest != '\0')
    {
        dest++;
    }

    /* Append the source string to the destination string */
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    /* Add the terminating null byte */
    *dest = '\0';

    return dest_start;
}


