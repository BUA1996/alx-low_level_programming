#include "main.h"

/**
 * get_endianness - function to check for size of endian
 * Return: 0 if big and 1 if small
 */

int get_endianness(void)
{
	unsigned int p = 1;
	char *q = (char *) &p;

	return (*q);
}
