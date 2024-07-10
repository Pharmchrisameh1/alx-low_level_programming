#include "main.h"

/**
 * further_div - check if j is divisible by k twice
 * @j: the dividend
 * @k: the divisor
 *
 * Return: k if j is divisible by k twice
 * or -1 if it's just once
 */

int further_div(int j, int k)
{
	if (j == 1)
	{
		return (1);
	}
	else if (k > j / 2)
	{
		return (-1);
	}
	else if (j % k == 0)
	{
		j /= k;
		if (j % k == 0)
		{
			j /= k;
			return (k * further_div(j, k));
		}
		else
			return (-1);
	}
	else
		return (further_div(j, k + 2));
}

/**
 * find_sqrt - check if n is divisble by 2 twice
 * and then by all odd numbers greater.
 * @a: the number
 *
 * Return: 2 if n divides 2 twice or -1 if once
 * or call further_div() if not
 */

int find_sqrt(int a)
{
	if (a == 1)
		return (1);
	if (a % 2 == 0)
	{
		a /= 2;
		if (a % 2 == 0)
		{
			a /= 2;
			return (2 * find_sqrt(a));
		}
		else
			return (-1);
	}
	else
		return (further_div(a, 3));
}

/**
 * _sqrt_recursion - find the square root of a number
 * @n: the number
 *
 * Return: the square root or -1 if it's without one
 */

int _sqrt_recursion(int n)
{
	int y;

	if (n <= 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
		y = find_sqrt(n);

	if (y < 0)
		return (-1);
	else
		return (y);
}
