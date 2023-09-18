#include "main.h"

/**
 * _strncat - function for concatenating two strings
 * @dest: destination of the str
 * @src: source of the str
 * @n: length of the string
 * Return: str in the dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int p;
	int q;

	p = 0;
	while (dest[p] != '\0')
	{
		p++;
	}
	q = 0;
	while (q < n && src[q] != '\0')
	{
		dest[p] = src[q];
		p++;
		q++;
	}
	dest[p] = '\0';
	return (dest);
}
