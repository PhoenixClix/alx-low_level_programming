#include "main.h"

/**
  * _isalpha - Function checks for alphabetic character.
  * @c: character to be checked
  *
  * Return: 1 (c is a letter); 0 (c is not a letter).
  */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
