#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: array name
 * @n: number of elements of array
 * Return: always 0
 */
void reverse_array(int *a, int n)
{
	int p;
	int q;

	for (p = 0; p < n--; p++)
	{
		q = a[p];
		a[p] = a[n];
		a[n] = q;
	}
}
