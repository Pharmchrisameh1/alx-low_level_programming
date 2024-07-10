#include "main.h"

/**
 * _pow_recursion - print the y index of x
 * @x: the base number
 * @y: the power
 *
 * Return: x ^ y, or -1 if y < 0
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
