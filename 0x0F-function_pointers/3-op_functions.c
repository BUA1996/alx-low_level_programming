#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - function for adding two numbers
 * @a: parameter one
 * @b: parameter two
 * Return: sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function for getting the difference between two numbers
 * @a: parameter one
 * @b: parameter two
 *
 * Return: difference between a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - computes the product of two numbers
 * @a: parameter one
 * @b: parameter two
 *
 * Return: product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Computes the division of two numbers
 * @a: first parameter
 * @b: second parameter
 * Return: quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function to compute the remainder upon division
 * @a: first parameter
 * @b: second parameter
 * Return: remainder of the division between a and b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
