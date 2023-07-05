#include "main.h"

/**
 * _pow_recursion - function for computing powers of a given number
 * @x: to be raised by power of y
 * @y: power
 *
 * Return: value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
