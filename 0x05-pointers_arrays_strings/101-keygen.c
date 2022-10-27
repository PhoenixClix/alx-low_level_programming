#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the program, 101-crackme.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char password[84];
	int i = 0, sum = 0, halfSumDiff1, halfSumDiff2;

	srand(time(0));

	while (sum < 2772)
	{
		password[i] = 33 + rand() % 94;
		sum += password[i++];
	}

	password[i] = '\0';

	if (sum != 2772)
	{
		halfSumDiff1 = (sum - 2772) / 2;
		halfSumDiff2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			halfSumDiff1++;

		for (i = 0; password[i]; i++)
		{
			if (password[i] >= (33 + halfSumDiff1))
			{
				password[i] -= halfSumDiff1;
				break;
			}
		}
		for (i = 0; password[i]; i++)
		{
			if (password[i] >= (33 + halfSumDiff2))
			{
				password[i] -= halfSumDiff2;
				break;
			}
		}
	}

	printf("%s", password);
	return (0);
}
