#include "main.h"

/**
 * swap_int - function that swaps in two values
 * @a: value to be swapped with b
 * @b: value to be swapped by a
 * Return: the swapped values
 */
void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
