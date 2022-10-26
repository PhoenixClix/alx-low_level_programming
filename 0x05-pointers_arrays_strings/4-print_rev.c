#include "main.h"

/**
 * print_rev - Prints string in reverse.
 * @s: string to be reserved.
 *
 * Return - 0
 */

void print_rev(char *s)
{
	int len, i;

	len = 0;
	i = 0;

	while (s[i++])
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
