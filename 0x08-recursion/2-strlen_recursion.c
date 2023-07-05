#include "main.h"

/**
 * _strlen_recursion - function that prints the length of a string
 * @s: the input string
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s)
	{
		l++;
		l += _strlen_recursion(s + 1);
	}
	return (l);
}
