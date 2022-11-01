#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *	followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main (void)
{
	long int i, n1, n2, n;

	n1 = 1;

	n2 = 2;

	for (i = 0; i < 50; i++)
	{
		printf("%ld, ", n1);

		if (i == 49)
		{
			printf("%ld\n", n1);
		}
		n = n1 + n2;
		n1 = n2;
		n2 = n;
	}

	return (0);
}
