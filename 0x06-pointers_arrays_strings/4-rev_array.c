#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: array of integers to be reversed
 * @n: number of elements the array
 *
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int r, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		r = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = r;
	}
}
