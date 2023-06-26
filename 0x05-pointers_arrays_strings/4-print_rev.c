#include "main.h"

/**
 * print_rev - function prints a string in reverse
 * @s: the str to be printed
 * Return: always 0
 */
void print_rev(char *s)
{
	int p = 0;
	int q;

	while (*s != '\0')
	{
		p++;
		s++;
	}
	s--;
	for (q = p; q > 0; q--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
