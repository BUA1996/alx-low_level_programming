#include <stdio.h>
#include "main.h"

/**
 * main - function that prints number of arguments passed to program
 * @argc: number of arguments
 * @argv: arguments array
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
