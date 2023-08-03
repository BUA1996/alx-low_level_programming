#include "main.h"

/**
 * flip_bits - compute the number of flips
 * @n: input num
 * @m: input num
 * Return: flips made
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int p, steps = 0;
	unsigned long int position;
	unsigned long int next = n ^ m;

	for (p = 63; p >= 0; p--)
	{
		position = next >> p;
		if (position & 1)
		{
			steps++;
		}
	}

	return (steps);
}
