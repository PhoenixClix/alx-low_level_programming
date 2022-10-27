#include "main.h"

/**
 * _strcpy - Function that copies string pointed to by @src, to buffer pointed
 *	to by @dest.
 * @dest: Buffer to copy string to.
 * @src: String to be copied.
 *
 * Return: Pointer to destination string @dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
