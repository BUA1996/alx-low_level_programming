#include <stdio.h>
#include "main.h"

/**
 * main - function that prints all arguments it receives
 * @argc: arguments count
 * @argv: arguments array
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int q;

	for (q = 0; q < argc; q++)
		printf("%s\n", argv[q]);

	return (0);
}
