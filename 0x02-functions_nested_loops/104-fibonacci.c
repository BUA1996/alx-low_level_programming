#include <stdio.h>
/**
 * main - entry point of the funtion that prints 98 finobacci
 * Return: always 0
 */
int main(void)
{
	int n;
	unsigned long num1 = 1, num2 = 2, sum;

	for (n = 0; n < 98; n++)
	{
		sum = num1 + num2;
		printf("%ld", sum);

		num1 = num2;
		num2 = sum;
		if (n == 97)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
