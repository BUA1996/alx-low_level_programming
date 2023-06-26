#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - program for generating random valid passwords
 * Return: always 0
 */
int main(void)
{
	int pasd[100];
	int p, sum, n;

	sum = 0;

	srand(time(NULL));
	for (p = 0; p < 100; p++)
	{
		pasd[p] = rand() % 78;
		sum += (pasd[p] + '0');
		putchar(pasd[p] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;

		}
	}
	return (0);
}
