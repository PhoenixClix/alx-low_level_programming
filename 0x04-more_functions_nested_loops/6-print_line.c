#include "main.h"

/**
  * print_line - Draws a straight line in the terminal using _.
  * @n: Number of times the character _ should be printed.
  *
  * Return: _ if n > 0
  *	    \n if n is 0 or less
  */

void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
