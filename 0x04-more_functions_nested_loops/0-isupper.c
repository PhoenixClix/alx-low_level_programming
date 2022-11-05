#include "main.h"

/**
  * _isupper - Checks for uppercase character.
  * @c: Character to be checked.
  *
  * Return: 1 - c is uppercase
  *	    0 - c is not uppercase
  */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
