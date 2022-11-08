#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a new string which is a duplicate of @str
 * @str: String to be duplicated.
 *
 * Return: Pointer to the duplicated string.
 *	   NULL - if str == NULL or insufficient memory is available.
 */

char *_strdup(char *str)
{
	char *nw_str;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	nw_str = malloc(sizeof(char) * (len + 1));

	if (nw_str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		nw_str[i] = str[i];

	nw_str[len] = '\0';

	return (nw_str);
}
