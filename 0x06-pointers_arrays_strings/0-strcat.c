#include "main.h"

/**
  * _strcat - function appends the @src string to the @dest string,
  * then adds a terminating null byte
  * @dest: A pointer to the string to be appended to
  * @src: The source string to be appended to @dest.
  *
  * Return: A pointer to the destination string @dest.
  */

char *_strcat(char *dest, char *src)
{
	dest = strcat(dest, src);

	return (dest);
}
