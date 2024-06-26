#include <stdio.h>

/**
 * main - print the first Fibonacci numbers,
 * starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long c, d, number, sum;

	c = 1;
	d = 2;
	sum = 2;
	number = 0;

	while (number <= 4000000)
	{
		number = c + d;
		if (number % 2 == 0)
			sum += number;
		c = number;
		number = c + d;
		if (number % 2 == 0)
			sum += number;
		d = number;
	}
	printf("%lu\n", sum);

	return (0);
}
