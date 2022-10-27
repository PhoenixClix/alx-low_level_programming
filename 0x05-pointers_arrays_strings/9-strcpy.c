#include "main.h"

/**
  * _strcpy - Function that copies string pointed to, to buffer pointed to.
  * @dest: Buffer to copy string to.
  * @src: (Pointer to) string to be copied.
  *
  * Return - the pointer to dest.
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
