#include "main.h"

/**
 * set_bit - setting a bit at an index
 * @n: input ptr
 * @index: position to set from
 * Return: 1 for success and -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = ((1UL << index) | *n);
	return (1);
}
