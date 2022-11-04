#include "main.h"

int divisible(int num, int div);

/**
  * divisible - Checks for number divisibility.
  * @num: Number to be checked.
  * @div: Divisor to check with.
  *
  * Return: 0 (@num is divisible).
  *		1 (@num is indivisible).
  */

int divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (divisible(num, div + 1));
}

/**
  * is_prime_number - Checks if @n is a prime number.
  * @n: The number to be checked.
  *
  * Return: 0 (n is not prime no.).
  *         1 (n is prime no.).
  */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (divisible(n, div));
}
