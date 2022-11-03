#include "main.h"

/**
  * _strstr - Finds the first occurrence of substring @needle in string
  *		@haystack, not comparing terminating null bytes.
  * @needle: Substring to be searched for.
  * @haystack: String to be searched.
  *
  * Return: pointer to the beginning of the located substring.
  *		NULL (substring not found).
  */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		while (haystack[i] == needle[i])
		{
			if (needle[i + 1] == '\0')
				return (haystack);
			i++;
		}
		haystack++;
	}
	return ('\0');
}
