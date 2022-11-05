#include <stdio.h>

/**
  * main - Prints the numbers from 1-100, but Fizz for multiples of three,
  *        Buzz for multiples of five,
  *        and FizzBuzz for multiples of both three and five.
  *
  * Return: Always 0
  */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 5) == 0 && (i % 3) == 0)
			printf("FizzBuzz");

		else if ((i % 3) == 0)
			printf("Fizz");

		else if ((i % 5) == 0)
			printf("Buzz");

		else
			printf("%d", i);

		if (i == 100)
			continue;

		printf(" ");
	}

	printf("\n");

	return (0);
}
