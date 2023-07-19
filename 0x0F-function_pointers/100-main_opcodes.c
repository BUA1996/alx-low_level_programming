#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints its own opcodes
 * @argc: arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int p, q;
	char *str;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	p = atoi(argv[1]);
	if (p < 0)
	{
		printf("Error\n");
		exit(2);
	}
	str = (char *)main;

	for (q = 0; q < p; q++)
	{
		if (q == p - 1)
		{
			printf("%02hhx", str[q]);
			break;
		}
		printf("%02hhx", str[q]);
	}
	return (0);
}
