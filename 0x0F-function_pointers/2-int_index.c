#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array of the input function
 * @size: size of the array
 * @cmp: pointer to the search function
 * Return: always 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int p;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	for (p = 0; p < size; p++)
	{
		if (cmp(array[p]))
		{
			return (p);
		}
	}
	return (-1);
}
