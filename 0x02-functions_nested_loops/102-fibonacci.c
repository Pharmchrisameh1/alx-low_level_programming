#include <stdio.h>

/**
 * main - print the first Fibonacci numbers,
 * starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long c, d, number;
	int i;

	c = 1;
	d = 2;

	printf("%lu, %lu", c, d);

	for (i = 1; i < 25; i++)
	{
		number = c + d;
		printf(", %lu", number);
		c = number;
		number = c + d;
		printf(", %lu", number);
		d = number;
	}
	printf("\n");

	return (0);
}
