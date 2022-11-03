#include "main.h"

/**
  * print_diagsums - Prints the sum of the two diagonals of a
  *		square matrix of integers.
  * @a: The square matrix of integers.
  * @size: Matrix size.
  *
  * Return: sum of integers.
  */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		sum2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
