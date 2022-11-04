#include "main.h"

/**
  * factorial - Returns the factorial of a given number.
  * @n: Number to be factorialed.
  *
  * Return: Factorial of n: if n > 0.
  *		1: if n = 0 or 1.
  *		-1 (error): if n is less than 0.
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n >= 0 && n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
