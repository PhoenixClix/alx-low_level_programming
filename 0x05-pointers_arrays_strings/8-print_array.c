#include "main.h"

/**
  * print_array - Prints values stored in array.
  * @a: The array of integers.
  * @n: Number of elements in array.
  *
  * Result - 0 (Success)
  */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		/*printf(", ");*/

		if (i == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
