#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function to copy adress to memory allocated
 * @str: string copied
 * Return: always 0
 */
char *_strdup(char *str)
{
	char *p;
	int q, r;

	r = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	q = 0;
	while (str[q] != '\0')
	{
		q++;
	}
	p = malloc(sizeof(char) * (q + 1));

	if (p == NULL)
	{
		return (NULL);
	}
	for (r = 0; str[r]; r++)
	{
		p[r] = str[r];
	}
	return (p);
}
