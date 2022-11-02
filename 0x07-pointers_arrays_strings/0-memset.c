#include "main.h"

/**
  * _memset - Fills the first n bytes of the memory area pointed to
  *	by @s with the constant byte @b.
  * @s: pointer to memory area to be filled.
  * @b: constant to fill memory area with.
  * @n: number of bytes to fill in memory area.
  *
  * Return: pointer to memory area @s.
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	/*unsigned char s, b;*/

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
