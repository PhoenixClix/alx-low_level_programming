#include "main.h"

int find_sqrt(int num, int root);

/**
  * find_sqrt - Finds the natural square root of a number.
  * @num: Number to be square rooted.
  * @root: The root to be checked.
  *
  * Return: Natural square root of @num.
  */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
  * _sqrt_recursion - Returns the natural square root of a number.
  * @n: Number to be square rooted.
  *
  * Return: Natural square root of @n.
  */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
