#include "main.h"

/**
 * print_line - entry point of the function
 * return: always 0
 * @n: number of times to print
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
