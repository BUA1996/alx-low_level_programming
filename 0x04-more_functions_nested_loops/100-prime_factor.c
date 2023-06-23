#include <stdio.h>
#include <math.h>

/**
 * main - entry point of the function
 * Return: always 0
 */
int main(void)
{
	long int max;
	long int p, q;

	p = 612852475143;
	max = -1;

	while (p % 2 == 0)
	{
		max = 2;
		p /= 2;
	}

	for (q = 3; q <= sqrt(p); q = q + 2)
	{
		while (p % q == 0)
		{
			max = q;
			p = p / q;
		}
	}
	if (p > 2)
		max = p;
	printf("%ld\n", max);

	return (0);
}
