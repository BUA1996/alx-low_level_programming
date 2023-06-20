#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - printing all natural numbers
 * @n: printing from number n
 */
void print_to_98(int n)
{
	int p, q;

	if (n <= 98)
	{
		for (p = n; p <= 98; p++)
		{
			if (p != 98)
				printf("%d, ", p);
			else if (p == 98)
				printf("%d\n", p);
		}
	}
	else if (n >= 98)
	{
		for (q = n; q >= 98; q--)
		{
			if (q != 98)
				printf("%d, ", q);
			else if (q == 98)
				printf("%d\n", q);
		}
	}
}
