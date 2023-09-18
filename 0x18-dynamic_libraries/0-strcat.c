#include "main.h"

/**
 * _strcat - entry point of the function for string concatention
 * @dest: destination of the str
 * @src: source of the string
 * Return: always concatenated str
 */
char *_strcat(char *dest, char *src)
{
	int p;
	int q;

	p = 0;
	while (dest[p] != '\0')
	{
		p++;
	}
	q = 0;
	while (src[q] != '\0')
	{
		p++;
		q++;
	}
	dest[p] = '\0';
	return (dest);
}
