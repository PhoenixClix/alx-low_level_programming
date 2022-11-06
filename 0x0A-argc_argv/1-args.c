#include <stdio.h>
#include <stdlib.h>

/**
  * main - Prints the number of arguments passed into it.
  * @argc: Argument count.
  * @argv: Array of arguments.
  *
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	printf("%d\n", (argc - 1));

	return (0);
}
