#include "main.h"

/**
  * _abs - Function that computes the absolute value of integer @n
  * @n: integer whose absolute value is to be computed
  *
  * Return: absolute value of @n
  */

int _abs(int n)
{
	return (n * ((n > 0) - (n < 0)));
}
