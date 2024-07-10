#include "main.h"

/**
 * _strlen_recursion - find the length of a string
 * @s: the string
 *
 * Return: the length
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - check if a character of a string is
 * equal to its alternate
 * @s: the string
 * @i: its index
 * @n: the length of the string
 *
 * Return: 1 if they're equal or the character is at the middle
 * of the string or after and 0 if they're not
 */

int check_palindrome(char *s, int i, int n)
{
	if (s[i] != s[n - i - 1])
		return (0);
	else if (i == n / 2)
		return (1);
	else
		return (1 * check_palindrome(s, i + 1, n));
}
/**
 * is_palindrome - check if a string is a palindrome
 * @s: the string to be checked
 *
 * Return: 1 if string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int m;

	m = _strlen_recursion(s);
	if (m <= 1)
		return (1);
	else
		return (check_palindrome(s, 0, m));
}
