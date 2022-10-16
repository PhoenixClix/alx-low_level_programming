#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Print single digit no.s of base 10 from 0, ffd by new line'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		printf("%d", x);
		x++;
	}
	printf("\n");
	return (0);
}
