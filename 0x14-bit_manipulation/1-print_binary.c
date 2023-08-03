#include "main.h"

/**
 * print_binary - converting integer to binary
 * @n: input number
 * return: binary
 */

void print_binary(unsigned long int n)
{
	int p, num = 0;
	unsigned long int num2;

	for (p = 63; p >= 0; p--)
	{
		num2 = n >> p;

		if (num2 & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
	{
		_putchar('0');
	}
}
