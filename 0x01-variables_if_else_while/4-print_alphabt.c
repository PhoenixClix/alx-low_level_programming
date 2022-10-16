#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Program prints alphabet in lowercase, except q and e'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'e' || x == 'q')
		{
			continue;
		}
		putchar (x);
	}
	putchar ('\n');
	return (0);
}
