#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Program prints alphabet in lowercase, ffd by new line'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar (x);
		putchar ('\n');
	}
	return (0);
}
