#include "main.h"

/**
 * clear_bit - setting bit value to 0 at a given index
 * @n: input pointer
 * @index: position to set
 * Return: 1 for success and -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = (~(1UL << index) & *n);
	return (1);
}
