#include <stdio.h>
#include "main.h"

/**
 * print_array - function to print all arrays
 * @a: name of the array
 * @n: number of elemnets in hte array
 */
void print_array(int *a, int n)
{
	int p;

	for (p = 0; p < (n - 1); p++)
	{
		printf("%d, ", a[p]);
	}
		if (p == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
