#include <stdio.h>

/**
 *main -Prints all the numbers of base16
 *the use function putchar
 *Return: Always 0 (Success)
 */
int main(void)
{

	char c;
	int n;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');

	return (0);

}
