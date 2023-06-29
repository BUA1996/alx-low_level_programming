#include "main.h"
#include <stdio.h>

/**
 * rot13 - function for encoding the 13 digit
 * @s: pointer
 * Return: always the encoded string
 */
char *rot13(char *s)
{
	int p, q;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (p = 0; s[p] != '\0'; p++)
	{
		for (q = 0; q < 52; q++)
		{
			if (s[p] == data[q])
			{
				s[p] = datarot[q];
				break;
			}
		}
	}
	return (s);
}
