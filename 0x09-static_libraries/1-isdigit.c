#include "main.h"

/**
 * _isdigit - checks if character is a digit
 * @c: the caharacter to be checked
 * Return: 1 if it's a digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
