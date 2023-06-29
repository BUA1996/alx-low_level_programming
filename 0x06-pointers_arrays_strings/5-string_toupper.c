#include "main.h"

/**
 * string_toupper - function for changing string from lower to upper
 * @n: pointer to hold the address
 * Return: always n
 */
char *string_toupper(char *n)
{
	int p;

	p = 0;
	while (n[p] != '\0')
	{
		if (n[p] >= 'a' && n[p] <= 'z')
		{
			n[p] = n[p] - 32;
		}
		p++;
	}
	return (n);
}
