#include "main.h"

/**
  * print_alphabet - function prints lowercase alphabets
  *
  * Return: Always 0.
  */

void print_alphabet(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		_putchar(abc);
	}

	_putchar('\n');
}
