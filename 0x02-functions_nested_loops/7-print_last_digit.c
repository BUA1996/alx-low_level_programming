#include "main.h"
/**
 * print_last_digit - function that prints the last digit
 * @q: is the number to check
 * Return: the last digit
 */
int print_last_digit(int q)
{
	int p;

	p = q % 10;
	if (p < 0)
	{
		_putchar(-p + 48);
		return (-p);
	}
	else
	{
		_putchar(p + 48);
		return (p);
	}
	_putchar('\n');
}
