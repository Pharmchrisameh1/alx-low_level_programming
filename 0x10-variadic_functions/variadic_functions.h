#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct printer - struct type defining a printer
 * @symbol: symbol representing a data type
 * @print: pointer to a function that prints a data type
 *
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list);

} printer_t;

int _putchar(int c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_char(va_list ap);
void print_int(va_list ap);
void print_float(va_list ap);
void print_string(va_list ap);
void print_all(const char * const format, ...);

#endif
