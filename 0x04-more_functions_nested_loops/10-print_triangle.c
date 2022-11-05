#include "main.h"

/**
  * print_triangle - prints a triangle using character #.
  * @size: Size of the triangle.
  *
  * Return: new line, if size <= 0. Otherwise, #.
  */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
				_putchar(' ');

			for (j = 0; j < i; j++)
				_putchar('#');

			if (j == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
