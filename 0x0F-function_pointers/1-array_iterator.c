#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that prints array elements
 * @array: array of the input function
 * @size: size of the array
 * @action: pointer to function
 * Return: always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int p;

	if (array == NULL || action == NULL)
		return;
	for (p = 0; p < size; p++)
	{
		action(array[p]);
	}
}
