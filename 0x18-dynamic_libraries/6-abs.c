#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @p: the int to check
 * Return: always an absolute value of an integer
 */
int _abs(int p)
{
	if (p >= 0)
	{
		return (p);
	}
	else
	{
		return (-p);
	}
	_putchar('\n');
}
