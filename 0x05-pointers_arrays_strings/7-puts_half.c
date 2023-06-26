#include "main.h"

/**
 * puts_half - function to print half of a string
 * @str: is the input
 * Return: half of the string
 */
void puts_half(char *str)
{
	int p, q, r;

	r = 0;

	for (p = 0; str[p] != '\0'; p++)
	{
		r++;
	}
	q = (r / 2);

	if ((r % 2) == 1)
	{
		q = ((r + 1) / 2);
	}
	for (p = q; str[p] != '\0'; p++)
	{
		_putchar(str[p]);
	}
	_putchar('\n');
}
