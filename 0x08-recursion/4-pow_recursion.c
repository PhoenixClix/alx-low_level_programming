#include "main.h"

/**
  * _pow_recursion - Returns the value of @x raised to the power of @y.
  * @x: Number to be raised.
  * @y: Power to raise to.
  *
  * Return: @x raised to the power of @y: if @y >= 0.
  *		-1 (error): if @y < 0.
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
