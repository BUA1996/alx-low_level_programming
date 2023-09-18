#include "main.h"

/**
 * _atoi - function to convert strings to integers
 * @s: string to be converted
 * Return: the inter converted
 */
int _atoi(char *s)
{
	int p, q, r, len, f, digit;

	p = 0;
	q = 0;
	r = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (p < len && f == 0)
	{
		if (s[p] == '-')
			++q;
		if (s[p] >= '0' && s[p] <= '9')
		{
			digit = s[p] - '0';
			if (q % 2)
				digit = -digit;
			r = r * 10 + digit;
			f  = 1;
			if (s[p - 1] < '0' || s[p - 1] > '9')
				break;
			f = 0;

		}
		p++;

	}
	if (f == 0)
		return (0);
	return (r);
}
