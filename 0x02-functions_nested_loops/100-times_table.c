#include "main.h"

/**
 * print_times_table - Prints multiplication table of given integer
 * @n: given integer
 *
 * Return: multiplication table of @n
 */

void print_times_table(int n)
{
	int i, multiple, product;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (multiple = 1; multiple <= n; multiple++)
			{
				product = i * multiple;
				_putchar(44);
				_putchar(32);
				if (product <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(product + 48);
				}
				else if (product <= 99)
				{
					_putchar(32);
					_putchar((product / 10) + 48);
					_putchar((product % 10) + 48);
				}
				else
				{
					_putchar(((product / 100) % 10) + 48);
					_putchar(((product / 10) % 10) + 48);
					_putchar((product % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
