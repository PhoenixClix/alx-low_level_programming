#include "main.h"

/**
  * print_alphabet_x10 - Function prints lowercase alphabets ten times.
  *
  * Return: a to z 10x.
  */

void print_alphabet_x10(void)
{
	char abc, n;

	while (n < 10)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
		{
			_putchar(abc);
		}
		n++;
		_putchar('\n');
	}
}
