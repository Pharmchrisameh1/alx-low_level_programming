#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the integr to be computed
 *
 * Return: the integer if its 0 or greater, -integer if otherwise
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
