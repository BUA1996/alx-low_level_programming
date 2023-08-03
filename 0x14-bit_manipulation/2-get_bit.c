#include "main.h"

/**
 * get_bit - printing value at given index
 * @n: input
 * @index: index to print from
 * Return: bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
	{
		return (-1);
	}
	bit = (n >> index) & 1;

	return (bit);
}
