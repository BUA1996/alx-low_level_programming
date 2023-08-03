#include "main.h"

/**
 * binary_to_uint - convertion of binary to integer
 * @b: pointer to a string of 0 and 1 chars
 * Return: an integer
 */
unsigned int binary_to_uint(const char *b)
{
	int p;
	unsigned int decimal = 0;

	if (!b)
		return (0);

	for (p = 0; b[p]; p++)
	{
		if (b[p] < '0' || b[p] > '1')
		{
			return (0);
		}
		decimal = 2 * decimal + (b[p] - '0');
	}

	return (decimal);
}
