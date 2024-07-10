#include "main.h"

/**
 * check_prime - check if a is divisible by b
 * @a: the dividend
 * @b: the divisor
 *
 * Return: 0 if number is divisible and 1 if number is not
 */

int check_prime(int a, int b)
{
	if (b > a / 2)
		return (1);
	else if (!(a % b))
		return (0);
	else
		return (1 * check_prime(a, b + 2));
}

/**
 * is_prime_number - check if n is a prime number
 * @n: the number to be checked
 *
 * Return: 1 if it's a prime number and 0 if otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	else if (!(n % 2))
		return (0);
	else
		return (check_prime(n, 3));
}
