#include "main.h"

/**
  * print_diagonal - Draws a diagonal line in the terminal using \.
  * @n: Number of times the character \ should be printed.
  *
  * Return: _ if n > 0
  *	    \n if n is 0 or less
  */

void print_diagonal(int n)
{
	int len, spc;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (spc = 0; spc < len; spc++)
				_putchar(' ');

			_putchar('\\');

			if (len == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
