#include "main.h"

/**
 * puts2 - function to print characters
 * @str: is the input
 * Return: charcatrers
 */
void puts2(char *str)
{
	int p = 0;
	int q = 0;
	char *r = str;
	int s;

	while (*r != '\0')
	{
		r++;
		p++;
	}
	q = p - 1;
	for (s = 0; s <= q; s++)
	{
		if (s % 2 == 0)
		{
			_putchar(str[s]);
		}
	}
	_putchar('\n');
}
