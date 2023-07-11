#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function that concatentates all arguments of a progrm
 * @ac: argument
 * @av: pointer
 * Return: always 0
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int p, q, r, x;

	r = 0;
	x = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (p = 0; p < ac; p++)
	{
		for (q = 0; av[p][q]; q++)
		{
			x++;
		}
	}
	x += ac;

	str = malloc(sizeof(char) * x + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (p = 0; p < ac; p++)
	{
	for (q = 0; av[p][q]; q++)
	{
		str[r] = av[p][q];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}
