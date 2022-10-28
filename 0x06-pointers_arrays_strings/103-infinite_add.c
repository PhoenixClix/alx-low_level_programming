#include "main.h"

char *string_sum(char *n1, char *n2, char *r, int r_index);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 * string_sum - Adds the numbers stored in two strings
 * @n1: string containing the first number to be added
 * @n2: string containing the second number to be added
 * @r: buffer to store result
 * @indx_r: current index of the buffer
 *
 * Return: pointer to result (r can store the sum)
 *         0 (r cannot store the sum)
 */

char *string_sum(char *n1, char *n2, char *r, int indx_r)
{
	int num, tens = 0;

	for (; *n1 && *n2; n1--, n2--, indx_r--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + indx_r) = (num % 10) + '0';
		tens = num / 10;
	}

	for (; *n1; n1--, indx_r--)
	{
		num = (*n1 - '0') + tens;
		*(r + indx_r) = (num % 10) + '0';
		tens = num / 10;
	}

	for (; *n2; n2--, indx_r--)
	{
		num = (*n2 - '0') + tens;
		*(r + indx_r) = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens && indx_r >= 0)
	{
		*(r + indx_r) = (tens % 10) + '0';
		return (r + indx_r);
	}

	else if (tens && indx_r < 0)
		return (0);

	return (r + indx_r + 1);
}

/**
 * infinite_add - Adds two numbers
 * @n1: first number to be added
 * @n2: second number to be added
 * @r: buffer to store result
 * @size_r: buffer size
 *
 * Return:pointer to result (r can store the sum)
 *	0 (r cannot store the sum)
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, len_n1 = 0, len_n2 = 0;

	for (i = 0; *(n1 + i); i++)
		len_n1++;

	for (i = 0; *(n2 + i); i++)
		len_n2++;

	if (size_r <= len_n1 + 1 || size_r <= len_n2 + 1)
		return (0);

	n1 += len_n1 - 1;
	n2 += len_n2 - 1;
	*(r + size_r) = '\0';

	return (string_sum(n1, n2, r, --size_r));
}
