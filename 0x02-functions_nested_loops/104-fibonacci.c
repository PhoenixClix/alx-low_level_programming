#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int i, n1, n2, n1_1, n1_2, n2_1, n2_2;

	n1 = 1;
	n2 = 2;

	printf("%lu", n1);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", n2);
		n2 = n2 + n1;
		n1 = n2 - n1;

	}

	n1_1 = n1 / 1000000000;
	n1_2 = n1 % 1000000000;
	n2_1 = n2 / 1000000000;
	n2_2 = n2 % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", n2_1 + (n2_2 / 1000000000));
		printf("%lu", n2_2 % 1000000000);
		n2_1 = n2_1 + n1_1;
		n1_1 = n2_1 - n1_1;
		n2_2 = n2_2 + n1_2;
		n1_2 = n2_2 - n1_2;
	}

	printf("\n");

	return (0);
}
