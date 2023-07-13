#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function for reallocating memory
 * @ptr: pointer to the memory
 * @old_size: size of old memory
 * @new_size: size of new memory
 * Return: pointer address
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str;
	char *old_str;
	unsigned int p;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
	{
		return (malloc(new_size));
	}
	str = malloc(new_size);
	if (!str)
	{
		return (NULL);
	}
	old_str = ptr;
	if (new_size < old_size)
	{
		for (p = 0; p < new_size; p++)
			str[p] = old_str[p];
	}
	if (new_size > old_size)
	{
		for (p = 0; p < old_size; p++)
			str[p] = old_str[p];
	}
	free(ptr);
	return (str);
}
