#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char char_type;
	int int_type;
	long int long_int_type;
	long long int long_long_int_type;
	float float_type;

	printf("Size of int: %zu bytes\n", sizeof(char_type));
	printf("Size of float: %zu bytes\n", sizeof(int_type));
	printf("Size of double: %zu bytes\n", sizeof(long_int_type));
	printf("Size of double: %zu bytes\n", sizeof(long_long_int_type));
	printf("Size of char: %zu byte\n", sizeof(float_type));

	return 0;
}
