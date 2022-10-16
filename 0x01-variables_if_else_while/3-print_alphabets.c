#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Program prints alphabet in lowercase, then in uppercase'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar (x);
	}
	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar (x);
	}
	putchar ('\n');
	return (0);
}
