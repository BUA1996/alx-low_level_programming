#include <stdio.h>
#include "main.h"

/**
 * main - function that prints its name even when changed
 * @argc: arguments count
 * @argv: arguments array
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
