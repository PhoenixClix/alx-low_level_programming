#include "main.h"

/**
  * _isdigit - Checks for a digit (0 through 9).
  * @c: Integer to be checked.
  *
  * Return: 1 - c is a digit
  *	    0 - c is not a digit
  */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
