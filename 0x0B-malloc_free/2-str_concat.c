#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function for concatenating two values s1 and s2
 * @s1: first value
 * @s2: second value
 * Return: the pointer of the concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, q;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	
	i = q = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[q] != '\0')
	{
		q++;
	}
	str = malloc(sizeof(char) * (i + q + 10));

	if (str == NULL)
	{
		return (NULL);
	}
	i = q = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[q] != '\0')
	{
		str[i] = s2[q];
		i++, q++;
	}
	str[i] = '\0';
	return (str);
}
