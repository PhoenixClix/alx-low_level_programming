#include "main.h"

/**
  * str_concat - Concatenates two strings.
  * @s1: String one
  * @s2: String two
  *
  * Return: Pointer to a newly allocated space in memory containing
  *	    @s1 and @s2.
  *	    NULL - if concatenation fails.
  */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i, len = 0, concat_i = 0;

	if (s1 == NULL || s2 == NULL)
		s1 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat_str[concat_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat_str[concat_i++] = s2[i];

	return (concat_str);
}
