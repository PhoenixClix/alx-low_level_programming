#include "main.h"

/**
 * print_sign - Function prints the sign of a number 
 * @n: number to be checked
 *
 * Return: 1 (n is greater than zero); 0 (n is zero);
 * -1 (n is less than zero)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}
