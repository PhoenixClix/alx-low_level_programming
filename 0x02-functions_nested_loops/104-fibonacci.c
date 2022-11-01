#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int i, n1, n2, n;

	n1 = 0;
	n2 = 1;

	for (i = 0; i < 98; i++)
	{
		/*if (n1 != 20365011074)
		{
			printf("%ld, ", n1);
		} else
		{
			printf("%ld\n", n1);
		}
		n = n1 + n2;
		n1 = n2;
		n2 = n;*/

		n = n1 + n2;
		printf("%lu", n);

		n1 = n2;
		n2 = n;

		if (i == 97)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
