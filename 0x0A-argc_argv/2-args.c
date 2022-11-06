#include <stdio.h>
#include <stdlib.h>

/**
  * main - Prints all arguments it receives.
  * @argc: Argument count.
  * @argv: Array of arguments.
  *
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
