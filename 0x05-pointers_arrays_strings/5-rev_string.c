#include "main.h"

/**
  * rev_string - Function that reverses a string.
  * @s: string to be reversed.
  *
  * Returns - 0 (Success)
  */

void rev_string(char *s)
{
	int i = 0, len = 0;
	char r;

	while (s[i++])
		len++;

	for (i = len - 1; i >= len / 2; i--)
	{
		r = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = r;
	}
}
