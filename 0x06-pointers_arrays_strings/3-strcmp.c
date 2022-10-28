#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: first string to be compared.
 * @s2: second string to be compared.
 *
 * Return: If s1 < s2, the negative difference
 *         If s1 == s2, 0.
 *         If s1 > s2, the positive difference
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
