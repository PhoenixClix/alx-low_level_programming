#include "main.h"

int wordlen(char *str);
int wordcount(char *str);

/**
 * wordlen - Locates the index marking the end of the first word in
 *	     string.
 * @str: String to be searched.
 *
 * Return: Index marking the end of the initial word pointed to.
 */

int wordlen(char *str)
{
	int i = 0, len = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		len++;
		i++;
	}

	return (len);
}

/**
 * wordcount - Counts the number of words in a string.
 * @str: String to be checked.
 *
 * Return: Number of words in string.
 */

int wordcount(char *str)
{
	int i = 0, words = 0, len = 0;

	for (i = 0; *(str + i); i++)
		len++;

	for (i = 0; i < len; i++)
	{
		if (*(str + i) != ' ')
		{
			words++;
			i += wordlen(str + i);
		}
	}

	return (words);
}

/**
  * strtow - Splits a string into words.
  * @str: String to be splitted.
  *
  * Return: A pointer to an array of strings (words).
  *	    NULL - if str == NULL or str == "" or function fails.
  */

char **strtow(char *str)
{
	char **split_str;
	int words, splt_words, alphab, splt_alph, i = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	splt_words = wordcount(str);
	if (splt_words == 0)
		return (NULL);

	split_str = malloc(sizeof(char *) * (splt_words + 1));
	if (split_str == NULL)
		return (NULL);

	for (words = 0; words < splt_words; words++)
	{
		while (str[i] == ' ')
			i++;

		splt_alph = wordlen(str + i);

		split_str[words] = malloc(sizeof(char) * (splt_alph + 1));

		if (split_str[words] == NULL)
		{
			for (; words >= 0; words--)
				free(split_str[words]);

			free(split_str);
			return (NULL);
		}

		for (alphab = 0; alphab < splt_alph; alphab++)
			split_str[words][alphab] = str[i++];

		split_str[words][alphab] = '\0';
	}
	split_str[words] = NULL;

	return (split_str);
}
