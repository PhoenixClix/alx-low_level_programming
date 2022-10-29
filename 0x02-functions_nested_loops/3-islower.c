#include "main.h"

/**
  * _islower - Function checks for lowercase character.
  * @c: character to be checked
  *
  * Return: 1 (c is lowercase); 0 (c is not lowercase)
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
