#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that prints a persons name
 * @name: function parameter
 * @f: pointer to function
 * Return: always 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
