#include "main.h"

/**
 * _strncat - Concatenates two strings using at most
 *            n bytes from @src
 * @dest: string to be appended to
 * @src: string to be appended to dest.
 * @n: number of bytes from src to be appended to dest
 *
 * Return: pointer to the resulting string @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
