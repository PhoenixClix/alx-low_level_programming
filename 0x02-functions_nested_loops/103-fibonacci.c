#include <stdio.h>

/**
 * main - program that finds and prints the sum of the even-valued terms
 *	of the Fibonacci sequence below 4,000,000
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long int n1, n2, n, n_sum;

	n1 = 1;
	n2 = 2;

	for (i = 1; i <= 50; ++i)
	{
		n = n1 + n2;
		if (n > 4000000)
			break;

		if ((n % 2) == 0)
			n_sum += n;

		n1 = n2;
		n2 = n;
	}
	printf("%lu\n", n);

	return (0);
}
