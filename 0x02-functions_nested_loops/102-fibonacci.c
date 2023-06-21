#include <stdio.h>
/**
 * main - entry point of the function to print finobacci num
 * Return: always 0
 */
int main(void)
{
	int n;
	unsigned long num1 = 0, num2 = 1, sum;

	for (n = 0; n < 50; n++)
	{
		sum = num1 + num2;
		printf("%ld", sum);

		num1 = num2;
		num2 = sum;

		if (n == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
