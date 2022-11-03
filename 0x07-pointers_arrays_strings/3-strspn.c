#include "main.h"

/**
  * _strspn - Gets the length of a prefix substring.
  * @s: string to be searched.
  * @accept: prefix substring.
  *
  * Return: number of bytes in the initial segment of @s
  *	which consist only of bytes from @accept.
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n_bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n_bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (n_bytes);
		}
		s++;
	}
	return (n_bytes);
}
