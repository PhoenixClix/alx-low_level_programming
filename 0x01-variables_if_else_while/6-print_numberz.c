#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: 'Program prints all single digits of base 10 from 0'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/*int x;

	x = 0;

	while (x < 10)
	{
		putchar (x), x++;
	}
	putchar ('\n');*/

	char x = '0';

	for (x = '0'; x <= '9'; x++)
	{
		putchar (x);
	}
	putchar ('\n');
	return (0);
}
