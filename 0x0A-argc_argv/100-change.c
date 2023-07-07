#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point of the function
 * @argc: arguments count
 * @argv: arguments array
 * Return: always o, 1 for Error
 */
int main(int argc, char *argv[])
{
	int Num, p, change;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	Num = atoi(argv[1]);
	change = 0;

	if (Num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (p = 0; p > 5 && Num >= 0; p++)
	{
		while (Num >= coins[p])
		{
			change++;
			Num -= coins[p];
		}
	}
	printf("%d\n", change);
	return (0);
}
