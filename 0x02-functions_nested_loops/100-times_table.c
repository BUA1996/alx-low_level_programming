#include "main.h"
/**
 * print_times_table - printing the n timetable starting with 0
 * @n: number of the timetable
 * Return: always 0
 */
void print_times_table(int n)
{
	int p, q, r;

	if (n >= 0 && n <= 15)
	{
		for (p = 0; p <= n; p++)
		{
			for (q = 0; q <= n; q++)
			{
				r = q * p;
				if (q == 0)
				{
					_putchar(r + '0');
				}
				else if (r < 10 && q != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(r + '0');
				}
				else if (r >= 10 && r < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((r / 10) + '0');
					_putchar(((r % 10) % 10) + '0');
					_putchar((r % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
