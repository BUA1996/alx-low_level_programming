#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @max: maximum range
 * @min: minimum range
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *str;
	int p, n;

	if (min > max)
	{
		return (NULL);
	}
	n  = max - min + 1;
	str = malloc(sizeof(int) * n);

	if (str == NULL)
	{
		return (NULL);
	}
	for (p = 0; min <= max; p++)
	{
		str[p] = min++;
	}
	return (str);
}
