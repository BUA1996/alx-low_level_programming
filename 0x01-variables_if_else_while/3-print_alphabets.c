#include <stdio.h>
/**Mian - Function that prints alphabetical leters
*Return: always 0
*/
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
		putchar(n);
	for (n = 'A'; n <= 'Z'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
