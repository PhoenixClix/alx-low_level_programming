#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>

/**
  * struct printer - defines a printer
  * @sym: represents a data type
  * @print: a function pointer which points to a function that prints
  *	    a data type that corresponds to a symbol
  */

typedef struct printer
{
	char *sym;
	void (*print)(va_list arg);
} printer_typ;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
