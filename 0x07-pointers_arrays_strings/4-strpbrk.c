#include "main.h"

/**
  * _strpbrk - Searches a string for any of a set of bytes and
  *		locates the first occurrence of any of the bytes
  *		in the string @accept, in string @s.
  * @s: String to be searched.
  * @accept: String source of bytes.
  *
  * Return: pointer to matching byte (byte present)
  *		NULL (byte absent)
  */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}

	return ('\0');
}
