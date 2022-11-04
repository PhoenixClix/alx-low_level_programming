#include "main.h"

int _strlen(char *s);
int if_palindrome(char *s, int len, int i);

/**
 * _strlen - Returns length of string.
 * @s: String to be checked.
 *
 * Return: Length of string.
 */

int _strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += _strlen(s + len);
	}

	return (len);
}

/**
 * if_palindrome - Checks if string is a palindrome.
 * @s: String to be checked.
 * @len: Length of s.
 * @i: index of the string to be checked.
 *
 * Return: 1 (string is a palindrome)
 *         0 (string is not a palindrome).
 */

int if_palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);

	if (s[i] == s[len - i - 1])
		return (if_palindrome(s, len, i + 1));

	return (0);
}

/**
  * is_palindrome - Returns 1 if a string is a palindrome and 0 if not.
  * @s: String to be checked.
  *
  * Return: 1 (String is a palindrome)
  *             0 (String is not a palindrome).
  */

int is_palindrome(char *s)
{
	int i = 0;

	if (!(*s))
		return (1);

	return (if_palindrome(s, _strlen(s), i));
}
