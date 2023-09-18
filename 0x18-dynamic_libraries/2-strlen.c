#include "main.h"

/**
 * _strlen - entry point of function to print length of a str
 * @s: is the string
 * Return: length of the str
 */
int _strlen(char *s)
{
	int q;

	q = 0;
	while (*s != '\0')
	{
		q++;
		s++;
	}
	return (q);
}
