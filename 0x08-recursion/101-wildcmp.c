#include "main.h"

int strlen_no_wildcards(char *s);
void itr_wilds(char **wilds);
char *postfix_match(char *str, char *postfix);

/**
 * strlen_no_wildcards - Returns length of string without wildcards.
 * @s: String to be checked.
 *
 * Return: Length of @s.
 */

int strlen_no_wildcards(char *s)
{
	int len = 0, i = 0;

	if (*(s + i))
	{
		if (*s != '*')
			len++;

		i++;
		len += strlen_no_wildcards(s + i);
	}

	return (len);
}

/**
 * itr_wilds - Iterates through string located at wildcard
 *             till it points to a non-wildcard character.
 * @wilds: String to be iterated through.
 */

void itr_wilds(char **wilds)
{
	if (**wilds == '*')
	{
		(*wilds)++;
		itr_wilds(wilds);
	}
}

/**
 * if_match_postfix - Checks if @str matches the postfix of
 *                 another string probably containing wildcards.
 * @s: String to be matched.
 * @postfix: The postfix.
 *
 * Return: Pointer to the null byte located at the end of @postfix.
 *         (@str and @postfix match)
 *         Pointer to the first unmatched character in postfix.
 *         (@str and @postfix do not match)
 */

char *if_match_postfix(char *s, char *postfix)
{
	int s_len = strlen_no_wildcards(s) - 1;
	int postfix_len = strlen_no_wildcards(postfix) - 1;

	if (*postfix == '*')
		itr_wilds(&postfix);

	if (*(s + s_len - postfix_len) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (if_match_postfix(s, postfix));
	}

	return (postfix);
}

/**
 * wildcmp - Compares two strings to determine if they're identical.
 * @s1: First string to be compared.
 * @s2: Second string to be compared which can contain *.
 *
 * Return: 1 (strings are identical).
 *         Otherwise - 0.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		itr_wilds(&s2);
		s2 = if_match_postfix(s1, s2);
	}

	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}
