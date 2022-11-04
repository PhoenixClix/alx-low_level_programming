#include "main.h"

/**
  * _puts_recursion - Prints a string.
  * @s: String to be printed.
  */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
