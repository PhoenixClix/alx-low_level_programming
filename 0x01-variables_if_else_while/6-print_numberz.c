#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Program prints all single digits of base 10 from 0'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	
	x = 0;

	while (x < 10)
	{
		putchar (x);
		x++;
	}
	putchar ('\n');
	return (0);
}
