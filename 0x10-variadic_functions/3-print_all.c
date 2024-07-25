#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - Prints a char.
 * @ap: A list of arguments pointing to
 *       the character to be printed.
 */
void print_char(va_list ap)
{
	char c;

	c = va_arg(ap, int);
	printf("%c", c);
}

/**
 * print_int - Prints an int.
 * @ap: A list of arguments pointing to
 *       the integer to be printed.
 */
void print_int(va_list ap)
{
	int n;

	n = va_arg(ap, int);
	printf("%d", n);
}

/**
 * print_float - Prints a float.
 * @ap: A list of arguments pointing to
 *       the float to be printed.
 */
void print_float(va_list ap)
{
	float n;

	n = va_arg(ap, double);
	printf("%f", n);
}
/**
 * print_string - Prints a string.
 * @ap: A list of arguments pointing to
 *       the string to be printed.
 */
void print_string(va_list ap)
{
	char *s;

	s = va_arg(ap, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", s);
}
/**
 * print_all - Prints anything, followed by a new line.
 * @format: A string of characters representing the argument types.
 *
 * Description: Any argument not of type char, int, float,
 *              or char * is ignored.
 *              If a string argument is NULL, (nil) is printed instead.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;

		while (j < 4 && format[i] != *(funcs[j].symbol))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(ap);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(ap);
}
