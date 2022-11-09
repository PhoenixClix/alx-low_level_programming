#include "main.h"

/**
  * argstostr - Concatenates all the arguments.
  * @ac: Argument count.
  * @av: Argument vectors.
  *
  * Return: Pointer to a new string.
  *	    NULL - if ac == 0 or av == NULL or if the function fails.
  */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, ac_count, byte, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (ac_count = 0; ac_count < ac; ac_count++)
	{
		for (byte = 0; av[ac_count][byte]; byte++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	i = 0;

	for (ac_count = 0; ac_count < ac; ac_count++)
	{
		for (byte = 0; av[ac_count][byte]; byte++)
			str[i++] = av[ac_count][byte];

		str[i++] = '\n';
	}

	str[size] = '\0';

	return (str);
}
