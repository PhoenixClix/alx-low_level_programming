#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Program prints all possible combos of two-digit no.s'
 * 'separated by comma and space'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar((x % 10) + '0');

		if (x == 9)
			continue;

		putchar (',');
		putchar (' ');
	}
	putchar ('\n');
	return (0);
}
