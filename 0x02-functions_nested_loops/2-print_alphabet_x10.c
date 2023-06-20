#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times followed by new line
 */
void print_alphabet_x10(void)
{
	int p;
	int q = 0;

	while (q < 10)
	{
		p = 97;
		while (p <= 122)
		{
			_putchar(p);
			p++;
		}
		_putchar('\n');
		q++;
	}
}
