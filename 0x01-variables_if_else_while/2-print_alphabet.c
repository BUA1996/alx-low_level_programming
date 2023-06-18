#include <stdio.h>
/** Main - entry point to print alphabets
* Return: always 0
*/
int main(void)
{
	char n;

	n = 'a';
	for (; n <= 'z'; n++)
	{
		putchar(n);
		putchar('\n');
	}
	return (0);
}
