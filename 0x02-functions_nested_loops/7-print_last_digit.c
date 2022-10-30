#include "main.h"

/**
  * print_last_digit - Function prints the last digit of number, n.
  * @n: number whose last digit is to be printed.
  *
  * Return: last digit of @n.
  */

int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	{
		n = (-1 * n);
	}

	_putchar (n + '0');
	return (n);
}
