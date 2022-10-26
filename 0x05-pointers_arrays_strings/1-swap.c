#include "main.h"

/**
  * swap_int - Function that swaps the values of two integers \n
  * using their pointers.
  * @a: Pointer to integer one.
  * @b: Pointer to integer two.
  *
  * return - Always 0 (Success)
  */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
