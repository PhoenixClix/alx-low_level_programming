#include <stdio.h>

/**
 * main - Program finds and prints the sum of the even-valued terms
 *	of the Fibonacci sequence less than 4000000
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long int n1, n2, n, n_sum;

	n1 = 0;
	n2 = 1;
	n_sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		n = n1 + n2;
		if (n > 4000000)
			break;

		if ((n % 2) == 0)
			n_sum += n;

		n1 = n2;
		n2 = n;
	}

	printf("%lu\n", n_sum);

	return (0);
}
