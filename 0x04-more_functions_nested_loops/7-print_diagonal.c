#include "main.h"

/**
 * print_diagonal - entry point of the function
 * return: always 0
 * @n: number of times a character is printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int p, q;

		for (p = 0; p < n; p++)
		{
			for (q = 0; q < n; q++)
			{
				if (q == p)
					_putchar('\\');
				else if (q < p)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
